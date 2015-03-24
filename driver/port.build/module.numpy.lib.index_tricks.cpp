// Generated code for Python source for module 'numpy.lib.index_tricks'
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

// The _module_numpy$lib$index_tricks is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$lib$index_tricks;
PyDictObject *moduledict_numpy$lib$index_tricks;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_1_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__t;
extern PyObject *const_str_plain__x;
static PyObject *const_str_plain_c_;
extern PyObject *const_str_plain_k1;
extern PyObject *const_str_plain_k2;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_plain_nn;
extern PyObject *const_str_plain_r_;
extern PyObject *const_str_plain_rc;
static PyObject *const_str_plain_s_;
static PyObject *const_str_plain__it;
extern PyObject *const_str_plain__nx;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_ix_;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_typ;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_vec;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_bmat;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_iter;
static PyObject *const_str_plain_key0;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_next;
extern PyObject *const_str_plain_objs;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_stop;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_wrap;
static PyObject *const_str_plain__axis;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_frame;
extern PyObject *const_str_plain_mgrid;
static PyObject *const_str_plain_mymat;
extern PyObject *const_str_plain_ndmin;
extern PyObject *const_str_plain_ogrid;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_slice;
extern PyObject *const_str_plain_slobj;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_subok;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_CClass;
static PyObject *const_str_plain_RClass;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_coords;
extern PyObject *const_str_plain_f_back;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_matrix;
static PyObject *const_str_plain_ndincr;
extern PyObject *const_str_plain_nditer;
extern PyObject *const_str_plain_newobj;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_scalar;
extern PyObject *const_str_plain_sparse;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___len__;
static PyObject *const_str_plain__matrix;
extern PyObject *const_str_plain__retval;
extern PyObject *const_str_plain_alltrue;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_cumprod;
static PyObject *const_str_plain_defaxes;
extern PyObject *const_str_plain_indices;
static PyObject *const_str_plain_makemat;
static PyObject *const_str_plain_nd_grid;
extern PyObject *const_str_plain_ndarray;
static PyObject *const_str_plain_ndindex;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_numeric;
static PyObject *const_str_plain_oldndim;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain_scalars;
extern PyObject *const_str_plain_strides;
static PyObject *const_str_plain_tempobj;
static PyObject *const_str_plain_trans1d;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___iter__;
extern PyObject *const_str_plain___next__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_f_locals;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_swapaxes;
extern PyObject *const_list_int_pos_1_list;
extern PyObject *const_str_plain__getframe;
extern PyObject *const_str_plain_baseshape;
extern PyObject *const_str_plain_f_globals;
static PyObject *const_str_plain_index_exp;
static PyObject *const_str_plain_maketuple;
extern PyObject *const_str_plain_matrixlib;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain_ScalarType;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_arraytypes;
extern PyObject *const_str_plain_as_strided;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_str_plain_final_dtype;
static PyObject *const_str_plain_multi_index;
static PyObject *const_str_plain_ndenumerate;
static PyObject *const_str_plain_scalartypes;
static PyObject *const_str_plain_zerosize_ok;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain___getslice__;
extern PyObject *const_str_plain_diag_indices;
extern PyObject *const_str_plain_index_tricks;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_fill_diagonal;
extern PyObject *const_str_plain_function_base;
extern PyObject *const_str_plain_unravel_index;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_IndexExpression;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_arr_tuple;
extern PyObject *const_str_plain_AxisConcatenator;
extern PyObject *const_str_plain_find_common_type;
extern PyObject *const_tuple_str_plain_args_tuple;
static PyObject *const_tuple_str_plain_diff_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_diag_indices_from;
extern PyObject *const_str_plain_ravel_multi_index;
static PyObject *const_tuple_str_plain_as_strided_tuple;
extern PyObject *const_tuple_str_plain_function_base_tuple;
static PyObject *const_dict_0d87fdb65ac69f3e7f132f381a92030e;
static PyObject *const_dict_24180b9cdfcea30958fba9a165d5c6dd;
static PyObject *const_dict_28ebf724697f63eaa96dcded742e9de0;
static PyObject *const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253;
extern PyObject *const_dict_a00acf95180a0925f15877b623331589;
static PyObject *const_dict_b4dcb48ac0b3434981963a3b0a181907;
static PyObject *const_dict_c94aedb3aac0d244f6f14be59f80d888;
static PyObject *const_tuple_str_plain_find_common_type_tuple;
static PyObject *const_tuple_str_plain_n_str_plain_ndim_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_arr_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_res_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
static PyObject *const_list_fa22549eaa1a878119e86a628980cdb1_list;
extern PyObject *const_tuple_str_plain_self_str_plain_shape_tuple;
static PyObject *const_str_digest_049a19cbc090f68af349070013f69c00;
static PyObject *const_str_digest_0e28c73803b4d447d759112d47e45329;
extern PyObject *const_str_digest_2029c2f6a2f548f5a6896adc20b13a55;
static PyObject *const_str_digest_255645ad7e19bda0865a9234e223ec4f;
static PyObject *const_str_digest_2f892679dece2db2111ceb00f9e4861f;
static PyObject *const_str_digest_378bca8ae9010c6cf7e80b4dfa98c60c;
extern PyObject *const_str_digest_3c09aded1adab7d161d8a975ac63ddd7;
extern PyObject *const_str_digest_41ad3e252dfe32ce95dec22fb3c12cb0;
static PyObject *const_str_digest_4d94e54c68f433850efac0d639826e4f;
extern PyObject *const_str_digest_5c1a8409e9c9a3ecd8ef6c78485a8e2c;
static PyObject *const_str_digest_6368aee1c3b3f1183418fb89e32a553a;
static PyObject *const_str_digest_661e17987d9fd39389dd823ae9497c3b;
static PyObject *const_str_digest_6a835e49a88dd3098cb6f8c7548eb3a9;
extern PyObject *const_str_digest_7562d9c0c14dfbf1fc7343bfca26014c;
static PyObject *const_str_digest_76974383c40700d7b9936e74c460cf41;
static PyObject *const_str_digest_7d52eac3b9930b5c7f090bba74882b60;
static PyObject *const_str_digest_82c91861346ce300a6233baf150cc0e2;
extern PyObject *const_str_digest_8a3551674d9174096d8a003980610b3f;
static PyObject *const_str_digest_92ece64a17aeb80db18d1b3ec8d37160;
static PyObject *const_str_digest_b2d2a97a1e580fc20f9861711baa3725;
static PyObject *const_str_digest_bc6004d8a0f1693ba2628ba8ff078e23;
static PyObject *const_str_digest_bd5339a4ea2d0544c007520f2832dad3;
static PyObject *const_str_digest_be772f8136a441e7bb0572f31c147bd4;
static PyObject *const_str_digest_dec666935059bada1e247454ccdb9181;
static PyObject *const_str_digest_e119749f51a4bbb9b94b392c60f53fd0;
static PyObject *const_str_digest_f47d3837d30c6f327231c2aac7bc131f;
static PyObject *const_str_digest_fb22d554b5e51e0fa7481273f3fb7425;
static PyObject *const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_sparse_tuple;
static PyObject *const_tuple_13c448b617a735a40d5fd5aa2d99abf7_tuple;
static PyObject *const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple;
static PyObject *const_tuple_d41b7300892721d5a465b890d461f3a0_tuple;
static PyObject *const_tuple_f57186059421a8f2f530b4210f3b6183_tuple;
static PyObject *const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_maketuple_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_i_str_plain_j_tuple;
static PyObject *const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple;
static PyObject *const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple;
static PyObject *const_list_str_plain_multi_index_str_plain_zerosize_ok_list;
static PyObject *const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple;
static PyObject *const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_c_ = UNSTREAM_STRING( &constant_bin[ 16173 ], 2, 1 );
    const_str_plain_s_ = UNSTREAM_STRING( &constant_bin[ 16745 ], 2, 1 );
    const_str_plain__it = UNSTREAM_STRING( &constant_bin[ 8762 ], 3, 1 );
    const_str_plain_ix_ = UNSTREAM_STRING( &constant_bin[ 105030 ], 3, 1 );
    const_str_plain_key0 = UNSTREAM_STRING( &constant_bin[ 1303785 ], 4, 1 );
    const_str_plain__axis = UNSTREAM_STRING( &constant_bin[ 186233 ], 5, 1 );
    const_str_plain_mymat = UNSTREAM_STRING( &constant_bin[ 1303789 ], 5, 1 );
    const_str_plain_CClass = UNSTREAM_STRING( &constant_bin[ 168192 ], 6, 1 );
    const_str_plain_RClass = UNSTREAM_STRING( &constant_bin[ 168164 ], 6, 1 );
    const_str_plain_ndincr = UNSTREAM_STRING( &constant_bin[ 1303794 ], 6, 1 );
    const_str_plain__matrix = UNSTREAM_STRING( &constant_bin[ 247399 ], 7, 1 );
    const_str_plain_defaxes = UNSTREAM_STRING( &constant_bin[ 1303800 ], 7, 1 );
    const_str_plain_makemat = UNSTREAM_STRING( &constant_bin[ 168319 ], 7, 1 );
    const_str_plain_nd_grid = UNSTREAM_STRING( &constant_bin[ 168043 ], 7, 1 );
    const_str_plain_ndindex = UNSTREAM_STRING( &constant_bin[ 712330 ], 7, 1 );
    const_str_plain_oldndim = UNSTREAM_STRING( &constant_bin[ 1303807 ], 7, 1 );
    const_str_plain_tempobj = UNSTREAM_STRING( &constant_bin[ 168649 ], 7, 1 );
    const_str_plain_trans1d = UNSTREAM_STRING( &constant_bin[ 168358 ], 7, 1 );
    const_str_plain_index_exp = UNSTREAM_STRING( &constant_bin[ 1303814 ], 9, 1 );
    const_str_plain_maketuple = UNSTREAM_STRING( &constant_bin[ 169146 ], 9, 1 );
    const_str_plain_arraytypes = UNSTREAM_STRING( &constant_bin[ 168904 ], 10, 1 );
    const_str_plain_final_dtype = UNSTREAM_STRING( &constant_bin[ 169005 ], 11, 1 );
    const_str_plain_multi_index = UNSTREAM_STRING( &constant_bin[ 452135 ], 11, 1 );
    const_str_plain_ndenumerate = UNSTREAM_STRING( &constant_bin[ 1195581 ], 11, 1 );
    const_str_plain_scalartypes = UNSTREAM_STRING( &constant_bin[ 168592 ], 11, 1 );
    const_str_plain_zerosize_ok = UNSTREAM_STRING( &constant_bin[ 565132 ], 11, 1 );
    const_str_plain_fill_diagonal = UNSTREAM_STRING( &constant_bin[ 1303823 ], 13, 1 );
    const_str_plain_IndexExpression = UNSTREAM_STRING( &constant_bin[ 168220 ], 15, 1 );
    const_tuple_str_plain_diff_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diff_tuple, 0, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    const_str_plain_diag_indices_from = UNSTREAM_STRING( &constant_bin[ 1303836 ], 17, 1 );
    const_tuple_str_plain_as_strided_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_as_strided_tuple, 0, const_str_plain_as_strided ); Py_INCREF( const_str_plain_as_strided );
    const_dict_0d87fdb65ac69f3e7f132f381a92030e = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_0d87fdb65ac69f3e7f132f381a92030e, const_str_plain_maketuple, Py_True );
    const_dict_24180b9cdfcea30958fba9a165d5c6dd = _PyDict_NewPresized( 2 );
    const_list_str_plain_multi_index_str_plain_zerosize_ok_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_multi_index_str_plain_zerosize_ok_list, 0, const_str_plain_multi_index ); Py_INCREF( const_str_plain_multi_index );
    PyList_SET_ITEM( const_list_str_plain_multi_index_str_plain_zerosize_ok_list, 1, const_str_plain_zerosize_ok ); Py_INCREF( const_str_plain_zerosize_ok );
    PyDict_SetItem( const_dict_24180b9cdfcea30958fba9a165d5c6dd, const_str_plain_flags, const_list_str_plain_multi_index_str_plain_zerosize_ok_list );
    PyDict_SetItem( const_dict_24180b9cdfcea30958fba9a165d5c6dd, const_str_plain_order, const_str_plain_C );
    const_dict_28ebf724697f63eaa96dcded742e9de0 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_28ebf724697f63eaa96dcded742e9de0, const_str_plain_sparse, Py_True );
    const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253, const_str_plain_trans1d, const_int_0 );
    PyDict_SetItem( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253, const_str_plain_ndmin, const_int_pos_2 );
    const_dict_b4dcb48ac0b3434981963a3b0a181907 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_b4dcb48ac0b3434981963a3b0a181907, const_str_plain_maketuple, Py_False );
    const_dict_c94aedb3aac0d244f6f14be59f80d888 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_c94aedb3aac0d244f6f14be59f80d888, const_str_plain_sparse, Py_False );
    const_tuple_str_plain_find_common_type_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_common_type_tuple, 0, const_str_plain_find_common_type ); Py_INCREF( const_str_plain_find_common_type );
    const_tuple_str_plain_n_str_plain_ndim_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_tuple, 1, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    const_tuple_str_plain_self_str_plain_res_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_res_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_list_fa22549eaa1a878119e86a628980cdb1_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 0, const_str_plain_ravel_multi_index ); Py_INCREF( const_str_plain_ravel_multi_index );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 1, const_str_plain_unravel_index ); Py_INCREF( const_str_plain_unravel_index );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 2, const_str_plain_mgrid ); Py_INCREF( const_str_plain_mgrid );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 3, const_str_plain_ogrid ); Py_INCREF( const_str_plain_ogrid );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 4, const_str_plain_r_ ); Py_INCREF( const_str_plain_r_ );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 5, const_str_plain_c_ ); Py_INCREF( const_str_plain_c_ );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 6, const_str_plain_s_ ); Py_INCREF( const_str_plain_s_ );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 7, const_str_plain_index_exp ); Py_INCREF( const_str_plain_index_exp );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 8, const_str_plain_ix_ ); Py_INCREF( const_str_plain_ix_ );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 9, const_str_plain_ndenumerate ); Py_INCREF( const_str_plain_ndenumerate );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 10, const_str_plain_ndindex ); Py_INCREF( const_str_plain_ndindex );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 11, const_str_plain_fill_diagonal ); Py_INCREF( const_str_plain_fill_diagonal );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 12, const_str_plain_diag_indices ); Py_INCREF( const_str_plain_diag_indices );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 13, const_str_plain_diag_indices_from ); Py_INCREF( const_str_plain_diag_indices_from );
    const_str_digest_049a19cbc090f68af349070013f69c00 = UNSTREAM_STRING( &constant_bin[ 1303853 ], 25, 0 );
    const_str_digest_0e28c73803b4d447d759112d47e45329 = UNSTREAM_STRING( &constant_bin[ 1303878 ], 1121, 0 );
    const_str_digest_255645ad7e19bda0865a9234e223ec4f = UNSTREAM_STRING( &constant_bin[ 1304999 ], 596, 0 );
    const_str_digest_2f892679dece2db2111ceb00f9e4861f = UNSTREAM_STRING( &constant_bin[ 1305595 ], 33, 0 );
    const_str_digest_378bca8ae9010c6cf7e80b4dfa98c60c = UNSTREAM_STRING( &constant_bin[ 1305628 ], 47, 0 );
    const_str_digest_4d94e54c68f433850efac0d639826e4f = UNSTREAM_STRING( &constant_bin[ 1305675 ], 280, 0 );
    const_str_digest_6368aee1c3b3f1183418fb89e32a553a = UNSTREAM_STRING( &constant_bin[ 1305955 ], 229, 0 );
    const_str_digest_661e17987d9fd39389dd823ae9497c3b = UNSTREAM_STRING( &constant_bin[ 1306184 ], 58, 0 );
    const_str_digest_6a835e49a88dd3098cb6f8c7548eb3a9 = UNSTREAM_STRING( &constant_bin[ 1306242 ], 276, 0 );
    const_str_digest_76974383c40700d7b9936e74c460cf41 = UNSTREAM_STRING( &constant_bin[ 1306518 ], 1268, 0 );
    const_str_digest_7d52eac3b9930b5c7f090bba74882b60 = UNSTREAM_STRING( &constant_bin[ 1307786 ], 43, 0 );
    const_str_digest_82c91861346ce300a6233baf150cc0e2 = UNSTREAM_STRING( &constant_bin[ 1307829 ], 546, 0 );
    const_str_digest_92ece64a17aeb80db18d1b3ec8d37160 = UNSTREAM_STRING( &constant_bin[ 1308375 ], 1579, 0 );
    const_str_digest_b2d2a97a1e580fc20f9861711baa3725 = UNSTREAM_STRING( &constant_bin[ 1309954 ], 1816, 0 );
    const_str_digest_bc6004d8a0f1693ba2628ba8ff078e23 = UNSTREAM_STRING( &constant_bin[ 1311770 ], 132, 0 );
    const_str_digest_bd5339a4ea2d0544c007520f2832dad3 = UNSTREAM_STRING( &constant_bin[ 1311902 ], 418, 0 );
    const_str_digest_be772f8136a441e7bb0572f31c147bd4 = UNSTREAM_STRING( &constant_bin[ 1312320 ], 3807, 0 );
    const_str_digest_dec666935059bada1e247454ccdb9181 = UNSTREAM_STRING( &constant_bin[ 1316127 ], 119, 0 );
    const_str_digest_e119749f51a4bbb9b94b392c60f53fd0 = UNSTREAM_STRING( &constant_bin[ 1316246 ], 2189, 0 );
    const_str_digest_f47d3837d30c6f327231c2aac7bc131f = UNSTREAM_STRING( &constant_bin[ 1318435 ], 26, 0 );
    const_str_digest_fb22d554b5e51e0fa7481273f3fb7425 = UNSTREAM_STRING( &constant_bin[ 1318461 ], 32, 0 );
    const_tuple_int_0_false_int_pos_1_int_neg_1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_tuple_str_plain_self_str_plain_sparse_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sparse_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sparse_tuple, 1, const_str_plain_sparse ); Py_INCREF( const_str_plain_sparse );
    const_tuple_13c448b617a735a40d5fd5aa2d99abf7_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1318493 ], 275 );
    const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 2, const_str_plain_matrix ); Py_INCREF( const_str_plain_matrix );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 3, const_str_plain_ndmin ); Py_INCREF( const_str_plain_ndmin );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 4, const_str_plain_trans1d ); Py_INCREF( const_str_plain_trans1d );
    const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple, 1, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple, 2, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple, 3, const_str_plain_baseshape ); Py_INCREF( const_str_plain_baseshape );
    PyTuple_SET_ITEM( const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple, 5, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    const_tuple_d41b7300892721d5a465b890d461f3a0_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 1, const_str_plain_ScalarType ); Py_INCREF( const_str_plain_ScalarType );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 2, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 3, const_str_plain_alltrue ); Py_INCREF( const_str_plain_alltrue );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 4, const_str_plain_cumprod ); Py_INCREF( const_str_plain_cumprod );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 5, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    const_tuple_f57186059421a8f2f530b4210f3b6183_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 2, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 3, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 5, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 6, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 7, const_str_plain__x ); Py_INCREF( const_str_plain__x );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 8, const_str_plain__t ); Py_INCREF( const_str_plain__t );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 9, const_str_plain_nn ); Py_INCREF( const_str_plain_nn );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 10, const_str_plain_slobj ); Py_INCREF( const_str_plain_slobj );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 11, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 12, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 2, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 3, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 4, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    const_tuple_str_plain_self_str_plain_maketuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_maketuple_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_maketuple_tuple, 1, const_str_plain_maketuple ); Py_INCREF( const_str_plain_maketuple );
    const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, 2, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 1, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 2, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple, 2, const_str_plain_oldndim ); Py_INCREF( const_str_plain_oldndim );
    const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, 0, const_str_plain_ravel_multi_index ); Py_INCREF( const_str_plain_ravel_multi_index );
    PyTuple_SET_ITEM( const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, 1, const_str_plain_unravel_index ); Py_INCREF( const_str_plain_unravel_index );
    const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 2, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
}

