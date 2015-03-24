// Generated code for Python source for module 'scipy.sparse.csgraph._laplacian'
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

// The _module_scipy$sparse$csgraph$_laplacian is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$csgraph$_laplacian;
PyDictObject *moduledict_scipy$sparse$csgraph$_laplacian;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_w;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_coo;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_lap;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_uint;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_float;
static PyObject *const_str_plain_graph;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_tocoo;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_normed;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_csgraph;
static PyObject *const_str_plain_n_nodes;
static PyObject *const_str_plain_new_col;
static PyObject *const_str_plain_new_row;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_str_plain_squeeze;
static PyObject *const_str_plain_w_zeros;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_diag_idx;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_new_data;
static PyObject *const_str_plain_diag_mask;
extern PyObject *const_str_plain_laplacian;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain__laplacian;
extern PyObject *const_str_plain_coo_matrix;
extern PyObject *const_str_plain_difference;
extern PyObject *const_str_plain_isspmatrix;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_str_plain_return_diag;
extern PyObject *const_tuple_false_false_tuple;
static PyObject *const_str_plain_diagonal_holes;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain__laplacian_dense;
static PyObject *const_str_plain__laplacian_sparse;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_dict_c4b01644824ba6bad132707fcdaa03f1;
static PyObject *const_str_digest_23308e782e8f069e6f0aa78ef54e0f0b;
static PyObject *const_str_digest_4d140dbb4ef5dbe4248668462f6ddaae;
static PyObject *const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa;
static PyObject *const_str_digest_984d9113169f190994c70b967e926a26;
extern PyObject *const_str_digest_bba312255c96f4c843b12f3f8e172622;
static PyObject *const_str_digest_e45350dd9d721b04f6fe94d419646c30;
static PyObject *const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple;
static PyObject *const_tuple_str_plain_isspmatrix_str_plain_coo_matrix_tuple;
static PyObject *const_tuple_str_plain_graph_str_plain_normed_str_plain_return_diag_tuple;
static PyObject *const_tuple_str_plain_csgraph_str_plain_normed_str_plain_return_diag_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_lap = UNSTREAM_STRING( &constant_bin[ 117111 ], 3, 1 );
    const_str_plain_graph = UNSTREAM_STRING( &constant_bin[ 265221 ], 5, 1 );
    const_str_plain_n_nodes = UNSTREAM_STRING( &constant_bin[ 265822 ], 7, 1 );
    const_str_plain_new_col = UNSTREAM_STRING( &constant_bin[ 2347449 ], 7, 1 );
    const_str_plain_new_row = UNSTREAM_STRING( &constant_bin[ 2347456 ], 7, 1 );
    const_str_plain_w_zeros = UNSTREAM_STRING( &constant_bin[ 265714 ], 7, 1 );
    const_str_plain_diag_idx = UNSTREAM_STRING( &constant_bin[ 2347463 ], 8, 1 );
    const_str_plain_diag_mask = UNSTREAM_STRING( &constant_bin[ 265767 ], 9, 1 );
    const_str_plain_return_diag = UNSTREAM_STRING( &constant_bin[ 265512 ], 11, 1 );
    const_str_plain_diagonal_holes = UNSTREAM_STRING( &constant_bin[ 2347471 ], 14, 1 );
    const_str_plain__laplacian_dense = UNSTREAM_STRING( &constant_bin[ 265566 ], 16, 1 );
    const_str_plain__laplacian_sparse = UNSTREAM_STRING( &constant_bin[ 265463 ], 17, 1 );
    const_str_digest_23308e782e8f069e6f0aa78ef54e0f0b = UNSTREAM_STRING( &constant_bin[ 2347485 ], 31, 0 );
    const_str_digest_4d140dbb4ef5dbe4248668462f6ddaae = UNSTREAM_STRING( &constant_bin[ 2347516 ], 40, 0 );
    const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa = UNSTREAM_STRING( &constant_bin[ 2347556 ], 67, 0 );
    const_str_digest_984d9113169f190994c70b967e926a26 = UNSTREAM_STRING( &constant_bin[ 2347623 ], 1610, 0 );
    const_str_digest_e45350dd9d721b04f6fe94d419646c30 = UNSTREAM_STRING( &constant_bin[ 2349233 ], 40, 0 );
    const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 0, const_str_plain_graph ); Py_INCREF( const_str_plain_graph );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 1, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 2, const_str_plain_return_diag ); Py_INCREF( const_str_plain_return_diag );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 3, const_str_plain_n_nodes ); Py_INCREF( const_str_plain_n_nodes );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 4, const_str_plain_lap ); Py_INCREF( const_str_plain_lap );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 5, const_str_plain_diag_mask ); Py_INCREF( const_str_plain_diag_mask );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 6, const_str_plain_diag_idx ); Py_INCREF( const_str_plain_diag_idx );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 7, const_str_plain_diagonal_holes ); Py_INCREF( const_str_plain_diagonal_holes );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 8, const_str_plain_new_data ); Py_INCREF( const_str_plain_new_data );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 9, const_str_plain_new_row ); Py_INCREF( const_str_plain_new_row );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 10, const_str_plain_new_col ); Py_INCREF( const_str_plain_new_col );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 11, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 12, const_str_plain_w_zeros ); Py_INCREF( const_str_plain_w_zeros );
    const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple, 0, const_str_plain_graph ); Py_INCREF( const_str_plain_graph );
    PyTuple_SET_ITEM( const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple, 1, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple, 2, const_str_plain_return_diag ); Py_INCREF( const_str_plain_return_diag );
    PyTuple_SET_ITEM( const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple, 3, const_str_plain_n_nodes ); Py_INCREF( const_str_plain_n_nodes );
    PyTuple_SET_ITEM( const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple, 4, const_str_plain_lap ); Py_INCREF( const_str_plain_lap );
    PyTuple_SET_ITEM( const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple, 5, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple, 6, const_str_plain_w_zeros ); Py_INCREF( const_str_plain_w_zeros );
    const_tuple_str_plain_isspmatrix_str_plain_coo_matrix_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isspmatrix_str_plain_coo_matrix_tuple, 0, const_str_plain_isspmatrix ); Py_INCREF( const_str_plain_isspmatrix );
    PyTuple_SET_ITEM( const_tuple_str_plain_isspmatrix_str_plain_coo_matrix_tuple, 1, const_str_plain_coo_matrix ); Py_INCREF( const_str_plain_coo_matrix );
    const_tuple_str_plain_graph_str_plain_normed_str_plain_return_diag_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_graph_str_plain_normed_str_plain_return_diag_tuple, 0, const_str_plain_graph ); Py_INCREF( const_str_plain_graph );
    PyTuple_SET_ITEM( const_tuple_str_plain_graph_str_plain_normed_str_plain_return_diag_tuple, 1, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_str_plain_graph_str_plain_normed_str_plain_return_diag_tuple, 2, const_str_plain_return_diag ); Py_INCREF( const_str_plain_return_diag );
    const_tuple_str_plain_csgraph_str_plain_normed_str_plain_return_diag_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_csgraph_str_plain_normed_str_plain_return_diag_tuple, 0, const_str_plain_csgraph ); Py_INCREF( const_str_plain_csgraph );
    PyTuple_SET_ITEM( const_tuple_str_plain_csgraph_str_plain_normed_str_plain_return_diag_tuple, 1, const_str_plain_normed ); Py_INCREF( const_str_plain_normed );
    PyTuple_SET_ITEM( const_tuple_str_plain_csgraph_str_plain_normed_str_plain_return_diag_tuple, 2, const_str_plain_return_diag ); Py_INCREF( const_str_plain_return_diag );
}

