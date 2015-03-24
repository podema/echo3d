// Generated code for Python source for module 'scipy.sparse.construct'
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

// The _module_scipy$sparse$construct is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$construct;
PyDictObject *moduledict_scipy$sparse$construct;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_1_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_5;
extern PyObject *const_dict_empty;
extern PyObject *const_float_0_01;
static PyObject *const_float_1_02;
static PyObject *const_float_1_05;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_L;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_R;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_gk;
extern PyObject *const_str_plain_ia;
extern PyObject *const_str_plain_mn;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_tp;
static PyObject *const_str_plain__gk;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_bsr;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_coo;
extern PyObject *const_str_plain_csc;
extern PyObject *const_str_plain_csr;
extern PyObject *const_str_plain_dia;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_fac;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_lil;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_nnz;
extern PyObject *const_str_plain_rng;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_sum;
extern PyObject *const_list_none_list;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_bmat;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_intc;
extern PyObject *const_str_plain_kron;
static PyObject *const_str_plain_mats;
static PyObject *const_str_plain_mlow;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_plain_nmat;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_rand;
extern PyObject *const_str_plain_rows;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_vals;
extern PyObject *const_str_plain_warn;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_diags;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_floor;
extern PyObject *const_str_plain_iinfo;
extern PyObject *const_str_plain_int64;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_argmin;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_plain_blocks;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_hstack;
extern PyObject *const_str_plain_indptr;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_maxval;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_random;
extern PyObject *const_str_plain_repeat;
extern PyObject *const_str_plain_unique;
extern PyObject *const_str_plain_upcast;
extern PyObject *const_str_plain_vstack;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_density;
extern PyObject *const_str_plain_float32;
extern PyObject *const_str_plain_float64;
extern PyObject *const_str_plain_indices;
extern PyObject *const_str_plain_integer;
static PyObject *const_str_plain_kronsum;
extern PyObject *const_str_plain_offsets;
extern PyObject *const_str_plain_reshape;
static PyObject *const_str_plain_spdiags;
extern PyObject *const_str_plain_sputils;
static PyObject *const_str_plain_sum_dim;
extern PyObject *const_str_plain_toarray;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_asformat;
static PyObject *const_str_plain_data_arr;
extern PyObject *const_str_plain_diagonal;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_identity;
extern PyObject *const_str_plain_issparse;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_construct;
static PyObject *const_str_plain_diagonals;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_idx_dtype;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___iterator;
extern PyObject *const_str_plain_atleast_1d;
extern PyObject *const_str_plain_block_diag;
static PyObject *const_str_plain_block_mask;
extern PyObject *const_str_plain_bsr_matrix;
extern PyObject *const_str_plain_coo_matrix;
extern PyObject *const_str_plain_csc_matrix;
extern PyObject *const_str_plain_csr_matrix;
extern PyObject *const_str_plain_dia_matrix;
extern PyObject *const_str_plain_lil_matrix;
extern PyObject *const_str_plain_longdouble;
static PyObject *const_str_plain_other_axis;
extern PyObject *const_str_plain_RandomState;
static PyObject *const_str_plain_col_offsets;
extern PyObject *const_str_plain_common_type;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_contraction;
static PyObject *const_str_plain_last_indptr;
static PyObject *const_str_plain_row_offsets;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_bcol_lengths;
static PyObject *const_str_plain_brow_lengths;
static PyObject *const_str_plain_constant_dim;
static PyObject *const_str_plain_output_shape;
static PyObject *const_str_plain_random_state;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_get_index_dtype;
static PyObject *const_str_plain__gen_unique_rand;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_tuple_str_plain_d_none_tuple;
static PyObject *const_tuple_none_str_plain_csc_tuple;
static PyObject *const_tuple_none_str_plain_csr_tuple;
static PyObject *const_tuple_str_plain_issparse_tuple;
extern PyObject *const_tuple_str_plain___iterator_tuple;
extern PyObject *const_tuple_str_plain_bsr_matrix_tuple;
extern PyObject *const_tuple_str_plain_coo_matrix_tuple;
extern PyObject *const_tuple_str_plain_csc_matrix_tuple;
extern PyObject *const_tuple_str_plain_csr_matrix_tuple;
extern PyObject *const_tuple_str_plain_dia_matrix_tuple;
extern PyObject *const_tuple_str_plain_lil_matrix_tuple;
static PyObject *const_str_plain__compressed_sparse_stack;
extern PyObject *const_dict_10010a04cba23a4ccc75195b8c45141a;
static PyObject *const_dict_5ab4855118dc1dee85b08d612b753df7;
static PyObject *const_list_str_plain_csr_str_plain_csc_list;
static PyObject *const_tuple_str_plain_rng_str_plain__gk_tuple;
static PyObject *const_list_ec114789187c3d0ec9d1e3343e68464b_list;
static PyObject *const_str_digest_04e385836414d1b75a689326a7cf3782;
static PyObject *const_str_digest_23c22a4ff7dbafa060410678216e0422;
static PyObject *const_str_digest_2946bf378796a143451b92b1d823c1f0;
static PyObject *const_str_digest_329155dd6a2a4860f285776dffc4c100;
static PyObject *const_str_digest_377374258fb9b3e3e0299cf12c7ea82d;
static PyObject *const_str_digest_3dd1df8273a975731057e75fcbedf2a3;
static PyObject *const_str_digest_3e594f9a0654f7d7975e1b1627596ff8;
static PyObject *const_str_digest_591d7333d98cff4ac7b406be9bd3ae38;
static PyObject *const_str_digest_661085cc4adee820609ffab3355130b9;
static PyObject *const_str_digest_69c8807b06c9e9161a200c812ce3c7e4;
static PyObject *const_str_digest_719d2e8f4bf3ce05b27cb35cb101082f;
static PyObject *const_str_digest_7787609188d17e2bda7ee409ca51e5c9;
static PyObject *const_str_digest_7d359452f8f96a8dbce9b0841fdb04cb;
extern PyObject *const_str_digest_83a0aac3d618d3c31fc37c156dca406d;
static PyObject *const_str_digest_925b54f8d3dc8fe3ff5c249ae4824b03;
static PyObject *const_str_digest_9be13ebfbe0ace747bc5f6752dd0702a;
static PyObject *const_str_digest_a65ad2b0c7611ce173746254b82f798a;
static PyObject *const_str_digest_a810fc8c8c0c57354e160561d2ccae3e;
static PyObject *const_str_digest_b78e8dace9ed623250a89d52ae37d019;
static PyObject *const_str_digest_b80234edd49fe5c787cee95cf7d9778c;
static PyObject *const_str_digest_bac49471799d9cf9b597c8bc7169148c;
static PyObject *const_str_digest_bcc15d14679fd2b8299445e28c4c8c1f;
static PyObject *const_str_digest_c84154c11ab9d14793e1a0cd08f765cd;
static PyObject *const_str_digest_d56ddcd1b66841117fe1216c747284f7;
static PyObject *const_str_digest_debd22db08378a1d1682756fe0366b36;
static PyObject *const_str_digest_e85e637840a8efedc5fe73da5f4a8a00;
static PyObject *const_str_digest_eeecd38b88ffb21110d661cee7ff0330;
extern PyObject *const_str_digest_f0d9ad0a7aac918dcd008753d8379933;
static PyObject *const_str_digest_f397816766b12a3614a3e05bd911a0bc;
static PyObject *const_str_digest_f66869a1dd9d96dcb0f87be313b00e6c;
static PyObject *const_tuple_str_plain_blocks_str_plain_axis_tuple;
static PyObject *const_tuple_07943334dd16b05479ace4e7c34ba523_tuple;
static PyObject *const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple;
static PyObject *const_tuple_17ce5250fd6ba6128eb6b84382c755e5_tuple;
static PyObject *const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple;
static PyObject *const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple;
static PyObject *const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple;
static PyObject *const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple;
static PyObject *const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple;
static PyObject *const_tuple_6859505fc5ab1f5fc711de82b100cbe7_tuple;
static PyObject *const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple;
static PyObject *const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple;
static PyObject *const_tuple_f6ff4e533774043ce75cf9c34703583b_tuple;
static PyObject *const_tuple_f925620e01dd5cf14ca0205c13a8c030_tuple;
static PyObject *const_tuple_float_0_01_str_plain_coo_none_none_tuple;
static PyObject *const_tuple_str_plain_A_str_plain_B_str_plain_format_tuple;
static PyObject *const_tuple_str_plain_upcast_str_plain_get_index_dtype_tuple;
static PyObject *const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple;
static PyObject *const_tuple_str_plain_mats_str_plain_format_str_plain_dtype_tuple;
static PyObject *const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple;

static void _initModuleConstants(void)
{
    const_float_1_02 = UNSTREAM_FLOAT( &constant_bin[ 2321198 ] );
    const_float_1_05 = UNSTREAM_FLOAT( &constant_bin[ 2321206 ] );
    const_str_plain_gk = UNSTREAM_STRING( &constant_bin[ 264601 ], 2, 1 );
    const_str_plain__gk = UNSTREAM_STRING( &constant_bin[ 264760 ], 3, 1 );
    const_str_plain_mats = UNSTREAM_STRING( &constant_bin[ 40012 ], 4, 1 );
    const_str_plain_mlow = UNSTREAM_STRING( &constant_bin[ 2321214 ], 4, 1 );
    const_str_plain_nmat = UNSTREAM_STRING( &constant_bin[ 264445 ], 4, 1 );
    const_str_plain_blocks = UNSTREAM_STRING( &constant_bin[ 130846 ], 6, 1 );
    const_str_plain_kronsum = UNSTREAM_STRING( &constant_bin[ 2300842 ], 7, 1 );
    const_str_plain_spdiags = UNSTREAM_STRING( &constant_bin[ 263601 ], 7, 1 );
    const_str_plain_sum_dim = UNSTREAM_STRING( &constant_bin[ 263864 ], 7, 1 );
    const_str_plain_data_arr = UNSTREAM_STRING( &constant_bin[ 263433 ], 8, 1 );
    const_str_plain_diagonals = UNSTREAM_STRING( &constant_bin[ 263324 ], 9, 1 );
    const_str_plain_block_mask = UNSTREAM_STRING( &constant_bin[ 264060 ], 10, 1 );
    const_str_plain_other_axis = UNSTREAM_STRING( &constant_bin[ 263750 ], 10, 1 );
    const_str_plain_col_offsets = UNSTREAM_STRING( &constant_bin[ 264338 ], 11, 1 );
    const_str_plain_last_indptr = UNSTREAM_STRING( &constant_bin[ 263917 ], 11, 1 );
    const_str_plain_row_offsets = UNSTREAM_STRING( &constant_bin[ 264281 ], 11, 1 );
    const_str_plain_bcol_lengths = UNSTREAM_STRING( &constant_bin[ 264174 ], 12, 1 );
    const_str_plain_brow_lengths = UNSTREAM_STRING( &constant_bin[ 264116 ], 12, 1 );
    const_str_plain_constant_dim = UNSTREAM_STRING( &constant_bin[ 263806 ], 12, 1 );
    const_str_plain_output_shape = UNSTREAM_STRING( &constant_bin[ 263640 ], 12, 1 );
    const_str_plain_random_state = UNSTREAM_STRING( &constant_bin[ 264543 ], 12, 1 );
    const_str_plain__gen_unique_rand = UNSTREAM_STRING( &constant_bin[ 264649 ], 16, 1 );
    const_tuple_str_plain_d_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_d_none_tuple, 0, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_str_plain_d_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_tuple_none_str_plain_csc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_csc_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_csc_tuple, 1, const_str_plain_csc ); Py_INCREF( const_str_plain_csc );
    const_tuple_none_str_plain_csr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_csr_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_csr_tuple, 1, const_str_plain_csr ); Py_INCREF( const_str_plain_csr );
    const_tuple_str_plain_issparse_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_issparse_tuple, 0, const_str_plain_issparse ); Py_INCREF( const_str_plain_issparse );
    const_str_plain__compressed_sparse_stack = UNSTREAM_STRING( &constant_bin[ 264004 ], 24, 1 );
    const_dict_5ab4855118dc1dee85b08d612b753df7 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_5ab4855118dc1dee85b08d612b753df7, const_str_plain_dtype, const_str_plain_object );
    const_list_str_plain_csr_str_plain_csc_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_csr_str_plain_csc_list, 0, const_str_plain_csr ); Py_INCREF( const_str_plain_csr );
    PyList_SET_ITEM( const_list_str_plain_csr_str_plain_csc_list, 1, const_str_plain_csc ); Py_INCREF( const_str_plain_csc );
    const_tuple_str_plain_rng_str_plain__gk_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rng_str_plain__gk_tuple, 0, const_str_plain_rng ); Py_INCREF( const_str_plain_rng );
    PyTuple_SET_ITEM( const_tuple_str_plain_rng_str_plain__gk_tuple, 1, const_str_plain__gk ); Py_INCREF( const_str_plain__gk );
    const_list_ec114789187c3d0ec9d1e3343e68464b_list = PyList_New( 11 );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 0, const_str_plain_spdiags ); Py_INCREF( const_str_plain_spdiags );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 1, const_str_plain_eye ); Py_INCREF( const_str_plain_eye );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 2, const_str_plain_identity ); Py_INCREF( const_str_plain_identity );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 3, const_str_plain_kron ); Py_INCREF( const_str_plain_kron );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 4, const_str_plain_kronsum ); Py_INCREF( const_str_plain_kronsum );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 5, const_str_plain_hstack ); Py_INCREF( const_str_plain_hstack );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 6, const_str_plain_vstack ); Py_INCREF( const_str_plain_vstack );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 7, const_str_plain_bmat ); Py_INCREF( const_str_plain_bmat );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 8, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 9, const_str_plain_diags ); Py_INCREF( const_str_plain_diags );
    PyList_SET_ITEM( const_list_ec114789187c3d0ec9d1e3343e68464b_list, 10, const_str_plain_block_diag ); Py_INCREF( const_str_plain_block_diag );
    const_str_digest_04e385836414d1b75a689326a7cf3782 = UNSTREAM_STRING( &constant_bin[ 2321218 ], 885, 0 );
    const_str_digest_23c22a4ff7dbafa060410678216e0422 = UNSTREAM_STRING( &constant_bin[ 2322103 ], 15, 0 );
    const_str_digest_2946bf378796a143451b92b1d823c1f0 = UNSTREAM_STRING( &constant_bin[ 2322118 ], 892, 0 );
    const_str_digest_329155dd6a2a4860f285776dffc4c100 = UNSTREAM_STRING( &constant_bin[ 2323010 ], 24, 0 );
    const_str_digest_377374258fb9b3e3e0299cf12c7ea82d = UNSTREAM_STRING( &constant_bin[ 2323034 ], 655, 0 );
    const_str_digest_3dd1df8273a975731057e75fcbedf2a3 = UNSTREAM_STRING( &constant_bin[ 2323689 ], 21, 0 );
    const_str_digest_3e594f9a0654f7d7975e1b1627596ff8 = UNSTREAM_STRING( &constant_bin[ 2323710 ], 530, 0 );
    const_str_digest_591d7333d98cff4ac7b406be9bd3ae38 = UNSTREAM_STRING( &constant_bin[ 2324240 ], 47, 0 );
    const_str_digest_661085cc4adee820609ffab3355130b9 = UNSTREAM_STRING( &constant_bin[ 2324287 ], 655, 0 );
    const_str_digest_69c8807b06c9e9161a200c812ce3c7e4 = UNSTREAM_STRING( &constant_bin[ 2324942 ], 40, 0 );
    const_str_digest_719d2e8f4bf3ce05b27cb35cb101082f = UNSTREAM_STRING( &constant_bin[ 2324982 ], 18, 0 );
    const_str_digest_7787609188d17e2bda7ee409ca51e5c9 = UNSTREAM_STRING( &constant_bin[ 2325000 ], 35, 0 );
    const_str_digest_7d359452f8f96a8dbce9b0841fdb04cb = UNSTREAM_STRING( &constant_bin[ 2325035 ], 667, 0 );
    const_str_digest_925b54f8d3dc8fe3ff5c249ae4824b03 = UNSTREAM_STRING( &constant_bin[ 2325702 ], 681, 0 );
    const_str_digest_9be13ebfbe0ace747bc5f6752dd0702a = UNSTREAM_STRING( &constant_bin[ 2326383 ], 44, 0 );
    const_str_digest_a65ad2b0c7611ce173746254b82f798a = UNSTREAM_STRING( &constant_bin[ 2326427 ], 39, 0 );
    const_str_digest_a810fc8c8c0c57354e160561d2ccae3e = UNSTREAM_STRING( &constant_bin[ 2326466 ], 94, 0 );
    const_str_digest_b78e8dace9ed623250a89d52ae37d019 = UNSTREAM_STRING( &constant_bin[ 2326560 ], 135, 0 );
    const_str_digest_b80234edd49fe5c787cee95cf7d9778c = UNSTREAM_STRING( &constant_bin[ 2326695 ], 24, 0 );
    const_str_digest_bac49471799d9cf9b597c8bc7169148c = UNSTREAM_STRING( &constant_bin[ 2326719 ], 15, 0 );
    const_str_digest_bcc15d14679fd2b8299445e28c4c8c1f = UNSTREAM_STRING( &constant_bin[ 2326734 ], 85, 0 );
    const_str_digest_c84154c11ab9d14793e1a0cd08f765cd = UNSTREAM_STRING( &constant_bin[ 2326819 ], 2016, 0 );
    const_str_digest_d56ddcd1b66841117fe1216c747284f7 = UNSTREAM_STRING( &constant_bin[ 2328835 ], 1117, 0 );
    const_str_digest_debd22db08378a1d1682756fe0366b36 = UNSTREAM_STRING( &constant_bin[ 2329952 ], 42, 0 );
    const_str_digest_e85e637840a8efedc5fe73da5f4a8a00 = UNSTREAM_STRING( &constant_bin[ 2329994 ], 34, 0 );
    const_str_digest_eeecd38b88ffb21110d661cee7ff0330 = UNSTREAM_STRING( &constant_bin[ 2330028 ], 58, 0 );
    const_str_digest_f397816766b12a3614a3e05bd911a0bc = UNSTREAM_STRING( &constant_bin[ 2330086 ], 780, 0 );
    const_str_digest_f66869a1dd9d96dcb0f87be313b00e6c = UNSTREAM_STRING( &constant_bin[ 2330866 ], 845, 0 );
    const_tuple_str_plain_blocks_str_plain_axis_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_blocks_str_plain_axis_tuple, 0, const_str_plain_blocks ); Py_INCREF( const_str_plain_blocks );
    PyTuple_SET_ITEM( const_tuple_str_plain_blocks_str_plain_axis_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_tuple_07943334dd16b05479ace4e7c34ba523_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 4, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyTuple_SET_ITEM( const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 5, const_str_plain_R ); Py_INCREF( const_str_plain_R );
    const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 0, const_str_plain_diagonals ); Py_INCREF( const_str_plain_diagonals );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 1, const_str_plain_offsets ); Py_INCREF( const_str_plain_offsets );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 3, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 5, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 7, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 8, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 9, const_str_plain_data_arr ); Py_INCREF( const_str_plain_data_arr );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 10, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 11, const_str_plain_diagonal ); Py_INCREF( const_str_plain_diagonal );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 12, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 13, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_tuple_17ce5250fd6ba6128eb6b84382c755e5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_17ce5250fd6ba6128eb6b84382c755e5_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_17ce5250fd6ba6128eb6b84382c755e5_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_17ce5250fd6ba6128eb6b84382c755e5_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_17ce5250fd6ba6128eb6b84382c755e5_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_17ce5250fd6ba6128eb6b84382c755e5_tuple, 4, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 2, const_str_plain_density ); Py_INCREF( const_str_plain_density );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 3, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 5, const_str_plain_random_state ); Py_INCREF( const_str_plain_random_state );
    const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 3, const_str_plain_output_shape ); Py_INCREF( const_str_plain_output_shape );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 5, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 6, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 0, const_str_plain_blocks ); Py_INCREF( const_str_plain_blocks );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 2, const_str_plain_other_axis ); Py_INCREF( const_str_plain_other_axis );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 5, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 6, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 7, const_str_plain_last_indptr ); Py_INCREF( const_str_plain_last_indptr );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 8, const_str_plain_constant_dim ); Py_INCREF( const_str_plain_constant_dim );
    PyTuple_SET_ITEM( const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 9, const_str_plain_sum_dim ); Py_INCREF( const_str_plain_sum_dim );
    const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 1, const_str_plain_diags ); Py_INCREF( const_str_plain_diags );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 4, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 0, const_str_plain_mats ); Py_INCREF( const_str_plain_mats );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 3, const_str_plain_nmat ); Py_INCREF( const_str_plain_nmat );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 4, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 5, const_str_plain_ia ); Py_INCREF( const_str_plain_ia );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 6, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 7, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    const_tuple_6859505fc5ab1f5fc711de82b100cbe7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_6859505fc5ab1f5fc711de82b100cbe7_tuple, 0, const_str_plain_diagonals ); Py_INCREF( const_str_plain_diagonals );
    PyTuple_SET_ITEM( const_tuple_6859505fc5ab1f5fc711de82b100cbe7_tuple, 1, const_str_plain_offsets ); Py_INCREF( const_str_plain_offsets );
    PyTuple_SET_ITEM( const_tuple_6859505fc5ab1f5fc711de82b100cbe7_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_6859505fc5ab1f5fc711de82b100cbe7_tuple, 3, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_6859505fc5ab1f5fc711de82b100cbe7_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 4, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 5, const_str_plain_idx_dtype ); Py_INCREF( const_str_plain_idx_dtype );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 6, const_str_plain_indptr ); Py_INCREF( const_str_plain_indptr );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 7, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 8, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 9, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 10, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 11, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    PyTuple_SET_ITEM( const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 12, const_str_plain_diags ); Py_INCREF( const_str_plain_diags );
    const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 0, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 2, const_str_plain_density ); Py_INCREF( const_str_plain_density );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 3, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 5, const_str_plain_random_state ); Py_INCREF( const_str_plain_random_state );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 6, const_str_plain_mn ); Py_INCREF( const_str_plain_mn );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 7, const_str_plain_tp ); Py_INCREF( const_str_plain_tp );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 8, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 9, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 10, const_str_plain_mlow ); Py_INCREF( const_str_plain_mlow );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 11, const_str_plain_fac ); Py_INCREF( const_str_plain_fac );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 12, const_str_plain_gk ); Py_INCREF( const_str_plain_gk );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 13, const_str_plain__gen_unique_rand ); Py_INCREF( const_str_plain__gen_unique_rand );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 14, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 15, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 16, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 17, const_str_plain_vals ); Py_INCREF( const_str_plain_vals );
    const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 0, const_str_plain_blocks ); Py_INCREF( const_str_plain_blocks );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 3, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 5, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 6, const_str_plain_block_mask ); Py_INCREF( const_str_plain_block_mask );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 7, const_str_plain_brow_lengths ); Py_INCREF( const_str_plain_brow_lengths );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 8, const_str_plain_bcol_lengths ); Py_INCREF( const_str_plain_bcol_lengths );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 9, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 10, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 11, const_str_plain_nnz ); Py_INCREF( const_str_plain_nnz );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 12, const_str_plain_row_offsets ); Py_INCREF( const_str_plain_row_offsets );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 13, const_str_plain_col_offsets ); Py_INCREF( const_str_plain_col_offsets );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 14, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 15, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 16, const_str_plain_idx_dtype ); Py_INCREF( const_str_plain_idx_dtype );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 17, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 18, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    const_tuple_f6ff4e533774043ce75cf9c34703583b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f6ff4e533774043ce75cf9c34703583b_tuple, 0, const_str_plain_rng ); Py_INCREF( const_str_plain_rng );
    PyTuple_SET_ITEM( const_tuple_f6ff4e533774043ce75cf9c34703583b_tuple, 1, const_str_plain__gk ); Py_INCREF( const_str_plain__gk );
    PyTuple_SET_ITEM( const_tuple_f6ff4e533774043ce75cf9c34703583b_tuple, 2, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_f6ff4e533774043ce75cf9c34703583b_tuple, 3, const_str_plain_mn ); Py_INCREF( const_str_plain_mn );
    PyTuple_SET_ITEM( const_tuple_f6ff4e533774043ce75cf9c34703583b_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_tuple_f925620e01dd5cf14ca0205c13a8c030_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f925620e01dd5cf14ca0205c13a8c030_tuple, 0, const_str_plain_blocks ); Py_INCREF( const_str_plain_blocks );
    PyTuple_SET_ITEM( const_tuple_f925620e01dd5cf14ca0205c13a8c030_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_f925620e01dd5cf14ca0205c13a8c030_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_f925620e01dd5cf14ca0205c13a8c030_tuple, 3, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_tuple_float_0_01_str_plain_coo_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_tuple, 0, const_float_0_01 ); Py_INCREF( const_float_0_01 );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_tuple, 1, const_str_plain_coo ); Py_INCREF( const_str_plain_coo );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_float_0_01_str_plain_coo_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_A_str_plain_B_str_plain_format_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_B_str_plain_format_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_B_str_plain_format_tuple, 1, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_B_str_plain_format_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_tuple_str_plain_upcast_str_plain_get_index_dtype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_upcast_str_plain_get_index_dtype_tuple, 0, const_str_plain_upcast ); Py_INCREF( const_str_plain_upcast );
    PyTuple_SET_ITEM( const_tuple_str_plain_upcast_str_plain_get_index_dtype_tuple, 1, const_str_plain_get_index_dtype ); Py_INCREF( const_str_plain_get_index_dtype );
    const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_tuple_str_plain_mats_str_plain_format_str_plain_dtype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_mats_str_plain_format_str_plain_dtype_tuple, 0, const_str_plain_mats ); Py_INCREF( const_str_plain_mats );
    PyTuple_SET_ITEM( const_tuple_str_plain_mats_str_plain_format_str_plain_dtype_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_str_plain_mats_str_plain_format_str_plain_dtype_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 0, const_str_plain_blocks ); Py_INCREF( const_str_plain_blocks );
    PyTuple_SET_ITEM( const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
}