// The module code objects.
static PyCodeObject *codeobj_b4592152a376b5cea80058e990706bb1;
static PyCodeObject *codeobj_7c6cad8df345aefd1d090694c671d51e;
static PyCodeObject *codeobj_3035855a6147d31d8ff9a715ff5d634d;
static PyCodeObject *codeobj_124b16004f41488d713fb0225163195a;
static PyCodeObject *codeobj_a85e0182f90dbed7a0afc7910653400a;
static PyCodeObject *codeobj_316fe83ce65dd2e16ec5a35a3c3bbcd0;
static PyCodeObject *codeobj_5c0d170514776f7f2a7ca18693950b2a;
static PyCodeObject *codeobj_175c87b60c806305061a63073c711c8e;
static PyCodeObject *codeobj_93dff3eff425d5407f421b993519a5cd;
static PyCodeObject *codeobj_c4278ff9f182660b4065f5d8ce1417d2;
static PyCodeObject *codeobj_e1bf8c87f4048a5ed97487e53eceb70d;
static PyCodeObject *codeobj_ef4eb4d665f7ac9c20041e8f3ec5ac46;
static PyCodeObject *codeobj_e5671426ba36ee2d2cc3ced4360024ec;
static PyCodeObject *codeobj_7832b6546ae8a6f5452c22db4e6a491b;
static PyCodeObject *codeobj_513e9e3ca7df8e29ec924309949803c4;
static PyCodeObject *codeobj_b6ca5a62e97994e40bbad5e568658fa6;
static PyCodeObject *codeobj_90af4268645855a1fb74b2b8f41c98dc;
static PyCodeObject *codeobj_4466c48ccf08d78c35646b20f3d376e6;
static PyCodeObject *codeobj_29d8644e15bd0d3d677c50c5266433fc;
static PyCodeObject *codeobj_131d2f3e73e7682aa51a17117a1b837e;
static PyCodeObject *codeobj_b4dc405e1b803e4cb3b20225135d915d;
static PyCodeObject *codeobj_5476525684fd30405f9caca7d53a4545;
static PyCodeObject *codeobj_edc589180113b449b58a6e4840a6f4ff;
static PyCodeObject *codeobj_9327eaa7d281de63561427471916e729;
static PyCodeObject *codeobj_b735caf0257fe4570239ad6ad5bee29b;
static PyCodeObject *codeobj_484b7550a58b51c1d331afc9a9521054;
static PyCodeObject *codeobj_b85a08850918370865d378bbb46581b8;
static PyCodeObject *codeobj_86f9cabcdb33bb730452f7cb3efc9015;
static PyCodeObject *codeobj_36f05c997cf2dc71bd53c37d028c8781;
static PyCodeObject *codeobj_ffa0ec3a4ddeca36f3afa1b8b7eba688;
static PyCodeObject *codeobj_bb6b587872d261798f5f86b334127a42;
static PyCodeObject *codeobj_85a87554507026cf5f1dbe04772c937e;
static PyCodeObject *codeobj_f128ee2839a7ee36f5530dd40806be39;
static PyCodeObject *codeobj_4f21935777af83942cb931c5dba3ffcd;
static PyCodeObject *codeobj_2cceabd48a5b28aa97330146991e5a60;
static PyCodeObject *codeobj_f3b8ebb816709ec0ab964bb24be8fb06;
static PyCodeObject *codeobj_53b8dd4dd92a70e95c8d3c0a2f5efd15;
static PyCodeObject *codeobj_9af5c3e7890e465cea8f918868e04124;
static PyCodeObject *codeobj_cd26bb5e717eeab4de639009ec4af18a;
static PyCodeObject *codeobj_546e2efb8281b12d2c3bc73783264725;