// The module code objects.
static PyCodeObject *codeobj_9680dc8713a7fc98e998d5118b792249;
static PyCodeObject *codeobj_408ff4aca7853b4b3eb07ee0db8d121c;
static PyCodeObject *codeobj_36633a4604e44b29660205eebb48de41;
static PyCodeObject *codeobj_d6d3c4c813efd6e5c825bc0a378bff8b;
static PyCodeObject *codeobj_572f70971131130de079cd8e87ea015e;
static PyCodeObject *codeobj_2eedf6a0d55ef4449dd2569fc4599420;

static void _initModuleCodeObjects(void)
{
    codeobj_9680dc8713a7fc98e998d5118b792249 = MAKE_CODEOBJ( const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa, const_str_plain__laplacian, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_408ff4aca7853b4b3eb07ee0db8d121c = MAKE_CODEOBJ( const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa, const_str_plain__laplacian_dense, 118, const_tuple_str_plain_graph_str_plain_normed_str_plain_return_diag_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_36633a4604e44b29660205eebb48de41 = MAKE_CODEOBJ( const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa, const_str_plain__laplacian_dense, 118, const_tuple_ed48c2efe23d7009ec04b7f38294de04_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d6d3c4c813efd6e5c825bc0a378bff8b = MAKE_CODEOBJ( const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa, const_str_plain__laplacian_sparse, 82, const_tuple_str_plain_graph_str_plain_normed_str_plain_return_diag_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_572f70971131130de079cd8e87ea015e = MAKE_CODEOBJ( const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa, const_str_plain__laplacian_sparse, 82, const_tuple_8d815ebce062417482b5c0de0c9f2419_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2eedf6a0d55ef4449dd2569fc4599420 = MAKE_CODEOBJ( const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa, const_str_plain_laplacian, 18, const_tuple_str_plain_csgraph_str_plain_normed_str_plain_return_diag_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject *_python_par_csgraph, PyObject *_python_par_normed, PyObject *_python_par_return_diag )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_csgraph; par_csgraph.object = _python_par_csgraph;
    PyObjectLocalVariable par_normed; par_normed.object = _python_par_normed;
    PyObjectLocalVariable par_return_diag; par_return_diag.object = _python_par_return_diag;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2eedf6a0d55ef4449dd2569fc4599420, module_scipy$sparse$csgraph$_laplacian );
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
    tmp_source_name_1 = par_csgraph.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_2;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
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


        frame_function->f_lineno = 67;
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
    tmp_source_name_2 = par_csgraph.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_3;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_3;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_3;
    }
    tmp_source_name_3 = par_csgraph.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_3;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 67;
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

        frame_function->f_lineno = 67;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
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

        frame_function->f_lineno = 67;
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
    tmp_make_exception_arg_1 = const_str_digest_4d140dbb4ef5dbe4248668462f6ddaae;
    frame_function->f_lineno = 68;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 68;
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
    tmp_assign_source_2 = par_normed.object;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163217 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
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


        frame_function->f_lineno = 70;
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
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto try_finally_handler_8;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_issubdtype );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_8;
    }
    tmp_source_name_5 = par_csgraph.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 70;
        goto try_finally_handler_8;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_int );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 70;
        goto try_finally_handler_8;
    }
    frame_function->f_lineno = 70;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_8;
    }
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_3;

    tmp_cond_value_5 = tmp_or_2__value_1.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
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
    tmp_cond_value_3 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_cond_value_3 );
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
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_9;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_issubdtype );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_9;
    }
    tmp_source_name_8 = par_csgraph.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 71;
        goto try_finally_handler_9;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_9;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_uint );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 71;
        goto try_finally_handler_9;
    }
    frame_function->f_lineno = 71;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
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
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

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
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_3 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_3 );
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
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 70;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_10 = par_csgraph.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto try_finally_handler_4;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_astype );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_finally_handler_4;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_float );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 72;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 72;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_finally_handler_4;
    }
    if (par_csgraph.object == NULL)
    {
        par_csgraph.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_csgraph.object;
        par_csgraph.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    branch_no_2:;
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
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

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
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_isspmatrix );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isspmatrix );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259965 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_csgraph.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 74;
    tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_6 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
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
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__laplacian_sparse );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__laplacian_sparse );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265450 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_csgraph.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_normed.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163217 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_normed;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_return_diag.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265496 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_return_diag;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 76;
    tmp_return_value = CALL_FUNCTION( tmp_called_5, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__laplacian_dense );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__laplacian_dense );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265553 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_csgraph.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_call_kw_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = par_normed.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163217 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_normed;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_return_diag.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265496 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_return_diag;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 79;
    tmp_return_value = CALL_FUNCTION( tmp_called_6, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
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
    if ((par_csgraph.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_csgraph,
            par_csgraph.object
        );

    }
    if ((par_normed.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normed,
            par_normed.object
        );

    }
    if ((par_return_diag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_return_diag,
            par_return_diag.object
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
static PyObject *fparse_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_csgraph = NULL;
    PyObject *_python_par_normed = NULL;
    PyObject *_python_par_return_diag = NULL;
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
                PyErr_Format( PyExc_TypeError, "laplacian() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_csgraph == key )
            {
                assert( _python_par_csgraph == NULL );
                _python_par_csgraph = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_normed == key )
            {
                assert( _python_par_normed == NULL );
                _python_par_normed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_return_diag == key )
            {
                assert( _python_par_return_diag == NULL );
                _python_par_return_diag = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_csgraph, key ) == 1 )
            {
                assert( _python_par_csgraph == NULL );
                _python_par_csgraph = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_normed, key ) == 1 )
            {
                assert( _python_par_normed == NULL );
                _python_par_normed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_return_diag, key ) == 1 )
            {
                assert( _python_par_return_diag == NULL );
                _python_par_return_diag = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "laplacian() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_csgraph != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_csgraph = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_csgraph == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_csgraph = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_normed != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_normed = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_normed == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_normed = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_return_diag != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_return_diag = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_return_diag == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_return_diag = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_csgraph == NULL || _python_par_normed == NULL || _python_par_return_diag == NULL ))
    {
        PyObject *values[] = { _python_par_csgraph, _python_par_normed, _python_par_return_diag };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( self, _python_par_csgraph, _python_par_normed, _python_par_return_diag );

error_exit:;

    Py_XDECREF( _python_par_csgraph );
    Py_XDECREF( _python_par_normed );
    Py_XDECREF( _python_par_return_diag );

    return NULL;
}

static PyObject *dparse_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject *_python_par_graph, PyObject *_python_par_normed, PyObject *_python_par_return_diag )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_graph; par_graph.object = _python_par_graph;
    PyObjectLocalVariable par_normed; par_normed.object = _python_par_normed;
    PyObjectLocalVariable par_return_diag; par_return_diag.object = _python_par_return_diag;
    PyObjectLocalVariable var_n_nodes;
    PyObjectLocalVariable var_lap;
    PyObjectLocalVariable var_diag_mask;
    PyObjectLocalVariable var_diag_idx;
    PyObjectLocalVariable var_diagonal_holes;
    PyObjectLocalVariable var_new_data;
    PyObjectLocalVariable var_new_row;
    PyObjectLocalVariable var_new_col;
    PyObjectLocalVariable var_w;
    PyObjectLocalVariable var_w_zeros;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_range_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_arg_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unary_arg_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d6d3c4c813efd6e5c825bc0a378bff8b, module_scipy$sparse$csgraph$_laplacian );
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
    tmp_source_name_1 = par_graph.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265598 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    assert( var_n_nodes.object == NULL );
    var_n_nodes.object = tmp_assign_source_1;

    tmp_source_name_2 = par_graph.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265598 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_coo;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_unary_arg_1 = par_graph.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265598 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tocoo );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 85;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    assert( var_lap.object == NULL );
    var_lap.object = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_4 = par_graph.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265598 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_copy );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 87;
    tmp_unary_arg_2 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unary_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_2 );
    Py_DECREF( tmp_unary_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    assert( var_lap.object == NULL );
    var_lap.object = tmp_assign_source_3;

    branch_end_1:;
    tmp_source_name_5 = var_lap.object;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_row );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = var_lap.object;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_col );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    assert( var_diag_mask.object == NULL );
    var_diag_mask.object = tmp_assign_source_4;

    tmp_source_name_7 = var_diag_mask.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sum );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 89;
    tmp_compare_left_2 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = var_n_nodes.object;

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
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
    tmp_source_name_8 = var_lap.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_row );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = var_diag_mask.object;

    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_diag_idx.object == NULL );
    var_diag_idx.object = tmp_assign_source_5;

    tmp_range_arg_1 = var_n_nodes.object;

    tmp_set_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_set_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = PySet_New( tmp_set_arg_1 );
    Py_DECREF( tmp_set_arg_1 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_difference );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = var_diag_idx.object;

    frame_function->f_lineno = 94;
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    assert( var_diagonal_holes.object == NULL );
    var_diagonal_holes.object = tmp_assign_source_6;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_concatenate );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = PyList_New( 2 );
    tmp_source_name_11 = var_lap.object;

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_data );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_call_arg_element_2, 0, tmp_list_element_1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ones );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = var_diagonal_holes.object;

    tmp_call_arg_element_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 95;
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_call_arg_element_2, 1, tmp_list_element_1 );
    frame_function->f_lineno = 95;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    assert( var_new_data.object == NULL );
    var_new_data.object = tmp_assign_source_7;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_concatenate );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = PyList_New( 2 );
    tmp_source_name_14 = var_lap.object;

    tmp_list_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_row );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_call_arg_element_4, 0, tmp_list_element_2 );
    tmp_list_element_2 = var_diagonal_holes.object;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_call_arg_element_4, 1, tmp_list_element_2 );
    frame_function->f_lineno = 96;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    assert( var_new_row.object == NULL );
    var_new_row.object = tmp_assign_source_8;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_concatenate );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = PyList_New( 2 );
    tmp_source_name_16 = var_lap.object;

    tmp_list_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_col );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_call_arg_element_5, 0, tmp_list_element_3 );
    tmp_list_element_3 = var_diagonal_holes.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_call_arg_element_5, 1, tmp_list_element_3 );
    frame_function->f_lineno = 97;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    assert( var_new_col.object == NULL );
    var_new_col.object = tmp_assign_source_9;

    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_new_data.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_new_row.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_new_col.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_17 = var_lap.object;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_shape );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 98;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    assert( var_lap.object != NULL );
    {
        PyObject *old = var_lap.object;
        var_lap.object = tmp_assign_source_10;
        Py_DECREF( old );
    }

    tmp_source_name_18 = var_lap.object;

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_row );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = var_lap.object;

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_col );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    assert( var_diag_mask.object != NULL );
    {
        PyObject *old = var_diag_mask.object;
        var_diag_mask.object = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_ass_subvalue_1 = const_int_0;
    tmp_source_name_20 = var_lap.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_data );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = var_diag_mask.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_asarray );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = var_lap.object;

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_sum );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_2 = PyDict_Copy( const_dict_c4b01644824ba6bad132707fcdaa03f1 );
    frame_function->f_lineno = 102;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_12, tmp_call_kw_2 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 102;
    tmp_source_name_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_squeeze );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 102;
    tmp_unary_arg_3 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_unary_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_3 );
    Py_DECREF( tmp_unary_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    assert( var_w.object == NULL );
    var_w.object = tmp_assign_source_12;

    tmp_cond_value_1 = par_normed.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163217 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_sqrt );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = var_w.object;

    frame_function->f_lineno = 104;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    assert( var_w.object != NULL );
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_13;
        Py_DECREF( old );
    }

    tmp_compexpr_left_3 = var_w.object;

    tmp_compexpr_right_3 = const_int_0;
    tmp_assign_source_14 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    assert( var_w_zeros.object == NULL );
    var_w_zeros.object = tmp_assign_source_14;

    tmp_ass_subvalue_2 = const_int_pos_1;
    tmp_ass_subscribed_2 = var_w.object;

    tmp_ass_subscript_2 = var_w_zeros.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = var_lap.object;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_data );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = tmp_assign_source_15;

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_subscr_target_3 = var_w.object;

    tmp_source_name_26 = var_lap.object;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_3 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_row );
    if ( tmp_subscr_subscript_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_1;
    }
    tmp_binop_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_subscript_3 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_1;
    }
    tmp_assign_source_16 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_16;

    // Tried code
    tmp_compare_left_3 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_1 = tmp_inplace_assign_1__inplace_end.object;

    tmp_assattr_target_1 = var_lap.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_data, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto try_finally_handler_2;
    }
    branch_no_4:;
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
    tmp_result = tmp_inplace_assign_1__inplace_end.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_end.object );
        tmp_inplace_assign_1__inplace_end.object = NULL;
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
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
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
    tmp_source_name_27 = var_lap.object;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_data );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = tmp_assign_source_17;

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_subscr_target_4 = var_w.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto try_finally_handler_3;
    }

    tmp_source_name_28 = var_lap.object;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_4 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_col );
    if ( tmp_subscr_subscript_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto try_finally_handler_3;
    }
    tmp_binop_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto try_finally_handler_3;
    }
    tmp_assign_source_18 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto try_finally_handler_3;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_18;

    // Tried code
    tmp_compare_left_4 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_4 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if (tmp_isnot_2)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_2 = tmp_inplace_assign_2__inplace_end.object;

    tmp_assattr_target_2 = var_lap.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto try_finally_handler_4;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_data, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto try_finally_handler_4;
    }
    branch_no_5:;
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
    tmp_result = tmp_inplace_assign_2__inplace_end.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_end.object );
        tmp_inplace_assign_2__inplace_end.object = NULL;
    }

    assert( tmp_result != false );
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
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
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
    tmp_binop_left_3 = const_int_pos_1;
    tmp_subscr_target_5 = var_w_zeros.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265698 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_source_name_30 = var_lap.object;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_row );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_6 = var_diag_mask.object;

    if ( tmp_subscr_subscript_6 == NULL )
    {
        Py_DECREF( tmp_subscr_target_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265751 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_subscr_subscript_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_subscript_5 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = BINARY_OPERATION_SUB( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_source_name_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_astype );
    Py_DECREF( tmp_source_name_29 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = var_lap.object;

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_data );
    if ( tmp_source_name_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_31 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 109;
    tmp_ass_subvalue_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = var_lap.object;

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_data );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_3 );

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_3 = var_diag_mask.object;

    if ( tmp_ass_subscript_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscribed_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265751 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_subscr_target_7 = var_w.object;

    tmp_source_name_34 = var_lap.object;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_8 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_row );
    if ( tmp_subscr_target_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_8 = var_diag_mask.object;

    tmp_subscr_subscript_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_target_8 );
    if ( tmp_subscr_subscript_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_subscript_7 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = var_lap.object;

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_data );
    if ( tmp_ass_subscribed_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_4 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_4 = var_diag_mask.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscribed_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    tmp_cond_value_2 = par_return_diag.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265496 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_lap.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_w.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_return_value = var_lap.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
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
    if ((var_n_nodes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n_nodes,
            var_n_nodes.object
        );

    }
    if ((var_lap.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lap,
            var_lap.object
        );

    }
    if ((var_diag_mask.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diag_mask,
            var_diag_mask.object
        );

    }
    if ((var_diag_idx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diag_idx,
            var_diag_idx.object
        );

    }
    if ((var_diagonal_holes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_diagonal_holes,
            var_diagonal_holes.object
        );

    }
    if ((var_new_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new_data,
            var_new_data.object
        );

    }
    if ((var_new_row.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new_row,
            var_new_row.object
        );

    }
    if ((var_new_col.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_new_col,
            var_new_col.object
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
    if ((var_w_zeros.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_w_zeros,
            var_w_zeros.object
        );

    }
    if ((par_graph.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_graph,
            par_graph.object
        );

    }
    if ((par_normed.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normed,
            par_normed.object
        );

    }
    if ((par_return_diag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_return_diag,
            par_return_diag.object
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
static PyObject *fparse_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_graph = NULL;
    PyObject *_python_par_normed = NULL;
    PyObject *_python_par_return_diag = NULL;
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
                PyErr_Format( PyExc_TypeError, "_laplacian_sparse() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_graph == key )
            {
                assert( _python_par_graph == NULL );
                _python_par_graph = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_normed == key )
            {
                assert( _python_par_normed == NULL );
                _python_par_normed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_return_diag == key )
            {
                assert( _python_par_return_diag == NULL );
                _python_par_return_diag = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_graph, key ) == 1 )
            {
                assert( _python_par_graph == NULL );
                _python_par_graph = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_normed, key ) == 1 )
            {
                assert( _python_par_normed == NULL );
                _python_par_normed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_return_diag, key ) == 1 )
            {
                assert( _python_par_return_diag == NULL );
                _python_par_return_diag = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_laplacian_sparse() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_graph != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_graph = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_graph == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_graph = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_normed != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_normed = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_normed == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_normed = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_return_diag != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_return_diag = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_return_diag == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_return_diag = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_graph == NULL || _python_par_normed == NULL || _python_par_return_diag == NULL ))
    {
        PyObject *values[] = { _python_par_graph, _python_par_normed, _python_par_return_diag };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( self, _python_par_graph, _python_par_normed, _python_par_return_diag );

error_exit:;

    Py_XDECREF( _python_par_graph );
    Py_XDECREF( _python_par_normed );
    Py_XDECREF( _python_par_return_diag );

    return NULL;
}

static PyObject *dparse_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject *_python_par_graph, PyObject *_python_par_normed, PyObject *_python_par_return_diag )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_graph; par_graph.object = _python_par_graph;
    PyObjectLocalVariable par_normed; par_normed.object = _python_par_normed;
    PyObjectLocalVariable par_return_diag; par_return_diag.object = _python_par_return_diag;
    PyObjectLocalVariable var_n_nodes;
    PyObjectLocalVariable var_lap;
    PyObjectLocalVariable var_w;
    PyObjectLocalVariable var_w_zeros;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
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
    bool tmp_isnot_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_sliceobj_step_1;
    PyObject *tmp_sliceobj_step_2;
    PyObject *tmp_sliceobj_step_3;
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
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_408ff4aca7853b4b3eb07ee0db8d121c, module_scipy$sparse$csgraph$_laplacian );
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
    tmp_source_name_1 = par_graph.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265598 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    assert( var_n_nodes.object == NULL );
    var_n_nodes.object = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_graph.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265598 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 120;
    tmp_unary_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    assert( var_lap.object == NULL );
    var_lap.object = tmp_assign_source_2;

    tmp_ass_subvalue_1 = const_int_0;
    tmp_source_name_3 = var_lap.object;

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_flat );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = var_n_nodes.object;

    tmp_binop_right_1 = const_int_pos_1;
    tmp_sliceobj_step_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_sliceobj_step_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subscribed_1 );

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = MAKE_SLICEOBJ( Py_None, Py_None, tmp_sliceobj_step_1 );
    Py_DECREF( tmp_sliceobj_step_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_lap.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sum );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
    frame_function->f_lineno = 124;
    tmp_unary_arg_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_2, tmp_call_kw_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unary_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_2 );
    Py_DECREF( tmp_unary_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    assert( var_w.object == NULL );
    var_w.object = tmp_assign_source_3;

    tmp_cond_value_1 = par_normed.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163217 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sqrt );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_w.object;

    frame_function->f_lineno = 126;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    assert( var_w.object != NULL );
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_compexpr_left_1 = var_w.object;

    tmp_compexpr_right_1 = const_int_0;
    tmp_assign_source_5 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    assert( var_w_zeros.object == NULL );
    var_w_zeros.object = tmp_assign_source_5;

    tmp_ass_subvalue_2 = const_int_pos_1;
    tmp_ass_subscribed_2 = var_w.object;

    tmp_ass_subscript_2 = var_w_zeros.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = var_lap.object;

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_2 = var_w.object;

    tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 129;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_7;

    tmp_compare_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_1 = tmp_inplace_assign_1__inplace_end.object;

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
    tmp_assign_source_8 = tmp_inplace_assign_1__inplace_end.object;

    assert( var_lap.object != NULL );
    {
        PyObject *old = var_lap.object;
        var_lap.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }

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

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_9 = var_lap.object;

    if ( tmp_assign_source_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    // Tried code
    tmp_binop_left_3 = tmp_inplace_assign_2__inplace_start.object;

    tmp_subscr_target_2 = var_w.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 0, tmp_tuple_element_1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto try_finally_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_newaxis );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_2 );

        frame_function->f_lineno = 130;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_2, 1, tmp_tuple_element_1 );
    tmp_binop_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_subscript_2 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto try_finally_handler_2;
    }
    tmp_assign_source_10 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto try_finally_handler_2;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_10;

    tmp_compare_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_2)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_11 = tmp_inplace_assign_2__inplace_end.object;

    if (var_lap.object == NULL)
    {
        var_lap.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_lap.object;
        var_lap.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    branch_no_3:;
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
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

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
    tmp_binop_left_4 = const_int_pos_1;
    tmp_binop_right_4 = var_w_zeros.object;

    if ( tmp_binop_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265698 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_3 = BINARY_OPERATION_SUB( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = var_lap.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_flat );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_3 );

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = var_n_nodes.object;

    if ( tmp_binop_left_5 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscribed_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265806 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = const_int_pos_1;
    tmp_sliceobj_step_2 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_sliceobj_step_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscribed_3 );

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_3 = MAKE_SLICEOBJ( Py_None, Py_None, tmp_sliceobj_step_2 );
    Py_DECREF( tmp_sliceobj_step_2 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    Py_DECREF( tmp_ass_subscript_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_ass_subvalue_4 = var_w.object;

    tmp_source_name_8 = var_lap.object;

    tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_flat );
    if ( tmp_ass_subscribed_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_6 = var_n_nodes.object;

    tmp_binop_right_6 = const_int_pos_1;
    tmp_sliceobj_step_3 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_sliceobj_step_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subscribed_4 );

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_4 = MAKE_SLICEOBJ( Py_None, Py_None, tmp_sliceobj_step_3 );
    Py_DECREF( tmp_sliceobj_step_3 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscribed_4 );
    Py_DECREF( tmp_ass_subscript_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    branch_end_1:;
    tmp_cond_value_2 = par_return_diag.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265496 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
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
    tmp_tuple_element_2 = var_lap.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_w.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_return_value = var_lap.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265649 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
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
    if ((var_n_nodes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n_nodes,
            var_n_nodes.object
        );

    }
    if ((var_lap.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lap,
            var_lap.object
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
    if ((var_w_zeros.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_w_zeros,
            var_w_zeros.object
        );

    }
    if ((par_graph.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_graph,
            par_graph.object
        );

    }
    if ((par_normed.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normed,
            par_normed.object
        );

    }
    if ((par_return_diag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_return_diag,
            par_return_diag.object
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
static PyObject *fparse_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_graph = NULL;
    PyObject *_python_par_normed = NULL;
    PyObject *_python_par_return_diag = NULL;
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
                PyErr_Format( PyExc_TypeError, "_laplacian_dense() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_graph == key )
            {
                assert( _python_par_graph == NULL );
                _python_par_graph = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_normed == key )
            {
                assert( _python_par_normed == NULL );
                _python_par_normed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_return_diag == key )
            {
                assert( _python_par_return_diag == NULL );
                _python_par_return_diag = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_graph, key ) == 1 )
            {
                assert( _python_par_graph == NULL );
                _python_par_graph = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_normed, key ) == 1 )
            {
                assert( _python_par_normed == NULL );
                _python_par_normed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_return_diag, key ) == 1 )
            {
                assert( _python_par_return_diag == NULL );
                _python_par_return_diag = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_laplacian_dense() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_graph != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_graph = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_graph == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_graph = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_normed != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_normed = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_normed == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_normed = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_return_diag != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_return_diag = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_return_diag == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_return_diag = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_graph == NULL || _python_par_normed == NULL || _python_par_return_diag == NULL ))
    {
        PyObject *values[] = { _python_par_graph, _python_par_normed, _python_par_return_diag };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( self, _python_par_graph, _python_par_normed, _python_par_return_diag );

error_exit:;

    Py_XDECREF( _python_par_graph );
    Py_XDECREF( _python_par_normed );
    Py_XDECREF( _python_par_return_diag );

    return NULL;
}

static PyObject *dparse_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian,
        dparse_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian,
        const_str_plain_laplacian,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2eedf6a0d55ef4449dd2569fc4599420,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$csgraph$_laplacian,
        const_str_digest_984d9113169f190994c70b967e926a26
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian,
        dparse_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian,
        const_str_plain__laplacian_sparse,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_572f70971131130de079cd8e87ea015e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$csgraph$_laplacian,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian,
        dparse_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian,
        const_str_plain__laplacian_dense,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_36633a4604e44b29660205eebb48de41,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$csgraph$_laplacian,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$csgraph$_laplacian =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.csgraph._laplacian",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$csgraph$_laplacian )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$csgraph$_laplacian );
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

    // puts( "in initscipy$sparse$csgraph$_laplacian" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$csgraph$_laplacian = Py_InitModule4(
        "scipy.sparse.csgraph._laplacian",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$csgraph$_laplacian = PyModule_Create( &mdef_scipy$sparse$csgraph$_laplacian );
#endif

    moduledict_scipy$sparse$csgraph$_laplacian = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$csgraph$_laplacian)->md_dict;

    assertObject( module_scipy$sparse$csgraph$_laplacian );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_23308e782e8f069e6f0aa78ef54e0f0b, module_scipy$sparse$csgraph$_laplacian );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$csgraph$_laplacian );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
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
    PyObject *tmp_import_name_from_5;

    // Module code.
    tmp_assign_source_1 = const_str_digest_e45350dd9d721b04f6fe94d419646c30;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7b8697a7925fcb0f1fb08ee71be382fa;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_9680dc8713a7fc98e998d5118b792249, module_scipy$sparse$csgraph$_laplacian );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$csgraph$_laplacian)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$csgraph$_laplacian)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$csgraph$_laplacian)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$csgraph$_laplacian)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$sparse$csgraph$_laplacian)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_bba312255c96f4c843b12f3f8e172622, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_isspmatrix_str_plain_coo_matrix_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_isspmatrix );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_isspmatrix, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$sparse$csgraph$_laplacian)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_bba312255c96f4c843b12f3f8e172622, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_isspmatrix_str_plain_coo_matrix_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_coo_matrix );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_coo_matrix, tmp_assign_source_8 );
    tmp_defaults_1 = const_tuple_false_false_tuple;
    tmp_assign_source_9 = MAKE_FUNCTION_function_1_laplacian_of_module_scipy$sparse$csgraph$_laplacian( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain_laplacian, tmp_assign_source_9 );
    tmp_defaults_2 = const_tuple_false_false_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_2__laplacian_sparse_of_module_scipy$sparse$csgraph$_laplacian( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__laplacian_sparse, tmp_assign_source_10 );
    tmp_defaults_3 = const_tuple_false_false_tuple;
    tmp_assign_source_11 = MAKE_FUNCTION_function_3__laplacian_dense_of_module_scipy$sparse$csgraph$_laplacian( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph$_laplacian, (Nuitka_StringObject *)const_str_plain__laplacian_dense, tmp_assign_source_11 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$csgraph$_laplacian );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
