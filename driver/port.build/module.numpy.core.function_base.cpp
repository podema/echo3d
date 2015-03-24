// Generated code for Python source for module 'numpy.core.function_base'
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

// The _module_numpy$core$function_base is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$core$function_base;
PyDictObject *moduledict_numpy$core$function_base;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_1_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_float_10_0;
extern PyObject *const_int_pos_50;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__nx;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_stop;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_retstep;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_endpoint;
extern PyObject *const_str_plain_linspace;
static PyObject *const_str_plain_logspace;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_function_base;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_array_tuple;
extern PyObject *const_tuple_str_plain_numeric_tuple;
static PyObject *const_tuple_int_pos_50_true_false_tuple;
static PyObject *const_tuple_int_pos_50_true_float_10_0_tuple;
static PyObject *const_str_digest_2b0c94549572922c7a7256ea1b98e1af;
static PyObject *const_str_digest_7baaf6d9825e93175713b5b6f8cd6742;
static PyObject *const_str_digest_dc2a04dc4493c90a3a48a2ba72d25fb3;
static PyObject *const_str_digest_e77816a1cb0d0e12965a992352f41297;
static PyObject *const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple;
static PyObject *const_tuple_8e9581553e33738bb16be33d15ac402a_tuple;
static PyObject *const_tuple_9857400c10b7e5e5b0cfceac22940e45_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple;
static PyObject *const_list_str_plain_logspace_str_plain_linspace_list;

static void _initModuleConstants(void)
{
    const_str_plain_logspace = UNSTREAM_STRING( &constant_bin[ 771530 ], 8, 1 );
    const_tuple_int_pos_50_true_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_tuple, 0, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_tuple_int_pos_50_true_float_10_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_tuple, 0, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_tuple, 2, const_float_10_0 ); Py_INCREF( const_float_10_0 );
    const_str_digest_2b0c94549572922c7a7256ea1b98e1af = UNSTREAM_STRING( &constant_bin[ 771538 ], 24, 0 );
    const_str_digest_7baaf6d9825e93175713b5b6f8cd6742 = UNSTREAM_STRING( &constant_bin[ 771562 ], 2229, 0 );
    const_str_digest_dc2a04dc4493c90a3a48a2ba72d25fb3 = UNSTREAM_STRING( &constant_bin[ 773791 ], 2510, 0 );
    const_str_digest_e77816a1cb0d0e12965a992352f41297 = UNSTREAM_STRING( &constant_bin[ 776301 ], 60, 0 );
    const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple, 4, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple, 5, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_tuple_8e9581553e33738bb16be33d15ac402a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8e9581553e33738bb16be33d15ac402a_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_8e9581553e33738bb16be33d15ac402a_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_8e9581553e33738bb16be33d15ac402a_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_8e9581553e33738bb16be33d15ac402a_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_8e9581553e33738bb16be33d15ac402a_tuple, 4, const_str_plain_retstep ); Py_INCREF( const_str_plain_retstep );
    const_tuple_9857400c10b7e5e5b0cfceac22940e45_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9857400c10b7e5e5b0cfceac22940e45_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_9857400c10b7e5e5b0cfceac22940e45_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_9857400c10b7e5e5b0cfceac22940e45_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_9857400c10b7e5e5b0cfceac22940e45_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_9857400c10b7e5e5b0cfceac22940e45_tuple, 4, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple, 4, const_str_plain_retstep ); Py_INCREF( const_str_plain_retstep );
    PyTuple_SET_ITEM( const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple, 5, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple, 6, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_list_str_plain_logspace_str_plain_linspace_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_logspace_str_plain_linspace_list, 0, const_str_plain_logspace ); Py_INCREF( const_str_plain_logspace );
    PyList_SET_ITEM( const_list_str_plain_logspace_str_plain_linspace_list, 1, const_str_plain_linspace ); Py_INCREF( const_str_plain_linspace );
}

// The module code objects.
static PyCodeObject *codeobj_8db27521b7c237cfbe234423a0df8e5f;
static PyCodeObject *codeobj_dc1d9c3042a2b1839b4a296d6bd07e4f;
static PyCodeObject *codeobj_eb2afc059c56a2bfec2190f410298ae1;
static PyCodeObject *codeobj_8fc3c8af7271d4e394facc02144b4d10;
static PyCodeObject *codeobj_900159b1564f7b1143dfa51b33a11915;