static void _initModuleCodeObjects(void)
{
    codeobj_b4592152a376b5cea80058e990706bb1 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_AxisConcatenator, 213, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7c6cad8df345aefd1d090694c671d51e = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_CClass, 439, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3035855a6147d31d8ff9a715ff5d634d = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_IndexExpression, 584, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_124b16004f41488d713fb0225163195a = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_RClass, 340, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a85e0182f90dbed7a0afc7910653400a = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___getitem__, 147, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_316fe83ce65dd2e16ec5a35a3c3bbcd0 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___getitem__, 147, const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5c0d170514776f7f2a7ca18693950b2a = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___getitem__, 240, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_175c87b60c806305061a63073c711c8e = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___getitem__, 240, const_tuple_13c448b617a735a40d5fd5aa2d99abf7_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_93dff3eff425d5407f421b993519a5cd = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___getitem__, 630, const_tuple_str_plain_self_str_plain_item_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c4278ff9f182660b4065f5d8ce1417d2 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___getslice__, 202, const_tuple_str_plain_self_str_plain_i_str_plain_j_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e1bf8c87f4048a5ed97487e53eceb70d = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___getslice__, 329, const_tuple_str_plain_self_str_plain_i_str_plain_j_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ef4eb4d665f7ac9c20041e8f3ec5ac46 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___getslice__, 329, const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e5671426ba36ee2d2cc3ced4360024ec = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___init__, 145, const_tuple_str_plain_self_str_plain_sparse_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7832b6546ae8a6f5452c22db4e6a491b = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___init__, 231, const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_513e9e3ca7df8e29ec924309949803c4 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___init__, 434, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b6ca5a62e97994e40bbad5e568658fa6 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___init__, 456, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_90af4268645855a1fb74b2b8f41c98dc = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___init__, 487, const_tuple_str_plain_self_str_plain_arr_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4466c48ccf08d78c35646b20f3d376e6 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___init__, 539, const_tuple_str_plain_self_str_plain_shape_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_29d8644e15bd0d3d677c50c5266433fc = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___init__, 539, const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_131d2f3e73e7682aa51a17117a1b837e = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___init__, 627, const_tuple_str_plain_self_str_plain_maketuple_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b4dc405e1b803e4cb3b20225135d915d = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___iter__, 504, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5476525684fd30405f9caca7d53a4545 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___iter__, 546, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_edc589180113b449b58a6e4840a6f4ff = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___len__, 205, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9327eaa7d281de63561427471916e729 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___len__, 333, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b735caf0257fe4570239ad6ad5bee29b = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___next__, 490, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_484b7550a58b51c1d331afc9a9521054 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain___next__, 557, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b85a08850918370865d378bbb46581b8 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain__retval, 220, const_tuple_str_plain_self_str_plain_res_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_86f9cabcdb33bb730452f7cb3efc9015 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain__retval, 220, const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_36f05c997cf2dc71bd53c37d028c8781 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_diag_indices, 754, const_tuple_str_plain_n_str_plain_ndim_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ffa0ec3a4ddeca36f3afa1b8b7eba688 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_diag_indices, 754, const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bb6b587872d261798f5f86b334127a42 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_diag_indices_from, 822, const_tuple_str_plain_arr_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_85a87554507026cf5f1dbe04772c937e = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_fill_diagonal, 645, const_tuple_str_plain_a_str_plain_val_str_plain_wrap_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f128ee2839a7ee36f5530dd40806be39 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_fill_diagonal, 645, const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4f21935777af83942cb931c5dba3ffcd = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_index_tricks, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2cceabd48a5b28aa97330146991e5a60 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_ix_, 26, const_tuple_str_plain_args_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f3b8ebb816709ec0ab964bb24be8fb06 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_ix_, 26, const_tuple_d38e97d6cff65deb93ebd4547453d077_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_53b8dd4dd92a70e95c8d3c0a2f5efd15 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_nd_grid, 85, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9af5c3e7890e465cea8f918868e04124 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_ndenumerate, 461, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cd26bb5e717eeab4de639009ec4af18a = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_ndincr, 549, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_546e2efb8281b12d2c3bc73783264725 = MAKE_CODEOBJ( const_str_digest_661e17987d9fd39389dd823ae9497c3b, const_str_plain_ndindex, 510, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_nd_grid_of_module_numpy$lib$index_tricks(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_RClass_of_module_numpy$lib$index_tricks(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_CClass_of_module_numpy$lib$index_tricks(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_ndindex_of_module_numpy$lib$index_tricks(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_10_diag_indices_of_module_numpy$lib$index_tricks( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_11_diag_indices_from_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_1_ix__of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );


static PyObject *MAKE_FUNCTION_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_ix__of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable var_out;
    PyObjectLocalVariable var_nd;
    PyObjectLocalVariable var_baseshape;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_new;
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
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range_arg_1;
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
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_arg_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_out.object == NULL );
    var_out.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2cceabd48a5b28aa97330146991e5a60, module_numpy$lib$index_tricks );
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
    tmp_len_arg_1 = par_args.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    assert( var_nd.object == NULL );
    var_nd.object = tmp_assign_source_2;

    tmp_binop_left_1 = LIST_COPY( const_list_int_pos_1_list );
    tmp_binop_right_1 = var_nd.object;

    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    assert( var_baseshape.object == NULL );
    var_baseshape.object = tmp_assign_source_3;

    tmp_range_arg_1 = var_nd.object;

    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
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
        frame_function->f_lineno = 73;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_1 = par_args.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_k.object;

    tmp_call_arg_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 74;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    if (var_new.object == NULL)
    {
        var_new.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_new.object;
        var_new.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_source_name_2 = var_new.object;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 75;
        goto try_finally_handler_1;
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
    tmp_make_exception_arg_1 = const_str_digest_2f892679dece2db2111ceb00f9e4861f;
    frame_function->f_lineno = 76;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 76;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_1:;
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_1;
    }
    tmp_source_name_4 = var_new.object;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bool_ );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 77;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 77;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 77;
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
    tmp_source_name_6 = var_new.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_nonzero );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 78;
    tmp_subscr_target_2 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_finally_handler_1;
    }
    assert( var_new.object != NULL );
    {
        PyObject *old = var_new.object;
        var_new.object = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_len_arg_2 = var_new.object;

    tmp_ass_subvalue_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_1 = var_baseshape.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168251 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = var_k.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto try_finally_handler_1;
    }
    tmp_source_name_7 = var_new.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_reshape );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto try_finally_handler_1;
    }
    tmp_tuple_arg_1 = var_baseshape.object;

    if ( tmp_tuple_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168251 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_4 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 80;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 80;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto try_finally_handler_1;
    }
    assert( var_new.object != NULL );
    {
        PyObject *old = var_new.object;
        var_new.object = tmp_assign_source_9;
        Py_DECREF( old );
    }

    tmp_source_name_8 = var_out.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7983 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_new.object;

    frame_function->f_lineno = 81;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_2 = const_int_pos_1;
    tmp_ass_subscribed_2 = var_baseshape.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168251 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_2 = var_k.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
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
    tmp_tuple_arg_2 = var_out.object;

    if ( tmp_tuple_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7983 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_return_value = PySequence_Tuple( tmp_tuple_arg_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
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
    if ((var_out.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out,
            var_out.object
        );

    }
    if ((var_nd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nd,
            var_nd.object
        );

    }
    if ((var_baseshape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_baseshape,
            var_baseshape.object
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
    if ((var_new.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new,
            var_new.object
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
static PyObject *fparse_function_1_ix__of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
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
                PyErr_Format( PyExc_TypeError, "ix_() keywords must be strings" );
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
                   "ix_() got an unexpected keyword argument '%s'",
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
        _python_par_args = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[0+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_1_ix__of_module_numpy$lib$index_tricks( self, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_1_ix__of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_ix__of_module_numpy$lib$index_tricks( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_1_ix__of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_nd_grid_of_module_numpy$lib$index_tricks(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___getitem__;
    PyObjectLocalVariable var___getslice__;
    PyObjectLocalVariable var___len__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2029c2f6a2f548f5a6896adc20b13a55;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_b2d2a97a1e580fc20f9861711baa3725;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_53b8dd4dd92a70e95c8d3c0a2f5efd15, module_numpy$lib$index_tricks );
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
    tmp_defaults_1 = const_tuple_false_tuple;
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    assert( var___getitem__.object == NULL );
    var___getitem__.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    assert( var___getslice__.object == NULL );
    var___getslice__.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }
    assert( var___len__.object == NULL );
    var___len__.object = tmp_assign_source_6;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___getslice__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___getslice__,
            var___getslice__.object
        );

    }
    if ((var___len__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___len__,
            var___len__.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___getslice__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getslice__,
            var___getslice__.object
        );

    }
    if ((var___len__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___len__,
            var___len__.object
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


static PyObject *impl_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sparse )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_sparse; par_sparse.object = _python_par_sparse;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e5671426ba36ee2d2cc3ced4360024ec, module_numpy$lib$index_tricks );
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
    tmp_assattr_name_1 = par_sparse.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 167619 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sparse, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_sparse.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sparse,
            par_sparse.object
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
static PyObject *fparse_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sparse = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
            if ( found == false && const_str_plain_sparse == key )
            {
                assert( _python_par_sparse == NULL );
                _python_par_sparse = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sparse, key ) == 1 )
            {
                assert( _python_par_sparse == NULL );
                _python_par_sparse = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_sparse != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_sparse = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_sparse == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_sparse = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_sparse == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_sparse };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_sparse );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sparse );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_key; par_key.object = _python_par_key;
    PyObjectLocalVariable var_size;
    PyObjectLocalVariable var_typ;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_step;
    PyObjectLocalVariable var_start;
    PyObjectLocalVariable var__x;
    PyObjectLocalVariable var__t;
    PyObjectLocalVariable var_nn;
    PyObjectLocalVariable var_slobj;
    PyObjectLocalVariable var_stop;
    PyObjectLocalVariable var_length;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_1__value_2;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
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
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_float_arg_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    PyObject *tmp_range_arg_3;
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
    PyObject *tmp_source_name_23;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a85e0182f90dbed7a0afc7910653400a, module_numpy$lib$index_tricks );
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
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_size.object == NULL );
    var_size.object = tmp_assign_source_1;

    tmp_assign_source_2 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_except_handler_1;
    }
    assert( var_typ.object == NULL );
    var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_len_arg_1 = par_key.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto try_except_handler_1;
    }

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_except_handler_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_except_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_except_handler_1;
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
        frame_function->f_lineno = 151;
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

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_subscr_target_1 = par_key.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_k.object;

    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_1;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_step );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_1;
    }
    if (var_step.object == NULL)
    {
        var_step.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_step.object;
        var_step.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_subscr_target_2 = par_key.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = var_k.object;

    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto try_finally_handler_1;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_start );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto try_finally_handler_1;
    }
    if (var_start.object == NULL)
    {
        var_start.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_start.object;
        var_start.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_start.object;

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
    tmp_assign_source_8 = const_int_0;
    assert( var_start.object != NULL );
    {
        PyObject *old = var_start.object;
        var_start.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = var_step.object;

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
    tmp_assign_source_9 = const_int_pos_1;
    assert( var_step.object != NULL );
    {
        PyObject *old = var_step.object;
        var_step.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_isinstance_inst_1 = var_step.object;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_complex );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
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
    tmp_source_name_3 = var_size.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto try_finally_handler_1;
    }
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 157;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = var_step.object;

    frame_function->f_lineno = 157;
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 157;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 157;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 157;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_10 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_1;
    }
    if (var_typ.object == NULL)
    {
        var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_typ.object;
        var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_4 = var_size.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1572 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ceil );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_3 = par_key.object;

    if ( tmp_subscr_target_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_3 = var_k.object;

    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    tmp_binop_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_stop );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    tmp_binop_right_2 = var_start.object;

    tmp_binop_left_1 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    tmp_binop_left_3 = var_step.object;

    tmp_binop_right_3 = const_float_1_0;
    tmp_binop_right_1 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 160;
    tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 160;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_3:;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_isinstance_inst_2 = var_step.object;

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_3;
    }
    tmp_assign_source_11 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_3;
    }
    if (tmp_or_1__value_2.object == NULL)
    {
        tmp_or_1__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = tmp_or_1__value_2.object;
        tmp_or_1__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_or_1__value_2.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
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
    tmp_cond_value_1 = tmp_or_1__value_2.object;

    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_2.object );
        tmp_or_1__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_isinstance_inst_3 = var_start.object;

    tmp_isinstance_cls_3 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_isinstance_cls_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_6;
    }
    tmp_assign_source_12 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto try_finally_handler_6;
    }
    if (tmp_or_1__value_1.object == NULL)
    {
        tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = tmp_or_1__value_1.object;
        tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
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
    tmp_subscr_target_4 = par_key.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_4 = var_k.object;

    tmp_source_name_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto try_finally_handler_7;
    }
    tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_stop );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_isinstance_inst_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto try_finally_handler_7;
    }
    tmp_isinstance_cls_4 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_isinstance_cls_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_4 );

        frame_function->f_lineno = 163;
        goto try_finally_handler_7;
    }
    tmp_cond_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    Py_DECREF( tmp_isinstance_inst_4 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto try_finally_handler_7;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
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

        goto try_finally_handler_6;
    }

    goto finally_end_1;
    finally_end_1:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
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

        goto try_finally_handler_5;
    }

    goto finally_end_2;
    finally_end_2:;
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

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
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
    condexpr_end_1:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_2;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_2;
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
    tmp_assign_source_13 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_2;
    }
    if (var_typ.object == NULL)
    {
        var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_typ.object;
        var_typ.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_2.object );
    tmp_or_1__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_1;
    }

    goto finally_end_6;
    finally_end_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
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
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_except_handler_1;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_except_handler_1;
    }

    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sparse );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto try_except_handler_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 165;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    // Tried code
    tmp_assign_source_14 = NULL;
    // Tried code
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_zip );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto try_finally_handler_9;
    }
    tmp_call_arg_element_5 = var_size.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_9;
    }

    tmp_binop_left_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_typ.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5069 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_4, 0, tmp_tuple_element_1 );
    tmp_len_arg_2 = var_size.object;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto try_finally_handler_9;
    }

    tmp_binop_right_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 167;
        goto try_finally_handler_9;
    }
    tmp_call_arg_element_6 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto try_finally_handler_9;
    }
    frame_function->f_lineno = 167;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto try_finally_handler_9;
    }
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_15;

    tmp_assign_source_16 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_16;

    loop_start_2:;
    tmp_next_source_2 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_17 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 166;
            goto try_finally_handler_9;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_3 = tmp_listcontr_1__iter_value_0.object;

    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_10;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_19 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 166;
        goto try_finally_handler_10;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_20 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 166;
        goto try_finally_handler_10;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_20;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_20;
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
    tmp_assign_source_21 = tmp_tuple_unpack_1__element_1.object;

    if (var__x.object == NULL)
    {
        var__x.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = var__x.object;
        var__x.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    tmp_assign_source_22 = tmp_tuple_unpack_1__element_2.object;

    if (var__t.object == NULL)
    {
        var__t.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = var__t.object;
        var__t.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
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
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_9;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_arange );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var__x.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166303 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var__t.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166351 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 166;
    tmp_append_value_1 = CALL_FUNCTION( tmp_called_6, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto try_finally_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_assign_source_14 = tmp_listcontr_1__listcontr_result.object;

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
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
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
    assert( var_nn.object == NULL );
    var_nn.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

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
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_except_handler_1;
    }

    goto finally_end_10;
    finally_end_10:;
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto try_except_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_indices );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_7 = var_size.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_8 = var_typ.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5069 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 169;
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto try_except_handler_1;
    }
    assert( var_nn.object == NULL );
    var_nn.object = tmp_assign_source_23;

    branch_end_5:;
    tmp_len_arg_3 = var_size.object;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto try_except_handler_1;
    }

    tmp_range_arg_2 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_range_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_except_handler_1;
    }
    tmp_iter_arg_4 = BUILTIN_RANGE( tmp_range_arg_2 );
    Py_DECREF( tmp_range_arg_2 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_except_handler_1;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_except_handler_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_24;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_25 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 170;
            goto try_finally_handler_11;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    tmp_assign_source_26 = tmp_for_loop_2__iter_value.object;

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }
    tmp_subscr_target_5 = par_key.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto try_finally_handler_11;
    }

    tmp_subscr_subscript_5 = var_k.object;

    tmp_source_name_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto try_finally_handler_11;
    }
    tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_step );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto try_finally_handler_11;
    }
    if (var_step.object == NULL)
    {
        var_step.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = var_step.object;
        var_step.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_subscr_target_6 = par_key.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto try_finally_handler_11;
    }

    tmp_subscr_subscript_6 = var_k.object;

    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto try_finally_handler_11;
    }
    tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_start );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto try_finally_handler_11;
    }
    if (var_start.object == NULL)
    {
        var_start.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = var_start.object;
        var_start.object = tmp_assign_source_28;
        Py_DECREF( old );
    }
    tmp_compare_left_3 = var_start.object;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_29 = const_int_0;
    assert( var_start.object != NULL );
    {
        PyObject *old = var_start.object;
        var_start.object = INCREASE_REFCOUNT( tmp_assign_source_29 );
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_compare_left_4 = var_step.object;

    tmp_compare_right_4 = Py_None;
    tmp_is_4 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_4)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_30 = const_int_pos_1;
    assert( var_step.object != NULL );
    {
        PyObject *old = var_step.object;
        var_step.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_isinstance_inst_5 = var_step.object;

    tmp_isinstance_cls_5 = LOOKUP_BUILTIN( const_str_plain_complex );
    if ( tmp_isinstance_cls_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_11;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_11;
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
    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_11;
    }
    tmp_call_arg_element_9 = var_step.object;

    frame_function->f_lineno = 176;
    tmp_int_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_11;
    }
    tmp_assign_source_31 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_11;
    }
    assert( var_step.object != NULL );
    {
        PyObject *old = var_step.object;
        var_step.object = tmp_assign_source_31;
        Py_DECREF( old );
    }

    tmp_compare_left_5 = var_step.object;

    tmp_compare_right_5 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto try_finally_handler_11;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_subscr_target_7 = par_key.object;

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto try_finally_handler_11;
    }

    tmp_subscr_subscript_7 = var_k.object;

    tmp_source_name_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_11;
    }
    tmp_binop_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_stop );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_11;
    }
    tmp_binop_right_6 = var_start.object;

    tmp_binop_left_5 = BINARY_OPERATION_SUB( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_11;
    }
    tmp_binop_left_7 = var_step.object;

    tmp_binop_right_7 = const_int_pos_1;
    tmp_float_arg_1 = BINARY_OPERATION_SUB( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_float_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );

        frame_function->f_lineno = 178;
        goto try_finally_handler_11;
    }
    tmp_binop_right_5 = TO_FLOAT( tmp_float_arg_1 );
    Py_DECREF( tmp_float_arg_1 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );

        frame_function->f_lineno = 178;
        goto try_finally_handler_11;
    }
    tmp_assign_source_32 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_11;
    }
    assert( var_step.object != NULL );
    {
        PyObject *old = var_step.object;
        var_step.object = tmp_assign_source_32;
        Py_DECREF( old );
    }

    branch_no_9:;
    branch_no_8:;
    tmp_subscr_target_8 = var_nn.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130722 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto try_finally_handler_11;
    }

    tmp_subscr_subscript_8 = var_k.object;

    tmp_binop_left_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto try_finally_handler_11;
    }
    tmp_binop_right_9 = var_step.object;

    if ( tmp_binop_right_9 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50835 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto try_finally_handler_11;
    }

    tmp_binop_left_8 = BINARY_OPERATION_MUL( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto try_finally_handler_11;
    }
    tmp_binop_right_8 = var_start.object;

    tmp_ass_subvalue_1 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto try_finally_handler_11;
    }
    tmp_ass_subscribed_1 = var_nn.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130722 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto try_finally_handler_11;
    }

    tmp_ass_subscript_1 = var_k.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto try_finally_handler_11;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
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
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_except_handler_1;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_except_handler_1;
    }

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_sparse );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_except_handler_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 180;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_binop_left_10 = PyList_New( 1 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_binop_left_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto try_except_handler_1;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_newaxis );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_10 );

        frame_function->f_lineno = 181;
        goto try_except_handler_1;
    }
    PyList_SET_ITEM( tmp_binop_left_10, 0, tmp_list_element_1 );
    tmp_len_arg_4 = var_size.object;

    if ( tmp_len_arg_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto try_except_handler_1;
    }

    tmp_binop_right_10 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_10 );

        frame_function->f_lineno = 181;
        goto try_except_handler_1;
    }
    tmp_assign_source_33 = BINARY_OPERATION_MUL( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_left_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto try_except_handler_1;
    }
    assert( var_slobj.object == NULL );
    var_slobj.object = tmp_assign_source_33;

    tmp_len_arg_5 = var_size.object;

    if ( tmp_len_arg_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto try_except_handler_1;
    }

    tmp_range_arg_3 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_range_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto try_except_handler_1;
    }
    tmp_iter_arg_5 = BUILTIN_RANGE( tmp_range_arg_3 );
    Py_DECREF( tmp_range_arg_3 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto try_except_handler_1;
    }
    tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto try_except_handler_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_34;

    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_3__for_iterator.object;

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
        frame_function->f_lineno = 182;
            goto try_finally_handler_12;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_35;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_35;
        Py_DECREF( old );
    }
    tmp_assign_source_36 = tmp_for_loop_3__iter_value.object;

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_12;
    }
    tmp_call_arg_element_10 = Py_None;
    tmp_call_arg_element_11 = Py_None;
    frame_function->f_lineno = 183;
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_12;
    }
    tmp_ass_subscribed_2 = var_slobj.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 167777 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto try_finally_handler_12;
    }

    tmp_ass_subscript_2 = var_k.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_12;
    }
    tmp_subscr_target_10 = var_nn.object;

    if ( tmp_subscr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130722 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_12;
    }

    tmp_subscr_subscript_10 = var_k.object;

    tmp_subscr_target_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_subscr_target_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 184;
        goto try_finally_handler_12;
    }
    tmp_subscr_subscript_9 = var_slobj.object;

    if ( tmp_subscr_subscript_9 == NULL )
    {
        Py_DECREF( tmp_subscr_target_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 167777 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_12;
    }

    tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_target_9 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 184;
        goto try_finally_handler_12;
    }
    tmp_ass_subscribed_3 = var_nn.object;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130722 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto try_finally_handler_12;
    }

    tmp_ass_subscript_3 = var_k.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 184;
        goto try_finally_handler_12;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto try_finally_handler_12;
    }

    tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_newaxis );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto try_finally_handler_12;
    }
    tmp_ass_subscribed_4 = var_slobj.object;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 167777 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto try_finally_handler_12;
    }

    tmp_ass_subscript_4 = var_k.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto try_finally_handler_12;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto try_finally_handler_12;
    }
    goto loop_start_4;
    loop_end_4:;
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

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_except_handler_1;
    }

    goto finally_end_12;
    finally_end_12:;
    branch_no_10:;
    tmp_return_value = var_nn.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 130722 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto try_except_handler_1;
    }

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
    tmp_compare_left_6 = PyThreadState_GET()->exc_type;
    tmp_compare_right_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = PyExc_IndexError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_6, 1, tmp_tuple_element_3 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_6 );

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_6 );
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_17 = par_key.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_step );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }
    if (var_step.object == NULL)
    {
        var_step.object = tmp_assign_source_37;
    }
    else
    {
        PyObject *old = var_step.object;
        var_step.object = tmp_assign_source_37;
        Py_DECREF( old );
    }
    tmp_source_name_18 = par_key.object;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_38 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_stop );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    assert( var_stop.object == NULL );
    var_stop.object = tmp_assign_source_38;

    tmp_source_name_19 = par_key.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_start );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    if (var_start.object == NULL)
    {
        var_start.object = tmp_assign_source_39;
    }
    else
    {
        PyObject *old = var_start.object;
        var_start.object = tmp_assign_source_39;
        Py_DECREF( old );
    }
    tmp_compare_left_7 = var_start.object;

    tmp_compare_right_7 = Py_None;
    tmp_is_5 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if (tmp_is_5)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_40 = const_int_0;
    assert( var_start.object != NULL );
    {
        PyObject *old = var_start.object;
        var_start.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
        Py_DECREF( old );
    }

    branch_no_12:;
    tmp_isinstance_inst_6 = var_step.object;

    tmp_isinstance_cls_6 = LOOKUP_BUILTIN( const_str_plain_complex );
    if ( tmp_isinstance_cls_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_10 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_step.object;

    frame_function->f_lineno = 193;
    tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_12 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    assert( var_step.object != NULL );
    {
        PyObject *old = var_step.object;
        var_step.object = tmp_assign_source_41;
        Py_DECREF( old );
    }

    tmp_int_arg_4 = var_step.object;

    tmp_assign_source_42 = PyNumber_Int( tmp_int_arg_4 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    assert( var_length.object == NULL );
    var_length.object = tmp_assign_source_42;

    tmp_compare_left_8 = var_step.object;

    tmp_compare_right_8 = const_int_pos_1;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_20 = par_key.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_stop );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_12 = var_start.object;

    tmp_binop_left_11 = BINARY_OPERATION_SUB( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    if ( tmp_binop_left_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_13 = var_step.object;

    tmp_binop_right_13 = const_int_pos_1;
    tmp_float_arg_2 = BINARY_OPERATION_SUB( tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_float_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_11 );

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_11 = TO_FLOAT( tmp_float_arg_2 );
    Py_DECREF( tmp_float_arg_2 );
    if ( tmp_binop_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_11 );

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_43 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_left_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    assert( var_step.object != NULL );
    {
        PyObject *old = var_step.object;
        var_step.object = tmp_assign_source_43;
        Py_DECREF( old );
    }

    branch_no_14:;
    tmp_source_name_21 = par_key.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_stop );
    if ( tmp_binop_left_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_14 = var_step.object;

    tmp_assign_source_44 = BINARY_OPERATION_ADD( tmp_binop_left_14, tmp_binop_right_14 );
    Py_DECREF( tmp_binop_left_14 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    assert( var_stop.object != NULL );
    {
        PyObject *old = var_stop.object;
        var_stop.object = tmp_assign_source_44;
        Py_DECREF( old );
    }

    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_arange );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_int_0;
    tmp_call_arg_element_14 = var_length.object;

    tmp_call_arg_element_15 = const_int_pos_1;
    tmp_call_arg_element_16 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 198;
    tmp_binop_left_16 = CALL_FUNCTION_WITH_ARGS4( tmp_called_11, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_binop_left_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_16 = var_step.object;

    tmp_binop_left_15 = BINARY_OPERATION_MUL( tmp_binop_left_16, tmp_binop_right_16 );
    Py_DECREF( tmp_binop_left_16 );
    if ( tmp_binop_left_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_15 = var_start.object;

    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_15, tmp_binop_right_15 );
    Py_DECREF( tmp_binop_left_15 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_13;
    branch_no_13:;
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_arange );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = var_start.object;

    tmp_call_arg_element_18 = var_stop.object;

    tmp_call_arg_element_19 = var_step.object;

    frame_function->f_lineno = 200;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_12, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_13:;
    goto branch_end_11;
    branch_no_11:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_11:;
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
    if ((var_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_size,
            var_size.object
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
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.object
        );

    }
    if ((var_step.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_step,
            var_step.object
        );

    }
    if ((var_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_start,
            var_start.object
        );

    }
    if ((var__x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__x,
            var__x.object
        );

    }
    if ((var__t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__t,
            var__t.object
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
    if ((var_slobj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slobj,
            var_slobj.object
        );

    }
    if ((var_stop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stop,
            var_stop.object
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_key.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_key,
            par_key.object
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
static PyObject *fparse_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
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
            if ( found == false && const_str_plain_key == key )
            {
                assert( _python_par_key == NULL );
                _python_par_key = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_key, key ) == 1 )
            {
                assert( _python_par_key == NULL );
                _python_par_key = value;

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
         if (unlikely( _python_par_key != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_key == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_key = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_key == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_key };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_key );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );

    return NULL;
}

static PyObject *dparse_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_i, PyObject *_python_par_j )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_i; par_i.object = _python_par_i;
    PyObjectLocalVariable par_j; par_j.object = _python_par_j;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c4278ff9f182660b4065f5d8ce1417d2, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_i.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_j.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54692 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 203;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 203;
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
    if ((par_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            par_i.object
        );

    }
    if ((par_j.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_j,
            par_j.object
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
static PyObject *fparse_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_i = NULL;
    PyObject *_python_par_j = NULL;
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
                PyErr_Format( PyExc_TypeError, "__getslice__() keywords must be strings" );
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
            if ( found == false && const_str_plain_i == key )
            {
                assert( _python_par_i == NULL );
                _python_par_i = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_j == key )
            {
                assert( _python_par_j == NULL );
                _python_par_j = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_i, key ) == 1 )
            {
                assert( _python_par_i == NULL );
                _python_par_i = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_j, key ) == 1 )
            {
                assert( _python_par_j == NULL );
                _python_par_j = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__getslice__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_i != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_i = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_i == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_i = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_j != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_j = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_j == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_j = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_i == NULL || _python_par_j == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_i, _python_par_j };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_i, _python_par_j );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_i );
    Py_XDECREF( _python_par_j );

    return NULL;
}

static PyObject *dparse_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__len__() keywords must be strings" );
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
                   "__len__() got an unexpected keyword argument '%s'",
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


    return impl_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var__retval;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___getitem__;
    PyObjectLocalVariable var___getslice__;
    PyObjectLocalVariable var___len__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_defaults_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2029c2f6a2f548f5a6896adc20b13a55;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_dec666935059bada1e247454ccdb9181;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b4592152a376b5cea80058e990706bb1, module_numpy$lib$index_tricks );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }
    assert( var__retval.object == NULL );
    var__retval.object = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    assert( var___getitem__.object == NULL );
    var___getitem__.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }
    assert( var___getslice__.object == NULL );
    var___getslice__.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }
    assert( var___len__.object == NULL );
    var___len__.object = tmp_assign_source_7;


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
    if ((var__retval.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__retval,
            var__retval.object
        );

    }
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___getslice__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___getslice__,
            var___getslice__.object
        );

    }
    if ((var___len__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___len__,
            var___len__.object
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
    if ((var__retval.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__retval,
            var__retval.object
        );

    }
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___getslice__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getslice__,
            var___getslice__.object
        );

    }
    if ((var___len__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___len__,
            var___len__.object
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


static PyObject *impl_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_res )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_res; par_res.object = _python_par_res;
    PyObjectLocalVariable var_oldndim;
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
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b85a08850918370865d378bbb46581b8, module_numpy$lib$index_tricks );
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

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matrix );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 221;
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
    tmp_source_name_2 = par_res.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64406 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    assert( var_oldndim.object == NULL );
    var_oldndim.object = tmp_assign_source_1;

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_makemat );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makemat );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168306 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_res.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64406 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 223;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    if (par_res.object == NULL)
    {
        par_res.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_res.object;
        par_res.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_oldndim.object;

    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_assign_source_3 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_3;

    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
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
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto try_finally_handler_3;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_col );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
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
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_2 );
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

        frame_function->f_lineno = 224;
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
    tmp_source_name_4 = par_res.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64406 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto try_finally_handler_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto try_finally_handler_1;
    }
    if (par_res.object == NULL)
    {
        par_res.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_res.object;
        par_res.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
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
    branch_no_1:;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__axis );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_axis, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__matrix );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_matrix, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_col, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_return_value = par_res.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64406 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
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
    if ((var_oldndim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_oldndim,
            var_oldndim.object
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
    if ((par_res.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res,
            par_res.object
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
static PyObject *fparse_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_res = NULL;
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
                PyErr_Format( PyExc_TypeError, "_retval() keywords must be strings" );
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
            if ( found == false && const_str_plain_res == key )
            {
                assert( _python_par_res == NULL );
                _python_par_res = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_res, key ) == 1 )
            {
                assert( _python_par_res == NULL );
                _python_par_res = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_retval() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_res != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_res = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_res == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_res = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_res == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_res };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_res );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_res );

    return NULL;
}