// The module code objects.
static PyCodeObject *codeobj_e9444b1e49bc9047fe6a951950724721;
static PyCodeObject *codeobj_24ad573f22238b1309f5a7d7196bb245;
static PyCodeObject *codeobj_6f9565ff79897d41ddbce55dbf47de19;
static PyCodeObject *codeobj_cec32cac429e1f3996176dc501af273e;
static PyCodeObject *codeobj_4e0d5e80a2a166ddecc2b043cc442587;
static PyCodeObject *codeobj_e688b615414ee4f375ccb54793824e4a;
static PyCodeObject *codeobj_8ad37c8712a0cfa2ac5f322a483f349d;
static PyCodeObject *codeobj_3ab963a4c055eb76b312ba18ec270ed5;
static PyCodeObject *codeobj_bfa33e10ecbcfc8f1a100342be63f327;
static PyCodeObject *codeobj_fc93b8c1a4bf8c85f85c62abf0dcdca8;
static PyCodeObject *codeobj_e5069d065aafc51d7f788e827807441a;
static PyCodeObject *codeobj_0e211eb11b26793b2b1cbb92a0e3aa7f;
static PyCodeObject *codeobj_e03a6c6a4f7504a98b4d297eba4ed7a6;
static PyCodeObject *codeobj_db5f55e9d52b37aedd9e701b47180257;
static PyCodeObject *codeobj_e035e506640834f8ecf582e9892e691d;
static PyCodeObject *codeobj_53e7dfbf68133b42e2c04129aa58e492;
static PyCodeObject *codeobj_d182acaff88aa5f110951c671317a5d7;
static PyCodeObject *codeobj_eb631b2481d894c5d25523c06e563ddd;
static PyCodeObject *codeobj_1fda7720292218a22775356a2f5c73c9;
static PyCodeObject *codeobj_5475b77ca1fdd585e1e877ac17b32e25;
static PyCodeObject *codeobj_47f986a05d771a3e924a6125b93a4cb2;
static PyCodeObject *codeobj_f6cac9ad3e83185831def6bb975235b9;
static PyCodeObject *codeobj_aea6094721e01dcf02c1fddc7cd81490;
static PyCodeObject *codeobj_da0ee3441795f60c1cc257e399569856;
static PyCodeObject *codeobj_a7080a9b19ab59f7d3cdbbd2ccdfa9ea;
static PyCodeObject *codeobj_e4e3f54d267567a9bbf52a12f433b516;
static PyCodeObject *codeobj_d011fd2342a33810af4cac30b61bc13b;
static PyCodeObject *codeobj_3ba6289dfcc18d9a7c77c14efdf5f5f6;

static void _initModuleCodeObjects(void)
{
    codeobj_e9444b1e49bc9047fe6a951950724721 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_angle_genexpr, 539, const_tuple_str_plain___iterator_tuple, 1, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_24ad573f22238b1309f5a7d7196bb245 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_angle_genexpr, 545, const_tuple_str_plain___iterator_tuple, 1, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6f9565ff79897d41ddbce55dbf47de19 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain__compressed_sparse_stack, 398, const_tuple_str_plain_blocks_str_plain_axis_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cec32cac429e1f3996176dc501af273e = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain__compressed_sparse_stack, 398, const_tuple_4c8cd0df69145b2c77a3b24d53ecebca_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4e0d5e80a2a166ddecc2b043cc442587 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain__gen_unique_rand, 718, const_tuple_str_plain_rng_str_plain__gk_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e688b615414ee4f375ccb54793824e4a = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain__gen_unique_rand, 718, const_tuple_f6ff4e533774043ce75cf9c34703583b_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8ad37c8712a0cfa2ac5f322a483f349d = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_block_diag, 612, const_tuple_str_plain_mats_str_plain_format_str_plain_dtype_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3ab963a4c055eb76b312ba18ec270ed5 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_block_diag, 612, const_tuple_5db510637794fb09cf83d3ca9380a03d_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bfa33e10ecbcfc8f1a100342be63f327 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_bmat, 487, const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fc93b8c1a4bf8c85f85c62abf0dcdca8 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_bmat, 487, const_tuple_de4717d6d7a6b7ceda1198007737a541_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e5069d065aafc51d7f788e827807441a = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_construct, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0e211eb11b26793b2b1cbb92a0e3aa7f = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_contraction, 539, const_tuple_empty, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e03a6c6a4f7504a98b4d297eba4ed7a6 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_contraction, 545, const_tuple_empty, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_db5f55e9d52b37aedd9e701b47180257 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_diags, 64, const_tuple_6859505fc5ab1f5fc711de82b100cbe7_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e035e506640834f8ecf582e9892e691d = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_diags, 64, const_tuple_14c7f7763a30224db3c1ed218b95236a_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_53e7dfbf68133b42e2c04129aa58e492 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_eye, 219, const_tuple_17ce5250fd6ba6128eb6b84382c755e5_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d182acaff88aa5f110951c671317a5d7 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_eye, 219, const_tuple_b23d3edffec2d083c82b41909a2d13d4_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eb631b2481d894c5d25523c06e563ddd = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_hstack, 426, const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1fda7720292218a22775356a2f5c73c9 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_identity, 190, const_tuple_str_plain_n_str_plain_dtype_str_plain_format_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5475b77ca1fdd585e1e877ac17b32e25 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_kron, 274, const_tuple_str_plain_A_str_plain_B_str_plain_format_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_47f986a05d771a3e924a6125b93a4cb2 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_kron, 274, const_tuple_4af129bee0254b6cf5832f3d1c489a22_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f6cac9ad3e83185831def6bb975235b9 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_kronsum, 355, const_tuple_str_plain_A_str_plain_B_str_plain_format_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aea6094721e01dcf02c1fddc7cd81490 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_kronsum, 355, const_tuple_07943334dd16b05479ace4e7c34ba523_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_da0ee3441795f60c1cc257e399569856 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_rand, 662, const_tuple_42fd75e9bae8f54c55dbfbcdf8b5e1c9_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a7080a9b19ab59f7d3cdbbd2ccdfa9ea = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_rand, 662, const_tuple_c10bb606a18a2eb57d55d5e329b91e9d_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e4e3f54d267567a9bbf52a12f433b516 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_spdiags, 27, const_tuple_5270fbb3e2a81bbef00d786e2ddbf939_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d011fd2342a33810af4cac30b61bc13b = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_vstack, 456, const_tuple_str_plain_blocks_str_plain_format_str_plain_dtype_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3ba6289dfcc18d9a7c77c14efdf5f5f6 = MAKE_CODEOBJ( const_str_digest_eeecd38b88ffb21110d661cee7ff0330, const_str_plain_vstack, 456, const_tuple_f925620e01dd5cf14ca0205c13a8c030_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct( PyObject *_python_par___iterator );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct( PyObject *_python_par___iterator );


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list );


static PyObject *MAKE_FUNCTION_function_10_bmat_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_11_block_diag_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_12_rand_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( PyObjectSharedLocalVariable &closure_k, PyObjectSharedLocalVariable &closure_mn );


// This structure is for attachment as self of function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct.
// It is allocated at the time the function object is created.
struct _context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_k;
    PyObjectSharedLocalVariable closure_mn;
};