static void _initModuleCodeObjects(void)
{
    codeobj_8db27521b7c237cfbe234423a0df8e5f = MAKE_CODEOBJ( const_str_digest_e77816a1cb0d0e12965a992352f41297, const_str_plain_function_base, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dc1d9c3042a2b1839b4a296d6bd07e4f = MAKE_CODEOBJ( const_str_digest_e77816a1cb0d0e12965a992352f41297, const_str_plain_linspace, 8, const_tuple_8e9581553e33738bb16be33d15ac402a_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eb2afc059c56a2bfec2190f410298ae1 = MAKE_CODEOBJ( const_str_digest_e77816a1cb0d0e12965a992352f41297, const_str_plain_linspace, 8, const_tuple_b947da3c69ba6dc28b4bf45c9a59b919_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8fc3c8af7271d4e394facc02144b4d10 = MAKE_CODEOBJ( const_str_digest_e77816a1cb0d0e12965a992352f41297, const_str_plain_logspace, 98, const_tuple_9857400c10b7e5e5b0cfceac22940e45_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_900159b1564f7b1143dfa51b33a11915 = MAKE_CODEOBJ( const_str_digest_e77816a1cb0d0e12965a992352f41297, const_str_plain_logspace, 98, const_tuple_42dfa5dc7a5c17854cedb9aba21203dc_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_linspace_of_module_numpy$core$function_base( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_logspace_of_module_numpy$core$function_base( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_linspace_of_module_numpy$core$function_base( Nuitka_FunctionObject *self, PyObject *_python_par_start, PyObject *_python_par_stop, PyObject *_python_par_num, PyObject *_python_par_endpoint, PyObject *_python_par_retstep )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_start; par_start.object = _python_par_start;
    PyObjectLocalVariable par_stop; par_stop.object = _python_par_stop;
    PyObjectLocalVariable par_num; par_num.object = _python_par_num;
    PyObjectLocalVariable par_endpoint; par_endpoint.object = _python_par_endpoint;
    PyObjectLocalVariable par_retstep; par_retstep.object = _python_par_retstep;
    PyObjectLocalVariable var_step;
    PyObjectLocalVariable var_y;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_float_arg_2;
    PyObject *tmp_float_arg_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dc1d9c3042a2b1839b4a296d6bd07e4f, module_numpy$core$function_base );
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
    tmp_int_arg_1 = par_num.object;

    if ( tmp_int_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54030 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    if (par_num.object == NULL)
    {
        par_num.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_num.object;
        par_num.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_binop_left_1 = par_start.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_float_1_0;
    tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    if (par_start.object == NULL)
    {
        par_start.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_start.object;
        par_start.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_binop_left_2 = par_stop.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44039 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = const_float_1_0;
    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    if (par_stop.object == NULL)
    {
        par_stop.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_stop.object;
        par_stop.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = par_num.object;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = PyList_New( 0 );
    tmp_call_arg_element_2 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 83;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_cond_value_1 = par_endpoint.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65282 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
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
    tmp_compare_left_2 = par_num.object;

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = PyList_New( 1 );
    tmp_float_arg_1 = par_start.object;

    tmp_list_element_1 = TO_FLOAT( tmp_float_arg_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_call_arg_element_3, 0, tmp_list_element_1 );
    frame_function->f_lineno = 86;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_binop_left_4 = par_stop.object;

    tmp_binop_right_4 = par_start.object;

    tmp_binop_left_3 = BINARY_OPERATION_SUB( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = par_num.object;

    tmp_binop_right_5 = const_int_pos_1;
    tmp_float_arg_2 = BINARY_OPERATION_SUB( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_float_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = TO_FLOAT( tmp_float_arg_2 );
    Py_DECREF( tmp_float_arg_2 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    assert( var_step.object == NULL );
    var_step.object = tmp_assign_source_4;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_0;
    tmp_call_arg_element_5 = par_num.object;

    frame_function->f_lineno = 88;
    tmp_binop_left_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_7 = var_step.object;

    tmp_binop_left_6 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = par_start.object;

    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    assert( var_y.object == NULL );
    var_y.object = tmp_assign_source_5;

    tmp_ass_subvalue_1 = par_stop.object;

    tmp_ass_subscribed_1 = var_y.object;

    tmp_ass_subscript_1 = const_int_neg_1;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_binop_left_9 = par_stop.object;

    tmp_binop_right_9 = par_start.object;

    tmp_binop_left_8 = BINARY_OPERATION_SUB( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_float_arg_3 = par_num.object;

    tmp_binop_right_8 = TO_FLOAT( tmp_float_arg_3 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    assert( var_step.object == NULL );
    var_step.object = tmp_assign_source_6;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arange );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_int_0;
    tmp_call_arg_element_7 = par_num.object;

    frame_function->f_lineno = 92;
    tmp_binop_left_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_binop_left_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_11 = var_step.object;

    tmp_binop_left_10 = BINARY_OPERATION_MUL( tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_left_11 );
    if ( tmp_binop_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_10 = par_start.object;

    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_left_10 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_y.object == NULL );
    var_y.object = tmp_assign_source_7;

    branch_end_2:;
    tmp_cond_value_2 = par_retstep.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65368 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
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
    tmp_tuple_element_1 = var_y.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_step.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = var_y.object;

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
    if ((var_step.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_step,
            var_step.object
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
    if ((par_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_start,
            par_start.object
        );

    }
    if ((par_stop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stop,
            par_stop.object
        );

    }
    if ((par_num.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_num,
            par_num.object
        );

    }
    if ((par_endpoint.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_endpoint,
            par_endpoint.object
        );

    }
    if ((par_retstep.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_retstep,
            par_retstep.object
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
static PyObject *fparse_function_1_linspace_of_module_numpy$core$function_base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_start = NULL;
    PyObject *_python_par_stop = NULL;
    PyObject *_python_par_num = NULL;
    PyObject *_python_par_endpoint = NULL;
    PyObject *_python_par_retstep = NULL;
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
                PyErr_Format( PyExc_TypeError, "linspace() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_start == key )
            {
                assert( _python_par_start == NULL );
                _python_par_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_stop == key )
            {
                assert( _python_par_stop == NULL );
                _python_par_stop = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_num == key )
            {
                assert( _python_par_num == NULL );
                _python_par_num = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_endpoint == key )
            {
                assert( _python_par_endpoint == NULL );
                _python_par_endpoint = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_retstep == key )
            {
                assert( _python_par_retstep == NULL );
                _python_par_retstep = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_start, key ) == 1 )
            {
                assert( _python_par_start == NULL );
                _python_par_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stop, key ) == 1 )
            {
                assert( _python_par_stop == NULL );
                _python_par_stop = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_num, key ) == 1 )
            {
                assert( _python_par_num == NULL );
                _python_par_num = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_endpoint, key ) == 1 )
            {
                assert( _python_par_endpoint == NULL );
                _python_par_endpoint = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_retstep, key ) == 1 )
            {
                assert( _python_par_retstep == NULL );
                _python_par_retstep = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "linspace() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_start != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_start = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_start == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_start = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_stop != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stop = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stop == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_stop = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_num != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_num = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_num == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_num = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_endpoint != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_endpoint = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_endpoint == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_endpoint = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_retstep != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_retstep = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_retstep == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_retstep = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_start == NULL || _python_par_stop == NULL || _python_par_num == NULL || _python_par_endpoint == NULL || _python_par_retstep == NULL ))
    {
        PyObject *values[] = { _python_par_start, _python_par_stop, _python_par_num, _python_par_endpoint, _python_par_retstep };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_linspace_of_module_numpy$core$function_base( self, _python_par_start, _python_par_stop, _python_par_num, _python_par_endpoint, _python_par_retstep );

error_exit:;

    Py_XDECREF( _python_par_start );
    Py_XDECREF( _python_par_stop );
    Py_XDECREF( _python_par_num );
    Py_XDECREF( _python_par_endpoint );
    Py_XDECREF( _python_par_retstep );

    return NULL;
}

static PyObject *dparse_function_1_linspace_of_module_numpy$core$function_base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_linspace_of_module_numpy$core$function_base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_linspace_of_module_numpy$core$function_base( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_logspace_of_module_numpy$core$function_base( Nuitka_FunctionObject *self, PyObject *_python_par_start, PyObject *_python_par_stop, PyObject *_python_par_num, PyObject *_python_par_endpoint, PyObject *_python_par_base )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_start; par_start.object = _python_par_start;
    PyObjectLocalVariable par_stop; par_stop.object = _python_par_stop;
    PyObjectLocalVariable par_num; par_num.object = _python_par_num;
    PyObjectLocalVariable par_endpoint; par_endpoint.object = _python_par_endpoint;
    PyObjectLocalVariable par_base; par_base.object = _python_par_base;
    PyObjectLocalVariable var_y;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8fc3c8af7271d4e394facc02144b4d10, module_numpy$core$function_base );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_linspace );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linspace );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65421 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_start.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stop.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44039 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_num.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54030 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_num;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_endpoint.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65282 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_endpoint;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 172;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    assert( var_y.object == NULL );
    var_y.object = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 65336 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_power );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_base.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14369 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_y.object;

    frame_function->f_lineno = 173;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
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
    if ((var_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            var_y.object
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
    if ((par_stop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stop,
            par_stop.object
        );

    }
    if ((par_num.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_num,
            par_num.object
        );

    }
    if ((par_endpoint.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_endpoint,
            par_endpoint.object
        );

    }
    if ((par_base.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_base,
            par_base.object
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
static PyObject *fparse_function_2_logspace_of_module_numpy$core$function_base( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_start = NULL;
    PyObject *_python_par_stop = NULL;
    PyObject *_python_par_num = NULL;
    PyObject *_python_par_endpoint = NULL;
    PyObject *_python_par_base = NULL;
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
                PyErr_Format( PyExc_TypeError, "logspace() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_start == key )
            {
                assert( _python_par_start == NULL );
                _python_par_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_stop == key )
            {
                assert( _python_par_stop == NULL );
                _python_par_stop = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_num == key )
            {
                assert( _python_par_num == NULL );
                _python_par_num = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_endpoint == key )
            {
                assert( _python_par_endpoint == NULL );
                _python_par_endpoint = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_base == key )
            {
                assert( _python_par_base == NULL );
                _python_par_base = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_start, key ) == 1 )
            {
                assert( _python_par_start == NULL );
                _python_par_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stop, key ) == 1 )
            {
                assert( _python_par_stop == NULL );
                _python_par_stop = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_num, key ) == 1 )
            {
                assert( _python_par_num == NULL );
                _python_par_num = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_endpoint, key ) == 1 )
            {
                assert( _python_par_endpoint == NULL );
                _python_par_endpoint = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_base, key ) == 1 )
            {
                assert( _python_par_base == NULL );
                _python_par_base = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "logspace() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_start != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_start = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_start == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_start = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_stop != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_stop = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_stop == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_stop = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_num != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_num = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_num == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_num = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_endpoint != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_endpoint = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_endpoint == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_endpoint = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_base != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_base = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_base == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_base = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_start == NULL || _python_par_stop == NULL || _python_par_num == NULL || _python_par_endpoint == NULL || _python_par_base == NULL ))
    {
        PyObject *values[] = { _python_par_start, _python_par_stop, _python_par_num, _python_par_endpoint, _python_par_base };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_logspace_of_module_numpy$core$function_base( self, _python_par_start, _python_par_stop, _python_par_num, _python_par_endpoint, _python_par_base );

error_exit:;

    Py_XDECREF( _python_par_start );
    Py_XDECREF( _python_par_stop );
    Py_XDECREF( _python_par_num );
    Py_XDECREF( _python_par_endpoint );
    Py_XDECREF( _python_par_base );

    return NULL;
}

static PyObject *dparse_function_2_logspace_of_module_numpy$core$function_base( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_2_logspace_of_module_numpy$core$function_base( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_logspace_of_module_numpy$core$function_base( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_linspace_of_module_numpy$core$function_base( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_linspace_of_module_numpy$core$function_base,
        dparse_function_1_linspace_of_module_numpy$core$function_base,
        const_str_plain_linspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eb2afc059c56a2bfec2190f410298ae1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$function_base,
        const_str_digest_7baaf6d9825e93175713b5b6f8cd6742
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_logspace_of_module_numpy$core$function_base( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_logspace_of_module_numpy$core$function_base,
        dparse_function_2_logspace_of_module_numpy$core$function_base,
        const_str_plain_logspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_900159b1564f7b1143dfa51b33a11915,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$function_base,
        const_str_digest_dc2a04dc4493c90a3a48a2ba72d25fb3
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$function_base =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.function_base",   /* m_name */
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

MOD_INIT_DECL( numpy$core$function_base )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$function_base );
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

    // puts( "in initnumpy$core$function_base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$function_base = Py_InitModule4(
        "numpy.core.function_base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$function_base = PyModule_Create( &mdef_numpy$core$function_base );
#endif

    moduledict_numpy$core$function_base = (PyDictObject *)((PyModuleObject *)module_numpy$core$function_base)->md_dict;

    assertObject( module_numpy$core$function_base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2b0c94549572922c7a7256ea1b98e1af, module_numpy$core$function_base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$core$function_base );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e77816a1cb0d0e12965a992352f41297;
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_8db27521b7c237cfbe234423a0df8e5f, module_numpy$core$function_base );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_logspace_str_plain_linspace_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_numeric_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_array_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_array );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_8 );
    tmp_defaults_1 = const_tuple_int_pos_50_true_false_tuple;
    tmp_assign_source_9 = MAKE_FUNCTION_function_1_linspace_of_module_numpy$core$function_base( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_linspace, tmp_assign_source_9 );
    tmp_defaults_2 = const_tuple_int_pos_50_true_float_10_0_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_2_logspace_of_module_numpy$core$function_base( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_logspace, tmp_assign_source_10 );

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

    return MOD_RETURN_VALUE( module_numpy$core$function_base );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