static PyObject *dparse_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_axis, PyObject *_python_par_matrix, PyObject *_python_par_ndmin, PyObject *_python_par_trans1d )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_axis; par_axis.object = _python_par_axis;
    PyObjectLocalVariable par_matrix; par_matrix.object = _python_par_matrix;
    PyObjectLocalVariable par_ndmin; par_ndmin.object = _python_par_ndmin;
    PyObjectLocalVariable par_trans1d; par_trans1d.object = _python_par_trans1d;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7832b6546ae8a6f5452c22db4e6a491b, module_numpy$lib$index_tricks );
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
    tmp_assattr_name_1 = par_axis.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__axis, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_matrix.object;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7080 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__matrix, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_axis.object;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_axis, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_matrix.object;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7080 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_matrix, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = const_int_0;
    tmp_assattr_target_5 = par_self.object;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_col, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = par_trans1d.object;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168342 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self.object;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_trans1d, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = par_ndmin.object;

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self.object;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_ndmin, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
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
    if ((par_matrix.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_matrix,
            par_matrix.object
        );

    }
    if ((par_ndmin.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ndmin,
            par_ndmin.object
        );

    }
    if ((par_trans1d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_trans1d,
            par_trans1d.object
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
static PyObject *fparse_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_axis = NULL;
    PyObject *_python_par_matrix = NULL;
    PyObject *_python_par_ndmin = NULL;
    PyObject *_python_par_trans1d = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
            if ( found == false && const_str_plain_axis == key )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_matrix == key )
            {
                assert( _python_par_matrix == NULL );
                _python_par_matrix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ndmin == key )
            {
                assert( _python_par_ndmin == NULL );
                _python_par_ndmin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_trans1d == key )
            {
                assert( _python_par_trans1d == NULL );
                _python_par_trans1d = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_axis, key ) == 1 )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_matrix, key ) == 1 )
            {
                assert( _python_par_matrix == NULL );
                _python_par_matrix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ndmin, key ) == 1 )
            {
                assert( _python_par_ndmin == NULL );
                _python_par_ndmin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_trans1d, key ) == 1 )
            {
                assert( _python_par_trans1d == NULL );
                _python_par_trans1d = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_axis = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_matrix != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_matrix = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_matrix == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_matrix = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_ndmin != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_ndmin = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_ndmin == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_ndmin = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_trans1d != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_trans1d = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_trans1d == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_trans1d = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_axis == NULL || _python_par_matrix == NULL || _python_par_ndmin == NULL || _python_par_trans1d == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_axis, _python_par_matrix, _python_par_ndmin, _python_par_trans1d };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_axis, _python_par_matrix, _python_par_ndmin, _python_par_trans1d );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_axis );
    Py_XDECREF( _python_par_matrix );
    Py_XDECREF( _python_par_ndmin );
    Py_XDECREF( _python_par_trans1d );

    return NULL;
}