static void _context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_destructor( void *context_voidptr )
{
    _context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_t *_python_context = (_context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_spdiags_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_diags_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_identity_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_eye_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_kron_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_kronsum_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct(  );


static PyObject *MAKE_FUNCTION_function_8_hstack_of_module_scipy$sparse$construct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_9_vstack_of_module_scipy$sparse$construct( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_spdiags_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_data, PyObject *_python_par_diags, PyObject *_python_par_m, PyObject *_python_par_n, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectLocalVariable par_diags; par_diags.object = _python_par_diags;
    PyObjectLocalVariable par_m; par_m.object = _python_par_m;
    PyObjectLocalVariable par_n; par_n.object = _python_par_n;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e4e3f54d267567a9bbf52a12f433b516, module_scipy$sparse$construct );
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_dia_matrix );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dia_matrix );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 261642 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_data.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_diags.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263257 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_m.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_n.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_3 );
    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 61;
    tmp_source_name_1 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_format.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 61;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
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
    if ((par_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            par_data.object
        );

    }
    if ((par_diags.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diags,
            par_diags.object
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
    if ((par_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            par_n.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
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
static PyObject *fparse_function_1_spdiags_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_data = NULL;
    PyObject *_python_par_diags = NULL;
    PyObject *_python_par_m = NULL;
    PyObject *_python_par_n = NULL;
    PyObject *_python_par_format = NULL;
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
                PyErr_Format( PyExc_TypeError, "spdiags() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_data == key )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_diags == key )
            {
                assert( _python_par_diags == NULL );
                _python_par_diags = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_m == key )
            {
                assert( _python_par_m == NULL );
                _python_par_m = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_n == key )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_data, key ) == 1 )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_diags, key ) == 1 )
            {
                assert( _python_par_diags == NULL );
                _python_par_diags = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_m, key ) == 1 )
            {
                assert( _python_par_m == NULL );
                _python_par_m = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_n, key ) == 1 )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "spdiags() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_diags != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_diags = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_diags == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_diags = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_m != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_m = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_m == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_m = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_n != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_n == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_data == NULL || _python_par_diags == NULL || _python_par_m == NULL || _python_par_n == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_data, _python_par_diags, _python_par_m, _python_par_n, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_spdiags_of_module_scipy$sparse$construct( self, _python_par_data, _python_par_diags, _python_par_m, _python_par_n, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_data );
    Py_XDECREF( _python_par_diags );
    Py_XDECREF( _python_par_m );
    Py_XDECREF( _python_par_n );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_1_spdiags_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_spdiags_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_spdiags_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_diags_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_diagonals, PyObject *_python_par_offsets, PyObject *_python_par_shape, PyObject *_python_par_format, PyObject *_python_par_dtype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_diagonals; par_diagonals.object = _python_par_diagonals;
    PyObjectLocalVariable par_offsets; par_offsets.object = _python_par_offsets;
    PyObjectLocalVariable par_shape; par_shape.object = _python_par_shape;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_offset;
    PyObjectLocalVariable var_M;
    PyObjectLocalVariable var_data_arr;
    PyObjectLocalVariable var_j;
    PyObjectLocalVariable var_diagonal;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_length;
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObjectTempVariable tmp_try_except_2__unhandled_indicator;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
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
    int tmp_cmp_LtE_1;
    int tmp_cmp_NotEq_1;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_len_arg_7;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_sliceobj_lower_1;
    PyObject *tmp_sliceobj_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_2__unhandled_indicator.object == NULL );
    tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_db5f55e9d52b37aedd9e701b47180257, module_scipy$sparse$construct );
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
    tmp_iter_arg_1 = par_offsets.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22391 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_except_handler_1;
    }

    tmp_unused = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_2 = Py_False;
    if (tmp_try_except_2__unhandled_indicator.object == NULL)
    {
        tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = tmp_try_except_2__unhandled_indicator.object;
        tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
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
    tmp_compare_right_1 = PyExc_TypeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_1;
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
    tmp_assign_source_3 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    // Tried code
    // Tried block of try/except
    tmp_subscr_target_1 = par_diagonals.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263308 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto try_except_handler_2;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto try_except_handler_2;
    }
    tmp_unused = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto try_except_end_2;
    try_except_handler_2:;
    // Exception handler of try/except
    tmp_assign_source_4 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_TypeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto try_finally_handler_2;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_5 = PyList_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_2;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_atleast_1d );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 143;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_1 = par_diagonals.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263308 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 143;
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 143;
        goto try_finally_handler_2;
    }
    PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
    if (par_diagonals.object == NULL)
    {
        par_diagonals.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = par_diagonals.object;
        par_diagonals.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_2;
    branch_end_2:;
    try_except_end_2:;
    tmp_compare_left_3 = tmp_try_except_1__unhandled_indicator.object;

    tmp_compare_right_3 = Py_True;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_debd22db08378a1d1682756fe0366b36;
    frame_function->f_lineno = 145;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto try_finally_handler_2;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 145;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_2;
    branch_no_3:;
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

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_compare_left_4 = tmp_try_except_2__unhandled_indicator.object;

    tmp_compare_right_4 = Py_True;
    tmp_is_2 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_2)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_atleast_1d );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = par_diagonals.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263308 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 147;
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    tmp_assign_source_6 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    if (par_diagonals.object == NULL)
    {
        par_diagonals.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = par_diagonals.object;
        par_diagonals.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    branch_no_4:;
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
    tmp_result = tmp_try_except_2__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_2__unhandled_indicator.object );
        tmp_try_except_2__unhandled_indicator.object = NULL;
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_atleast_1d );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_offsets.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22391 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 148;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    if (par_offsets.object == NULL)
    {
        par_offsets.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = par_offsets.object;
        par_offsets.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_len_arg_1 = par_diagonals.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263308 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_5 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_offsets.object;

    tmp_compare_right_5 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );
        Py_DECREF( tmp_compare_right_5 );

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_2 = const_str_digest_debd22db08378a1d1682756fe0366b36;
    frame_function->f_lineno = 152;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 152;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_compare_left_6 = par_shape.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = Py_None;
    tmp_is_3 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if (tmp_is_3)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_subscr_target_2 = par_diagonals.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263308 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_len_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_len_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = BUILTIN_LEN( tmp_len_arg_3 );
    Py_DECREF( tmp_len_arg_3 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_3 = par_offsets.object;

    tmp_subscr_subscript_3 = const_int_0;
    tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 156;
    tmp_binop_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    assert( var_m.object == NULL );
    var_m.object = tmp_assign_source_8;

    tmp_assign_source_9 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_m.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_m.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 1, tmp_tuple_element_1 );
    if (par_shape.object == NULL)
    {
        par_shape.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = par_shape.object;
        par_shape.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    branch_no_6:;
    tmp_compare_left_7 = par_dtype.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_is_4 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if (tmp_is_4)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_common_type );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_diagonals.object;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263308 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = impl_function_3_complex_call_helper_star_list_of_module___internal__( tmp_dircall_arg1_1, INCREASE_REFCOUNT( tmp_dircall_arg2_1 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    if (par_dtype.object == NULL)
    {
        par_dtype.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = par_dtype.object;
        par_dtype.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    branch_no_7:;
    // Tried code
    tmp_iter_arg_3 = par_shape.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto try_finally_handler_3;
    }

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_3;
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


        frame_function->f_lineno = 164;
        goto try_finally_handler_3;
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


        frame_function->f_lineno = 164;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_13;

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

            goto try_finally_handler_3;
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

        goto try_finally_handler_3;
    }
    tmp_assign_source_14 = tmp_tuple_unpack_1__element_1.object;

    if (var_m.object == NULL)
    {
        var_m.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_m.object;
        var_m.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_assign_source_15 = tmp_tuple_unpack_1__element_2.object;

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
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

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
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = NULL;
    // Tried code
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = NULL;
    // Tried code
    tmp_iter_arg_4 = par_offsets.object;

    if ( tmp_iter_arg_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22391 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_5;
    }

    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_17;

    tmp_assign_source_18 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_18;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_19 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {
            Py_DECREF( tmp_call_pos_1 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 166;
            goto try_finally_handler_5;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_assign_source_20 = tmp_listcontr_1__iter_value_0.object;

    if (var_offset.object == NULL)
    {
        var_offset.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
    }
    else
    {
        PyObject *old = var_offset.object;
        var_offset.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    tmp_binop_left_3 = var_m.object;

    if ( tmp_binop_left_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }

    tmp_binop_right_3 = var_offset.object;

    tmp_call_arg_element_6 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    tmp_binop_left_4 = var_n.object;

    if ( tmp_binop_left_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }

    tmp_binop_right_4 = var_offset.object;

    tmp_call_arg_element_7 = BINARY_OPERATION_SUB( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 166;
    tmp_binop_left_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_8 = const_int_0;
    tmp_call_arg_element_9 = var_offset.object;

    frame_function->f_lineno = 166;
    tmp_binop_right_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    tmp_append_value_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 166;
        goto try_finally_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_tuple_element_2 = tmp_listcontr_1__listcontr_result.object;

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
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

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
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
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
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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
    frame_function->f_lineno = 166;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS( tmp_called_5, tmp_call_pos_1 );
    Py_DECREF( tmp_call_pos_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    assert( var_M.object == NULL );
    var_M.object = tmp_assign_source_16;

    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_int_0;
    tmp_call_arg_element_11 = var_M.object;

    frame_function->f_lineno = 168;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    assert( var_M.object != NULL );
    {
        PyObject *old = var_M.object;
        var_M.object = tmp_assign_source_21;
        Py_DECREF( old );
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_zeros );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyTuple_New( 2 );
    tmp_len_arg_4 = par_offsets.object;

    if ( tmp_len_arg_4 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22391 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_3 );

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_M.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_dtype.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 169;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_2, tmp_call_kw_1 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    assert( var_data_arr.object == NULL );
    var_data_arr.object = tmp_assign_source_22;

    tmp_called_10 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = par_diagonals.object;

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263308 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 171;
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_12 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_23;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_24 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_24 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 171;
            goto try_finally_handler_6;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_6 = tmp_for_loop_1__iter_value.object;

    tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_26 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 171;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_27 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 171;
        goto try_finally_handler_7;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_27;
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

            goto try_finally_handler_7;
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

        goto try_finally_handler_7;
    }
    tmp_assign_source_28 = tmp_tuple_unpack_2__element_1.object;

    if (var_j.object == NULL)
    {
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
        Py_DECREF( old );
    }
    tmp_assign_source_29 = tmp_tuple_unpack_2__element_2.object;

    if (var_diagonal.object == NULL)
    {
        var_diagonal.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_diagonal.object;
        var_diagonal.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
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
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

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
    tmp_subscr_target_4 = par_offsets.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22391 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_4 = var_j.object;

    if ( tmp_subscr_subscript_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54692 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto try_finally_handler_6;
    }

    tmp_assign_source_30 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto try_finally_handler_6;
    }
    if (var_offset.object == NULL)
    {
        var_offset.object = tmp_assign_source_30;
    }
    else
    {
        PyObject *old = var_offset.object;
        var_offset.object = tmp_assign_source_30;
        Py_DECREF( old );
    }
    tmp_called_11 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_13 = const_int_0;
    tmp_call_arg_element_14 = var_offset.object;

    frame_function->f_lineno = 173;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_6;
    }
    if (var_k.object == NULL)
    {
        var_k.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_called_12 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_6;
    }
    tmp_binop_left_5 = var_m.object;

    if ( tmp_binop_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_6;
    }

    tmp_binop_right_5 = var_offset.object;

    tmp_call_arg_element_15 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_6;
    }
    tmp_binop_left_6 = var_n.object;

    if ( tmp_binop_left_6 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_6;
    }

    tmp_binop_right_6 = var_offset.object;

    tmp_call_arg_element_16 = BINARY_OPERATION_SUB( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 174;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 174;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS2( tmp_called_12, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_6;
    }
    if (var_length.object == NULL)
    {
        var_length.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = var_length.object;
        var_length.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_compare_left_8 = var_length.object;

    tmp_compare_right_8 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_LtE_1 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_binop_left_7 = const_str_digest_e85e637840a8efedc5fe73da5f4a8a00;
    tmp_binop_right_7 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_offset.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_7, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_j.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54692 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_7, 1, tmp_tuple_element_5 );
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 176;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_6;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 176;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_6;
    branch_no_8:;
    // Tried block of try/except
    tmp_ass_subvalue_1 = var_diagonal.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263363 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto try_except_handler_3;
    }

    tmp_ass_subscribed_1 = var_data_arr.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263417 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto try_except_handler_3;
    }

    tmp_ass_subscript_1 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_j.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_ass_subscript_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54692 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_6 );
    tmp_sliceobj_lower_1 = var_k.object;

    tmp_binop_left_8 = var_k.object;

    tmp_binop_right_8 = var_length.object;

    tmp_sliceobj_upper_1 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_sliceobj_upper_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subscript_1 );

        frame_function->f_lineno = 178;
        goto try_except_handler_3;
    }
    tmp_tuple_element_6 = MAKE_SLICEOBJ( tmp_sliceobj_lower_1, tmp_sliceobj_upper_1, Py_None );
    Py_DECREF( tmp_sliceobj_upper_1 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_6 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_except_handler_3;
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
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyExc_ValueError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto try_finally_handler_6;
    }
    if (tmp_exc_match_exception_match_3 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_len_arg_5 = var_diagonal.object;

    if ( tmp_len_arg_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263363 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_9;
    }

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_9;
    }
    tmp_compexpr_right_1 = var_length.object;

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 16815 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_9;
    }

    tmp_assign_source_33 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_9;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = tmp_assign_source_33;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_9;
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
    tmp_len_arg_6 = var_diagonal.object;

    if ( tmp_len_arg_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263363 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_10;
    }

    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_10;
    }
    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_cond_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_10;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
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

        goto try_finally_handler_9;
    }

    goto finally_end_7;
    finally_end_7:;
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
    try_finally_handler_9:;
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

        goto try_finally_handler_8;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 180;
        goto try_finally_handler_8;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_binop_left_9 = const_str_digest_bcc15d14679fd2b8299445e28c4c8c1f;
    tmp_binop_right_9 = PyTuple_New( 5 );
    tmp_tuple_element_7 = var_j.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54692 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 0, tmp_tuple_element_7 );
    tmp_len_arg_7 = var_diagonal.object;

    if ( tmp_len_arg_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263363 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_8;
    }

    tmp_tuple_element_7 = BUILTIN_LEN( tmp_len_arg_7 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 184;
        goto try_finally_handler_8;
    }
    PyTuple_SET_ITEM( tmp_binop_right_9, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_offset.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1412 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 2, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_m.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 3, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_n.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 4, tmp_tuple_element_7 );
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto try_finally_handler_8;
    }
    frame_function->f_lineno = 181;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    Py_DECREF( tmp_make_exception_arg_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto try_finally_handler_8;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 181;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_8;
    branch_no_10:;
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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
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
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_6;
    goto branch_end_9;
    branch_no_9:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_6;
    branch_end_9:;
    try_except_end_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto try_finally_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
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

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
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
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_dia_matrix );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dia_matrix );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 261642 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_8 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_data_arr.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_tuple_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263417 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_tuple_element_8, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = par_offsets.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_tuple_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 22391 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_tuple_element_8, 1, tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_8 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_m.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_2 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_dict_value_2, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_n.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_2 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_dict_value_2, 1, tmp_tuple_element_10 );
    tmp_dict_key_2 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 187;
    tmp_source_name_6 = CALL_FUNCTION( tmp_called_14, tmp_call_pos_3, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = par_format.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 187;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
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
    if ((var_offset.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_offset,
            var_offset.object
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
    if ((var_data_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data_arr,
            var_data_arr.object
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
    if ((var_diagonal.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diagonal,
            var_diagonal.object
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
    if ((var_length.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_length,
            var_length.object
        );

    }
    if ((par_diagonals.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diagonals,
            par_diagonals.object
        );

    }
    if ((par_offsets.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_offsets,
            par_offsets.object
        );

    }
    if ((par_shape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shape,
            par_shape.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
        );

    }
    if ((par_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            par_dtype.object
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
static PyObject *fparse_function_2_diags_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_diagonals = NULL;
    PyObject *_python_par_offsets = NULL;
    PyObject *_python_par_shape = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_dtype = NULL;
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
                PyErr_Format( PyExc_TypeError, "diags() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_diagonals == key )
            {
                assert( _python_par_diagonals == NULL );
                _python_par_diagonals = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_offsets == key )
            {
                assert( _python_par_offsets == NULL );
                _python_par_offsets = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_shape == key )
            {
                assert( _python_par_shape == NULL );
                _python_par_shape = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dtype == key )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_diagonals, key ) == 1 )
            {
                assert( _python_par_diagonals == NULL );
                _python_par_diagonals = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_offsets, key ) == 1 )
            {
                assert( _python_par_offsets == NULL );
                _python_par_offsets = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_shape, key ) == 1 )
            {
                assert( _python_par_shape == NULL );
                _python_par_shape = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtype, key ) == 1 )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "diags() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_diagonals != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_diagonals = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_diagonals == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_diagonals = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_offsets != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_offsets = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_offsets == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_offsets = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_shape != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_shape = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_shape == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_shape = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_dtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_dtype = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_dtype == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_dtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_diagonals == NULL || _python_par_offsets == NULL || _python_par_shape == NULL || _python_par_format == NULL || _python_par_dtype == NULL ))
    {
        PyObject *values[] = { _python_par_diagonals, _python_par_offsets, _python_par_shape, _python_par_format, _python_par_dtype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_diags_of_module_scipy$sparse$construct( self, _python_par_diagonals, _python_par_offsets, _python_par_shape, _python_par_format, _python_par_dtype );

error_exit:;

    Py_XDECREF( _python_par_diagonals );
    Py_XDECREF( _python_par_offsets );
    Py_XDECREF( _python_par_shape );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_dtype );

    return NULL;
}

static PyObject *dparse_function_2_diags_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_2_diags_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_diags_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_identity_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_n, PyObject *_python_par_dtype, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_n; par_n.object = _python_par_n;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1fda7720292218a22775356a2f5c73c9, module_scipy$sparse$construct );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_eye );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257552 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_n.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_n.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_dtype.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_format.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_format;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 216;
    tmp_return_value = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 216;
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
    if ((par_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            par_n.object
        );

    }
    if ((par_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            par_dtype.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
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
static PyObject *fparse_function_3_identity_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_n = NULL;
    PyObject *_python_par_dtype = NULL;
    PyObject *_python_par_format = NULL;
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
                PyErr_Format( PyExc_TypeError, "identity() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_n == key )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dtype == key )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_n, key ) == 1 )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtype, key ) == 1 )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "identity() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_n != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_n == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_dtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_dtype = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_dtype == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_dtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_n == NULL || _python_par_dtype == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_n, _python_par_dtype, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_identity_of_module_scipy$sparse$construct( self, _python_par_n, _python_par_dtype, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_n );
    Py_XDECREF( _python_par_dtype );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_3_identity_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3_identity_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_identity_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_eye_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_m, PyObject *_python_par_n, PyObject *_python_par_k, PyObject *_python_par_dtype, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_m; par_m.object = _python_par_m;
    PyObjectLocalVariable par_n; par_n.object = _python_par_n;
    PyObjectLocalVariable par_k; par_k.object = _python_par_k;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable var_idx_dtype;
    PyObjectLocalVariable var_indptr;
    PyObjectLocalVariable var_indices;
    PyObjectLocalVariable var_data;
    PyObjectLocalVariable var_cls;
    PyObjectLocalVariable var_row;
    PyObjectLocalVariable var_col;
    PyObjectLocalVariable var_diags;
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
    int tmp_cmp_In_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
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
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    bool tmp_is_1;
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
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_53e7dfbf68133b42e2c04129aa58e492, module_scipy$sparse$construct );
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
    tmp_compare_left_1 = par_n.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
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
    tmp_assign_source_1 = par_m.object;

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    if (par_n.object == NULL)
    {
        par_n.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
    }
    else
    {
        PyObject *old = par_n.object;
        par_n.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
        Py_DECREF( old );
    }
    branch_no_1:;
    // Tried code
    tmp_iter_arg_1 = PyTuple_New( 2 );
    tmp_int_arg_1 = par_m.object;

    if ( tmp_int_arg_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        frame_function->f_lineno = 252;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_int_arg_2 = par_n.object;

    if ( tmp_int_arg_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_1 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        frame_function->f_lineno = 252;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
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


        frame_function->f_lineno = 252;
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


        frame_function->f_lineno = 252;
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

    if (par_m.object == NULL)
    {
        par_m.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = par_m.object;
        par_m.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2.object;

    if (par_n.object == NULL)
    {
        par_n.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = par_n.object;
        par_n.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
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
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = par_m.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_1 = par_n.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto try_finally_handler_3;
    }

    tmp_assign_source_7 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto try_finally_handler_3;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_7;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
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
    tmp_compexpr_left_2 = par_k.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto try_finally_handler_4;
    }

    tmp_compexpr_right_2 = const_int_0;
    tmp_cond_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
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

        frame_function->f_lineno = 254;
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
    tmp_compare_left_2 = par_format.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto try_finally_handler_2;
    }

    tmp_compare_right_2 = LIST_COPY( const_list_str_plain_csr_str_plain_csc_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 256;
        goto try_finally_handler_2;
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_index_dtype );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 260574 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto try_finally_handler_2;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_n.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto try_finally_handler_2;
    }

    tmp_dict_key_1 = const_str_plain_maxval;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 257;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto try_finally_handler_2;
    }
    assert( var_idx_dtype.object == NULL );
    var_idx_dtype.object = tmp_assign_source_8;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto try_finally_handler_2;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto try_finally_handler_2;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_binop_left_1 = par_n.object;

    if ( tmp_binop_left_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto try_finally_handler_2;
    }

    tmp_binop_right_1 = const_int_pos_1;
    tmp_tuple_element_2 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 258;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_idx_dtype.object;

    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 258;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto try_finally_handler_2;
    }
    assert( var_indptr.object == NULL );
    var_indptr.object = tmp_assign_source_9;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 259;
        goto try_finally_handler_2;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arange );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_2;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_n.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 259;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = var_idx_dtype.object;

    tmp_dict_key_3 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 259;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_2, tmp_call_kw_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto try_finally_handler_2;
    }
    assert( var_indices.object == NULL );
    var_indices.object = tmp_assign_source_10;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto try_finally_handler_2;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ones );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto try_finally_handler_2;
    }
    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_4 = par_n.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_4 );
    tmp_call_kw_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = par_dtype.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto try_finally_handler_2;
    }

    tmp_dict_key_4 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 260;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_3, tmp_call_kw_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto try_finally_handler_2;
    }
    assert( var_data.object == NULL );
    var_data.object = tmp_assign_source_11;

    tmp_subscr_target_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix );

    if (unlikely( tmp_dict_value_5 == NULL ))
    {
        tmp_dict_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_subscr_target_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263471 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto try_finally_handler_2;
    }

    tmp_dict_key_5 = const_str_plain_csr;
    PyDict_SetItem( tmp_subscr_target_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csc_matrix );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_subscr_target_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto try_finally_handler_2;
    }

    tmp_dict_key_6 = const_str_plain_csc;
    PyDict_SetItem( tmp_subscr_target_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_subscr_subscript_1 = par_format.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {
        Py_DECREF( tmp_subscr_target_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto try_finally_handler_2;
    }

    tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto try_finally_handler_2;
    }
    assert( var_cls.object == NULL );
    var_cls.object = tmp_assign_source_12;

    tmp_called_5 = var_cls.object;

    tmp_call_arg_element_1 = PyTuple_New( 3 );
    tmp_tuple_element_5 = var_data.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_arg_element_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_indices.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_arg_element_1, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_indptr.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_arg_element_1, 2, tmp_tuple_element_5 );
    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_6 = par_n.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = par_n.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_6 );
    frame_function->f_lineno = 262;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto try_finally_handler_2;
    }
    goto try_finally_handler_start_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_3 = par_format.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto try_finally_handler_2;
    }

    tmp_compare_right_3 = const_str_plain_coo;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_2;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_index_dtype );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 260574 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }

    tmp_call_kw_5 = _PyDict_NewPresized( 1 );
    tmp_dict_value_7 = par_n.object;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }

    tmp_dict_key_7 = const_str_plain_maxval;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_7, tmp_dict_value_7 );
    frame_function->f_lineno = 264;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_6, tmp_call_kw_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }
    assert( var_idx_dtype.object == NULL );
    var_idx_dtype.object = tmp_assign_source_13;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto try_finally_handler_2;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_arange );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto try_finally_handler_2;
    }
    tmp_call_pos_4 = PyTuple_New( 1 );
    tmp_tuple_element_7 = par_n.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_7 );
    tmp_call_kw_6 = _PyDict_NewPresized( 1 );
    tmp_dict_value_8 = var_idx_dtype.object;

    tmp_dict_key_8 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_8, tmp_dict_value_8 );
    frame_function->f_lineno = 265;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_4, tmp_call_kw_6 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto try_finally_handler_2;
    }
    assert( var_row.object == NULL );
    var_row.object = tmp_assign_source_14;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_2;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_arange );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_2;
    }
    tmp_call_pos_5 = PyTuple_New( 1 );
    tmp_tuple_element_8 = par_n.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_8 );
    tmp_call_kw_7 = _PyDict_NewPresized( 1 );
    tmp_dict_value_9 = var_idx_dtype.object;

    tmp_dict_key_9 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_7, tmp_dict_key_9, tmp_dict_value_9 );
    frame_function->f_lineno = 266;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_5, tmp_call_kw_7 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_2;
    }
    assert( var_col.object == NULL );
    var_col.object = tmp_assign_source_15;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ones );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }
    tmp_call_pos_6 = PyTuple_New( 1 );
    tmp_tuple_element_9 = par_n.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 0, tmp_tuple_element_9 );
    tmp_call_kw_8 = _PyDict_NewPresized( 1 );
    tmp_dict_value_10 = par_dtype.object;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }

    tmp_dict_key_10 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_8, tmp_dict_key_10, tmp_dict_value_10 );
    frame_function->f_lineno = 267;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_6, tmp_call_kw_8 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_pos_6 );
    Py_DECREF( tmp_call_kw_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_2;
    }
    assert( var_data.object == NULL );
    var_data.object = tmp_assign_source_16;

    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_3 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_data.object;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_call_arg_element_3, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = PyTuple_New( 2 );
    tmp_tuple_element_11 = var_row.object;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_tuple_element_10, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_col.object;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_tuple_element_10, 1, tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_call_arg_element_3, 1, tmp_tuple_element_10 );
    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_12 = par_n.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = par_n.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_12 );
    frame_function->f_lineno = 268;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto try_finally_handler_2;
    }
    goto try_finally_handler_start_1;
    branch_no_4:;
    branch_end_3:;
    branch_no_2:;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ones );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_7 = PyTuple_New( 1 );
    tmp_tuple_element_13 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_tuple_element_13, 0, tmp_tuple_element_14 );
    tmp_called_12 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_13 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_int_0;
    tmp_called_13 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_13 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = par_m.object;

    if ( tmp_binop_left_2 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = par_k.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_13 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = par_n.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_13 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 270;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_13, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_13 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 270;
    tmp_tuple_element_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_12, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_tuple_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_tuple_element_13 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_13, 1, tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_call_pos_7, 0, tmp_tuple_element_13 );
    tmp_call_kw_9 = _PyDict_NewPresized( 1 );
    tmp_dict_value_11 = par_dtype.object;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_call_kw_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_9, tmp_dict_key_11, tmp_dict_value_11 );
    frame_function->f_lineno = 270;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_11, tmp_call_pos_7, tmp_call_kw_9 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_pos_7 );
    Py_DECREF( tmp_call_kw_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    assert( var_diags.object == NULL );
    var_diags.object = tmp_assign_source_17;

    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_spdiags );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_spdiags );
    }

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263588 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = var_diags.object;

    tmp_call_arg_element_10 = par_k.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = par_m.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = par_n.object;

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 271;
    tmp_source_name_8 = CALL_FUNCTION_WITH_ARGS4( tmp_called_15, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = par_format.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 271;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
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
    if ((var_idx_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_idx_dtype,
            var_idx_dtype.object
        );

    }
    if ((var_indptr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_indptr,
            var_indptr.object
        );

    }
    if ((var_indices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_indices,
            var_indices.object
        );

    }
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            var_data.object
        );

    }
    if ((var_cls.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cls,
            var_cls.object
        );

    }
    if ((var_row.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_row,
            var_row.object
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
    if ((var_diags.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diags,
            var_diags.object
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
    if ((par_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            par_n.object
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
    if ((par_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            par_dtype.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
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
static PyObject *fparse_function_4_eye_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_m = NULL;
    PyObject *_python_par_n = NULL;
    PyObject *_python_par_k = NULL;
    PyObject *_python_par_dtype = NULL;
    PyObject *_python_par_format = NULL;
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
                PyErr_Format( PyExc_TypeError, "eye() keywords must be strings" );
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
            if ( found == false && const_str_plain_n == key )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

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
            if ( found == false && const_str_plain_dtype == key )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_n, key ) == 1 )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtype, key ) == 1 )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "eye() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_m != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_m = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_m == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_m = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_n != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_n == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_k != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_k = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_k == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_k = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_dtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_dtype = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_dtype == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_dtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_m == NULL || _python_par_n == NULL || _python_par_k == NULL || _python_par_dtype == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_m, _python_par_n, _python_par_k, _python_par_dtype, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_eye_of_module_scipy$sparse$construct( self, _python_par_m, _python_par_n, _python_par_k, _python_par_dtype, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_m );
    Py_XDECREF( _python_par_n );
    Py_XDECREF( _python_par_k );
    Py_XDECREF( _python_par_dtype );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_4_eye_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_4_eye_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_eye_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_kron_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_B, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_B; par_B.object = _python_par_B;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable var_output_shape;
    PyObjectLocalVariable var_data;
    PyObjectLocalVariable var_row;
    PyObjectLocalVariable var_col;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_or_3__value_1;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_end;
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
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
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
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5475b77ca1fdd585e1e877ac17b32e25, module_scipy$sparse$construct );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_B.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 308;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    if (par_B.object == NULL)
    {
        par_B.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_B.object;
        par_B.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    // Tried code
    tmp_assign_source_2 = NULL;
    // Tried code
    tmp_compexpr_left_1 = par_format.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_finally_handler_4;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_assign_source_3 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
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
    tmp_assign_source_2 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_assign_source_2 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = par_format.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_finally_handler_5;
    }

    tmp_compexpr_right_2 = const_str_plain_bsr;
    tmp_assign_source_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto try_finally_handler_5;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
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

        goto try_finally_handler_4;
    }

    goto finally_end_1;
    finally_end_1:;
    condexpr_end_1:;
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
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_2;

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

        goto try_finally_handler_2;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto try_finally_handler_2;
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_binop_left_1 = const_int_pos_2;
    tmp_source_name_1 = par_B.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nnz );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }
    tmp_compexpr_left_3 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }
    tmp_source_name_2 = par_B.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_binop_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }
    tmp_source_name_3 = par_B.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }
    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_binop_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }
    tmp_compexpr_right_3 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        frame_function->f_lineno = 310;
        goto try_finally_handler_6;
    }
    tmp_cond_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
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

        goto try_finally_handler_2;
    }

    goto finally_end_4;
    finally_end_4:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_1 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
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

        goto try_finally_handler_1;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 310;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263471 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_A.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_10010a04cba23a4ccc75195b8c45141a );
    frame_function->f_lineno = 312;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = PyTuple_New( 2 );
    tmp_source_name_4 = par_A.object;

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_binop_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    tmp_source_name_5 = par_B.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_4 = const_int_0;
    tmp_binop_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    tmp_tuple_element_2 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_2 );
    tmp_source_name_6 = par_A.object;

    tmp_subscr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_5 = const_int_pos_1;
    tmp_binop_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    tmp_source_name_7 = par_B.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_6 = const_int_pos_1;
    tmp_binop_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    tmp_tuple_element_2 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 314;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_5, 1, tmp_tuple_element_2 );
    assert( var_output_shape.object == NULL );
    var_output_shape.object = tmp_assign_source_5;

    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_source_name_8 = par_A.object;

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_nnz );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_8;
    }
    tmp_compexpr_right_4 = const_int_0;
    tmp_assign_source_6 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_8;
    }
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_6;

    tmp_cond_value_5 = tmp_or_2__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
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
    tmp_cond_value_4 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_cond_value_4 );
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_9 = par_B.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_9;
    }

    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_nnz );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_9;
    }
    tmp_compexpr_right_5 = const_int_0;
    tmp_cond_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_9;
    }
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
    condexpr_end_3:;
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
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 316;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_2 = var_output_shape.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263624 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto try_finally_handler_7;
    }

    frame_function->f_lineno = 318;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto try_finally_handler_7;
    }
    goto try_finally_handler_start_2;
    branch_no_2:;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_source_name_10 = par_B.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_toarray );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 320;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 320;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 320;
        goto try_finally_handler_1;
    }
    if (par_B.object == NULL)
    {
        par_B.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = par_B.object;
        par_B.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_source_name_13 = par_A.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_data );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_repeat );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_source_name_14 = par_B.object;

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_size );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 321;
    tmp_source_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_reshape );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = const_int_neg_1;
    tmp_source_name_15 = par_B.object;

    tmp_subscr_target_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_shape );
    if ( tmp_subscr_target_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_7 = const_int_0;
    tmp_call_arg_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_target_7 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_source_name_16 = par_B.object;

    tmp_subscr_target_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_shape );
    if ( tmp_subscr_target_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_8 = const_int_pos_1;
    tmp_call_arg_element_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_target_8 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 321;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto try_finally_handler_1;
    }
    assert( var_data.object == NULL );
    var_data.object = tmp_assign_source_8;

    tmp_binop_left_5 = var_data.object;

    tmp_binop_right_5 = par_B.object;

    tmp_assign_source_9 = BINARY_OPERATION_MUL( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto try_finally_handler_1;
    }
    assert( var_data.object != NULL );
    {
        PyObject *old = var_data.object;
        var_data.object = tmp_assign_source_9;
        Py_DECREF( old );
    }

    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bsr_matrix );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bsr_matrix );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 261009 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyTuple_New( 3 );
    tmp_tuple_element_4 = var_data.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    tmp_source_name_17 = par_A.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_indices );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_3 );

        frame_function->f_lineno = 324;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
    tmp_source_name_18 = par_A.object;

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_indptr );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_3 );

        frame_function->f_lineno = 324;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_output_shape.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263624 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_1;
    }

    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 324;
    tmp_return_value = CALL_FUNCTION( tmp_called_7, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto try_finally_handler_1;
    }
    goto try_finally_handler_start_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_7 = par_A.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 327;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto try_finally_handler_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_assign_source_11 = PyTuple_New( 2 );
    tmp_source_name_19 = par_A.object;

    tmp_subscr_target_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_shape );
    if ( tmp_subscr_target_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_9 = const_int_0;
    tmp_binop_left_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_target_9 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    tmp_source_name_20 = par_B.object;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_10 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_shape );
    if ( tmp_subscr_target_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_10 = const_int_0;
    tmp_binop_right_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    Py_DECREF( tmp_subscr_target_10 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    tmp_tuple_element_5 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_5 );
    tmp_source_name_21 = par_A.object;

    tmp_subscr_target_11 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_shape );
    if ( tmp_subscr_target_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_11 = const_int_pos_1;
    tmp_binop_left_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    Py_DECREF( tmp_subscr_target_11 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    tmp_source_name_22 = par_B.object;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        Py_DECREF( tmp_binop_left_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_12 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_shape );
    if ( tmp_subscr_target_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );
        Py_DECREF( tmp_binop_left_7 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_12 = const_int_pos_1;
    tmp_binop_right_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    Py_DECREF( tmp_subscr_target_12 );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );
        Py_DECREF( tmp_binop_left_7 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    tmp_tuple_element_5 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 328;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_11, 1, tmp_tuple_element_5 );
    assert( var_output_shape.object == NULL );
    var_output_shape.object = tmp_assign_source_11;

    // Tried code
    tmp_cond_value_6 = NULL;
    // Tried code
    tmp_source_name_23 = par_A.object;

    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_nnz );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_11;
    }
    tmp_compexpr_right_6 = const_int_0;
    tmp_assign_source_12 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_11;
    }
    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = tmp_assign_source_12;

    tmp_cond_value_7 = tmp_or_3__value_1.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_11;
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
    tmp_cond_value_6 = tmp_or_3__value_1.object;

    Py_INCREF( tmp_cond_value_6 );
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_6 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_24 = par_B.object;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto try_finally_handler_12;
    }

    tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_nnz );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_12;
    }
    tmp_compexpr_right_7 = const_int_0;
    tmp_cond_value_6 = RICH_COMPARE_EQ( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto try_finally_handler_12;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
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

        goto try_finally_handler_11;
    }

    goto finally_end_9;
    finally_end_9:;
    condexpr_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
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

        goto try_finally_handler_10;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        frame_function->f_lineno = 330;
        goto try_finally_handler_10;
    }
    Py_DECREF( tmp_cond_value_6 );
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto try_finally_handler_10;
    }

    tmp_call_arg_element_8 = var_output_shape.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263624 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto try_finally_handler_10;
    }

    frame_function->f_lineno = 332;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 332;
        goto try_finally_handler_10;
    }
    goto try_finally_handler_start_3;
    branch_no_3:;
    try_finally_handler_start_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_source_name_26 = par_A.object;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 335;
        goto try_finally_handler_1;
    }

    tmp_source_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_row );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 335;
        goto try_finally_handler_1;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_repeat );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 335;
        goto try_finally_handler_1;
    }
    tmp_source_name_27 = par_B.object;

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 335;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_nnz );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 335;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 335;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 335;
        goto try_finally_handler_1;
    }
    assert( var_row.object == NULL );
    var_row.object = tmp_assign_source_13;

    tmp_source_name_29 = par_A.object;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto try_finally_handler_1;
    }

    tmp_source_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_col );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto try_finally_handler_1;
    }
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_repeat );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto try_finally_handler_1;
    }
    tmp_source_name_30 = par_B.object;

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_nnz );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 336;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 336;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto try_finally_handler_1;
    }
    assert( var_col.object == NULL );
    var_col.object = tmp_assign_source_14;

    tmp_source_name_32 = par_A.object;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 337;
        goto try_finally_handler_1;
    }

    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_data );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto try_finally_handler_1;
    }
    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_repeat );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto try_finally_handler_1;
    }
    tmp_source_name_33 = par_B.object;

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 337;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_nnz );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 337;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 337;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto try_finally_handler_1;
    }
    if (var_data.object == NULL)
    {
        var_data.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_data.object;
        var_data.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_assign_source_16 = var_row.object;

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    // Tried code
    tmp_binop_left_8 = tmp_inplace_assign_1__inplace_start.object;

    tmp_source_name_34 = par_B.object;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 339;
        goto try_finally_handler_13;
    }

    tmp_subscr_target_13 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_shape );
    if ( tmp_subscr_target_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 339;
        goto try_finally_handler_13;
    }
    tmp_subscr_subscript_13 = const_int_0;
    tmp_binop_right_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    Py_DECREF( tmp_subscr_target_13 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 339;
        goto try_finally_handler_13;
    }
    tmp_assign_source_17 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 339;
        goto try_finally_handler_13;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_17;

    tmp_compare_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_1 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if (tmp_isnot_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_18 = tmp_inplace_assign_1__inplace_end.object;

    assert( var_row.object != NULL );
    {
        PyObject *old = var_row.object;
        var_row.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }

    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
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
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_1;
    }

    goto finally_end_12;
    finally_end_12:;
    tmp_assign_source_19 = var_col.object;

    if ( tmp_assign_source_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199670 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto try_finally_handler_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

    // Tried code
    tmp_binop_left_9 = tmp_inplace_assign_2__inplace_start.object;

    tmp_source_name_35 = par_B.object;

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto try_finally_handler_14;
    }

    tmp_subscr_target_14 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_shape );
    if ( tmp_subscr_target_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto try_finally_handler_14;
    }
    tmp_subscr_subscript_14 = const_int_pos_1;
    tmp_binop_right_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    Py_DECREF( tmp_subscr_target_14 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto try_finally_handler_14;
    }
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto try_finally_handler_14;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_20;

    tmp_compare_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_2)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_21 = tmp_inplace_assign_2__inplace_end.object;

    if (var_col.object == NULL)
    {
        var_col.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = var_col.object;
        var_col.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    branch_no_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto try_finally_handler_1;
    }

    goto finally_end_13;
    finally_end_13:;
    // Tried code
    tmp_iter_arg_1 = PyTuple_New( 2 );
    tmp_source_name_36 = var_row.object;

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259591 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_reshape );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    tmp_call_arg_element_12 = const_int_neg_1;
    tmp_source_name_37 = par_B.object;

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_nnz );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_1 );
        Py_DECREF( tmp_called_13 );

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    frame_function->f_lineno = 343;
    tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_13, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_6 );
    tmp_source_name_38 = var_col.object;

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199670 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_reshape );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    tmp_call_arg_element_14 = const_int_neg_1;
    tmp_source_name_39 = par_B.object;

    if ( tmp_source_name_39 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_nnz );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_1 );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    frame_function->f_lineno = 343;
    tmp_tuple_element_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_15 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_6 );
    tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_22;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_23 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_23;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_24 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 343;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_24;

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

            goto try_finally_handler_15;
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

        goto try_finally_handler_15;
    }
    tmp_assign_source_25 = tmp_tuple_unpack_1__element_1.object;

    if (var_row.object == NULL)
    {
        var_row.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = var_row.object;
        var_row.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    tmp_assign_source_26 = tmp_tuple_unpack_1__element_2.object;

    if (var_col.object == NULL)
    {
        var_col.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
    }
    else
    {
        PyObject *old = var_col.object;
        var_col.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto try_finally_handler_1;
    }

    goto finally_end_14;
    finally_end_14:;
    tmp_assign_source_27 = var_row.object;

    if ( tmp_assign_source_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259591 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto try_finally_handler_1;
    }

    assert( tmp_inplace_assign_3__inplace_start.object == NULL );
    tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    // Tried code
    tmp_binop_left_10 = tmp_inplace_assign_3__inplace_start.object;

    tmp_source_name_40 = par_B.object;

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto try_finally_handler_16;
    }

    tmp_binop_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_row );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto try_finally_handler_16;
    }
    tmp_assign_source_28 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto try_finally_handler_16;
    }
    assert( tmp_inplace_assign_3__inplace_end.object == NULL );
    tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_28;

    tmp_compare_left_3 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_3 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_3)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_29 = tmp_inplace_assign_3__inplace_end.object;

    if (var_row.object == NULL)
    {
        var_row.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_row.object;
        var_row.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    branch_no_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto try_finally_handler_1;
    }

    goto finally_end_15;
    finally_end_15:;
    tmp_assign_source_30 = var_col.object;

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199670 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto try_finally_handler_1;
    }

    assert( tmp_inplace_assign_4__inplace_start.object == NULL );
    tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_30 );

    // Tried code
    tmp_binop_left_11 = tmp_inplace_assign_4__inplace_start.object;

    tmp_source_name_41 = par_B.object;

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto try_finally_handler_17;
    }

    tmp_binop_right_11 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_col );
    if ( tmp_binop_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
        goto try_finally_handler_17;
    }
    tmp_assign_source_31 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
        goto try_finally_handler_17;
    }
    assert( tmp_inplace_assign_4__inplace_end.object == NULL );
    tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_31;

    tmp_compare_left_4 = tmp_inplace_assign_4__inplace_start.object;

    tmp_compare_right_4 = tmp_inplace_assign_4__inplace_end.object;

    tmp_isnot_4 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if (tmp_isnot_4)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_32 = tmp_inplace_assign_4__inplace_end.object;

    if (var_col.object == NULL)
    {
        var_col.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
    }
    else
    {
        PyObject *old = var_col.object;
        var_col.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
        Py_DECREF( old );
    }
    branch_no_7:;
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

    tmp_tried_lineno_8 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_4__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_4__inplace_start.object );
        tmp_inplace_assign_4__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_4__inplace_end.object );
    tmp_inplace_assign_4__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto try_finally_handler_1;
    }

    goto finally_end_16;
    finally_end_16:;
    // Tried code
    tmp_iter_arg_2 = PyTuple_New( 2 );
    tmp_source_name_42 = var_row.object;

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259591 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_reshape );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }
    tmp_call_arg_element_16 = const_int_neg_1;
    frame_function->f_lineno = 346;
    tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_7 );
    tmp_source_name_43 = var_col.object;

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199670 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_reshape );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }
    tmp_call_arg_element_17 = const_int_neg_1;
    frame_function->f_lineno = 346;
    tmp_tuple_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_7 );
    tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_33;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_34 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_34;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_35 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 346;
        goto try_finally_handler_18;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_35;

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

            goto try_finally_handler_18;
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

        goto try_finally_handler_18;
    }
    tmp_assign_source_36 = tmp_tuple_unpack_2__element_1.object;

    if (var_row.object == NULL)
    {
        var_row.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_row.object;
        var_row.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    tmp_assign_source_37 = tmp_tuple_unpack_2__element_2.object;

    if (var_col.object == NULL)
    {
        var_col.object = INCREASE_REFCOUNT( tmp_assign_source_37 );
    }
    else
    {
        PyObject *old = var_col.object;
        var_col.object = INCREASE_REFCOUNT( tmp_assign_source_37 );
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_17 != NULL )
    {
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;

        goto try_finally_handler_1;
    }

    goto finally_end_17;
    finally_end_17:;
    tmp_source_name_44 = var_data.object;

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_reshape );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_18 = const_int_neg_1;
    tmp_source_name_45 = par_B.object;

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_nnz );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );

        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 349;
    tmp_binop_left_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }
    tmp_source_name_46 = par_B.object;

    if ( tmp_source_name_46 == NULL )
    {
        Py_DECREF( tmp_binop_left_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }

    tmp_binop_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_data );
    if ( tmp_binop_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );

        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }
    tmp_assign_source_38 = BINARY_OPERATION_MUL( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto try_finally_handler_1;
    }
    if (var_data.object == NULL)
    {
        var_data.object = tmp_assign_source_38;
    }
    else
    {
        PyObject *old = var_data.object;
        var_data.object = tmp_assign_source_38;
        Py_DECREF( old );
    }
    tmp_source_name_47 = var_data.object;

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_reshape );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_20 = const_int_neg_1;
    frame_function->f_lineno = 350;
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
        goto try_finally_handler_1;
    }
    assert( var_data.object != NULL );
    {
        PyObject *old = var_data.object;
        var_data.object = tmp_assign_source_39;
        Py_DECREF( old );
    }

    tmp_called_20 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_20 == NULL ))
    {
        tmp_called_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }

    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_8 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_data.object;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_tuple_element_8, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_row.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_tuple_element_8 );
        Py_DECREF( tmp_tuple_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259591 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_tuple_element_9, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_col.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_tuple_element_8 );
        Py_DECREF( tmp_tuple_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199670 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_tuple_element_9, 1, tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_tuple_element_8, 1, tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_8 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_output_shape.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263624 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }

    tmp_dict_key_2 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 352;
    tmp_source_name_48 = CALL_FUNCTION( tmp_called_20, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_source_name_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }
    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_48 );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_21 = par_format.object;

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_called_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 352;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 352;
        goto try_finally_handler_1;
    }
    goto try_finally_handler_start_1;
    branch_end_1:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_18;
    finally_end_18:;

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
    if ((var_output_shape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output_shape,
            var_output_shape.object
        );

    }
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            var_data.object
        );

    }
    if ((var_row.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_row,
            var_row.object
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
    if ((par_A.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A,
            par_A.object
        );

    }
    if ((par_B.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_B,
            par_B.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
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
static PyObject *fparse_function_5_kron_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_B = NULL;
    PyObject *_python_par_format = NULL;
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
                PyErr_Format( PyExc_TypeError, "kron() keywords must be strings" );
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
            if ( found == false && const_str_plain_B == key )
            {
                assert( _python_par_B == NULL );
                _python_par_B = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_B, key ) == 1 )
            {
                assert( _python_par_B == NULL );
                _python_par_B = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "kron() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_A != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_A = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_A == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_B != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_B = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_B == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_B = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_B == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_B, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_kron_of_module_scipy$sparse$construct( self, _python_par_A, _python_par_B, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_B );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_5_kron_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_5_kron_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_kron_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_kronsum_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_B, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_B; par_B.object = _python_par_B;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable var_dtype;
    PyObjectLocalVariable var_L;
    PyObjectLocalVariable var_R;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f6cac9ad3e83185831def6bb975235b9, module_scipy$sparse$construct );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 381;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_B.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 382;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }
    if (par_B.object == NULL)
    {
        par_B.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_B.object;
        par_B.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_A.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_A.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_compare_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_23c22a4ff7dbafa060410678216e0422;
    frame_function->f_lineno = 385;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 385;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_B.object;

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_int_0;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_B.object;

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_4 = const_int_pos_1;
    tmp_compare_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_bac49471799d9cf9b597c8bc7169148c;
    frame_function->f_lineno = 388;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 388;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_upcast );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_upcast );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 260764 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = par_A.object;

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_B.object;

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 390;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    assert( var_dtype.object == NULL );
    var_dtype.object = tmp_assign_source_3;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_kron );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_kron );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 248759 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_eye );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
    }

    if ( tmp_called_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257552 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_source_name_7 = par_B.object;

    tmp_subscr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_5 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_dtype.object;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 392;
    tmp_tuple_element_1 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_2, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_A.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_format.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_format;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 392;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_1, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }
    assert( var_L.object == NULL );
    var_L.object = tmp_assign_source_4;

    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_kron );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_kron );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 248759 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_3 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_B.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_3 );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_eye );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eye );
    }

    if ( tmp_called_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257552 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_4 = PyTuple_New( 1 );
    tmp_source_name_8 = par_A.object;

    tmp_subscr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_6 = const_int_0;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_4 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = var_dtype.object;

    tmp_dict_key_3 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 393;
    tmp_tuple_element_3 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_4, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 1, tmp_tuple_element_3 );
    tmp_call_kw_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = par_format.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_format;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 393;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_6, tmp_call_pos_3, tmp_call_kw_4 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    assert( var_R.object == NULL );
    var_R.object = tmp_assign_source_5;

    tmp_binop_left_1 = var_L.object;

    tmp_binop_right_1 = var_R.object;

    tmp_source_name_9 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_format.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 395;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
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
    if ((var_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            var_dtype.object
        );

    }
    if ((var_L.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_L,
            var_L.object
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
    if ((par_A.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A,
            par_A.object
        );

    }
    if ((par_B.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_B,
            par_B.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
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
static PyObject *fparse_function_6_kronsum_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_B = NULL;
    PyObject *_python_par_format = NULL;
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
                PyErr_Format( PyExc_TypeError, "kronsum() keywords must be strings" );
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
            if ( found == false && const_str_plain_B == key )
            {
                assert( _python_par_B == NULL );
                _python_par_B = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_B, key ) == 1 )
            {
                assert( _python_par_B == NULL );
                _python_par_B = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "kronsum() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_A != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_A = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_A == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_B != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_B = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_B == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_B = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_B == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_B, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_kronsum_of_module_scipy$sparse$construct( self, _python_par_A, _python_par_B, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_B );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_6_kronsum_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_6_kronsum_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_kronsum_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_blocks, PyObject *_python_par_axis )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_blocks; par_blocks.object = _python_par_blocks;
    PyObjectLocalVariable par_axis; par_axis.object = _python_par_axis;
    PyObjectLocalVariable var_other_axis;
    PyObjectLocalVariable var_b;
    PyObjectLocalVariable var_data;
    PyObjectLocalVariable var_indices;
    PyObjectLocalVariable var_indptr;
    PyObjectLocalVariable var_last_indptr;
    PyObjectLocalVariable var_constant_dim;
    PyObjectLocalVariable var_sum_dim;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_listcontr_2__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_2__listcontr_result;
    PyObjectTempVariable tmp_listcontr_2__iter_value_0;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
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
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6f9565ff79897d41ddbce55dbf47de19, module_scipy$sparse$construct );
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
    tmp_compare_left_1 = par_axis.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_1 = const_int_pos_1;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_1 = const_int_0;
    condexpr_end_1:;
    assert( var_other_axis.object == NULL );
    var_other_axis.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = NULL;
    // Tried code
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = NULL;
    // Tried code
    tmp_iter_arg_1 = par_blocks.object;

    if ( tmp_iter_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto try_finally_handler_2;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 404;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_4;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_5 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {
            Py_DECREF( tmp_called_1 );
            Py_DECREF( tmp_call_pos_1 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 404;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_assign_source_6 = tmp_listcontr_1__iter_value_0.object;

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
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_source_name_2 = var_b.object;

    tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_data );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 404;
        goto try_finally_handler_2;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 404;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 404;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
    frame_function->f_lineno = 404;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS( tmp_called_1, tmp_call_pos_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    assert( var_data.object == NULL );
    var_data.object = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_concatenate );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = NULL;
    // Tried code
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = NULL;
    // Tried code
    tmp_iter_arg_2 = par_blocks.object;

    if ( tmp_iter_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 405;
        goto try_finally_handler_4;
    }

    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 405;
        goto try_finally_handler_4;
    }
    assert( tmp_listcontr_2__listcontr_iter.object == NULL );
    tmp_listcontr_2__listcontr_iter.object = tmp_assign_source_8;

    tmp_assign_source_9 = PyList_New( 0 );
    assert( tmp_listcontr_2__listcontr_result.object == NULL );
    tmp_listcontr_2__listcontr_result.object = tmp_assign_source_9;

    loop_start_2:;
    tmp_next_source_2 = tmp_listcontr_2__listcontr_iter.object;

    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_10 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {
            Py_DECREF( tmp_called_2 );
            Py_DECREF( tmp_call_pos_2 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 405;
            goto try_finally_handler_4;
        }
    }

    if (tmp_listcontr_2__iter_value_0.object == NULL)
    {
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_listcontr_2__iter_value_0.object;
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_assign_source_11 = tmp_listcontr_2__iter_value_0.object;

    if (var_b.object == NULL)
    {
        var_b.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_b.object;
        var_b.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_append_to_2 = tmp_listcontr_2__listcontr_result.object;

    tmp_source_name_4 = var_b.object;

    tmp_append_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_indices );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 405;
        goto try_finally_handler_4;
    }
    tmp_res = PyList_Append( tmp_append_to_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 405;
        goto try_finally_handler_4;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 405;
        goto try_finally_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_tuple_element_2 = tmp_listcontr_2__listcontr_result.object;

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
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
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
    frame_function->f_lineno = 405;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_POSARGS( tmp_called_2, tmp_call_pos_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_pos_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    assert( var_indices.object == NULL );
    var_indices.object = tmp_assign_source_7;

    tmp_assign_source_12 = PyList_New( 0 );
    assert( var_indptr.object == NULL );
    var_indptr.object = tmp_assign_source_12;

    tmp_assign_source_13 = const_int_0;
    assert( var_last_indptr.object == NULL );
    var_last_indptr.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    tmp_subscr_target_2 = par_blocks.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = var_other_axis.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {
        Py_DECREF( tmp_subscr_target_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263734 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    assert( var_constant_dim.object == NULL );
    var_constant_dim.object = tmp_assign_source_14;

    tmp_assign_source_15 = const_int_0;
    assert( var_sum_dim.object == NULL );
    var_sum_dim.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_iter_arg_3 = par_blocks.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_16;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_17 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 410;
            goto try_finally_handler_5;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    tmp_assign_source_18 = tmp_for_loop_1__iter_value.object;

    if (var_b.object == NULL)
    {
        var_b.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = var_b.object;
        var_b.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    tmp_source_name_6 = var_b.object;

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto try_finally_handler_5;
    }
    tmp_subscr_subscript_3 = var_other_axis.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {
        Py_DECREF( tmp_subscr_target_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263734 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 411;
        goto try_finally_handler_5;
    }

    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto try_finally_handler_5;
    }
    tmp_compare_right_2 = var_constant_dim.object;

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263790 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 411;
        goto try_finally_handler_5;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 411;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_binop_left_1 = const_str_digest_7787609188d17e2bda7ee409ca51e5c9;
    tmp_binop_right_1 = var_other_axis.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263734 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 412;
        goto try_finally_handler_5;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 412;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 412;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 412;
        goto try_finally_handler_5;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 412;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_5;
    branch_no_1:;
    tmp_assign_source_19 = var_sum_dim.object;

    if ( tmp_assign_source_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263848 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 413;
        goto try_finally_handler_5;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_source_name_7 = var_b.object;

    tmp_subscr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto try_finally_handler_6;
    }
    tmp_subscr_subscript_4 = par_axis.object;

    if ( tmp_subscr_subscript_4 == NULL )
    {
        Py_DECREF( tmp_subscr_target_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 413;
        goto try_finally_handler_6;
    }

    tmp_binop_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto try_finally_handler_6;
    }
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto try_finally_handler_6;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_20;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_20;
        Py_DECREF( old );
    }
    tmp_compare_left_3 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_21 = tmp_inplace_assign_1__inplace_end.object;

    if (var_sum_dim.object == NULL)
    {
        var_sum_dim.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = var_sum_dim.object;
        var_sum_dim.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    branch_no_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
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
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_5;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_source_name_8 = var_indptr.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 260618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto try_finally_handler_5;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto try_finally_handler_5;
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_source_name_9 = var_b.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto try_finally_handler_5;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_indptr );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 414;
        goto try_finally_handler_5;
    }
    tmp_binop_left_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 414;
        goto try_finally_handler_5;
    }
    tmp_binop_right_3 = var_last_indptr.object;

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263901 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_1 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 414;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 414;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_22 = var_last_indptr.object;

    if ( tmp_assign_source_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263901 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_5;
    }

    if (tmp_inplace_assign_2__inplace_start.object == NULL)
    {
        tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_start.object;
        tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_4 = tmp_inplace_assign_2__inplace_start.object;

    tmp_source_name_10 = var_b.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_7;
    }

    tmp_subscr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_indptr );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto try_finally_handler_7;
    }
    tmp_subscr_subscript_5 = const_int_neg_1;
    tmp_binop_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto try_finally_handler_7;
    }
    tmp_assign_source_23 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto try_finally_handler_7;
    }
    if (tmp_inplace_assign_2__inplace_end.object == NULL)
    {
        tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_end.object;
        tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_compare_left_4 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_4 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if (tmp_isnot_2)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_24 = tmp_inplace_assign_2__inplace_end.object;

    if (var_last_indptr.object == NULL)
    {
        var_last_indptr.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
    }
    else
    {
        PyObject *old = var_last_indptr.object;
        var_last_indptr.object = INCREASE_REFCOUNT( tmp_assign_source_24 );
        Py_DECREF( old );
    }
    branch_no_3:;
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
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
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
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
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
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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
    tmp_source_name_11 = var_indptr.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 260618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = PyList_New( 1 );
    tmp_list_element_1 = var_last_indptr.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263901 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_2, 0, tmp_list_element_1 );
    frame_function->f_lineno = 416;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_concatenate );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_indptr.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 260618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 417;
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    if (var_indptr.object == NULL)
    {
        var_indptr.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = var_indptr.object;
        var_indptr.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    tmp_compare_left_5 = par_axis.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 418;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 418;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263471 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyTuple_New( 3 );
    tmp_tuple_element_4 = var_data.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_indices.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1126 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_indptr.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_3 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_sum_dim.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263848 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_constant_dim.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263790 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_5 );
    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 420;
    tmp_return_value = CALL_FUNCTION( tmp_called_6, tmp_call_pos_3, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csc_matrix );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_4 = PyTuple_New( 1 );
    tmp_tuple_element_6 = PyTuple_New( 3 );
    tmp_tuple_element_7 = var_data.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_tuple_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_tuple_element_6, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_indices.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_tuple_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1126 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_tuple_element_6, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_indptr.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_tuple_element_6, 2, tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_6 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_constant_dim.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_2 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263790 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_dict_value_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_sum_dim.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_2 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263848 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_dict_value_2, 1, tmp_tuple_element_8 );
    tmp_dict_key_2 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 423;
    tmp_return_value = CALL_FUNCTION( tmp_called_7, tmp_call_pos_4, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
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
    if ((var_other_axis.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_other_axis,
            var_other_axis.object
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
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            var_data.object
        );

    }
    if ((var_indices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_indices,
            var_indices.object
        );

    }
    if ((var_indptr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_indptr,
            var_indptr.object
        );

    }
    if ((var_last_indptr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_last_indptr,
            var_last_indptr.object
        );

    }
    if ((var_constant_dim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_constant_dim,
            var_constant_dim.object
        );

    }
    if ((var_sum_dim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sum_dim,
            var_sum_dim.object
        );

    }
    if ((par_blocks.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blocks,
            par_blocks.object
        );

    }
    if ((par_axis.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_axis,
            par_axis.object
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
static PyObject *fparse_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_blocks = NULL;
    PyObject *_python_par_axis = NULL;
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
                PyErr_Format( PyExc_TypeError, "_compressed_sparse_stack() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_blocks == key )
            {
                assert( _python_par_blocks == NULL );
                _python_par_blocks = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_axis == key )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blocks, key ) == 1 )
            {
                assert( _python_par_blocks == NULL );
                _python_par_blocks = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_axis, key ) == 1 )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_compressed_sparse_stack() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_blocks != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_blocks = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_blocks == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_blocks = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_axis != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_axis = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_axis == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_axis = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_blocks == NULL || _python_par_axis == NULL ))
    {
        PyObject *values[] = { _python_par_blocks, _python_par_axis };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct( self, _python_par_blocks, _python_par_axis );

error_exit:;

    Py_XDECREF( _python_par_blocks );
    Py_XDECREF( _python_par_axis );

    return NULL;
}