static PyObject *dparse_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_key; par_key.object = _python_par_key;
    PyObjectLocalVariable var_trans1d;
    PyObjectLocalVariable var_ndmin;
    PyObjectLocalVariable var_frame;
    PyObjectLocalVariable var_mymat;
    PyObjectLocalVariable var_objs;
    PyObjectLocalVariable var_scalars;
    PyObjectLocalVariable var_arraytypes;
    PyObjectLocalVariable var_scalartypes;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_scalar;
    PyObjectLocalVariable var_step;
    PyObjectLocalVariable var_start;
    PyObjectLocalVariable var_stop;
    PyObjectLocalVariable var_size;
    PyObjectLocalVariable var_newobj;
    PyObjectLocalVariable var_key0;
    PyObjectLocalVariable var_vec;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_tempobj;
    PyObjectLocalVariable var_k2;
    PyObjectLocalVariable var_defaxes;
    PyObjectLocalVariable var_k1;
    PyObjectLocalVariable var_axes;
    PyObjectLocalVariable var_final_dtype;
    PyObjectLocalVariable var_res;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_and_2__value_1;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
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
    PyObject *tmp_called_15;
    PyObject *tmp_called_16;
    PyObject *tmp_called_17;
    PyObject *tmp_called_18;
    PyObject *tmp_called_19;
    PyObject *tmp_called_20;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_Lt_1;
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
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
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
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
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
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5c0d170514776f7f2a7ca18693950b2a, module_numpy$lib$index_tricks );
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

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trans1d );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    assert( var_trans1d.object == NULL );
    var_trans1d.object = tmp_assign_source_1;

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndmin );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    assert( var_ndmin.object == NULL );
    var_ndmin.object = tmp_assign_source_2;

    tmp_isinstance_inst_1 = par_key.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__getframe );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 244;
    tmp_source_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_back );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    assert( var_frame.object == NULL );
    var_frame.object = tmp_assign_source_3;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrix );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168446 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bmat );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_key.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = var_frame.object;

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_f_globals );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = var_frame.object;

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_f_locals );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 245;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    assert( var_mymat.object == NULL );
    var_mymat.object = tmp_assign_source_4;

    tmp_return_value = var_mymat.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_key.object;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_assign_source_5 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_key.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    if (par_key.object == NULL)
    {
        par_key.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = par_key.object;
        par_key.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_assign_source_6 = PyList_New( 0 );
    assert( var_objs.object == NULL );
    var_objs.object = tmp_assign_source_6;

    tmp_assign_source_7 = PyList_New( 0 );
    assert( var_scalars.object == NULL );
    var_scalars.object = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( var_arraytypes.object == NULL );
    var_arraytypes.object = tmp_assign_source_8;

    tmp_assign_source_9 = PyList_New( 0 );
    assert( var_scalartypes.object == NULL );
    var_scalartypes.object = tmp_assign_source_9;

    tmp_len_arg_1 = par_key.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
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
        frame_function->f_lineno = 253;
            goto try_finally_handler_1;
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

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_assign_source_13 = Py_False;
    if (var_scalar.object == NULL)
    {
        var_scalar.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_scalar.object;
        var_scalar.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    tmp_subscr_target_1 = par_key.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = var_k.object;

    tmp_isinstance_inst_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_isinstance_inst_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto try_finally_handler_1;
    }
    tmp_isinstance_cls_3 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_isinstance_cls_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_3 );

        frame_function->f_lineno = 255;
        goto try_finally_handler_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_inst_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto try_finally_handler_1;
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
    tmp_subscr_target_2 = par_key.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = var_k.object;

    tmp_source_name_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto try_finally_handler_1;
    }
    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_step );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto try_finally_handler_1;
    }
    if (var_step.object == NULL)
    {
        var_step.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_step.object;
        var_step.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_subscr_target_3 = par_key.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_3 = var_k.object;

    tmp_source_name_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto try_finally_handler_1;
    }
    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_start );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto try_finally_handler_1;
    }
    if (var_start.object == NULL)
    {
        var_start.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_start.object;
        var_start.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_subscr_target_4 = par_key.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_4 = var_k.object;

    tmp_source_name_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto try_finally_handler_1;
    }
    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_stop );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto try_finally_handler_1;
    }
    if (var_stop.object == NULL)
    {
        var_stop.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_stop.object;
        var_stop.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_start.object;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_17 = const_int_0;
    assert( var_start.object != NULL );
    {
        PyObject *old = var_start.object;
        var_start.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_compare_left_2 = var_step.object;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_18 = const_int_pos_1;
    assert( var_step.object != NULL );
    {
        PyObject *old = var_step.object;
        var_step.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_isinstance_inst_4 = var_step.object;

    tmp_isinstance_cls_4 = LOOKUP_BUILTIN( const_str_plain_complex );
    if ( tmp_isinstance_cls_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto try_finally_handler_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
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
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = var_step.object;

    frame_function->f_lineno = 263;
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_1;
    }
    tmp_assign_source_19 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_1;
    }
    if (var_size.object == NULL)
    {
        var_size.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = var_size.object;
        var_size.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_function_base );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168481 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_linspace );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }
    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_start.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_stop.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_size.object;

    tmp_dict_key_1 = const_str_plain_num;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 264;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }
    if (var_newobj.object == NULL)
    {
        var_newobj.object = tmp_assign_source_20;
    }
    else
    {
        PyObject *old = var_newobj.object;
        var_newobj.object = tmp_assign_source_20;
        Py_DECREF( old );
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_arange );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_start.object;

    tmp_call_arg_element_6 = var_stop.object;

    tmp_call_arg_element_7 = var_step.object;

    frame_function->f_lineno = 266;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_1;
    }
    if (var_newobj.object == NULL)
    {
        var_newobj.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = var_newobj.object;
        var_newobj.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    branch_end_6:;
    tmp_compare_left_3 = var_ndmin.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto try_finally_handler_1;
    }

    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto try_finally_handler_1;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto try_finally_handler_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_newobj.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = Py_False;
    tmp_dict_key_2 = const_str_plain_copy;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = var_ndmin.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto try_finally_handler_1;
    }

    tmp_dict_key_3 = const_str_plain_ndmin;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 268;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_6, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto try_finally_handler_1;
    }
    assert( var_newobj.object != NULL );
    {
        PyObject *old = var_newobj.object;
        var_newobj.object = tmp_assign_source_22;
        Py_DECREF( old );
    }

    tmp_compare_left_4 = var_trans1d.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168342 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto try_finally_handler_1;
    }

    tmp_compare_right_4 = const_int_neg_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_13 = var_newobj.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_swapaxes );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_8 = const_int_neg_1;
    tmp_call_arg_element_9 = var_trans1d.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168342 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 270;
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto try_finally_handler_1;
    }
    assert( var_newobj.object != NULL );
    {
        PyObject *old = var_newobj.object;
        var_newobj.object = tmp_assign_source_23;
        Py_DECREF( old );
    }

    branch_no_8:;
    branch_no_7:;
    goto branch_end_3;
    branch_no_3:;
    tmp_subscr_target_5 = par_key.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_5 = var_k.object;

    tmp_isinstance_inst_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_isinstance_inst_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto try_finally_handler_1;
    }
    tmp_isinstance_cls_5 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_isinstance_cls_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_5 );

        frame_function->f_lineno = 271;
        goto try_finally_handler_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    Py_DECREF( tmp_isinstance_inst_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto try_finally_handler_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_5 = var_k.object;

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_make_exception_arg_1 = const_str_digest_7d52eac3b9930b5c7f090bba74882b60;
    frame_function->f_lineno = 273;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 273;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_10:;
    tmp_subscr_target_6 = par_key.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_6 = const_int_0;
    tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto try_finally_handler_1;
    }
    if (var_key0.object == NULL)
    {
        var_key0.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = var_key0.object;
        var_key0.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    tmp_compare_left_6 = var_key0.object;

    tmp_compare_right_6 = const_str_plain_rc;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_matrix, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto try_finally_handler_1;
    }
    tmp_compexpr_left_1 = var_key0.object;

    tmp_compexpr_right_1 = const_str_plain_c;
    tmp_assattr_name_2 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto try_finally_handler_1;
    }
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 278;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_col, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 278;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto loop_start_1;
    branch_no_11:;
    tmp_compare_left_7 = const_str_chr_44;
    tmp_compare_right_7 = var_key0.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 280;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_14 = var_key0.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_split );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_10 = const_str_chr_44;
    frame_function->f_lineno = 281;
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto try_finally_handler_1;
    }
    if (var_vec.object == NULL)
    {
        var_vec.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = var_vec.object;
        var_vec.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    // Tried block of try/except
    // Tried code
    tmp_assign_source_26 = NULL;
    // Tried code
    tmp_iter_arg_2 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 2;
    tmp_slice_source_1 = var_vec.object;

    tmp_iter_arg_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_4;
    }
    tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_4;
    }
    if (tmp_listcontr_1__listcontr_iter.object == NULL)
    {
        tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__listcontr_iter.object;
        tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_assign_source_28 = PyList_New( 0 );
    if (tmp_listcontr_1__listcontr_result.object == NULL)
    {
        tmp_listcontr_1__listcontr_result.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__listcontr_result.object;
        tmp_listcontr_1__listcontr_result.object = tmp_assign_source_28;
        Py_DECREF( old );
    }
    loop_start_2:;
    tmp_next_source_2 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 284;
            goto try_finally_handler_4;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    tmp_assign_source_30 = tmp_listcontr_1__iter_value_0.object;

    if (var_x.object == NULL)
    {
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_int_arg_2 = var_x.object;

    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_4;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_4;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_iter_arg_2 = tmp_listcontr_1__listcontr_result.object;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
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

        goto try_finally_handler_3;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_3;
    }
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

        goto try_finally_handler_2;
    }

    goto finally_end_2;
    finally_end_2:;
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_31 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 283;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_32 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 283;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_32;
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
    tmp_assattr_name_3 = tmp_tuple_unpack_1__element_1.object;

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_axis, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_2;
    }
    tmp_assign_source_33 = tmp_tuple_unpack_1__element_2.object;

    if (var_ndmin.object == NULL)
    {
        var_ndmin.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
    }
    else
    {
        PyObject *old = var_ndmin.object;
        var_ndmin.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
        Py_DECREF( old );
    }
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

        goto try_except_handler_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_len_arg_2 = var_vec.object;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 320 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto try_except_handler_1;
    }

    tmp_compare_left_8 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto try_except_handler_1;
    }
    tmp_compare_right_8 = const_int_pos_3;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        frame_function->f_lineno = 285;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_subscr_target_7 = var_vec.object;

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 320 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_7 = const_int_pos_2;
    tmp_int_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto try_except_handler_1;
    }
    tmp_assign_source_34 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto try_except_handler_1;
    }
    if (var_trans1d.object == NULL)
    {
        var_trans1d.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = var_trans1d.object;
        var_trans1d.object = tmp_assign_source_34;
        Py_DECREF( old );
    }
    branch_no_13:;
    goto loop_start_1;
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
    tmp_make_exception_arg_2 = const_str_digest_049a19cbc090f68af349070013f69c00;
    frame_function->f_lineno = 289;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 289;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    try_except_end_1:;
    branch_no_12:;
    // Tried block of try/except
    tmp_subscr_target_8 = par_key.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_except_handler_2;
    }

    tmp_subscr_subscript_8 = var_k.object;

    tmp_int_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_int_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_except_handler_2;
    }
    tmp_assattr_name_4 = PyNumber_Int( tmp_int_arg_4 );
    Py_DECREF( tmp_int_arg_4 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_except_handler_2;
    }
    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_axis, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        frame_function->f_lineno = 291;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto loop_start_1;
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
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyTuple_New( 2 );
    tmp_tuple_element_4 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 1, tmp_tuple_element_4 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_9 );

        frame_function->f_lineno = 293;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_right_9 );
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_make_exception_arg_3 = const_str_digest_049a19cbc090f68af349070013f69c00;
    frame_function->f_lineno = 294;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 294;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    goto branch_end_14;
    branch_no_14:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_14:;
    try_except_end_2:;
    goto branch_end_9;
    branch_no_9:;
    tmp_subscr_target_9 = par_key.object;

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_9 = var_k.object;

    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }
    tmp_compare_left_10 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }
    tmp_compare_right_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ScalarType );

    if (unlikely( tmp_compare_right_10 == NULL ))
    {
        tmp_compare_right_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ScalarType );
    }

    if ( tmp_compare_right_10 == NULL )
    {
        Py_DECREF( tmp_compare_left_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71582 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        frame_function->f_lineno = 295;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if (tmp_cmp_In_3 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto try_finally_handler_1;
    }

    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_subscr_target_10 = par_key.object;

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_10 = var_k.object;

    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 296;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_5 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = var_ndmin.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto try_finally_handler_1;
    }

    tmp_dict_key_4 = const_str_plain_ndmin;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 296;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto try_finally_handler_1;
    }
    if (var_newobj.object == NULL)
    {
        var_newobj.object = tmp_assign_source_35;
    }
    else
    {
        PyObject *old = var_newobj.object;
        var_newobj.object = tmp_assign_source_35;
        Py_DECREF( old );
    }
    tmp_source_name_15 = var_scalars.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168523 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto try_finally_handler_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_append );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_11 = var_k.object;

    frame_function->f_lineno = 297;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_36 = Py_True;
    assert( var_scalar.object != NULL );
    {
        PyObject *old = var_scalar.object;
        var_scalar.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }

    tmp_source_name_16 = var_scalartypes.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168576 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto try_finally_handler_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_append );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto try_finally_handler_1;
    }
    tmp_source_name_17 = var_newobj.object;

    tmp_call_arg_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 299;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 299;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_15;
    branch_no_15:;
    tmp_subscr_target_11 = par_key.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 15396 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_11 = var_k.object;

    tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_1;
    }
    if (var_newobj.object == NULL)
    {
        var_newobj.object = tmp_assign_source_37;
    }
    else
    {
        PyObject *old = var_newobj.object;
        var_newobj.object = tmp_assign_source_37;
        Py_DECREF( old );
    }
    tmp_compare_left_11 = var_ndmin.object;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto try_finally_handler_1;
    }

    tmp_compare_right_11 = const_int_pos_1;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_Gt_2 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_1;
    }

    tmp_call_pos_4 = PyTuple_New( 1 );
    tmp_tuple_element_6 = var_newobj.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_6 );
    tmp_call_kw_4 = PyDict_Copy( const_dict_a00acf95180a0925f15877b623331589 );
    frame_function->f_lineno = 303;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_12, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto try_finally_handler_1;
    }
    if (var_tempobj.object == NULL)
    {
        var_tempobj.object = tmp_assign_source_38;
    }
    else
    {
        PyObject *old = var_tempobj.object;
        var_tempobj.object = tmp_assign_source_38;
        Py_DECREF( old );
    }
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto try_finally_handler_1;
    }

    tmp_call_pos_5 = PyTuple_New( 1 );
    tmp_tuple_element_7 = var_newobj.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_7 );
    tmp_call_kw_5 = _PyDict_NewPresized( 3 );
    tmp_dict_value_5 = Py_False;
    tmp_dict_key_5 = const_str_plain_copy;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = Py_True;
    tmp_dict_key_6 = const_str_plain_subok;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = var_ndmin.object;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto try_finally_handler_1;
    }

    tmp_dict_key_7 = const_str_plain_ndmin;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_7, tmp_dict_value_7 );
    frame_function->f_lineno = 305;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_13, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto try_finally_handler_1;
    }
    assert( var_newobj.object != NULL );
    {
        PyObject *old = var_newobj.object;
        var_newobj.object = tmp_assign_source_39;
        Py_DECREF( old );
    }

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_2 = var_trans1d.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168342 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_2 = const_int_neg_1;
    tmp_assign_source_40 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto try_finally_handler_6;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = tmp_assign_source_40;
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = tmp_assign_source_40;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_18 = var_tempobj.object;

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ndim );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto try_finally_handler_7;
    }
    tmp_compexpr_right_3 = var_ndmin.object;

    if ( tmp_compexpr_right_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto try_finally_handler_7;
    }

    tmp_cond_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto try_finally_handler_7;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
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

        goto try_finally_handler_6;
    }

    goto finally_end_4;
    finally_end_4:;
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
    try_finally_handler_6:;
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

        goto try_finally_handler_5;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 306;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_binop_left_1 = var_ndmin.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto try_finally_handler_5;
    }

    tmp_source_name_19 = var_tempobj.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168633 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto try_finally_handler_5;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ndim );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto try_finally_handler_5;
    }
    tmp_assign_source_41 = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto try_finally_handler_5;
    }
    if (var_k2.object == NULL)
    {
        var_k2.object = tmp_assign_source_41;
    }
    else
    {
        PyObject *old = var_k2.object;
        var_k2.object = tmp_assign_source_41;
        Py_DECREF( old );
    }
    tmp_compare_left_12 = var_trans1d.object;

    if ( tmp_compare_left_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168342 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto try_finally_handler_5;
    }

    tmp_compare_right_12 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto try_finally_handler_5;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_42 = var_trans1d.object;

    if ( tmp_assign_source_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168342 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto try_finally_handler_5;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_left_3 = var_k2.object;

    tmp_binop_right_3 = const_int_pos_1;
    tmp_binop_right_2 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto try_finally_handler_8;
    }
    tmp_assign_source_43 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto try_finally_handler_8;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_43;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_43;
        Py_DECREF( old );
    }
    tmp_compare_left_13 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_13 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_13 != tmp_compare_right_13 );
    if (tmp_isnot_1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_assign_source_44 = tmp_inplace_assign_1__inplace_end.object;

    if (var_trans1d.object == NULL)
    {
        var_trans1d.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
    }
    else
    {
        PyObject *old = var_trans1d.object;
        var_trans1d.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
        Py_DECREF( old );
    }
    branch_no_19:;
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

        goto try_finally_handler_5;
    }

    goto finally_end_6;
    finally_end_6:;
    branch_no_18:;
    tmp_range_arg_2 = var_ndmin.object;

    if ( tmp_range_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168395 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_finally_handler_5;
    }

    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_2 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto try_finally_handler_5;
    }
    tmp_assign_source_45 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto try_finally_handler_5;
    }
    if (var_defaxes.object == NULL)
    {
        var_defaxes.object = tmp_assign_source_45;
    }
    else
    {
        PyObject *old = var_defaxes.object;
        var_defaxes.object = tmp_assign_source_45;
        Py_DECREF( old );
    }
    tmp_assign_source_46 = var_trans1d.object;

    if ( tmp_assign_source_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168342 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto try_finally_handler_5;
    }

    if (var_k1.object == NULL)
    {
        var_k1.object = INCREASE_REFCOUNT( tmp_assign_source_46 );
    }
    else
    {
        PyObject *old = var_k1.object;
        var_k1.object = INCREASE_REFCOUNT( tmp_assign_source_46 );
        Py_DECREF( old );
    }
    tmp_slice_source_2 = var_defaxes.object;

    tmp_slice_upper_1 = var_k1.object;

    tmp_binop_left_5 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }
    tmp_slice_source_3 = var_defaxes.object;

    tmp_slice_lower_1 = var_k2.object;

    if ( tmp_slice_lower_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168686 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }

    tmp_binop_right_5 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_1, Py_None );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );

        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }
    tmp_binop_left_4 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }
    tmp_slice_source_4 = var_defaxes.object;

    tmp_slice_lower_2 = var_k1.object;

    tmp_slice_upper_2 = var_k2.object;

    if ( tmp_slice_upper_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168686 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto try_finally_handler_5;
    }

    tmp_binop_right_4 = LOOKUP_SLICE( tmp_slice_source_4, tmp_slice_lower_2, tmp_slice_upper_2 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 313;
        goto try_finally_handler_5;
    }
    tmp_assign_source_47 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto try_finally_handler_5;
    }
    if (var_axes.object == NULL)
    {
        var_axes.object = tmp_assign_source_47;
    }
    else
    {
        PyObject *old = var_axes.object;
        var_axes.object = tmp_assign_source_47;
        Py_DECREF( old );
    }
    tmp_source_name_20 = var_newobj.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168734 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto try_finally_handler_5;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_transpose );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_13 = var_axes.object;

    frame_function->f_lineno = 314;
    tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto try_finally_handler_5;
    }
    if (var_newobj.object == NULL)
    {
        var_newobj.object = tmp_assign_source_48;
    }
    else
    {
        PyObject *old = var_newobj.object;
        var_newobj.object = tmp_assign_source_48;
        Py_DECREF( old );
    }
    branch_no_17:;
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
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_1;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_result = var_tempobj.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( var_tempobj.object );
        var_tempobj.object = NULL;
    }

    if ( tmp_result == false )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168633 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 315;
        goto try_finally_handler_1;
    }

    branch_no_16:;
    branch_end_15:;
    branch_end_9:;
    branch_end_3:;
    tmp_source_name_21 = var_objs.object;

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168786 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_14 = var_newobj.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168734 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 316;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_unary_arg_1 = var_scalar.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_10;
    }

    tmp_assign_source_49 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_10;
    }
    if (tmp_and_2__value_1.object == NULL)
    {
        tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_49 );
    }
    else
    {
        PyObject *old = tmp_and_2__value_1.object;
        tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_49 );
        Py_DECREF( old );
    }
    tmp_cond_value_4 = tmp_and_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
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
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_isinstance_inst_6 = var_newobj.object;

    if ( tmp_isinstance_inst_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168734 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_11;
    }

    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_11;
    }

    tmp_isinstance_cls_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_11;
    }
    tmp_cond_value_3 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    Py_DECREF( tmp_isinstance_cls_6 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_11;
    }
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

        goto try_finally_handler_10;
    }

    goto finally_end_8;
    finally_end_8:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_3 = tmp_and_2__value_1.object;

    condexpr_end_2:;
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
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_9;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_source_name_23 = var_arraytypes.object;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168888 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto try_finally_handler_9;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_append );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto try_finally_handler_9;
    }
    tmp_source_name_24 = var_newobj.object;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168734 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_dtype );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_function->f_lineno = 318;
        goto try_finally_handler_9;
    }
    frame_function->f_lineno = 318;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_arg_element_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_unused );
    branch_no_20:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
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
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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
    tmp_called_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_find_common_type );

    if (unlikely( tmp_called_17 == NULL ))
    {
        tmp_called_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_common_type );
    }

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168944 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = var_arraytypes.object;

    if ( tmp_call_arg_element_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168888 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = var_scalartypes.object;

    if ( tmp_call_arg_element_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168576 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 321;
    tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    assert( var_final_dtype.object == NULL );
    var_final_dtype.object = tmp_assign_source_50;

    tmp_compare_left_14 = var_final_dtype.object;

    tmp_compare_right_14 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_14 != tmp_compare_right_14 );
    if (tmp_isnot_2)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_iter_arg_4 = var_scalars.object;

    if ( tmp_iter_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168523 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 323;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 323;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator.object == NULL );
    tmp_for_loop_2__for_iterator.object = tmp_assign_source_51;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_52 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_52 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 323;
            goto try_finally_handler_12;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_52;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_52;
        Py_DECREF( old );
    }
    tmp_assign_source_53 = tmp_for_loop_2__iter_value.object;

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_53 );
        Py_DECREF( old );
    }
    tmp_subscr_target_12 = var_objs.object;

    if ( tmp_subscr_target_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168786 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_12;
    }

    tmp_subscr_subscript_12 = var_k.object;

    tmp_source_name_25 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto try_finally_handler_12;
    }
    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_astype );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto try_finally_handler_12;
    }
    tmp_call_arg_element_18 = var_final_dtype.object;

    if ( tmp_call_arg_element_18 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168989 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_12;
    }

    frame_function->f_lineno = 324;
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto try_finally_handler_12;
    }
    tmp_ass_subscribed_1 = var_objs.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168786 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto try_finally_handler_12;
    }

    tmp_ass_subscript_1 = var_k.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto try_finally_handler_12;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 323;
        goto try_finally_handler_12;
    }
    goto loop_start_3;
    loop_end_3:;
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

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

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
    branch_no_21:;
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_concatenate );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_6 = PyTuple_New( 1 );
    tmp_tuple_arg_1 = var_objs.object;

    if ( tmp_tuple_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_19 );
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168786 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_8 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_19 );
        Py_DECREF( tmp_call_pos_6 );

        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_6, 0, tmp_tuple_element_8 );
    tmp_call_kw_6 = _PyDict_NewPresized( 1 );
    tmp_source_name_27 = par_self.object;

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_19 );
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_axis );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_19 );
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );

        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_axis;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    frame_function->f_lineno = 326;
    tmp_assign_source_54 = CALL_FUNCTION( tmp_called_19, tmp_call_pos_6, tmp_call_kw_6 );
    Py_DECREF( tmp_called_19 );
    Py_DECREF( tmp_call_pos_6 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto frame_exception_exit_1;
    }
    assert( var_res.object == NULL );
    var_res.object = tmp_assign_source_54;

    tmp_source_name_28 = par_self.object;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__retval );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = var_res.object;

    frame_function->f_lineno = 327;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_20 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
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
    if ((var_trans1d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_trans1d,
            var_trans1d.object
        );

    }
    if ((var_ndmin.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ndmin,
            var_ndmin.object
        );

    }
    if ((var_frame.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_frame,
            var_frame.object
        );

    }
    if ((var_mymat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mymat,
            var_mymat.object
        );

    }
    if ((var_objs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_objs,
            var_objs.object
        );

    }
    if ((var_scalars.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_scalars,
            var_scalars.object
        );

    }
    if ((var_arraytypes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arraytypes,
            var_arraytypes.object
        );

    }
    if ((var_scalartypes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_scalartypes,
            var_scalartypes.object
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
    if ((var_scalar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_scalar,
            var_scalar.object
        );

    }
    if ((var_step.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_step,
            var_step.object
        );

    }
    if ((var_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_start,
            var_start.object
        );

    }
    if ((var_stop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stop,
            var_stop.object
        );

    }
    if ((var_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_size,
            var_size.object
        );

    }
    if ((var_newobj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_newobj,
            var_newobj.object
        );

    }
    if ((var_key0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_key0,
            var_key0.object
        );

    }
    if ((var_vec.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vec,
            var_vec.object
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
    if ((var_tempobj.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tempobj,
            var_tempobj.object
        );

    }
    if ((var_k2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k2,
            var_k2.object
        );

    }
    if ((var_defaxes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_defaxes,
            var_defaxes.object
        );

    }
    if ((var_k1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k1,
            var_k1.object
        );

    }
    if ((var_axes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_axes,
            var_axes.object
        );

    }
    if ((var_final_dtype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_final_dtype,
            var_final_dtype.object
        );

    }
    if ((var_res.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res,
            var_res.object
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
    if ((par_key.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_key,
            par_key.object
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
static PyObject *fparse_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
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
            if ( found == false && const_str_plain_key == key )
            {
                assert( _python_par_key == NULL );
                _python_par_key = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_key, key ) == 1 )
            {
                assert( _python_par_key == NULL );
                _python_par_key = value;

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
         if (unlikely( _python_par_key != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_key == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_key = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_key == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_key };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_key );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );

    return NULL;
}

static PyObject *dparse_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_i, PyObject *_python_par_j )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_i; par_i.object = _python_par_i;
    PyObjectLocalVariable par_j; par_j.object = _python_par_j;
    PyObjectLocalVariable var_res;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e1bf8c87f4048a5ed97487e53eceb70d, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_i.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_j.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54692 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 330;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    assert( var_res.object == NULL );
    var_res.object = tmp_assign_source_1;

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__retval );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_res.object;

    frame_function->f_lineno = 331;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
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
    if ((var_res.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res,
            var_res.object
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
    if ((par_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            par_i.object
        );

    }
    if ((par_j.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_j,
            par_j.object
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
static PyObject *fparse_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_i = NULL;
    PyObject *_python_par_j = NULL;
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
                PyErr_Format( PyExc_TypeError, "__getslice__() keywords must be strings" );
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
            if ( found == false && const_str_plain_i == key )
            {
                assert( _python_par_i == NULL );
                _python_par_i = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_j == key )
            {
                assert( _python_par_j == NULL );
                _python_par_j = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_i, key ) == 1 )
            {
                assert( _python_par_i == NULL );
                _python_par_i = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_j, key ) == 1 )
            {
                assert( _python_par_j == NULL );
                _python_par_j = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__getslice__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_i != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_i = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_i == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_i = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_j != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_j = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_j == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_j = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_i == NULL || _python_par_j == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_i, _python_par_j };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_i, _python_par_j );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_i );
    Py_XDECREF( _python_par_j );

    return NULL;
}

static PyObject *dparse_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__len__() keywords must be strings" );
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
                   "__len__() got an unexpected keyword argument '%s'",
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


    return impl_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_RClass_of_module_numpy$lib$index_tricks(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2029c2f6a2f548f5a6896adc20b13a55;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_be772f8136a441e7bb0572f31c147bd4;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_124b16004f41488d713fb0225163195a, module_numpy$lib$index_tricks );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 434;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
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


static PyObject *impl_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_513e9e3ca7df8e29ec924309949803c4, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 169046 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 435;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 435;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 435;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_int_0;
    frame_function->f_lineno = 435;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 435;
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
static PyObject *fparse_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                   "__init__() got an unexpected keyword argument '%s'",
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


    return impl_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_CClass_of_module_numpy$lib$index_tricks(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2029c2f6a2f548f5a6896adc20b13a55;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_82c91861346ce300a6233baf150cc0e2;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7c6cad8df345aefd1d090694c671d51e, module_numpy$lib$index_tricks );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 456;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
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


static PyObject *impl_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b6ca5a62e97994e40bbad5e568658fa6, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 169046 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_self.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_neg_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 );
    frame_function->f_lineno = 457;
    tmp_unused = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
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
static PyObject *fparse_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                   "__init__() got an unexpected keyword argument '%s'",
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


    return impl_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___next__;
    PyObjectLocalVariable var___iter__;
    PyObjectLocalVariable var_next;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2029c2f6a2f548f5a6896adc20b13a55;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_bd5339a4ea2d0544c007520f2832dad3;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9af5c3e7890e465cea8f918868e04124, module_numpy$lib$index_tricks );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 487;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 490;
        goto frame_exception_exit_1;
    }
    assert( var___next__.object == NULL );
    var___next__.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 504;
        goto frame_exception_exit_1;
    }
    assert( var___iter__.object == NULL );
    var___iter__.object = tmp_assign_source_5;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var___next__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___next__,
            var___next__.object
        );

    }
    if ((var___iter__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___iter__,
            var___iter__.object
        );

    }
    if ((var_next.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_next,
            var_next.object
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
    tmp_assign_source_6 = var___next__.object;

    assert( var_next.object == NULL );
    var_next.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var___next__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___next__,
            var___next__.object
        );

    }
    if ((var___iter__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___iter__,
            var___iter__.object
        );

    }
    if ((var_next.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_next,
            var_next.object
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


static PyObject *impl_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_arr )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_arr; par_arr.object = _python_par_arr;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_90af4268645855a1fb74b2b8f41c98dc, module_numpy$lib$index_tricks );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_arr.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 488;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_iter, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            par_arr.object
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
static PyObject *fparse_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_arr = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
            if ( found == false && const_str_plain_arr == key )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arr, key ) == 1 )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_arr = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_arr == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_arr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_arr == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_arr };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_arr );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_arr );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_next1_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b735caf0257fe4570239ad6ad5bee29b, module_numpy$lib$index_tricks );
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_iter );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coords );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }

    tmp_next1_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_iter );
    if ( tmp_next1_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = ITERATOR_NEXT( tmp_next1_arg_1 );
    Py_DECREF( tmp_next1_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
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
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
static PyObject *fparse_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__next__() keywords must be strings" );
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
                   "__next__() got an unexpected keyword argument '%s'",
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


    return impl_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b4dc405e1b803e4cb3b20225135d915d, module_numpy$lib$index_tricks );
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
    tmp_return_value = par_self.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 505;
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
static PyObject *fparse_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
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


    return impl_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_ndindex_of_module_numpy$lib$index_tricks(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___iter__;
    PyObjectLocalVariable var_ndincr;
    PyObjectLocalVariable var___next__;
    PyObjectLocalVariable var_next;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2029c2f6a2f548f5a6896adc20b13a55;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_255645ad7e19bda0865a9234e223ec4f;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_546e2efb8281b12d2c3bc73783264725, module_numpy$lib$index_tricks );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 539;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    assert( var___iter__.object == NULL );
    var___iter__.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 549;
        goto frame_exception_exit_1;
    }
    assert( var_ndincr.object == NULL );
    var_ndincr.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }
    assert( var___next__.object == NULL );
    var___next__.object = tmp_assign_source_6;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var___iter__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___iter__,
            var___iter__.object
        );

    }
    if ((var_ndincr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ndincr,
            var_ndincr.object
        );

    }
    if ((var___next__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___next__,
            var___next__.object
        );

    }
    if ((var_next.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_next,
            var_next.object
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
    tmp_assign_source_7 = var___next__.object;

    assert( var_next.object == NULL );
    var_next.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var___iter__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___iter__,
            var___iter__.object
        );

    }
    if ((var_ndincr.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_ndincr,
            var_ndincr.object
        );

    }
    if ((var___next__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___next__,
            var___next__.object
        );

    }
    if ((var_next.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_next,
            var_next.object
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


static PyObject *impl_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_shape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_shape; par_shape.object = _python_par_shape;
    PyObjectLocalVariable var_x;
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4466c48ccf08d78c35646b20f3d376e6, module_numpy$lib$index_tricks );
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
    tmp_len_arg_1 = par_shape.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto try_finally_handler_2;
    }

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_assign_source_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_1;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
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
    tmp_subscr_target_1 = par_shape.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
        goto try_finally_handler_3;
    }
    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_isinstance_inst_1 );

        frame_function->f_lineno = 540;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
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


        frame_function->f_lineno = 540;
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
    tmp_subscr_target_2 = par_shape.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 541;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 541;
        goto try_finally_handler_1;
    }
    if (par_shape.object == NULL)
    {
        par_shape.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_shape.object;
        par_shape.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_as_strided );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_strided );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 169091 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_int_pos_1;
    frame_function->f_lineno = 542;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_shape.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros_like );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_shape.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 542;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_strides;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 542;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    assert( var_x.object == NULL );
    var_x.object = tmp_assign_source_3;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_nditer );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_x.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_call_kw_2 = DEEP_COPY( const_dict_24180b9cdfcea30958fba9a165d5c6dd );
    frame_function->f_lineno = 544;
    tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__it, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
    if ((var_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            var_x.object
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
    if ((par_shape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shape,
            par_shape.object
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
static PyObject *fparse_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_shape = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                   "__init__() got an unexpected keyword argument '%s'",
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
        _python_par_shape = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_shape, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_shape = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_shape );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_shape );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5476525684fd30405f9caca7d53a4545, module_numpy$lib$index_tricks );
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
    tmp_return_value = par_self.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 547;
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
static PyObject *fparse_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
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


    return impl_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_next1_arg_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cd26bb5e717eeab4de639009ec4af18a, module_numpy$lib$index_tricks );
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
    tmp_next1_arg_1 = par_self.object;

    if ( tmp_next1_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 555;
        goto frame_exception_exit_1;
    }

    tmp_unused = ITERATOR_NEXT( tmp_next1_arg_1 );
    if ( tmp_unused == NULL )
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


        frame_function->f_lineno = 555;
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
static PyObject *fparse_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "ndincr() keywords must be strings" );
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
                   "ndincr() got an unexpected keyword argument '%s'",
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


    return impl_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_next1_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_484b7550a58b51c1d331afc9a9521054, module_numpy$lib$index_tricks );
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

        frame_function->f_lineno = 567;
        goto frame_exception_exit_1;
    }

    tmp_next1_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__it );
    if ( tmp_next1_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_unused = ITERATOR_NEXT( tmp_next1_arg_1 );
    Py_DECREF( tmp_next1_arg_1 );
    if ( tmp_unused == NULL )
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


        frame_function->f_lineno = 567;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 568;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__it );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 568;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_multi_index );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 568;
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
static PyObject *fparse_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__next__() keywords must be strings" );
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
                   "__next__() got an unexpected keyword argument '%s'",
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


    return impl_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___getitem__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2029c2f6a2f548f5a6896adc20b13a55;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_76974383c40700d7b9936e74c460cf41;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3035855a6147d31d8ff9a715ff5d634d, module_numpy$lib$index_tricks );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 627;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 630;
        goto frame_exception_exit_1;
    }
    assert( var___getitem__.object == NULL );
    var___getitem__.object = tmp_assign_source_4;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
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


static PyObject *impl_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_maketuple )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_maketuple; par_maketuple.object = _python_par_maketuple;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_131d2f3e73e7682aa51a17117a1b837e, module_numpy$lib$index_tricks );
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
    tmp_assattr_name_1 = par_maketuple.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 169130 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 628;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 628;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_maketuple, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 628;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_maketuple.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maketuple,
            par_maketuple.object
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
static PyObject *fparse_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_maketuple = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
            if ( found == false && const_str_plain_maketuple == key )
            {
                assert( _python_par_maketuple == NULL );
                _python_par_maketuple = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maketuple, key ) == 1 )
            {
                assert( _python_par_maketuple == NULL );
                _python_par_maketuple = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_maketuple != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_maketuple = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_maketuple == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_maketuple = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_maketuple == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_maketuple };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_maketuple );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_maketuple );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_item )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_item; par_item.object = _python_par_item;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_93dff3eff425d5407f421b993519a5cd, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 631;
        goto try_finally_handler_2;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_maketuple );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 631;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_1;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 631;
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
    tmp_isinstance_inst_1 = par_item.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 37715 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 631;
        goto try_finally_handler_3;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 631;
        goto try_finally_handler_3;
    }
    tmp_unary_arg_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 631;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 631;
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


        frame_function->f_lineno = 631;
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
    tmp_return_value = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_item.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 37715 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 632;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    goto try_finally_handler_start_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = par_item.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 37715 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 634;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    branch_end_1:;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_item.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_item,
            par_item.object
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
static PyObject *fparse_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_item = NULL;
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
            if ( found == false && const_str_plain_item == key )
            {
                assert( _python_par_item == NULL );
                _python_par_item = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_item, key ) == 1 )
            {
                assert( _python_par_item == NULL );
                _python_par_item = value;

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
         if (unlikely( _python_par_item != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_item = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_item == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_item = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_item == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_item };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( self, _python_par_self, _python_par_item );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_item );

    return NULL;
}