static PyObject *dparse_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_hstack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_blocks, PyObject *_python_par_format, PyObject *_python_par_dtype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_blocks; par_blocks.object = _python_par_blocks;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_eb631b2481d894c5d25523c06e563ddd, module_scipy$sparse$construct );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bmat );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bmat );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263958 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 453;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_blocks.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 453;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_format.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 453;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_format;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_dtype.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 453;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 453;
    tmp_return_value = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 453;
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
    if ((par_blocks.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blocks,
            par_blocks.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
        );

    }
    if ((par_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            par_dtype.object
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
static PyObject *fparse_function_8_hstack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_blocks = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_dtype = NULL;
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
                PyErr_Format( PyExc_TypeError, "hstack() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_blocks == key )
            {
                assert( _python_par_blocks == NULL );
                _python_par_blocks = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dtype == key )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blocks, key ) == 1 )
            {
                assert( _python_par_blocks == NULL );
                _python_par_blocks = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtype, key ) == 1 )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "hstack() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_blocks != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_blocks = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_blocks == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_blocks = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_dtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_dtype = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_dtype == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_dtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_blocks == NULL || _python_par_format == NULL || _python_par_dtype == NULL ))
    {
        PyObject *values[] = { _python_par_blocks, _python_par_format, _python_par_dtype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_hstack_of_module_scipy$sparse$construct( self, _python_par_blocks, _python_par_format, _python_par_dtype );

error_exit:;

    Py_XDECREF( _python_par_blocks );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_dtype );

    return NULL;
}

static PyObject *dparse_function_8_hstack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_8_hstack_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_hstack_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_vstack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_blocks, PyObject *_python_par_format, PyObject *_python_par_dtype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_blocks; par_blocks.object = _python_par_blocks;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObjectLocalVariable var_b;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d011fd2342a33810af4cac30b61bc13b, module_scipy$sparse$construct );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bmat );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bmat );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263958 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = NULL;
    // Tried code
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = NULL;
    // Tried code
    tmp_iter_arg_1 = par_blocks.object;

    if ( tmp_iter_arg_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto try_finally_handler_2;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 484;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_2;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_3 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {
            Py_DECREF( tmp_call_pos_1 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 484;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_assign_source_4 = tmp_listcontr_1__iter_value_0.object;

    if (var_b.object == NULL)
    {
        var_b.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_b.object;
        var_b.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyList_New( 1 );
    tmp_list_element_1 = var_b.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_append_value_1, 0, tmp_list_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 484;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 484;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_format.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_format;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_dtype.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 484;
    tmp_return_value = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 484;
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
    if ((var_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b,
            var_b.object
        );

    }
    if ((par_blocks.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blocks,
            par_blocks.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
        );

    }
    if ((par_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            par_dtype.object
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
static PyObject *fparse_function_9_vstack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_blocks = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_dtype = NULL;
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
                PyErr_Format( PyExc_TypeError, "vstack() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_blocks == key )
            {
                assert( _python_par_blocks == NULL );
                _python_par_blocks = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dtype == key )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blocks, key ) == 1 )
            {
                assert( _python_par_blocks == NULL );
                _python_par_blocks = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtype, key ) == 1 )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "vstack() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_blocks != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_blocks = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_blocks == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_blocks = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_dtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_dtype = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_dtype == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_dtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_blocks == NULL || _python_par_format == NULL || _python_par_dtype == NULL ))
    {
        PyObject *values[] = { _python_par_blocks, _python_par_format, _python_par_dtype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_vstack_of_module_scipy$sparse$construct( self, _python_par_blocks, _python_par_format, _python_par_dtype );

error_exit:;

    Py_XDECREF( _python_par_blocks );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_dtype );

    return NULL;
}

static PyObject *dparse_function_9_vstack_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_9_vstack_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_vstack_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_bmat_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_blocks, PyObject *_python_par_format, PyObject *_python_par_dtype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_blocks; par_blocks.object = _python_par_blocks;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObjectLocalVariable var_M;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_A;
    PyObjectLocalVariable var_block_mask;
    PyObjectLocalVariable var_brow_lengths;
    PyObjectLocalVariable var_bcol_lengths;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_j;
    PyObjectLocalVariable var_nnz;
    PyObjectLocalVariable var_row_offsets;
    PyObjectLocalVariable var_col_offsets;
    PyObjectLocalVariable var_shape;
    PyObjectLocalVariable var_data;
    PyObjectLocalVariable var_idx_dtype;
    PyObjectLocalVariable var_row;
    PyObjectLocalVariable var_col;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_1__value_2;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_2__value_2;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_listcontr_2__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_2__listcontr_result;
    PyObjectTempVariable tmp_listcontr_2__iter_value_0;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_target;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_lower;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_upper;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_target;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_lower;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_upper;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_end;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_to_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
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
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
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
    PyObject *tmp_call_pos_10;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
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
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    PyObject *tmp_range_arg_3;
    PyObject *tmp_range_arg_4;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    PyObject *tmp_sliceass_lower_1;
    PyObject *tmp_sliceass_lower_2;
    PyObject *tmp_sliceass_lower_3;
    PyObject *tmp_sliceass_lower_4;
    PyObject *tmp_sliceass_lower_5;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_target_2;
    PyObject *tmp_sliceass_target_3;
    PyObject *tmp_sliceass_target_4;
    PyObject *tmp_sliceass_target_5;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_upper_2;
    PyObject *tmp_sliceass_upper_3;
    PyObject *tmp_sliceass_upper_4;
    PyObject *tmp_sliceass_upper_5;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_sliceass_value_2;
    PyObject *tmp_sliceass_value_3;
    PyObject *tmp_sliceass_value_4;
    PyObject *tmp_sliceass_value_5;
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
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
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
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bfa33e10ecbcfc8f1a100342be63f327, module_scipy$sparse$construct );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_blocks.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_5ab4855118dc1dee85b08d612b753df7 );
    frame_function->f_lineno = 530;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }
    if (par_blocks.object == NULL)
    {
        par_blocks.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_blocks.object;
        par_blocks.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_source_name_2 = par_blocks.object;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 532;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 532;
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
    tmp_make_exception_arg_1 = const_str_digest_719d2e8f4bf3ce05b27cb35cb101082f;
    frame_function->f_lineno = 533;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 533;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 533;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code
    tmp_source_name_3 = par_blocks.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 535;
        goto try_finally_handler_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 535;
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


        frame_function->f_lineno = 535;
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


        frame_function->f_lineno = 535;
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

    assert( var_M.object == NULL );
    var_M.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2.object;

    assert( var_N.object == NULL );
    var_N.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_N.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_assign_source_7 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 538;
        goto try_finally_handler_3;
    }
    assert( tmp_and_1__value_2.object == NULL );
    tmp_and_1__value_2.object = tmp_assign_source_7;

    tmp_cond_value_2 = tmp_and_1__value_2.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 538;
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_2.object );
        tmp_and_1__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_2 = par_format.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_2 = const_tuple_none_str_plain_csr_tuple;
    tmp_assign_source_8 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 538;
        goto try_finally_handler_6;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 538;
        goto try_finally_handler_6;
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_all );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto try_finally_handler_7;
    }
    tmp_source_name_4 = par_blocks.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 539;
        goto try_finally_handler_7;
    }

    tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_flat );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto try_finally_handler_7;
    }
    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_1 = impl_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct( tmp_dircall_arg1_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 539;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
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
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_1 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    condexpr_end_2:;
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

        goto try_finally_handler_3;
    }

    goto finally_end_5;
    finally_end_5:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_and_1__value_2.object;

    Py_INCREF( tmp_cond_value_1 );
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
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

        goto try_finally_handler_2;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 538;
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
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263991 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto try_finally_handler_2;
    }

    tmp_subscr_target_1 = par_blocks.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_1, 1, tmp_tuple_element_2 );
    tmp_call_arg_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_3 = const_int_0;
    frame_function->f_lineno = 540;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
        goto try_finally_handler_2;
    }
    assert( var_A.object == NULL );
    var_A.object = tmp_assign_source_9;

    tmp_compare_left_2 = par_dtype.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 541;
        goto try_finally_handler_2;
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
    tmp_source_name_5 = var_A.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_astype );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 542;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_4 = par_dtype.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 542;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 542;
        goto try_finally_handler_2;
    }
    assert( var_A.object != NULL );
    {
        PyObject *old = var_A.object;
        var_A.object = tmp_assign_source_10;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_A.object;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    goto branch_end_2;
    branch_no_2:;
    // Tried code
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_compexpr_left_3 = var_M.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 544;
        goto try_finally_handler_9;
    }

    tmp_compexpr_right_3 = const_int_pos_1;
    tmp_assign_source_11 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto try_finally_handler_9;
    }
    assert( tmp_and_2__value_2.object == NULL );
    tmp_and_2__value_2.object = tmp_assign_source_11;

    tmp_cond_value_5 = tmp_and_2__value_2.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto try_finally_handler_9;
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
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_2.object );
        tmp_and_2__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_compexpr_left_4 = par_format.object;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 544;
        goto try_finally_handler_12;
    }

    tmp_compexpr_right_4 = const_tuple_none_str_plain_csc_tuple;
    tmp_assign_source_12 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto try_finally_handler_12;
    }
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_cond_value_6 = tmp_and_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
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
    tmp_cond_value_4 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_all );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto try_finally_handler_13;
    }
    tmp_source_name_6 = par_blocks.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 545;
        goto try_finally_handler_13;
    }

    tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_flat );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto try_finally_handler_13;
    }
    tmp_dircall_arg1_2 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto try_finally_handler_13;
    }
    tmp_call_arg_element_5 = impl_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct( tmp_dircall_arg1_2 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto try_finally_handler_13;
    }
    frame_function->f_lineno = 545;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto try_finally_handler_13;
    }
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
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_4 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_cond_value_4 );
    condexpr_end_4:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_11;
    }

    goto finally_end_8;
    finally_end_8:;
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_4 = tmp_and_2__value_2.object;

    Py_INCREF( tmp_cond_value_4 );
    condexpr_end_3:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_8;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 544;
        goto try_finally_handler_8;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263991 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 546;
        goto try_finally_handler_8;
    }

    tmp_subscr_target_2 = par_blocks.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 546;
        goto try_finally_handler_8;
    }

    tmp_subscr_subscript_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_int_0;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 1, tmp_tuple_element_3 );
    tmp_call_arg_element_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_subscript_2 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto try_finally_handler_8;
    }
    tmp_call_arg_element_7 = const_int_pos_1;
    frame_function->f_lineno = 546;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto try_finally_handler_8;
    }
    if (var_A.object == NULL)
    {
        var_A.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_A.object;
        var_A.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_compare_left_3 = par_dtype.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 547;
        goto try_finally_handler_8;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_2)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_7 = var_A.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_astype );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 548;
        goto try_finally_handler_8;
    }
    tmp_call_arg_element_8 = par_dtype.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 548;
        goto try_finally_handler_8;
    }

    frame_function->f_lineno = 548;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 548;
        goto try_finally_handler_8;
    }
    assert( var_A.object != NULL );
    {
        PyObject *old = var_A.object;
        var_A.object = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_return_value = var_A.object;

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_2;
    branch_no_4:;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_2.object );
    tmp_and_2__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_2;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_12;
    finally_end_12:;
    branch_end_2:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_2.object );
    tmp_and_1__value_2.object = NULL;

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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_13;
    finally_end_13:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zeros );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_source_name_9 = par_blocks.object;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_4 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_bool );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 551;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 551;
        goto frame_exception_exit_1;
    }
    assert( var_block_mask.object == NULL );
    var_block_mask.object = tmp_assign_source_15;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_zeros );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_5 = var_M.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_5 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_int64 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );

        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 552;
    tmp_assign_source_16 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 552;
        goto frame_exception_exit_1;
    }
    assert( var_brow_lengths.object == NULL );
    var_brow_lengths.object = tmp_assign_source_16;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_zeros );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_4 = PyTuple_New( 1 );
    tmp_tuple_element_6 = var_N.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_6 );
    tmp_call_kw_4 = _PyDict_NewPresized( 1 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_int64 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );

        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 553;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_10, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 553;
        goto frame_exception_exit_1;
    }
    assert( var_bcol_lengths.object == NULL );
    var_bcol_lengths.object = tmp_assign_source_17;

    tmp_range_arg_1 = var_M.object;

    if ( tmp_range_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_4 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_18;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_19 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 556;
            goto try_finally_handler_14;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_assign_source_20 = tmp_for_loop_1__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }
    tmp_range_arg_2 = var_N.object;

    if ( tmp_range_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 557;
        goto try_finally_handler_14;
    }

    tmp_iter_arg_5 = BUILTIN_RANGE( tmp_range_arg_2 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto try_finally_handler_14;
    }
    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto try_finally_handler_14;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_22 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 557;
            goto try_finally_handler_15;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    tmp_assign_source_23 = tmp_for_loop_2__iter_value.object;

    if (var_j.object == NULL)
    {
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_23 );
        Py_DECREF( old );
    }
    tmp_subscr_target_3 = par_blocks.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 558;
        goto try_finally_handler_15;
    }

    tmp_subscr_subscript_3 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_i.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 558;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_3, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_j.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_3, 1, tmp_tuple_element_7 );
    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_subscript_3 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 558;
        goto try_finally_handler_15;
    }
    tmp_compare_right_4 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_isnot_3)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 559;
        goto try_finally_handler_15;
    }

    tmp_subscr_target_4 = par_blocks.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 559;
        goto try_finally_handler_15;
    }

    tmp_subscr_subscript_4 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_i.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 559;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_j.object;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 1, tmp_tuple_element_8 );
    tmp_call_arg_element_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 559;
        goto try_finally_handler_15;
    }
    frame_function->f_lineno = 559;
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 559;
        goto try_finally_handler_15;
    }
    if (var_A.object == NULL)
    {
        var_A.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = var_A.object;
        var_A.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    tmp_ass_subvalue_1 = var_A.object;

    tmp_ass_subscribed_1 = par_blocks.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 560;
        goto try_finally_handler_15;
    }

    tmp_ass_subscript_1 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_i.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_ass_subscript_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 560;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_j.object;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_9 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 560;
        goto try_finally_handler_15;
    }
    tmp_ass_subvalue_2 = Py_True;
    tmp_ass_subscribed_2 = var_block_mask.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264044 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 561;
        goto try_finally_handler_15;
    }

    tmp_ass_subscript_2 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_i.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_ass_subscript_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 561;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_j.object;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_10 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscript_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 561;
        goto try_finally_handler_15;
    }
    tmp_subscr_target_5 = var_brow_lengths.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264100 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 563;
        goto try_finally_handler_15;
    }

    tmp_subscr_subscript_5 = var_i.object;

    if ( tmp_subscr_subscript_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 563;
        goto try_finally_handler_15;
    }

    tmp_compare_left_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 563;
        goto try_finally_handler_15;
    }
    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 563;
        goto try_finally_handler_15;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_15 = var_A.object;

    tmp_subscr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_shape );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 564;
        goto try_finally_handler_15;
    }
    tmp_subscr_subscript_6 = const_int_0;
    tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 564;
        goto try_finally_handler_15;
    }
    tmp_ass_subscribed_3 = var_brow_lengths.object;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264100 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 564;
        goto try_finally_handler_15;
    }

    tmp_ass_subscript_3 = var_i.object;

    if ( tmp_ass_subscript_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 564;
        goto try_finally_handler_15;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 564;
        goto try_finally_handler_15;
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_subscr_target_7 = var_brow_lengths.object;

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264100 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 566;
        goto try_finally_handler_15;
    }

    tmp_subscr_subscript_7 = var_i.object;

    if ( tmp_subscr_subscript_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 566;
        goto try_finally_handler_15;
    }

    tmp_compare_left_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 566;
        goto try_finally_handler_15;
    }
    tmp_source_name_16 = var_A.object;

    tmp_subscr_target_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_shape );
    if ( tmp_subscr_target_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        frame_function->f_lineno = 566;
        goto try_finally_handler_15;
    }
    tmp_subscr_subscript_8 = const_int_0;
    tmp_compare_right_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_target_8 );
    if ( tmp_compare_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        frame_function->f_lineno = 566;
        goto try_finally_handler_15;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_6 );
        Py_DECREF( tmp_compare_right_6 );

        frame_function->f_lineno = 566;
        goto try_finally_handler_15;
    }
    Py_DECREF( tmp_compare_left_6 );
    Py_DECREF( tmp_compare_right_6 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_binop_left_1 = const_str_digest_9be13ebfbe0ace747bc5f6752dd0702a;
    tmp_binop_right_1 = var_i.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 567;
        goto try_finally_handler_15;
    }

    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 567;
        goto try_finally_handler_15;
    }
    frame_function->f_lineno = 567;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 567;
        goto try_finally_handler_15;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 567;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_15;
    branch_no_8:;
    branch_end_7:;
    tmp_subscr_target_9 = var_bcol_lengths.object;

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264158 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 569;
        goto try_finally_handler_15;
    }

    tmp_subscr_subscript_9 = var_j.object;

    tmp_compare_left_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 569;
        goto try_finally_handler_15;
    }
    tmp_compare_right_7 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        frame_function->f_lineno = 569;
        goto try_finally_handler_15;
    }
    Py_DECREF( tmp_compare_left_7 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_17 = var_A.object;

    tmp_subscr_target_10 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_shape );
    if ( tmp_subscr_target_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto try_finally_handler_15;
    }
    tmp_subscr_subscript_10 = const_int_pos_1;
    tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    Py_DECREF( tmp_subscr_target_10 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto try_finally_handler_15;
    }
    tmp_ass_subscribed_4 = var_bcol_lengths.object;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264158 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 570;
        goto try_finally_handler_15;
    }

    tmp_ass_subscript_4 = var_j.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto try_finally_handler_15;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_subscr_target_11 = var_bcol_lengths.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264158 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 572;
        goto try_finally_handler_15;
    }

    tmp_subscr_subscript_11 = var_j.object;

    tmp_compare_left_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 572;
        goto try_finally_handler_15;
    }
    tmp_source_name_18 = var_A.object;

    tmp_subscr_target_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_shape );
    if ( tmp_subscr_target_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        frame_function->f_lineno = 572;
        goto try_finally_handler_15;
    }
    tmp_subscr_subscript_12 = const_int_pos_1;
    tmp_compare_right_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    Py_DECREF( tmp_subscr_target_12 );
    if ( tmp_compare_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        frame_function->f_lineno = 572;
        goto try_finally_handler_15;
    }
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_8 );
        Py_DECREF( tmp_compare_right_8 );

        frame_function->f_lineno = 572;
        goto try_finally_handler_15;
    }
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if (tmp_cmp_NotEq_3 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_binop_left_2 = const_str_digest_591d7333d98cff4ac7b406be9bd3ae38;
    tmp_binop_right_2 = var_j.object;

    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 573;
        goto try_finally_handler_15;
    }
    frame_function->f_lineno = 573;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 573;
        goto try_finally_handler_15;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 573;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_15;
    branch_no_10:;
    branch_end_9:;
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto try_finally_handler_15;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto try_finally_handler_14;
    }

    goto finally_end_14;
    finally_end_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 556;
        goto try_finally_handler_14;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
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
    tmp_source_name_19 = var_brow_lengths.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264100 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 576;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_min );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 576;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 576;
    tmp_compare_left_9 = CALL_FUNCTION_NO_ARGS( tmp_called_12 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 576;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = const_int_0;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        frame_function->f_lineno = 576;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_binop_left_3 = const_str_digest_329155dd6a2a4860f285776dffc4c100;
    tmp_source_name_20 = var_brow_lengths.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264100 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 577;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_argmin );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 577;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 577;
    tmp_binop_right_3 = CALL_FUNCTION_NO_ARGS( tmp_called_13 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 577;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 577;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 577;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    Py_DECREF( tmp_make_exception_arg_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 577;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 577;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_11:;
    tmp_source_name_21 = var_bcol_lengths.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264158 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 578;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_min );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 578;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 578;
    tmp_compare_left_10 = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 578;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = const_int_0;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        frame_function->f_lineno = 578;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_binop_left_4 = const_str_digest_b80234edd49fe5c787cee95cf7d9778c;
    tmp_source_name_22 = var_bcol_lengths.object;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264158 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 579;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_argmin );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 579;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 579;
    tmp_binop_right_4 = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 579;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_make_exception_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 579;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 579;
    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_5 );
    Py_DECREF( tmp_make_exception_arg_5 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 579;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_5;
    frame_function->f_lineno = 579;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_12:;
    tmp_called_16 = LOOKUP_BUILTIN( const_str_plain_sum );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 581;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_5 = NULL;
    // Tried code
    tmp_call_pos_5 = PyTuple_New( 1 );
    tmp_tuple_element_11 = NULL;
    // Tried code
    tmp_subscr_target_13 = par_blocks.object;

    if ( tmp_subscr_target_13 == NULL )
    {
        Py_DECREF( tmp_call_pos_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 581;
        goto try_finally_handler_17;
    }

    tmp_subscr_subscript_13 = var_block_mask.object;

    if ( tmp_subscr_subscript_13 == NULL )
    {
        Py_DECREF( tmp_call_pos_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264044 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 581;
        goto try_finally_handler_17;
    }

    tmp_iter_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_5 );

        frame_function->f_lineno = 581;
        goto try_finally_handler_17;
    }
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_5 );

        frame_function->f_lineno = 581;
        goto try_finally_handler_17;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_26;

    tmp_assign_source_27 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_27;

    loop_start_3:;
    tmp_next_source_3 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_28 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {
            Py_DECREF( tmp_call_pos_5 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 581;
            goto try_finally_handler_17;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_28;
        Py_DECREF( old );
    }
    tmp_assign_source_29 = tmp_listcontr_1__iter_value_0.object;

    if (var_A.object == NULL)
    {
        var_A.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
    }
    else
    {
        PyObject *old = var_A.object;
        var_A.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_source_name_23 = var_A.object;

    tmp_append_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_nnz );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_5 );

        frame_function->f_lineno = 581;
        goto try_finally_handler_17;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_5 );

        frame_function->f_lineno = 581;
        goto try_finally_handler_17;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_5 );

        frame_function->f_lineno = 581;
        goto try_finally_handler_17;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_tuple_element_11 = tmp_listcontr_1__listcontr_result.object;

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

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
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
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_11 );
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

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
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
    frame_function->f_lineno = 581;
    tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS( tmp_called_16, tmp_call_pos_5 );
    Py_DECREF( tmp_call_pos_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 581;
        goto frame_exception_exit_1;
    }
    assert( var_nnz.object == NULL );
    var_nnz.object = tmp_assign_source_25;

    tmp_compare_left_11 = par_dtype.object;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 582;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = Py_None;
    tmp_is_1 = ( tmp_compare_left_11 == tmp_compare_right_11 );
    if (tmp_is_1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_upcast );

    if (unlikely( tmp_dircall_arg1_3 == NULL ))
    {
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_upcast );
    }

    if ( tmp_dircall_arg1_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 260764 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 583;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 583;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_6 = NULL;
    // Tried code
    tmp_call_pos_6 = PyTuple_New( 1 );
    tmp_tuple_element_12 = NULL;
    // Tried code
    tmp_subscr_target_14 = par_blocks.object;

    if ( tmp_subscr_target_14 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 583;
        goto try_finally_handler_19;
    }

    tmp_subscr_subscript_14 = var_block_mask.object;

    if ( tmp_subscr_subscript_14 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264044 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 583;
        goto try_finally_handler_19;
    }

    tmp_iter_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_iter_arg_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 583;
        goto try_finally_handler_19;
    }
    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_7 );
    Py_DECREF( tmp_iter_arg_7 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 583;
        goto try_finally_handler_19;
    }
    assert( tmp_listcontr_2__listcontr_iter.object == NULL );
    tmp_listcontr_2__listcontr_iter.object = tmp_assign_source_31;

    tmp_assign_source_32 = PyList_New( 0 );
    assert( tmp_listcontr_2__listcontr_result.object == NULL );
    tmp_listcontr_2__listcontr_result.object = tmp_assign_source_32;

    loop_start_4:;
    tmp_next_source_4 = tmp_listcontr_2__listcontr_iter.object;

    tmp_assign_source_33 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_33 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {
            Py_DECREF( tmp_call_pos_6 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 583;
            goto try_finally_handler_19;
        }
    }

    if (tmp_listcontr_2__iter_value_0.object == NULL)
    {
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = tmp_listcontr_2__iter_value_0.object;
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_33;
        Py_DECREF( old );
    }
    tmp_assign_source_34 = tmp_listcontr_2__iter_value_0.object;

    if (var_A.object == NULL)
    {
        var_A.object = INCREASE_REFCOUNT( tmp_assign_source_34 );
    }
    else
    {
        PyObject *old = var_A.object;
        var_A.object = INCREASE_REFCOUNT( tmp_assign_source_34 );
        Py_DECREF( old );
    }
    tmp_append_to_2 = tmp_listcontr_2__listcontr_result.object;

    tmp_source_name_24 = var_A.object;

    tmp_append_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_dtype );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 583;
        goto try_finally_handler_19;
    }
    tmp_res = PyList_Append( tmp_append_to_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 583;
        goto try_finally_handler_19;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 583;
        goto try_finally_handler_19;
    }
    goto loop_start_4;
    loop_end_4:;
    tmp_tuple_element_12 = tmp_listcontr_2__listcontr_result.object;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_2__iter_value_0.object );
    tmp_listcontr_2__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto try_finally_handler_18;
    }

    goto finally_end_18;
    finally_end_18:;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 0, tmp_tuple_element_12 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_2__listcontr_result.object );
    tmp_listcontr_2__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_2__listcontr_iter.object );
    tmp_listcontr_2__listcontr_iter.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
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
    frame_function->f_lineno = 583;
    tmp_dircall_arg2_1 = CALL_FUNCTION_WITH_POSARGS( tmp_called_17, tmp_call_pos_6 );
    Py_DECREF( tmp_call_pos_6 );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 583;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_3 ), tmp_dircall_arg2_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 583;
        goto frame_exception_exit_1;
    }
    if (par_dtype.object == NULL)
    {
        par_dtype.object = tmp_assign_source_30;
    }
    else
    {
        PyObject *old = par_dtype.object;
        par_dtype.object = tmp_assign_source_30;
        Py_DECREF( old );
    }
    branch_no_13:;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 585;
        goto frame_exception_exit_1;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_concatenate );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 585;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = PyTuple_New( 2 );
    tmp_tuple_element_13 = LIST_COPY( const_list_int_0_list );
    PyTuple_SET_ITEM( tmp_call_arg_element_10, 0, tmp_tuple_element_13 );
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 585;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_cumsum );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 585;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = var_brow_lengths.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_called_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264100 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 585;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 585;
    tmp_tuple_element_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_tuple_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 585;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_10, 1, tmp_tuple_element_13 );
    frame_function->f_lineno = 585;
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_18 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 585;
        goto frame_exception_exit_1;
    }
    assert( var_row_offsets.object == NULL );
    var_row_offsets.object = tmp_assign_source_35;

    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 586;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_concatenate );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 586;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = PyTuple_New( 2 );
    tmp_tuple_element_14 = LIST_COPY( const_list_int_0_list );
    PyTuple_SET_ITEM( tmp_call_arg_element_12, 0, tmp_tuple_element_14 );
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 586;
        goto frame_exception_exit_1;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_cumsum );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 586;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = var_bcol_lengths.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_called_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264158 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 586;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 586;
    tmp_tuple_element_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_21 );
    if ( tmp_tuple_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 586;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_12, 1, tmp_tuple_element_14 );
    frame_function->f_lineno = 586;
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 586;
        goto frame_exception_exit_1;
    }
    assert( var_col_offsets.object == NULL );
    var_col_offsets.object = tmp_assign_source_36;

    tmp_assign_source_37 = PyTuple_New( 2 );
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 588;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_sum );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        frame_function->f_lineno = 588;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = var_brow_lengths.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        Py_DECREF( tmp_called_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264100 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 588;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 588;
    tmp_tuple_element_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        frame_function->f_lineno = 588;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_15 );
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 588;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_sum );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        frame_function->f_lineno = 588;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = var_bcol_lengths.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        Py_DECREF( tmp_called_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264158 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 588;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 588;
    tmp_tuple_element_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_tuple_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        frame_function->f_lineno = 588;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_37, 1, tmp_tuple_element_15 );
    assert( var_shape.object == NULL );
    var_shape.object = tmp_assign_source_37;

    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 590;
        goto frame_exception_exit_1;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_empty );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 590;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_7 = PyTuple_New( 1 );
    tmp_tuple_element_16 = var_nnz.object;

    if ( tmp_tuple_element_16 == NULL )
    {
        Py_DECREF( tmp_called_24 );
        Py_DECREF( tmp_call_pos_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 590;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_call_pos_7, 0, tmp_tuple_element_16 );
    tmp_call_kw_5 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = par_dtype.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_24 );
        Py_DECREF( tmp_call_pos_7 );
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 590;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 590;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_24, tmp_call_pos_7, tmp_call_kw_5 );
    Py_DECREF( tmp_called_24 );
    Py_DECREF( tmp_call_pos_7 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 590;
        goto frame_exception_exit_1;
    }
    assert( var_data.object == NULL );
    var_data.object = tmp_assign_source_38;

    tmp_called_25 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype );

    if (unlikely( tmp_called_25 == NULL ))
    {
        tmp_called_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_index_dtype );
    }

    if ( tmp_called_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 260574 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 591;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_6 = _PyDict_NewPresized( 1 );
    tmp_called_26 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_6 );

        frame_function->f_lineno = 591;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = var_shape.object;

    frame_function->f_lineno = 591;
    tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_16 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_6 );

        frame_function->f_lineno = 591;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_maxval;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    frame_function->f_lineno = 591;
    tmp_assign_source_39 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_25, tmp_call_kw_6 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 591;
        goto frame_exception_exit_1;
    }
    assert( var_idx_dtype.object == NULL );
    var_idx_dtype.object = tmp_assign_source_39;

    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 592;
        goto frame_exception_exit_1;
    }

    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_empty );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 592;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_8 = PyTuple_New( 1 );
    tmp_tuple_element_17 = var_nnz.object;

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_pos_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 592;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_call_pos_8, 0, tmp_tuple_element_17 );
    tmp_call_kw_7 = _PyDict_NewPresized( 1 );
    tmp_dict_value_6 = var_idx_dtype.object;

    tmp_dict_key_6 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_7, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 592;
    tmp_assign_source_40 = CALL_FUNCTION( tmp_called_27, tmp_call_pos_8, tmp_call_kw_7 );
    Py_DECREF( tmp_called_27 );
    Py_DECREF( tmp_call_pos_8 );
    Py_DECREF( tmp_call_kw_7 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 592;
        goto frame_exception_exit_1;
    }
    assert( var_row.object == NULL );
    var_row.object = tmp_assign_source_40;

    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 593;
        goto frame_exception_exit_1;
    }

    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_empty );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 593;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_9 = PyTuple_New( 1 );
    tmp_tuple_element_18 = var_nnz.object;

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_pos_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 593;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_call_pos_9, 0, tmp_tuple_element_18 );
    tmp_call_kw_8 = _PyDict_NewPresized( 1 );
    tmp_dict_value_7 = var_idx_dtype.object;

    tmp_dict_key_7 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_8, tmp_dict_key_7, tmp_dict_value_7 );
    frame_function->f_lineno = 593;
    tmp_assign_source_41 = CALL_FUNCTION( tmp_called_28, tmp_call_pos_9, tmp_call_kw_8 );
    Py_DECREF( tmp_called_28 );
    Py_DECREF( tmp_call_pos_9 );
    Py_DECREF( tmp_call_kw_8 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 593;
        goto frame_exception_exit_1;
    }
    assert( var_col.object == NULL );
    var_col.object = tmp_assign_source_41;

    tmp_assign_source_42 = const_int_0;
    if (var_nnz.object == NULL)
    {
        var_nnz.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
    }
    else
    {
        PyObject *old = var_nnz.object;
        var_nnz.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
        Py_DECREF( old );
    }
    tmp_range_arg_3 = var_M.object;

    if ( tmp_range_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 596;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_8 = BUILTIN_RANGE( tmp_range_arg_3 );
    if ( tmp_iter_arg_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 596;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_43 = MAKE_ITERATOR( tmp_iter_arg_8 );
    Py_DECREF( tmp_iter_arg_8 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 596;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_43;

    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_44 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_44 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 596;
            goto try_finally_handler_20;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_44;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_44;
        Py_DECREF( old );
    }
    tmp_assign_source_45 = tmp_for_loop_3__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
        Py_DECREF( old );
    }
    tmp_range_arg_4 = var_N.object;

    if ( tmp_range_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 597;
        goto try_finally_handler_20;
    }

    tmp_iter_arg_9 = BUILTIN_RANGE( tmp_range_arg_4 );
    if ( tmp_iter_arg_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 597;
        goto try_finally_handler_20;
    }
    tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_9 );
    Py_DECREF( tmp_iter_arg_9 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 597;
        goto try_finally_handler_20;
    }
    if (tmp_for_loop_4__for_iterator.object == NULL)
    {
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_46;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__for_iterator.object;
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_46;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_47 = ITERATOR_NEXT( tmp_next_source_6 );
    if (tmp_assign_source_47 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_6;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 597;
            goto try_finally_handler_21;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_47;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_47;
        Py_DECREF( old );
    }
    tmp_assign_source_48 = tmp_for_loop_4__iter_value.object;

    if (var_j.object == NULL)
    {
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_48 );
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_48 );
        Py_DECREF( old );
    }
    tmp_subscr_target_15 = par_blocks.object;

    if ( tmp_subscr_target_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 598;
        goto try_finally_handler_21;
    }

    tmp_subscr_subscript_15 = PyTuple_New( 2 );
    tmp_tuple_element_19 = var_i.object;

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 598;
        goto try_finally_handler_21;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_15, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = var_j.object;

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_15, 1, tmp_tuple_element_19 );
    tmp_compare_left_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    Py_DECREF( tmp_subscr_subscript_15 );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 598;
        goto try_finally_handler_21;
    }
    tmp_compare_right_12 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_12 != tmp_compare_right_12 );
    Py_DECREF( tmp_compare_left_12 );
    if (tmp_isnot_4)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_subscr_target_16 = par_blocks.object;

    if ( tmp_subscr_target_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263682 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 599;
        goto try_finally_handler_21;
    }

    tmp_subscr_subscript_16 = PyTuple_New( 2 );
    tmp_tuple_element_20 = var_i.object;

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 599;
        goto try_finally_handler_21;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_16, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = var_j.object;

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_16, 1, tmp_tuple_element_20 );
    tmp_assign_source_49 = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    Py_DECREF( tmp_subscr_subscript_16 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 599;
        goto try_finally_handler_21;
    }
    if (var_A.object == NULL)
    {
        var_A.object = tmp_assign_source_49;
    }
    else
    {
        PyObject *old = var_A.object;
        var_A.object = tmp_assign_source_49;
        Py_DECREF( old );
    }
    tmp_source_name_34 = var_A.object;

    tmp_sliceass_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_data );
    if ( tmp_sliceass_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 600;
        goto try_finally_handler_21;
    }
    tmp_sliceass_target_1 = var_data.object;

    if ( tmp_sliceass_target_1 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 600;
        goto try_finally_handler_21;
    }

    tmp_sliceass_lower_1 = var_nnz.object;

    if ( tmp_sliceass_lower_1 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 600;
        goto try_finally_handler_21;
    }

    tmp_binop_left_5 = var_nnz.object;

    if ( tmp_binop_left_5 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 600;
        goto try_finally_handler_21;
    }

    tmp_source_name_35 = var_A.object;

    tmp_binop_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_nnz );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_sliceass_value_1 );

        frame_function->f_lineno = 600;
        goto try_finally_handler_21;
    }
    tmp_sliceass_upper_1 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_sliceass_upper_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_sliceass_value_1 );

        frame_function->f_lineno = 600;
        goto try_finally_handler_21;
    }
    tmp_result = SET_SLICE( tmp_sliceass_target_1, tmp_sliceass_lower_1, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_upper_1 );
    Py_DECREF( tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 600;
        goto try_finally_handler_21;
    }
    tmp_source_name_36 = var_A.object;

    tmp_sliceass_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_row );
    if ( tmp_sliceass_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 601;
        goto try_finally_handler_21;
    }
    tmp_sliceass_target_2 = var_row.object;

    if ( tmp_sliceass_target_2 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259591 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 601;
        goto try_finally_handler_21;
    }

    tmp_sliceass_lower_2 = var_nnz.object;

    if ( tmp_sliceass_lower_2 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 601;
        goto try_finally_handler_21;
    }

    tmp_binop_left_6 = var_nnz.object;

    if ( tmp_binop_left_6 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 601;
        goto try_finally_handler_21;
    }

    tmp_source_name_37 = var_A.object;

    tmp_binop_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_nnz );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_sliceass_value_2 );

        frame_function->f_lineno = 601;
        goto try_finally_handler_21;
    }
    tmp_sliceass_upper_2 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_sliceass_upper_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_sliceass_value_2 );

        frame_function->f_lineno = 601;
        goto try_finally_handler_21;
    }
    tmp_result = SET_SLICE( tmp_sliceass_target_2, tmp_sliceass_lower_2, tmp_sliceass_upper_2, tmp_sliceass_value_2 );
    Py_DECREF( tmp_sliceass_upper_2 );
    Py_DECREF( tmp_sliceass_value_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 601;
        goto try_finally_handler_21;
    }
    tmp_source_name_38 = var_A.object;

    tmp_sliceass_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_col );
    if ( tmp_sliceass_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 602;
        goto try_finally_handler_21;
    }
    tmp_sliceass_target_3 = var_col.object;

    if ( tmp_sliceass_target_3 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199670 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 602;
        goto try_finally_handler_21;
    }

    tmp_sliceass_lower_3 = var_nnz.object;

    if ( tmp_sliceass_lower_3 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 602;
        goto try_finally_handler_21;
    }

    tmp_binop_left_7 = var_nnz.object;

    if ( tmp_binop_left_7 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 602;
        goto try_finally_handler_21;
    }

    tmp_source_name_39 = var_A.object;

    tmp_binop_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_nnz );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_sliceass_value_3 );

        frame_function->f_lineno = 602;
        goto try_finally_handler_21;
    }
    tmp_sliceass_upper_3 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_sliceass_upper_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_sliceass_value_3 );

        frame_function->f_lineno = 602;
        goto try_finally_handler_21;
    }
    tmp_result = SET_SLICE( tmp_sliceass_target_3, tmp_sliceass_lower_3, tmp_sliceass_upper_3, tmp_sliceass_value_3 );
    Py_DECREF( tmp_sliceass_upper_3 );
    Py_DECREF( tmp_sliceass_value_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 602;
        goto try_finally_handler_21;
    }
    tmp_assign_source_50 = var_row.object;

    if ( tmp_assign_source_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259591 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 604;
        goto try_finally_handler_21;
    }

    if (tmp_inplace_assign_1__inplace_target.object == NULL)
    {
        tmp_inplace_assign_1__inplace_target.object = INCREASE_REFCOUNT( tmp_assign_source_50 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_target.object;
        tmp_inplace_assign_1__inplace_target.object = INCREASE_REFCOUNT( tmp_assign_source_50 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_assign_source_51 = var_nnz.object;

    if ( tmp_assign_source_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }

    if (tmp_inplace_assign_1__inplace_lower.object == NULL)
    {
        tmp_inplace_assign_1__inplace_lower.object = INCREASE_REFCOUNT( tmp_assign_source_51 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_lower.object;
        tmp_inplace_assign_1__inplace_lower.object = INCREASE_REFCOUNT( tmp_assign_source_51 );
        Py_DECREF( old );
    }
    tmp_binop_left_8 = var_nnz.object;

    if ( tmp_binop_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }

    tmp_source_name_40 = var_A.object;

    tmp_binop_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_nnz );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }
    tmp_assign_source_52 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }
    if (tmp_inplace_assign_1__inplace_upper.object == NULL)
    {
        tmp_inplace_assign_1__inplace_upper.object = tmp_assign_source_52;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_upper.object;
        tmp_inplace_assign_1__inplace_upper.object = tmp_assign_source_52;
        Py_DECREF( old );
    }
    tmp_slice_source_1 = tmp_inplace_assign_1__inplace_target.object;

    tmp_slice_lower_1 = tmp_inplace_assign_1__inplace_lower.object;

    tmp_slice_upper_1 = tmp_inplace_assign_1__inplace_upper.object;

    tmp_binop_left_9 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }
    tmp_subscr_target_17 = var_row_offsets.object;

    if ( tmp_subscr_target_17 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264265 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }

    tmp_subscr_subscript_17 = var_i.object;

    if ( tmp_subscr_subscript_17 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }

    tmp_binop_right_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_17, tmp_subscr_subscript_17 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_9 );

        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }
    tmp_sliceass_value_4 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_sliceass_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }
    tmp_sliceass_target_4 = tmp_inplace_assign_1__inplace_target.object;

    tmp_sliceass_lower_4 = tmp_inplace_assign_1__inplace_lower.object;

    tmp_sliceass_upper_4 = tmp_inplace_assign_1__inplace_upper.object;

    tmp_result = SET_SLICE( tmp_sliceass_target_4, tmp_sliceass_lower_4, tmp_sliceass_upper_4, tmp_sliceass_value_4 );
    Py_DECREF( tmp_sliceass_value_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 604;
        goto try_finally_handler_22;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_target.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_target.object );
        tmp_inplace_assign_1__inplace_target.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_lower.object );
    tmp_inplace_assign_1__inplace_lower.object = NULL;

    Py_XDECREF( tmp_inplace_assign_1__inplace_upper.object );
    tmp_inplace_assign_1__inplace_upper.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_20 != NULL )
    {
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;

        goto try_finally_handler_21;
    }

    goto finally_end_20;
    finally_end_20:;
    tmp_assign_source_53 = var_col.object;

    if ( tmp_assign_source_53 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199670 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 605;
        goto try_finally_handler_21;
    }

    if (tmp_inplace_assign_2__inplace_target.object == NULL)
    {
        tmp_inplace_assign_2__inplace_target.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_target.object;
        tmp_inplace_assign_2__inplace_target.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_assign_source_54 = var_nnz.object;

    if ( tmp_assign_source_54 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }

    if (tmp_inplace_assign_2__inplace_lower.object == NULL)
    {
        tmp_inplace_assign_2__inplace_lower.object = INCREASE_REFCOUNT( tmp_assign_source_54 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_lower.object;
        tmp_inplace_assign_2__inplace_lower.object = INCREASE_REFCOUNT( tmp_assign_source_54 );
        Py_DECREF( old );
    }
    tmp_binop_left_10 = var_nnz.object;

    if ( tmp_binop_left_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }

    tmp_source_name_41 = var_A.object;

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }

    tmp_binop_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_nnz );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }
    tmp_assign_source_55 = BINARY_OPERATION_ADD( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }
    if (tmp_inplace_assign_2__inplace_upper.object == NULL)
    {
        tmp_inplace_assign_2__inplace_upper.object = tmp_assign_source_55;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_upper.object;
        tmp_inplace_assign_2__inplace_upper.object = tmp_assign_source_55;
        Py_DECREF( old );
    }
    tmp_slice_source_2 = tmp_inplace_assign_2__inplace_target.object;

    tmp_slice_lower_2 = tmp_inplace_assign_2__inplace_lower.object;

    tmp_slice_upper_2 = tmp_inplace_assign_2__inplace_upper.object;

    tmp_binop_left_11 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, tmp_slice_upper_2 );
    if ( tmp_binop_left_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }
    tmp_subscr_target_18 = var_col_offsets.object;

    if ( tmp_subscr_target_18 == NULL )
    {
        Py_DECREF( tmp_binop_left_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264322 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }

    tmp_subscr_subscript_18 = var_j.object;

    if ( tmp_subscr_subscript_18 == NULL )
    {
        Py_DECREF( tmp_binop_left_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54692 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }

    tmp_binop_right_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_18, tmp_subscr_subscript_18 );
    if ( tmp_binop_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_11 );

        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }
    tmp_sliceass_value_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_left_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_sliceass_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }
    tmp_sliceass_target_5 = tmp_inplace_assign_2__inplace_target.object;

    tmp_sliceass_lower_5 = tmp_inplace_assign_2__inplace_lower.object;

    tmp_sliceass_upper_5 = tmp_inplace_assign_2__inplace_upper.object;

    tmp_result = SET_SLICE( tmp_sliceass_target_5, tmp_sliceass_lower_5, tmp_sliceass_upper_5, tmp_sliceass_value_5 );
    Py_DECREF( tmp_sliceass_value_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 605;
        goto try_finally_handler_23;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_23:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_13 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_2__inplace_target.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_target.object );
        tmp_inplace_assign_2__inplace_target.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_lower.object );
    tmp_inplace_assign_2__inplace_lower.object = NULL;

    Py_XDECREF( tmp_inplace_assign_2__inplace_upper.object );
    tmp_inplace_assign_2__inplace_upper.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_13;
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
    tmp_assign_source_56 = var_nnz.object;

    if ( tmp_assign_source_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264216 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 607;
        goto try_finally_handler_21;
    }

    if (tmp_inplace_assign_3__inplace_start.object == NULL)
    {
        tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_56 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_3__inplace_start.object;
        tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_56 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_12 = tmp_inplace_assign_3__inplace_start.object;

    tmp_source_name_42 = var_A.object;

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 607;
        goto try_finally_handler_24;
    }

    tmp_binop_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_nnz );
    if ( tmp_binop_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 607;
        goto try_finally_handler_24;
    }
    tmp_assign_source_57 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 607;
        goto try_finally_handler_24;
    }
    if (tmp_inplace_assign_3__inplace_end.object == NULL)
    {
        tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_57;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_3__inplace_end.object;
        tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_57;
        Py_DECREF( old );
    }
    tmp_compare_left_13 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_13 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_5 = ( tmp_compare_left_13 != tmp_compare_right_13 );
    if (tmp_isnot_5)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_assign_source_58 = tmp_inplace_assign_3__inplace_end.object;

    if (var_nnz.object == NULL)
    {
        var_nnz.object = INCREASE_REFCOUNT( tmp_assign_source_58 );
    }
    else
    {
        PyObject *old = var_nnz.object;
        var_nnz.object = INCREASE_REFCOUNT( tmp_assign_source_58 );
        Py_DECREF( old );
    }
    branch_no_15:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_14;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_22 != NULL )
    {
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;

        goto try_finally_handler_21;
    }

    goto finally_end_22;
    finally_end_22:;
    branch_no_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 597;
        goto try_finally_handler_21;
    }
    goto loop_start_6;
    loop_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_15 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_15;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_23 != NULL )
    {
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;

        goto try_finally_handler_20;
    }

    goto finally_end_23;
    finally_end_23:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 596;
        goto try_finally_handler_20;
    }
    goto loop_start_5;
    loop_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_16 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_16;
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
    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_10 = PyTuple_New( 1 );
    tmp_tuple_element_21 = PyTuple_New( 2 );
    tmp_tuple_element_22 = var_data.object;

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_call_pos_10 );
        Py_DECREF( tmp_tuple_element_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_tuple_element_21, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = PyTuple_New( 2 );
    tmp_tuple_element_23 = var_row.object;

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_call_pos_10 );
        Py_DECREF( tmp_tuple_element_21 );
        Py_DECREF( tmp_tuple_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259591 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_tuple_element_22, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = var_col.object;

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_call_pos_10 );
        Py_DECREF( tmp_tuple_element_21 );
        Py_DECREF( tmp_tuple_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199670 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_tuple_element_22, 1, tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_tuple_element_21, 1, tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_call_pos_10, 0, tmp_tuple_element_21 );
    tmp_call_kw_9 = _PyDict_NewPresized( 1 );
    tmp_dict_value_8 = var_shape.object;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_10 );
        Py_DECREF( tmp_call_kw_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_9, tmp_dict_key_8, tmp_dict_value_8 );
    frame_function->f_lineno = 609;
    tmp_source_name_43 = CALL_FUNCTION( tmp_called_30, tmp_call_pos_10, tmp_call_kw_9 );
    Py_DECREF( tmp_call_pos_10 );
    Py_DECREF( tmp_call_kw_9 );
    if ( tmp_source_name_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }
    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_43 );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = par_format.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_called_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 609;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 609;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_29 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 609;
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
    if ((var_A.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A,
            var_A.object
        );

    }
    if ((var_block_mask.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_block_mask,
            var_block_mask.object
        );

    }
    if ((var_brow_lengths.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_brow_lengths,
            var_brow_lengths.object
        );

    }
    if ((var_bcol_lengths.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bcol_lengths,
            var_bcol_lengths.object
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
    if ((var_j.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_j,
            var_j.object
        );

    }
    if ((var_nnz.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nnz,
            var_nnz.object
        );

    }
    if ((var_row_offsets.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_row_offsets,
            var_row_offsets.object
        );

    }
    if ((var_col_offsets.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_col_offsets,
            var_col_offsets.object
        );

    }
    if ((var_shape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shape,
            var_shape.object
        );

    }
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            var_data.object
        );

    }
    if ((var_idx_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_idx_dtype,
            var_idx_dtype.object
        );

    }
    if ((var_row.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_row,
            var_row.object
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
    if ((par_blocks.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blocks,
            par_blocks.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
        );

    }
    if ((par_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            par_dtype.object
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
static PyObject *fparse_function_10_bmat_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_blocks = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_dtype = NULL;
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
                PyErr_Format( PyExc_TypeError, "bmat() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_blocks == key )
            {
                assert( _python_par_blocks == NULL );
                _python_par_blocks = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dtype == key )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blocks, key ) == 1 )
            {
                assert( _python_par_blocks == NULL );
                _python_par_blocks = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtype, key ) == 1 )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "bmat() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_blocks != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_blocks = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_blocks == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_blocks = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_dtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_dtype = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_dtype == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_dtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_blocks == NULL || _python_par_format == NULL || _python_par_dtype == NULL ))
    {
        PyObject *values[] = { _python_par_blocks, _python_par_format, _python_par_dtype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_bmat_of_module_scipy$sparse$construct( self, _python_par_blocks, _python_par_format, _python_par_dtype );

error_exit:;

    Py_XDECREF( _python_par_blocks );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_dtype );

    return NULL;
}

static PyObject *dparse_function_10_bmat_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_10_bmat_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_bmat_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure___iterator;
    PyObjectLocalVariable closure_b;
    PyObjectTempVariable closure_iter_value_0;
};

static void _context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_t *_python_context = (struct _context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_t *_python_context = (_context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_t *)generator->m_context;


    // Local variable inits
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_next_source_1;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_0e211eb11b26793b2b1cbb92a0e3aa7f, module_scipy$sparse$construct );

    Py_INCREF( frame_function );
    generator->m_frame = frame_function;
#if PYTHON_VERSION >= 340
    frame_function->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    // Tried code
    // Throwing into unstarted generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            goto try_finally_handler_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_next_source_1 = _python_context->closure___iterator.object;

    if ( tmp_next_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8745 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 539;
        goto try_finally_handler_1;
    }

    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_1 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 539;
            goto try_finally_handler_1;
        }
    }

    if (_python_context->closure_iter_value_0.object == NULL)
    {
        _python_context->closure_iter_value_0.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = _python_context->closure_iter_value_0.object;
        _python_context->closure_iter_value_0.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_assign_source_2 = _python_context->closure_iter_value_0.object;

    if (_python_context->closure_b.object == NULL)
    {
        _python_context->closure_b.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = _python_context->closure_b.object;
        _python_context->closure_b.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }
    tmp_isinstance_inst_1 = _python_context->closure_b.object;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csr_matrix );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263471 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 539;
        goto try_finally_handler_1;
    }

    tmp_yield_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_yield_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto try_finally_handler_1;
    }
    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_yield_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
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
    Py_XDECREF( _python_context->closure_iter_value_0.object );
    _python_context->closure_iter_value_0.object = NULL;

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

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif

    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;

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
    if ((_python_context->closure_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b,
            _python_context->closure_b.object
        );

    }
    if ((_python_context->closure___iterator.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___iterator,
            _python_context->closure___iterator.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


#if PYTHON_VERSION > 300
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    Py_DECREF( frame_function );
    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    PyErr_Restore( INCREASE_REFCOUNT( PyExc_StopIteration ), NULL, NULL );

    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return;
function_exception_exit:
    assert( exception_type );
    assert( exception_tb );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

}
static PyObject *impl_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_t *_python_context = new _context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_t;

        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_context,
            const_str_angle_genexpr,
            codeobj_e9444b1e49bc9047fe6a951950724721,
            _python_context,
            _context_generator_genexpr_1_of_function_10_bmat_of_module_scipy$sparse$construct_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function <genexpr>" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.
    _python_context->closure___iterator.object = _python_par___iterator;

    return result;
}