static PyObject *dparse_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_val, PyObject *_python_par_wrap )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_val; par_val.object = _python_par_val;
    PyObjectLocalVariable par_wrap; par_wrap.object = _python_par_wrap;
    PyObjectLocalVariable var_end;
    PyObjectLocalVariable var_step;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
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
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_sliceobj_step_1;
    PyObject *tmp_sliceobj_upper_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_85a87554507026cf5f1dbe04772c937e, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = par_a.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 733;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 733;
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
    tmp_make_exception_arg_1 = const_str_digest_f47d3837d30c6f327231c2aac7bc131f;
    frame_function->f_lineno = 734;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 734;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 734;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = Py_None;
    assert( var_end.object == NULL );
    var_end.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_source_name_2 = par_a.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 736;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 736;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 736;
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
    tmp_source_name_3 = par_a.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 739;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 739;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_binop_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 739;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 739;
        goto frame_exception_exit_1;
    }
    assert( var_step.object == NULL );
    var_step.object = tmp_assign_source_2;

    tmp_cond_value_1 = par_wrap.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63093 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 741;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 741;
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
    tmp_source_name_4 = par_a.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_binop_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_a.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_int_pos_1;
    tmp_binop_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 742;
        goto frame_exception_exit_1;
    }
    assert( var_end.object != NULL );
    {
        PyObject *old = var_end.object;
        var_end.object = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_alltrue );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 169185 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163602 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_a.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 746;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_call_arg_element_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 746;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 746;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_378bca8ae9010c6cf7e80b4dfa98c60c;
    frame_function->f_lineno = 747;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 747;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 747;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_binop_left_3 = const_int_pos_1;
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_cumprod );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cumprod );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 169221 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }

    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_source_name_8 = par_a.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 748;
    tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sum );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 748;
    tmp_binop_right_3 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 748;
        goto frame_exception_exit_1;
    }
    assert( var_step.object == NULL );
    var_step.object = tmp_assign_source_4;

    branch_end_2:;
    tmp_ass_subvalue_1 = par_val.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 751;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = par_a.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 751;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_flat );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 751;
        goto frame_exception_exit_1;
    }
    tmp_sliceobj_upper_1 = var_end.object;

    if ( tmp_sliceobj_upper_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60336 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 751;
        goto frame_exception_exit_1;
    }

    tmp_sliceobj_step_1 = var_step.object;

    tmp_ass_subscript_1 = MAKE_SLICEOBJ( Py_None, tmp_sliceobj_upper_1, tmp_sliceobj_step_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 751;
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
    if ((var_end.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_end,
            var_end.object
        );

    }
    if ((var_step.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_step,
            var_step.object
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
    if ((par_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            par_val.object
        );

    }
    if ((par_wrap.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_wrap,
            par_wrap.object
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
static PyObject *fparse_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_val = NULL;
    PyObject *_python_par_wrap = NULL;
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
                PyErr_Format( PyExc_TypeError, "fill_diagonal() keywords must be strings" );
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
            if ( found == false && const_str_plain_val == key )
            {
                assert( _python_par_val == NULL );
                _python_par_val = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_wrap == key )
            {
                assert( _python_par_wrap == NULL );
                _python_par_wrap = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_val, key ) == 1 )
            {
                assert( _python_par_val == NULL );
                _python_par_val = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_wrap, key ) == 1 )
            {
                assert( _python_par_wrap == NULL );
                _python_par_wrap = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fill_diagonal() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_val != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_val = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_val == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_val = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_wrap != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_wrap = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_wrap == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_wrap = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_a == NULL || _python_par_val == NULL || _python_par_wrap == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_val, _python_par_wrap };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( self, _python_par_a, _python_par_val, _python_par_wrap );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_val );
    Py_XDECREF( _python_par_wrap );

    return NULL;
}

static PyObject *dparse_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_diag_indices_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_n, PyObject *_python_par_ndim )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_n; par_n.object = _python_par_n;
    PyObjectLocalVariable par_ndim; par_ndim.object = _python_par_ndim;
    PyObjectLocalVariable var_idx;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_36f05c997cf2dc71bd53c37d028c8781, module_numpy$lib$index_tricks );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 818;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_n.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 818;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 818;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 818;
        goto frame_exception_exit_1;
    }
    assert( var_idx.object == NULL );
    var_idx.object = tmp_assign_source_1;

    tmp_binop_left_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_idx.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_1, 0, tmp_tuple_element_1 );
    tmp_binop_right_1 = par_ndim.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10546 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 819;
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 819;
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
    if ((var_idx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_idx,
            var_idx.object
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
    if ((par_ndim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ndim,
            par_ndim.object
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
static PyObject *fparse_function_10_diag_indices_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_n = NULL;
    PyObject *_python_par_ndim = NULL;
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
                PyErr_Format( PyExc_TypeError, "diag_indices() keywords must be strings" );
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
            if ( found == false && const_str_plain_ndim == key )
            {
                assert( _python_par_ndim == NULL );
                _python_par_ndim = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ndim, key ) == 1 )
            {
                assert( _python_par_ndim == NULL );
                _python_par_ndim = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "diag_indices() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_n != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_n == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_ndim != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ndim = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ndim == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ndim = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_n == NULL || _python_par_ndim == NULL ))
    {
        PyObject *values[] = { _python_par_n, _python_par_ndim };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_diag_indices_of_module_numpy$lib$index_tricks( self, _python_par_n, _python_par_ndim );

error_exit:;

    Py_XDECREF( _python_par_n );
    Py_XDECREF( _python_par_ndim );

    return NULL;
}

static PyObject *dparse_function_10_diag_indices_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_10_diag_indices_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_diag_indices_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_diag_indices_from_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject *_python_par_arr )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arr; par_arr.object = _python_par_arr;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bb6b587872d261798f5f86b334127a42, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = par_arr.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 842;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 842;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 842;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_fb22d554b5e51e0fa7481273f3fb7425;
    frame_function->f_lineno = 843;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 843;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 843;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_alltrue );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 169185 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 846;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163602 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 846;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_arr.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 846;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 846;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 846;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 846;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_call_arg_element_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 846;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 846;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 846;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 846;
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_2 = const_str_digest_378bca8ae9010c6cf7e80b4dfa98c60c;
    frame_function->f_lineno = 847;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 847;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 847;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag_indices );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 169257 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 849;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_arr.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 849;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 849;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_call_arg_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 849;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_arr.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 849;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 849;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 849;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 849;
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
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            par_arr.object
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
static PyObject *fparse_function_11_diag_indices_from_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arr = NULL;
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
                PyErr_Format( PyExc_TypeError, "diag_indices_from() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arr == key )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arr, key ) == 1 )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "diag_indices_from() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arr == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_arr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_arr == NULL ))
    {
        PyObject *values[] = { _python_par_arr };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11_diag_indices_from_of_module_numpy$lib$index_tricks( self, _python_par_arr );

error_exit:;

    Py_XDECREF( _python_par_arr );

    return NULL;
}