struct _context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure___iterator;
    PyObjectLocalVariable closure_b;
    PyObjectTempVariable closure_iter_value_0;
};

static void _context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_destructor( void *context_voidptr )
{
    _context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_t *_python_context = (struct _context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_t *_python_context = (_context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_t *)generator->m_context;


    // Local variable inits
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_next_source_1;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_e03a6c6a4f7504a98b4d297eba4ed7a6, module_scipy$sparse$construct );

    Py_INCREF( frame_function );
    generator->m_frame = frame_function;
#if PYTHON_VERSION >= 340
    frame_function->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    // Tried code
    // Throwing into unstarted generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            goto try_finally_handler_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_next_source_1 = _python_context->closure___iterator.object;

    if ( tmp_next_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8745 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 545;
        goto try_finally_handler_1;
    }

    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_1 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 545;
            goto try_finally_handler_1;
        }
    }

    if (_python_context->closure_iter_value_0.object == NULL)
    {
        _python_context->closure_iter_value_0.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = _python_context->closure_iter_value_0.object;
        _python_context->closure_iter_value_0.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_assign_source_2 = _python_context->closure_iter_value_0.object;

    if (_python_context->closure_b.object == NULL)
    {
        _python_context->closure_b.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = _python_context->closure_b.object;
        _python_context->closure_b.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }
    tmp_isinstance_inst_1 = _python_context->closure_b.object;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csc_matrix );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csc_matrix );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263510 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 545;
        goto try_finally_handler_1;
    }

    tmp_yield_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_yield_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto try_finally_handler_1;
    }
    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_yield_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
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
    Py_XDECREF( _python_context->closure_iter_value_0.object );
    _python_context->closure_iter_value_0.object = NULL;

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

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif

    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;

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
    if ((_python_context->closure_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b,
            _python_context->closure_b.object
        );

    }
    if ((_python_context->closure___iterator.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___iterator,
            _python_context->closure___iterator.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


#if PYTHON_VERSION > 300
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    Py_DECREF( frame_function );
    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    PyErr_Restore( INCREASE_REFCOUNT( PyExc_StopIteration ), NULL, NULL );

    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return;
function_exception_exit:
    assert( exception_type );
    assert( exception_tb );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

}
static PyObject *impl_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct( PyObject *_python_par___iterator )
{
    // Create context if any
    struct _context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_t *_python_context = new _context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_t;

        PyObject *result = Nuitka_Generator_New(
            genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_context,
            const_str_angle_genexpr,
            codeobj_24ad573f22238b1309f5a7d7196bb245,
            _python_context,
            _context_generator_genexpr_2_of_function_10_bmat_of_module_scipy$sparse$construct_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function <genexpr>" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.
    _python_context->closure___iterator.object = _python_par___iterator;

    return result;
}


static PyObject *impl_function_11_block_diag_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_mats, PyObject *_python_par_format, PyObject *_python_par_dtype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_mats; par_mats.object = _python_par_mats;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObjectLocalVariable var_nmat;
    PyObjectLocalVariable var_rows;
    PyObjectLocalVariable var_ia;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_row;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8ad37c8712a0cfa2ac5f322a483f349d, module_scipy$sparse$construct );
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
    tmp_len_arg_1 = par_mats.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 650;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 650;
        goto frame_exception_exit_1;
    }
    assert( var_nmat.object == NULL );
    var_nmat.object = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_rows.object == NULL );
    var_rows.object = tmp_assign_source_2;

    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 652;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_mats.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 652;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 652;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 652;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 652;
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
        frame_function->f_lineno = 652;
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
    // Tried code
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value.object;

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 652;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
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


        frame_function->f_lineno = 652;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
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


        frame_function->f_lineno = 652;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_7;
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
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1.object;

    if (var_ia.object == NULL)
    {
        var_ia.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_ia.object;
        var_ia.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
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
    tmp_binop_left_1 = LIST_COPY( const_list_none_list );
    tmp_binop_right_1 = var_nmat.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264429 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 653;
        goto try_finally_handler_1;
    }

    tmp_assign_source_10 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 653;
        goto try_finally_handler_1;
    }
    if (var_row.object == NULL)
    {
        var_row.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_row.object;
        var_row.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_issparse );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issparse );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259681 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 654;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = var_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 654;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 654;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 654;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 654;
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
    tmp_ass_subvalue_1 = var_a.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 655;
        goto try_finally_handler_1;
    }

    tmp_ass_subscribed_1 = var_row.object;

    tmp_ass_subscript_1 = var_ia.object;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264479 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 655;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 655;
        goto try_finally_handler_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 657;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = var_a.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 657;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 657;
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 657;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_2 = var_row.object;

    tmp_ass_subscript_2 = var_ia.object;

    if ( tmp_ass_subscript_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264479 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 657;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 657;
        goto try_finally_handler_1;
    }
    branch_end_1:;
    tmp_source_name_1 = var_rows.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76958 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 658;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 658;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = var_row.object;

    frame_function->f_lineno = 658;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 658;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 652;
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
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bmat );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bmat );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263958 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 659;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_rows.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 76958 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 659;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_format.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 659;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_format;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_dtype.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 659;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 659;
    tmp_return_value = CALL_FUNCTION( tmp_called_5, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 659;
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
    if ((var_nmat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nmat,
            var_nmat.object
        );

    }
    if ((var_rows.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rows,
            var_rows.object
        );

    }
    if ((var_ia.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ia,
            var_ia.object
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
    if ((var_row.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_row,
            var_row.object
        );

    }
    if ((par_mats.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mats,
            par_mats.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
        );

    }
    if ((par_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            par_dtype.object
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
static PyObject *fparse_function_11_block_diag_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_mats = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_dtype = NULL;
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
                PyErr_Format( PyExc_TypeError, "block_diag() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_mats == key )
            {
                assert( _python_par_mats == NULL );
                _python_par_mats = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dtype == key )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mats, key ) == 1 )
            {
                assert( _python_par_mats == NULL );
                _python_par_mats = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtype, key ) == 1 )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "block_diag() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_mats != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_mats = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_mats == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_mats = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_dtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_dtype = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_dtype == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_dtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_mats == NULL || _python_par_format == NULL || _python_par_dtype == NULL ))
    {
        PyObject *values[] = { _python_par_mats, _python_par_format, _python_par_dtype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11_block_diag_of_module_scipy$sparse$construct( self, _python_par_mats, _python_par_format, _python_par_dtype );

error_exit:;

    Py_XDECREF( _python_par_mats );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_dtype );

    return NULL;
}

static PyObject *dparse_function_11_block_diag_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_11_block_diag_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_block_diag_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_rand_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_m, PyObject *_python_par_n, PyObject *_python_par_density, PyObject *_python_par_format, PyObject *_python_par_dtype, PyObject *_python_par_random_state )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_m; par_m.object = _python_par_m;
    PyObjectLocalVariable par_n; par_n.object = _python_par_n;
    PyObjectLocalVariable par_density; par_density.object = _python_par_density;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObjectLocalVariable par_random_state; par_random_state.object = _python_par_random_state;
    PyObjectSharedLocalVariable var_mn;
    PyObjectLocalVariable var_tp;
    PyObjectLocalVariable var_msg;
    PyObjectSharedLocalVariable var_k;
    PyObjectLocalVariable var_mlow;
    PyObjectLocalVariable var_fac;
    PyObjectLocalVariable var_gk;
    PyObjectLocalVariable var__gen_unique_rand;
    PyObjectLocalVariable var_ind;
    PyObjectLocalVariable var_j;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_vals;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
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
    PyObject *tmp_call_arg_element_11;
    PyObject *tmp_call_arg_element_12;
    PyObject *tmp_call_arg_element_13;
    PyObject *tmp_call_arg_element_14;
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_call_arg_element_16;
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
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
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
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_da0ee3441795f60c1cc257e399569856, module_scipy$sparse$construct );
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
    tmp_compexpr_left_1 = par_density.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163164 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 685;
        goto try_finally_handler_2;
    }

    tmp_compexpr_right_1 = const_int_0;
    tmp_assign_source_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 685;
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


        frame_function->f_lineno = 685;
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
    tmp_cond_value_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
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
    tmp_compexpr_left_2 = par_density.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163164 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 685;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_cond_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 685;
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
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 685;
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
    tmp_make_exception_arg_1 = const_str_digest_69c8807b06c9e9161a200c812ce3c7e4;
    frame_function->f_lineno = 686;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 686;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 686;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_1:;
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
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_assign_source_2 = par_dtype.object;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 687;
        goto try_finally_handler_5;
    }

    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_cond_value_4 = tmp_and_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 687;
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
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_3 = par_dtype.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 687;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_3 = PyList_New( 3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 687;
        goto try_finally_handler_6;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_float32 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_3 );

        frame_function->f_lineno = 687;
        goto try_finally_handler_6;
    }
    PyList_SET_ITEM( tmp_compexpr_right_3, 0, tmp_list_element_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 687;
        goto try_finally_handler_6;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_float64 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_3 );

        frame_function->f_lineno = 687;
        goto try_finally_handler_6;
    }
    PyList_SET_ITEM( tmp_compexpr_right_3, 1, tmp_list_element_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 687;
        goto try_finally_handler_6;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_longdouble );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_3 );

        frame_function->f_lineno = 687;
        goto try_finally_handler_6;
    }
    PyList_SET_ITEM( tmp_compexpr_right_3, 2, tmp_list_element_1 );
    tmp_cond_value_3 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_3 );

        frame_function->f_lineno = 687;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_compexpr_right_3 );
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
    tmp_cond_value_3 = tmp_and_1__value_1.object;

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


        frame_function->f_lineno = 687;
        goto try_finally_handler_4;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_binop_left_1 = const_str_digest_3dd1df8273a975731057e75fcbedf2a3;
    tmp_binop_right_1 = par_dtype.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 688;
        goto try_finally_handler_4;
    }

    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 688;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 688;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 688;
        goto try_finally_handler_4;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 688;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_4;
    branch_no_2:;
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
    tmp_binop_left_2 = par_m.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = par_n.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto frame_exception_exit_1;
    }
    if (var_mn.storage->object == NULL)
    {
        var_mn.storage->object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = var_mn.storage->object;
        var_mn.storage->object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 692;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_intc );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 692;
        goto frame_exception_exit_1;
    }
    assert( var_tp.object == NULL );
    var_tp.object = tmp_assign_source_4;

    tmp_compare_left_1 = var_mn.storage->object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 162996 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 693;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 693;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_iinfo );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 693;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = var_tp.object;

    frame_function->f_lineno = 693;
    tmp_source_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 693;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_max );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 693;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 693;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 694;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_int64 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 694;
        goto frame_exception_exit_1;
    }
    assert( var_tp.object != NULL );
    {
        PyObject *old = var_tp.object;
        var_tp.object = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_compare_left_2 = var_mn.storage->object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 162996 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 696;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 696;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_iinfo );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 696;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_tp.object;

    frame_function->f_lineno = 696;
    tmp_source_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 696;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_max );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 696;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 696;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_Gt_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_6 = const_str_digest_b78e8dace9ed623250a89d52ae37d019;
    assert( var_msg.object == NULL );
    var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_binop_left_3 = var_msg.object;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 701;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_iinfo );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 701;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_tp.object;

    frame_function->f_lineno = 701;
    tmp_source_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 701;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_max );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 701;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 701;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 701;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 701;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 701;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_binop_left_5 = par_density.object;

    if ( tmp_binop_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163164 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 704;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = par_m.object;

    if ( tmp_binop_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 704;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = BINARY_OPERATION_MUL( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 704;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = par_n.object;

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 704;
        goto frame_exception_exit_1;
    }

    tmp_int_arg_1 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 704;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 704;
        goto frame_exception_exit_1;
    }
    if (var_k.storage->object == NULL)
    {
        var_k.storage->object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_k.storage->object;
        var_k.storage->object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = const_int_pos_5;
    assert( var_mlow.object == NULL );
    var_mlow.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    tmp_assign_source_9 = const_float_1_02;
    assert( var_fac.object == NULL );
    var_fac.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 711;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_6 = var_k.storage->object;

    if ( tmp_binop_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 711;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_6 = var_mlow.object;

    tmp_call_arg_element_4 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 711;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = var_fac.object;

    tmp_binop_right_7 = var_k.storage->object;

    if ( tmp_binop_right_7 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 711;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 711;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 711;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 711;
        goto frame_exception_exit_1;
    }
    assert( var_gk.object == NULL );
    var_gk.object = tmp_assign_source_10;

    tmp_compare_left_3 = par_random_state.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264527 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 713;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 714;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_random );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 714;
        goto frame_exception_exit_1;
    }
    if (par_random_state.object == NULL)
    {
        par_random_state.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = par_random_state.object;
        par_random_state.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_isinstance_inst_1 = par_random_state.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264527 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 715;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        frame_function->f_lineno = 715;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 715;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_integer );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        frame_function->f_lineno = 715;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 715;
        goto frame_exception_exit_1;
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
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 716;
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_random );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 716;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_RandomState );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 716;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = par_random_state.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264527 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 716;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 716;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 716;
        goto frame_exception_exit_1;
    }
    if (par_random_state.object == NULL)
    {
        par_random_state.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = par_random_state.object;
        par_random_state.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    branch_no_6:;
    branch_end_5:;
    tmp_assign_source_13 = MAKE_FUNCTION_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( var_k, var_mn );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_function->f_lineno = 718;
        goto frame_exception_exit_1;
    }
    assert( var__gen_unique_rand.object == NULL );
    var__gen_unique_rand.object = tmp_assign_source_13;

    tmp_called_6 = var__gen_unique_rand.object;

    tmp_call_arg_element_7 = par_random_state.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264527 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 722;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = var_gk.object;

    frame_function->f_lineno = 722;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 722;
        goto frame_exception_exit_1;
    }
    assert( var_ind.object == NULL );
    var_ind.object = tmp_assign_source_14;

    loop_start_1:;
    tmp_source_name_16 = var_ind.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63493 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 723;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_size );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 723;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = var_k.storage->object;

    if ( tmp_compare_right_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 723;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 723;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    goto loop_end_1;
    branch_no_7:;
    tmp_assign_source_15 = var_gk.object;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264585 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 724;
        goto frame_exception_exit_1;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_8 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_8 = const_float_1_05;
    tmp_assign_source_16 = BINARY_OPERATION( PyNumber_InPlaceMultiply, tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 724;
        goto try_finally_handler_7;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_compare_left_5 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_5 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_17 = tmp_inplace_assign_1__inplace_end.object;

    if (var_gk.object == NULL)
    {
        var_gk.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = var_gk.object;
        var_gk.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    branch_no_8:;
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
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto frame_exception_exit_1;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_called_7 = var__gen_unique_rand.object;

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264633 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 725;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = par_random_state.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264527 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 725;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = var_gk.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264585 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 725;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 725;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 725;
        goto frame_exception_exit_1;
    }
    if (var_ind.object == NULL)
    {
        var_ind.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = var_ind.object;
        var_ind.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 723;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_floor );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_10 = var_ind.object;

    tmp_binop_right_10 = const_float_1_0;
    tmp_binop_left_9 = BINARY_OPERATION_MUL( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_9 = par_m.object;

    if ( tmp_binop_right_9 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 727;
    tmp_source_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_astype );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_tp.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79717 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 727;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 727;
        goto frame_exception_exit_1;
    }
    assert( var_j.object == NULL );
    var_j.object = tmp_assign_source_19;

    tmp_binop_left_11 = var_ind.object;

    tmp_binop_left_12 = var_j.object;

    tmp_binop_right_12 = par_m.object;

    if ( tmp_binop_right_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 728;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_11 = BINARY_OPERATION_MUL( tmp_binop_left_12, tmp_binop_right_12 );
    if ( tmp_binop_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 728;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = BINARY_OPERATION_SUB( tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 728;
        goto frame_exception_exit_1;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_astype );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 728;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = var_tp.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79717 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 728;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 728;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 728;
        goto frame_exception_exit_1;
    }
    assert( var_i.object == NULL );
    var_i.object = tmp_assign_source_20;

    tmp_source_name_21 = par_random_state.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264527 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 729;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_rand );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 729;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = var_k.storage->object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 729;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 729;
    tmp_source_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 729;
        goto frame_exception_exit_1;
    }
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_astype );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 729;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = par_dtype.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 729;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 729;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 729;
        goto frame_exception_exit_1;
    }
    assert( var_vals.object == NULL );
    var_vals.object = tmp_assign_source_21;

    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 730;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_vals.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_i.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_j.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyTuple_New( 2 );
    tmp_tuple_element_5 = par_m.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 730;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = par_n.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 730;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_5 );
    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 730;
    tmp_source_name_22 = CALL_FUNCTION( tmp_called_14, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 730;
        goto frame_exception_exit_1;
    }
    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 730;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = par_format.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 730;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 730;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 730;
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
    if ((var_mn.storage != NULL && var_mn.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mn,
            var_mn.storage->object
        );

    }
    if ((var_tp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tp,
            var_tp.object
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
    if ((var_k.storage != NULL && var_k.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.storage->object
        );

    }
    if ((var_mlow.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mlow,
            var_mlow.object
        );

    }
    if ((var_fac.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fac,
            var_fac.object
        );

    }
    if ((var_gk.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gk,
            var_gk.object
        );

    }
    if ((var__gen_unique_rand.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__gen_unique_rand,
            var__gen_unique_rand.object
        );

    }
    if ((var_ind.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ind,
            var_ind.object
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
    if ((var_vals.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vals,
            var_vals.object
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
    if ((par_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            par_n.object
        );

    }
    if ((par_density.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_density,
            par_density.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
        );

    }
    if ((par_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dtype,
            par_dtype.object
        );

    }
    if ((par_random_state.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_random_state,
            par_random_state.object
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
static PyObject *fparse_function_12_rand_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_m = NULL;
    PyObject *_python_par_n = NULL;
    PyObject *_python_par_density = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_dtype = NULL;
    PyObject *_python_par_random_state = NULL;
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
                PyErr_Format( PyExc_TypeError, "rand() keywords must be strings" );
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
            if ( found == false && const_str_plain_n == key )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_density == key )
            {
                assert( _python_par_density == NULL );
                _python_par_density = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dtype == key )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_random_state == key )
            {
                assert( _python_par_random_state == NULL );
                _python_par_random_state = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_n, key ) == 1 )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_density, key ) == 1 )
            {
                assert( _python_par_density == NULL );
                _python_par_density = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dtype, key ) == 1 )
            {
                assert( _python_par_dtype == NULL );
                _python_par_dtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_random_state, key ) == 1 )
            {
                assert( _python_par_random_state == NULL );
                _python_par_random_state = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "rand() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_m != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_m = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_m == NULL )
    {
        if ( 0 + self->m_defaults_given >= 6  )
        {
            _python_par_m = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 6 ) );
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
         if (unlikely( _python_par_n != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_n == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
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
         if (unlikely( _python_par_density != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_density = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_density == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_density = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
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
         if (unlikely( _python_par_dtype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_dtype = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_dtype == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_dtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
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
         if (unlikely( _python_par_random_state != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_random_state = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_random_state == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_random_state = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
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
    if (unlikely( _python_par_m == NULL || _python_par_n == NULL || _python_par_density == NULL || _python_par_format == NULL || _python_par_dtype == NULL || _python_par_random_state == NULL ))
    {
        PyObject *values[] = { _python_par_m, _python_par_n, _python_par_density, _python_par_format, _python_par_dtype, _python_par_random_state };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12_rand_of_module_scipy$sparse$construct( self, _python_par_m, _python_par_n, _python_par_density, _python_par_format, _python_par_dtype, _python_par_random_state );

error_exit:;

    Py_XDECREF( _python_par_m );
    Py_XDECREF( _python_par_n );
    Py_XDECREF( _python_par_density );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_dtype );
    Py_XDECREF( _python_par_random_state );

    return NULL;
}

static PyObject *dparse_function_12_rand_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_12_rand_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_rand_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject *_python_par_rng, PyObject *_python_par__gk )
{
    // The context of the function.
    struct _context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_t *_python_context = (struct _context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_rng; par_rng.object = _python_par_rng;
    PyObjectLocalVariable par__gk; par__gk.object = _python_par__gk;
    PyObjectLocalVariable var_ind;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4e0d5e80a2a166ddecc2b043cc442587, module_scipy$sparse$construct );
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
    tmp_source_name_1 = par_rng.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264695 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 719;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rand );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 719;
        goto frame_exception_exit_1;
    }
    tmp_int_arg_1 = par__gk.object;

    if ( tmp_int_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 264744 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 719;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 719;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 719;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 719;
        goto frame_exception_exit_1;
    }
    assert( var_ind.object == NULL );
    var_ind.object = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_unique );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_floor );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = var_ind.object;

    tmp_binop_right_1 = _python_context->closure_mn.storage->object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 162996 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 720;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 720;
    tmp_slice_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }
    tmp_slice_upper_1 = _python_context->closure_k.storage->object;

    if ( tmp_slice_upper_1 == NULL )
    {
        Py_DECREF( tmp_slice_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 720;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 720;
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
    if ((var_ind.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ind,
            var_ind.object
        );

    }
    if ((_python_context->closure_mn.storage != NULL && _python_context->closure_mn.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mn,
            _python_context->closure_mn.storage->object
        );

    }
    if ((_python_context->closure_k.storage != NULL && _python_context->closure_k.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            _python_context->closure_k.storage->object
        );

    }
    if ((par_rng.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rng,
            par_rng.object
        );

    }
    if ((par__gk.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__gk,
            par__gk.object
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
static PyObject *fparse_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_rng = NULL;
    PyObject *_python_par__gk = NULL;
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
                PyErr_Format( PyExc_TypeError, "_gen_unique_rand() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_rng == key )
            {
                assert( _python_par_rng == NULL );
                _python_par_rng = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain__gk == key )
            {
                assert( _python_par__gk == NULL );
                _python_par__gk = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rng, key ) == 1 )
            {
                assert( _python_par_rng == NULL );
                _python_par_rng = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain__gk, key ) == 1 )
            {
                assert( _python_par__gk == NULL );
                _python_par__gk = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_gen_unique_rand() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rng != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_rng = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_rng == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_rng = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par__gk != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par__gk = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par__gk == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par__gk = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_rng == NULL || _python_par__gk == NULL ))
    {
        PyObject *values[] = { _python_par_rng, _python_par__gk };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( self, _python_par_rng, _python_par__gk );

error_exit:;

    Py_XDECREF( _python_par_rng );
    Py_XDECREF( _python_par__gk );

    return NULL;
}

static PyObject *dparse_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_bmat_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_bmat_of_module_scipy$sparse$construct,
        dparse_function_10_bmat_of_module_scipy$sparse$construct,
        const_str_plain_bmat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc93b8c1a4bf8c85f85c62abf0dcdca8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_d56ddcd1b66841117fe1216c747284f7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_block_diag_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_block_diag_of_module_scipy$sparse$construct,
        dparse_function_11_block_diag_of_module_scipy$sparse$construct,
        const_str_plain_block_diag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3ab963a4c055eb76b312ba18ec270ed5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_04e385836414d1b75a689326a7cf3782
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_rand_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_rand_of_module_scipy$sparse$construct,
        dparse_function_12_rand_of_module_scipy$sparse$construct,
        const_str_plain_rand,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a7080a9b19ab59f7d3cdbbd2ccdfa9ea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_925b54f8d3dc8fe3ff5c249ae4824b03
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct( PyObjectSharedLocalVariable &closure_k, PyObjectSharedLocalVariable &closure_mn )
{
    struct _context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_t *_python_context = new _context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_k.shareWith( closure_k );
    _python_context->closure_mn.shareWith( closure_mn );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct,
        dparse_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct,
        const_str_plain__gen_unique_rand,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e688b615414ee4f375ccb54793824e4a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        Py_None,
        _python_context,
        _context_function_1__gen_unique_rand_of_function_12_rand_of_module_scipy$sparse$construct_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_spdiags_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_spdiags_of_module_scipy$sparse$construct,
        dparse_function_1_spdiags_of_module_scipy$sparse$construct,
        const_str_plain_spdiags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e4e3f54d267567a9bbf52a12f433b516,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_2946bf378796a143451b92b1d823c1f0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_diags_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_diags_of_module_scipy$sparse$construct,
        dparse_function_2_diags_of_module_scipy$sparse$construct,
        const_str_plain_diags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e035e506640834f8ecf582e9892e691d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_c84154c11ab9d14793e1a0cd08f765cd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_identity_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_identity_of_module_scipy$sparse$construct,
        dparse_function_3_identity_of_module_scipy$sparse$construct,
        const_str_plain_identity,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1fda7720292218a22775356a2f5c73c9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_661085cc4adee820609ffab3355130b9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_eye_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_eye_of_module_scipy$sparse$construct,
        dparse_function_4_eye_of_module_scipy$sparse$construct,
        const_str_plain_eye,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d182acaff88aa5f110951c671317a5d7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_f66869a1dd9d96dcb0f87be313b00e6c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_kron_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_kron_of_module_scipy$sparse$construct,
        dparse_function_5_kron_of_module_scipy$sparse$construct,
        const_str_plain_kron,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_47f986a05d771a3e924a6125b93a4cb2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_f397816766b12a3614a3e05bd911a0bc
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_kronsum_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_kronsum_of_module_scipy$sparse$construct,
        dparse_function_6_kronsum_of_module_scipy$sparse$construct,
        const_str_plain_kronsum,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aea6094721e01dcf02c1fddc7cd81490,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_3e594f9a0654f7d7975e1b1627596ff8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct,
        dparse_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct,
        const_str_plain__compressed_sparse_stack,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cec32cac429e1f3996176dc501af273e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_a810fc8c8c0c57354e160561d2ccae3e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_hstack_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_hstack_of_module_scipy$sparse$construct,
        dparse_function_8_hstack_of_module_scipy$sparse$construct,
        const_str_plain_hstack,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eb631b2481d894c5d25523c06e563ddd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_377374258fb9b3e3e0299cf12c7ea82d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_vstack_of_module_scipy$sparse$construct( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_vstack_of_module_scipy$sparse$construct,
        dparse_function_9_vstack_of_module_scipy$sparse$construct,
        const_str_plain_vstack,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3ba6289dfcc18d9a7c77c14efdf5f5f6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$construct,
        const_str_digest_7d359452f8f96a8dbce9b0841fdb04cb
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$construct =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.construct",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$construct )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$construct );
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

    // puts( "in initscipy$sparse$construct" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$construct = Py_InitModule4(
        "scipy.sparse.construct",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$construct = PyModule_Create( &mdef_scipy$sparse$construct );
#endif

    moduledict_scipy$sparse$construct = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$construct)->md_dict;

    assertObject( module_scipy$sparse$construct );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f0d9ad0a7aac918dcd008753d8379933, module_scipy$sparse$construct );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$construct );

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
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
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
    PyObject *tmp_defaults_11;
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
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_a65ad2b0c7611ce173746254b82f798a;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_eeecd38b88ffb21110d661cee7ff0330;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_e5069d065aafc51d7f788e827807441a, module_scipy$sparse$construct );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_83a0aac3d618d3c31fc37c156dca406d;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_ec114789187c3d0ec9d1e3343e68464b_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_warn_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_warn );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_warn, tmp_assign_source_8 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 13;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_9 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_sputils, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_upcast_str_plain_get_index_dtype_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_upcast );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_upcast, tmp_assign_source_10 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_sputils, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_upcast_str_plain_get_index_dtype_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_get_index_dtype );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_get_index_dtype, tmp_assign_source_11 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_csr, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_csr_matrix_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_csr_matrix );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csr_matrix, tmp_assign_source_12 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_csc, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_csc_matrix_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_csc_matrix );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_csc_matrix, tmp_assign_source_13 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_bsr, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_bsr_matrix_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_bsr_matrix );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bsr_matrix, tmp_assign_source_14 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_coo, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_coo_matrix_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_coo_matrix );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_coo_matrix, tmp_assign_source_15 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_lil, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_lil_matrix_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_lil_matrix );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_lil_matrix, tmp_assign_source_16 );
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_dia, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_dia_matrix_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_dia_matrix );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_dia_matrix, tmp_assign_source_17 );
    tmp_import_globals_14 = ((PyModuleObject *)module_scipy$sparse$construct)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_base, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_issparse_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_issparse );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_issparse, tmp_assign_source_18 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_19 = MAKE_FUNCTION_function_1_spdiags_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_spdiags, tmp_assign_source_19 );
    tmp_defaults_2 = const_tuple_none_none_none_tuple;
    tmp_assign_source_20 = MAKE_FUNCTION_function_2_diags_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        frame_module->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_diags, tmp_assign_source_20 );
    tmp_defaults_3 = const_tuple_str_plain_d_none_tuple;
    tmp_assign_source_21 = MAKE_FUNCTION_function_3_identity_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_21 );

        frame_module->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_identity, tmp_assign_source_21 );
    tmp_defaults_4 = PyTuple_New( 4 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_defaults_4 );

        frame_module->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_4, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_4, 3, tmp_tuple_element_1 );
    tmp_assign_source_22 = MAKE_FUNCTION_function_4_eye_of_module_scipy$sparse$construct( tmp_defaults_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        frame_module->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_eye, tmp_assign_source_22 );
    tmp_defaults_5 = const_tuple_none_tuple;
    tmp_assign_source_23 = MAKE_FUNCTION_function_5_kron_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_module->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_kron, tmp_assign_source_23 );
    tmp_defaults_6 = const_tuple_none_tuple;
    tmp_assign_source_24 = MAKE_FUNCTION_function_6_kronsum_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_kronsum, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_7__compressed_sparse_stack_of_module_scipy$sparse$construct(  );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain__compressed_sparse_stack, tmp_assign_source_25 );
    tmp_defaults_7 = const_tuple_none_none_tuple;
    tmp_assign_source_26 = MAKE_FUNCTION_function_8_hstack_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_module->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_hstack, tmp_assign_source_26 );
    tmp_defaults_8 = const_tuple_none_none_tuple;
    tmp_assign_source_27 = MAKE_FUNCTION_function_9_vstack_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_8 ) );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        frame_module->f_lineno = 456;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_vstack, tmp_assign_source_27 );
    tmp_defaults_9 = const_tuple_none_none_tuple;
    tmp_assign_source_28 = MAKE_FUNCTION_function_10_bmat_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_9 ) );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_28 );

        frame_module->f_lineno = 487;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_bmat, tmp_assign_source_28 );
    tmp_defaults_10 = const_tuple_none_none_tuple;
    tmp_assign_source_29 = MAKE_FUNCTION_function_11_block_diag_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_10 ) );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_29 );

        frame_module->f_lineno = 612;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_block_diag, tmp_assign_source_29 );
    tmp_defaults_11 = const_tuple_float_0_01_str_plain_coo_none_none_tuple;
    tmp_assign_source_30 = MAKE_FUNCTION_function_12_rand_of_module_scipy$sparse$construct( INCREASE_REFCOUNT( tmp_defaults_11 ) );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        frame_module->f_lineno = 662;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$construct, (Nuitka_StringObject *)const_str_plain_rand, tmp_assign_source_30 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$construct );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