static PyObject *dparse_function_11_diag_indices_from_of_module_numpy$lib$index_tricks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_11_diag_indices_from_of_module_numpy$lib$index_tricks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_diag_indices_from_of_module_numpy$lib$index_tricks( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_diag_indices_of_module_numpy$lib$index_tricks( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_diag_indices_of_module_numpy$lib$index_tricks,
        dparse_function_10_diag_indices_of_module_numpy$lib$index_tricks,
        const_str_plain_diag_indices,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ffa0ec3a4ddeca36f3afa1b8b7eba688,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_92ece64a17aeb80db18d1b3ec8d37160
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_diag_indices_from_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_diag_indices_from_of_module_numpy$lib$index_tricks,
        dparse_function_11_diag_indices_from_of_module_numpy$lib$index_tricks,
        const_str_plain_diag_indices_from,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bb6b587872d261798f5f86b334127a42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_4d94e54c68f433850efac0d639826e4f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks,
        dparse_function_1___init___of_class_2_nd_grid_of_module_numpy$lib$index_tricks,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e5671426ba36ee2d2cc3ced4360024ec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks,
        dparse_function_1___init___of_class_4_RClass_of_module_numpy$lib$index_tricks,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_513e9e3ca7df8e29ec924309949803c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks,
        dparse_function_1___init___of_class_5_CClass_of_module_numpy$lib$index_tricks,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b6ca5a62e97994e40bbad5e568658fa6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks,
        dparse_function_1___init___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_90af4268645855a1fb74b2b8f41c98dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks,
        dparse_function_1___init___of_class_7_ndindex_of_module_numpy$lib$index_tricks,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_29d8644e15bd0d3d677c50c5266433fc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks,
        dparse_function_1___init___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_131d2f3e73e7682aa51a17117a1b837e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        dparse_function_1__retval_of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        const_str_plain__retval,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_86f9cabcdb33bb730452f7cb3efc9015,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_ix__of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_ix__of_module_numpy$lib$index_tricks,
        dparse_function_1_ix__of_module_numpy$lib$index_tricks,
        const_str_plain_ix_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f3b8ebb816709ec0ab964bb24be8fb06,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_0e28c73803b4d447d759112d47e45329
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks,
        dparse_function_2___getitem___of_class_2_nd_grid_of_module_numpy$lib$index_tricks,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_316fe83ce65dd2e16ec5a35a3c3bbcd0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks,
        dparse_function_2___getitem___of_class_8_IndexExpression_of_module_numpy$lib$index_tricks,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_93dff3eff425d5407f421b993519a5cd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        dparse_function_2___init___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7832b6546ae8a6f5452c22db4e6a491b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks,
        dparse_function_2___iter___of_class_7_ndindex_of_module_numpy$lib$index_tricks,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5476525684fd30405f9caca7d53a4545,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks,
        dparse_function_2___next___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks,
        const_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b735caf0257fe4570239ad6ad5bee29b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_6a835e49a88dd3098cb6f8c7548eb3a9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        dparse_function_3___getitem___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_175c87b60c806305061a63073c711c8e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks,
        dparse_function_3___getslice___of_class_2_nd_grid_of_module_numpy$lib$index_tricks,
        const_str_plain___getslice__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c4278ff9f182660b4065f5d8ce1417d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks,
        dparse_function_3___iter___of_class_6_ndenumerate_of_module_numpy$lib$index_tricks,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b4dc405e1b803e4cb3b20225135d915d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks,
        dparse_function_3_ndincr_of_class_7_ndindex_of_module_numpy$lib$index_tricks,
        const_str_plain_ndincr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd26bb5e717eeab4de639009ec4af18a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_bc6004d8a0f1693ba2628ba8ff078e23
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        dparse_function_4___getslice___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        const_str_plain___getslice__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ef4eb4d665f7ac9c20041e8f3ec5ac46,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks,
        dparse_function_4___len___of_class_2_nd_grid_of_module_numpy$lib$index_tricks,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_edc589180113b449b58a6e4840a6f4ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks,
        dparse_function_4___next___of_class_7_ndindex_of_module_numpy$lib$index_tricks,
        const_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_484b7550a58b51c1d331afc9a9521054,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_6368aee1c3b3f1183418fb89e32a553a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        dparse_function_5___len___of_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9327eaa7d281de63561427471916e729,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_fill_diagonal_of_module_numpy$lib$index_tricks,
        dparse_function_9_fill_diagonal_of_module_numpy$lib$index_tricks,
        const_str_plain_fill_diagonal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f128ee2839a7ee36f5530dd40806be39,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_e119749f51a4bbb9b94b392c60f53fd0
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$index_tricks =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.index_tricks",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$index_tricks )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$index_tricks );
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

    // puts( "in initnumpy$lib$index_tricks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$index_tricks = Py_InitModule4(
        "numpy.lib.index_tricks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$index_tricks = PyModule_Create( &mdef_numpy$lib$index_tricks );
#endif

    moduledict_numpy$lib$index_tricks = (PyDictObject *)((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;

    assertObject( module_numpy$lib$index_tricks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2029c2f6a2f548f5a6896adc20b13a55, module_numpy$lib$index_tricks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$index_tricks );

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
    PyObjectTempVariable tmp_class_creation_2__bases;
    PyObjectTempVariable tmp_class_creation_2__class_dict;
    PyObjectTempVariable tmp_class_creation_2__metaclass;
    PyObjectTempVariable tmp_class_creation_2__class;
    PyObjectTempVariable tmp_class_creation_3__bases;
    PyObjectTempVariable tmp_class_creation_3__class_dict;
    PyObjectTempVariable tmp_class_creation_3__metaclass;
    PyObjectTempVariable tmp_class_creation_3__class;
    PyObjectTempVariable tmp_class_creation_4__bases;
    PyObjectTempVariable tmp_class_creation_4__class_dict;
    PyObjectTempVariable tmp_class_creation_4__metaclass;
    PyObjectTempVariable tmp_class_creation_4__class;
    PyObjectTempVariable tmp_class_creation_5__bases;
    PyObjectTempVariable tmp_class_creation_5__class_dict;
    PyObjectTempVariable tmp_class_creation_5__metaclass;
    PyObjectTempVariable tmp_class_creation_5__class;
    PyObjectTempVariable tmp_class_creation_6__bases;
    PyObjectTempVariable tmp_class_creation_6__class_dict;
    PyObjectTempVariable tmp_class_creation_6__metaclass;
    PyObjectTempVariable tmp_class_creation_6__class;
    PyObjectTempVariable tmp_class_creation_7__bases;
    PyObjectTempVariable tmp_class_creation_7__class_dict;
    PyObjectTempVariable tmp_class_creation_7__metaclass;
    PyObjectTempVariable tmp_class_creation_7__class;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
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
    PyObject *tmp_call_kw_4;
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
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    PyObject *tmp_class_bases_4;
    PyObject *tmp_class_bases_5;
    PyObject *tmp_class_bases_6;
    PyObject *tmp_class_bases_7;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_dict_4;
    PyObject *tmp_dget_dict_5;
    PyObject *tmp_dget_dict_6;
    PyObject *tmp_dget_dict_7;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
    PyObject *tmp_dget_key_4;
    PyObject *tmp_dget_key_5;
    PyObject *tmp_dget_key_6;
    PyObject *tmp_dget_key_7;
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
    bool tmp_result;
    PyObject *tmp_source_name_1;
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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_661e17987d9fd39389dd823ae9497c3b;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_4f21935777af83942cb931c5dba3ffcd, module_numpy$lib$index_tricks );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_fa22549eaa1a878119e86a628980cdb1_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_7562d9c0c14dfbf1fc7343bfca26014c, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_7562d9c0c14dfbf1fc7343bfca26014c, tmp_import_globals_6, tmp_import_globals_6, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_7562d9c0c14dfbf1fc7343bfca26014c, tmp_import_globals_7, tmp_import_globals_7, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ScalarType );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ScalarType, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_7562d9c0c14dfbf1fc7343bfca26014c, tmp_import_globals_8, tmp_import_globals_8, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_array );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_7562d9c0c14dfbf1fc7343bfca26014c, tmp_import_globals_9, tmp_import_globals_9, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_alltrue );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_7562d9c0c14dfbf1fc7343bfca26014c, tmp_import_globals_10, tmp_import_globals_10, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_cumprod );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_cumprod, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_7562d9c0c14dfbf1fc7343bfca26014c, tmp_import_globals_11, tmp_import_globals_11, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_arange );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_8a3551674d9174096d8a003980610b3f, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_find_common_type_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_find_common_type );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_find_common_type, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 17;
    tmp_assign_source_16 = IMPORT_MODULE( const_str_plain_math, tmp_import_globals_13, tmp_import_globals_13, Py_None, const_int_0 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_16 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_empty, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_function_base_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_function_base );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_function_base, tmp_assign_source_17 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_5c1a8409e9c9a3ecd8ef6c78485a8e2c, tmp_import_globals_15, tmp_import_globals_15, Py_None, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_matrixlib );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrix, tmp_assign_source_18 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_function_base, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_diff_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_diff );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff, tmp_assign_source_19 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_3c09aded1adab7d161d8a975ac63ddd7, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_ravel_multi_index );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ravel_multi_index, tmp_assign_source_20 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_3c09aded1adab7d161d8a975ac63ddd7, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_unravel_index );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_unravel_index, tmp_assign_source_21 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_digest_41ad3e252dfe32ce95dec22fb3c12cb0, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_plain_as_strided_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_as_strided );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_as_strided, tmp_assign_source_22 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrix );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168009 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matrix );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_makemat, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_function_1_ix__of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ix_, tmp_assign_source_24 );
    // Tried code
    tmp_assign_source_25 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 85;
        goto try_finally_handler_1;
    }
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_25;

    tmp_assign_source_26 = impl_class_2_nd_grid_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_26;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
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
    tmp_assign_source_27 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_27 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_27;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_nd_grid;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 85;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_28;

    tmp_assign_source_29 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid, tmp_assign_source_29 );
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nd_grid );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168037 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 208;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = PyDict_Copy( const_dict_c94aedb3aac0d244f6f14be59f80d888 );
    frame_module->f_lineno = 208;
    tmp_assign_source_30 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_2, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_mgrid, tmp_assign_source_30 );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nd_grid );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168037 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_2 = PyDict_Copy( const_dict_28ebf724697f63eaa96dcded742e9de0 );
    frame_module->f_lineno = 209;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_3, tmp_call_kw_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ogrid, tmp_assign_source_31 );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_mgrid );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mgrid );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168066 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___doc__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ogrid );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ogrid );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168093 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___doc__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 211;
        goto frame_exception_exit_1;
    }
    // Tried code
    tmp_assign_source_32 = PyTuple_New( 1 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        frame_module->f_lineno = 213;
        goto try_finally_handler_2;
    }
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_32, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_32;

    tmp_assign_source_33 = impl_class_3_AxisConcatenator_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 213;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_33;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 213;
        goto try_finally_handler_2;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dget_dict_2 = tmp_class_creation_2__class_dict.object;

    tmp_dget_key_2 = const_str_plain___metaclass__;
    tmp_assign_source_34 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 213;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_34 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_34;

    tmp_called_4 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain_AxisConcatenator;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 213;
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 213;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_35;

    tmp_assign_source_36 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator, tmp_assign_source_36 );
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

    tmp_tried_lineno_2 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_2__class.object );
    tmp_class_creation_2__class.object = NULL;

    Py_XDECREF( tmp_class_creation_2__bases.object );
    tmp_class_creation_2__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict.object );
    tmp_class_creation_2__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass.object );
    tmp_class_creation_2__metaclass.object = NULL;

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
    // Tried code
    tmp_assign_source_37 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168120 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 340;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases.object == NULL );
    tmp_class_creation_3__bases.object = tmp_assign_source_37;

    tmp_assign_source_38 = impl_class_4_RClass_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 340;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class_dict.object == NULL );
    tmp_class_creation_3__class_dict.object = tmp_assign_source_38;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 340;
        goto try_finally_handler_3;
    }
    if (tmp_cmp_In_3 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dget_dict_3 = tmp_class_creation_3__class_dict.object;

    tmp_dget_key_3 = const_str_plain___metaclass__;
    tmp_assign_source_39 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 340;
        goto try_finally_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_class_bases_3 = tmp_class_creation_3__bases.object;

    tmp_assign_source_39 = SELECT_METACLASS( tmp_class_bases_3, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass.object == NULL );
    tmp_class_creation_3__metaclass.object = tmp_assign_source_39;

    tmp_called_5 = tmp_class_creation_3__metaclass.object;

    tmp_call_arg_element_7 = const_str_plain_RClass;
    tmp_call_arg_element_8 = tmp_class_creation_3__bases.object;

    tmp_call_arg_element_9 = tmp_class_creation_3__class_dict.object;

    frame_module->f_lineno = 340;
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 340;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class.object == NULL );
    tmp_class_creation_3__class.object = tmp_assign_source_40;

    tmp_assign_source_41 = tmp_class_creation_3__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_RClass, tmp_assign_source_41 );
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
    Py_XDECREF( tmp_class_creation_3__class.object );
    tmp_class_creation_3__class.object = NULL;

    Py_XDECREF( tmp_class_creation_3__bases.object );
    tmp_class_creation_3__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict.object );
    tmp_class_creation_3__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass.object );
    tmp_class_creation_3__metaclass.object = NULL;

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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_RClass );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RClass );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168158 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 437;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 437;
    tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 437;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_r_, tmp_assign_source_42 );
    // Tried code
    tmp_assign_source_43 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168120 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 439;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases.object == NULL );
    tmp_class_creation_4__bases.object = tmp_assign_source_43;

    tmp_assign_source_44 = impl_class_5_CClass_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 439;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_4__class_dict.object == NULL );
    tmp_class_creation_4__class_dict.object = tmp_assign_source_44;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict.object;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 439;
        goto try_finally_handler_4;
    }
    if (tmp_cmp_In_4 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dget_dict_4 = tmp_class_creation_4__class_dict.object;

    tmp_dget_key_4 = const_str_plain___metaclass__;
    tmp_assign_source_45 = DICT_GET_ITEM( tmp_dget_dict_4, tmp_dget_key_4 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 439;
        goto try_finally_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_class_bases_4 = tmp_class_creation_4__bases.object;

    tmp_assign_source_45 = SELECT_METACLASS( tmp_class_bases_4, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass.object == NULL );
    tmp_class_creation_4__metaclass.object = tmp_assign_source_45;

    tmp_called_7 = tmp_class_creation_4__metaclass.object;

    tmp_call_arg_element_10 = const_str_plain_CClass;
    tmp_call_arg_element_11 = tmp_class_creation_4__bases.object;

    tmp_call_arg_element_12 = tmp_class_creation_4__class_dict.object;

    frame_module->f_lineno = 439;
    tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 439;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_4__class.object == NULL );
    tmp_class_creation_4__class.object = tmp_assign_source_46;

    tmp_assign_source_47 = tmp_class_creation_4__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_CClass, tmp_assign_source_47 );
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
    Py_XDECREF( tmp_class_creation_4__class.object );
    tmp_class_creation_4__class.object = NULL;

    Py_XDECREF( tmp_class_creation_4__bases.object );
    tmp_class_creation_4__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict.object );
    tmp_class_creation_4__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass.object );
    tmp_class_creation_4__metaclass.object = NULL;

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
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_CClass );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CClass );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168186 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 459;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 459;
    tmp_assign_source_48 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 459;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_c_, tmp_assign_source_48 );
    // Tried code
    tmp_assign_source_49 = PyTuple_New( 1 );
    tmp_tuple_element_5 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_49 );

        frame_module->f_lineno = 461;
        goto try_finally_handler_5;
    }
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_49, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases.object == NULL );
    tmp_class_creation_5__bases.object = tmp_assign_source_49;

    tmp_assign_source_50 = impl_class_6_ndenumerate_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 461;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_5__class_dict.object == NULL );
    tmp_class_creation_5__class_dict.object = tmp_assign_source_50;

    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict.object;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 461;
        goto try_finally_handler_5;
    }
    if (tmp_cmp_In_5 == 1)
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dget_dict_5 = tmp_class_creation_5__class_dict.object;

    tmp_dget_key_5 = const_str_plain___metaclass__;
    tmp_assign_source_51 = DICT_GET_ITEM( tmp_dget_dict_5, tmp_dget_key_5 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 461;
        goto try_finally_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_class_bases_5 = tmp_class_creation_5__bases.object;

    tmp_assign_source_51 = SELECT_METACLASS( tmp_class_bases_5, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass.object == NULL );
    tmp_class_creation_5__metaclass.object = tmp_assign_source_51;

    tmp_called_9 = tmp_class_creation_5__metaclass.object;

    tmp_call_arg_element_13 = const_str_plain_ndenumerate;
    tmp_call_arg_element_14 = tmp_class_creation_5__bases.object;

    tmp_call_arg_element_15 = tmp_class_creation_5__class_dict.object;

    frame_module->f_lineno = 461;
    tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS3( tmp_called_9, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 461;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_5__class.object == NULL );
    tmp_class_creation_5__class.object = tmp_assign_source_52;

    tmp_assign_source_53 = tmp_class_creation_5__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndenumerate, tmp_assign_source_53 );
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
    Py_XDECREF( tmp_class_creation_5__class.object );
    tmp_class_creation_5__class.object = NULL;

    Py_XDECREF( tmp_class_creation_5__bases.object );
    tmp_class_creation_5__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict.object );
    tmp_class_creation_5__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass.object );
    tmp_class_creation_5__metaclass.object = NULL;

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
    // Tried code
    tmp_assign_source_54 = PyTuple_New( 1 );
    tmp_tuple_element_6 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_54 );

        frame_module->f_lineno = 510;
        goto try_finally_handler_6;
    }
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_54, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases.object == NULL );
    tmp_class_creation_6__bases.object = tmp_assign_source_54;

    tmp_assign_source_55 = impl_class_7_ndindex_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 510;
        goto try_finally_handler_6;
    }
    assert( tmp_class_creation_6__class_dict.object == NULL );
    tmp_class_creation_6__class_dict.object = tmp_assign_source_55;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_6__class_dict.object;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 510;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_In_6 == 1)
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_dget_dict_6 = tmp_class_creation_6__class_dict.object;

    tmp_dget_key_6 = const_str_plain___metaclass__;
    tmp_assign_source_56 = DICT_GET_ITEM( tmp_dget_dict_6, tmp_dget_key_6 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 510;
        goto try_finally_handler_6;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_class_bases_6 = tmp_class_creation_6__bases.object;

    tmp_assign_source_56 = SELECT_METACLASS( tmp_class_bases_6, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass.object == NULL );
    tmp_class_creation_6__metaclass.object = tmp_assign_source_56;

    tmp_called_10 = tmp_class_creation_6__metaclass.object;

    tmp_call_arg_element_16 = const_str_plain_ndindex;
    tmp_call_arg_element_17 = tmp_class_creation_6__bases.object;

    tmp_call_arg_element_18 = tmp_class_creation_6__class_dict.object;

    frame_module->f_lineno = 510;
    tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS3( tmp_called_10, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 510;
        goto try_finally_handler_6;
    }
    assert( tmp_class_creation_6__class.object == NULL );
    tmp_class_creation_6__class.object = tmp_assign_source_57;

    tmp_assign_source_58 = tmp_class_creation_6__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndindex, tmp_assign_source_58 );
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

    tmp_tried_lineno_6 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_6__class.object );
    tmp_class_creation_6__class.object = NULL;

    Py_XDECREF( tmp_class_creation_6__bases.object );
    tmp_class_creation_6__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict.object );
    tmp_class_creation_6__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass.object );
    tmp_class_creation_6__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_6;
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
    tmp_assign_source_59 = PyTuple_New( 1 );
    tmp_tuple_element_7 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_59 );

        frame_module->f_lineno = 584;
        goto try_finally_handler_7;
    }
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_59, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_7__bases.object == NULL );
    tmp_class_creation_7__bases.object = tmp_assign_source_59;

    tmp_assign_source_60 = impl_class_8_IndexExpression_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 584;
        goto try_finally_handler_7;
    }
    assert( tmp_class_creation_7__class_dict.object == NULL );
    tmp_class_creation_7__class_dict.object = tmp_assign_source_60;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_7__class_dict.object;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 584;
        goto try_finally_handler_7;
    }
    if (tmp_cmp_In_7 == 1)
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dget_dict_7 = tmp_class_creation_7__class_dict.object;

    tmp_dget_key_7 = const_str_plain___metaclass__;
    tmp_assign_source_61 = DICT_GET_ITEM( tmp_dget_dict_7, tmp_dget_key_7 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 584;
        goto try_finally_handler_7;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_class_bases_7 = tmp_class_creation_7__bases.object;

    tmp_assign_source_61 = SELECT_METACLASS( tmp_class_bases_7, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass.object == NULL );
    tmp_class_creation_7__metaclass.object = tmp_assign_source_61;

    tmp_called_11 = tmp_class_creation_7__metaclass.object;

    tmp_call_arg_element_19 = const_str_plain_IndexExpression;
    tmp_call_arg_element_20 = tmp_class_creation_7__bases.object;

    tmp_call_arg_element_21 = tmp_class_creation_7__class_dict.object;

    frame_module->f_lineno = 584;
    tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS3( tmp_called_11, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 584;
        goto try_finally_handler_7;
    }
    assert( tmp_class_creation_7__class.object == NULL );
    tmp_class_creation_7__class.object = tmp_assign_source_62;

    tmp_assign_source_63 = tmp_class_creation_7__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression, tmp_assign_source_63 );
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

    tmp_tried_lineno_7 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_7__class.object );
    tmp_class_creation_7__class.object = NULL;

    Py_XDECREF( tmp_class_creation_7__bases.object );
    tmp_class_creation_7__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict.object );
    tmp_class_creation_7__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass.object );
    tmp_class_creation_7__metaclass.object = NULL;

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
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IndexExpression );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168214 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 636;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_3 = PyDict_Copy( const_dict_0d87fdb65ac69f3e7f132f381a92030e );
    frame_module->f_lineno = 636;
    tmp_assign_source_64 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_12, tmp_call_kw_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 636;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_index_exp, tmp_assign_source_64 );
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IndexExpression );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 168214 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 637;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_4 = PyDict_Copy( const_dict_b4dcb48ac0b3434981963a3b0a181907 );
    frame_module->f_lineno = 637;
    tmp_assign_source_65 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_13, tmp_call_kw_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 637;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_s_, tmp_assign_source_65 );
    tmp_defaults_1 = const_tuple_false_tuple;
    tmp_assign_source_66 = MAKE_FUNCTION_function_9_fill_diagonal_of_module_numpy$lib$index_tricks( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_66 );

        frame_module->f_lineno = 645;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_fill_diagonal, tmp_assign_source_66 );
    tmp_defaults_2 = const_tuple_int_pos_2_tuple;
    tmp_assign_source_67 = MAKE_FUNCTION_function_10_diag_indices_of_module_numpy$lib$index_tricks( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_67 );

        frame_module->f_lineno = 754;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices, tmp_assign_source_67 );
    tmp_assign_source_68 = MAKE_FUNCTION_function_11_diag_indices_from_of_module_numpy$lib$index_tricks(  );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_68 );

        frame_module->f_lineno = 822;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices_from, tmp_assign_source_68 );

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

    return MOD_RETURN_VALUE( module_numpy$lib$index_tricks );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
