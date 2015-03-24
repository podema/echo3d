// Generated code for Python source for module 'scipy.integrate.odepack'
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

// The _module_scipy$integrate$odepack is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$integrate$odepack;
PyDictObject *moduledict_scipy$integrate$odepack;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_0_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_neg_2;
extern PyObject *const_int_neg_3;
extern PyObject *const_int_neg_4;
extern PyObject *const_int_neg_5;
extern PyObject *const_int_neg_6;
extern PyObject *const_int_neg_7;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_12;
extern PyObject *const_str_plain_t;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_h0;
extern PyObject *const_str_plain_ml;
extern PyObject *const_str_plain_mu;
extern PyObject *const_str_plain_y0;
static PyObject *const_str_plain_Dfun;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_atol;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_func;
static PyObject *const_str_plain_hmax;
static PyObject *const_str_plain_hmin;
extern PyObject *const_str_plain_ixpr;
extern PyObject *const_str_plain_rtol;
static PyObject *const_str_plain__msgs;
extern PyObject *const_str_plain_print;
static PyObject *const_str_plain_tcrit;
static PyObject *const_str_plain_mxhnil;
static PyObject *const_str_plain_mxordn;
static PyObject *const_str_plain_mxords;
static PyObject *const_str_plain_mxstep;
static PyObject *const_str_plain_odeint;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_odepack;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__odepack;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_col_deriv;
extern PyObject *const_str_plain___future__;
static PyObject *const_str_plain_printmessg;
extern PyObject *const_str_plain_full_output;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_list_str_plain_odeint_list;
extern PyObject *const_tuple_str_plain_copy_tuple;
static PyObject *const_tuple_str_plain__odepack_tuple;
extern PyObject *const_dict_25d3e13920839768f861cb7d8366c841;
extern PyObject *const_str_digest_0c5997b083466365d8343d0d7c4d01eb;
extern PyObject *const_str_digest_0f4cc2e6efb68ed2ac74306e9319d9e6;
extern PyObject *const_str_digest_1f7d91aa59d3eddcb7a8d1b210e6e90c;
extern PyObject *const_str_digest_27ac5cbace8224355ca177d04d247f84;
extern PyObject *const_str_digest_34d981e52442d8fdfa59c5f45928892e;
static PyObject *const_str_digest_3b22cc055fbc22ed4a0dbd19768bb4c3;
extern PyObject *const_str_digest_49ae59ec378180b928941721ddfb523a;
extern PyObject *const_str_digest_5b27e0eb3bcd3ee11df5458ee6787b6d;
static PyObject *const_str_digest_5d827834961687a66de3d751bccfc936;
static PyObject *const_str_digest_848e5532c1bc365246bc49203fec485b;
static PyObject *const_str_digest_e71f916a0f48a3fab5635d0a96ebb986;
extern PyObject *const_str_digest_eac50b747ba9083016bf909179d16ab2;
static PyObject *const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple;
static PyObject *const_tuple_a9ef9604cff69f13e9e0fcb50b53e4e7_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_d3603b7e23920005daec23a1df3344ca_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_Dfun = UNSTREAM_STRING( &constant_bin[ 238825 ], 4, 1 );
    const_str_plain_hmax = UNSTREAM_STRING( &constant_bin[ 239086 ], 4, 1 );
    const_str_plain_hmin = UNSTREAM_STRING( &constant_bin[ 239136 ], 4, 1 );
    const_str_plain__msgs = UNSTREAM_STRING( &constant_bin[ 239391 ], 5, 1 );
    const_str_plain_tcrit = UNSTREAM_STRING( &constant_bin[ 238987 ], 5, 1 );
    const_str_plain_mxhnil = UNSTREAM_STRING( &constant_bin[ 239238 ], 6, 1 );
    const_str_plain_mxordn = UNSTREAM_STRING( &constant_bin[ 239290 ], 6, 1 );
    const_str_plain_mxords = UNSTREAM_STRING( &constant_bin[ 239342 ], 6, 1 );
    const_str_plain_mxstep = UNSTREAM_STRING( &constant_bin[ 239186 ], 6, 1 );
    const_str_plain_odeint = UNSTREAM_STRING( &constant_bin[ 2092724 ], 6, 1 );
    const_str_plain__odepack = UNSTREAM_STRING( &constant_bin[ 238785 ], 8, 1 );
    const_str_plain_col_deriv = UNSTREAM_STRING( &constant_bin[ 238875 ], 9, 1 );
    const_str_plain_printmessg = UNSTREAM_STRING( &constant_bin[ 239428 ], 10, 1 );
    const_list_str_plain_odeint_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_odeint_list, 0, const_str_plain_odeint ); Py_INCREF( const_str_plain_odeint );
    const_tuple_str_plain__odepack_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__odepack_tuple, 0, const_str_plain__odepack ); Py_INCREF( const_str_plain__odepack );
    const_str_digest_3b22cc055fbc22ed4a0dbd19768bb4c3 = UNSTREAM_STRING( &constant_bin[ 2106298 ], 23, 0 );
    const_str_digest_5d827834961687a66de3d751bccfc936 = UNSTREAM_STRING( &constant_bin[ 2106321 ], 5354, 0 );
    const_str_digest_848e5532c1bc365246bc49203fec485b = UNSTREAM_STRING( &constant_bin[ 2111675 ], 59, 0 );
    const_str_digest_e71f916a0f48a3fab5635d0a96ebb986 = UNSTREAM_STRING( &constant_bin[ 2111734 ], 57, 0 );
    const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 9, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 10, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 11, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 12, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 13, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 14, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 15, const_int_pos_12 ); Py_INCREF( const_int_pos_12 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 16, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    PyTuple_SET_ITEM( const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple, 17, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_a9ef9604cff69f13e9e0fcb50b53e4e7_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2111791 ], 210 );
    const_tuple_d3603b7e23920005daec23a1df3344ca_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2112001 ], 221 );
}

// The module code objects.
static PyCodeObject *codeobj_f7371aa081451eeb6774a4258b6df233;
static PyCodeObject *codeobj_a3f6cc1c0e8667d52466ed1c17194d4c;
static PyCodeObject *codeobj_b3ce02be8a278379912d228b8f03b862;

static void _initModuleCodeObjects(void)
{
    codeobj_f7371aa081451eeb6774a4258b6df233 = MAKE_CODEOBJ( const_str_digest_848e5532c1bc365246bc49203fec485b, const_str_plain_odeint, 20, const_tuple_a9ef9604cff69f13e9e0fcb50b53e4e7_tuple, 21, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a3f6cc1c0e8667d52466ed1c17194d4c = MAKE_CODEOBJ( const_str_digest_848e5532c1bc365246bc49203fec485b, const_str_plain_odeint, 20, const_tuple_d3603b7e23920005daec23a1df3344ca_tuple, 21, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b3ce02be8a278379912d228b8f03b862 = MAKE_CODEOBJ( const_str_digest_848e5532c1bc365246bc49203fec485b, const_str_plain_odepack, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_odeint_of_module_scipy$integrate$odepack( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_odeint_of_module_scipy$integrate$odepack( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_y0, PyObject *_python_par_t, PyObject *_python_par_args, PyObject *_python_par_Dfun, PyObject *_python_par_col_deriv, PyObject *_python_par_full_output, PyObject *_python_par_ml, PyObject *_python_par_mu, PyObject *_python_par_rtol, PyObject *_python_par_atol, PyObject *_python_par_tcrit, PyObject *_python_par_h0, PyObject *_python_par_hmax, PyObject *_python_par_hmin, PyObject *_python_par_ixpr, PyObject *_python_par_mxstep, PyObject *_python_par_mxhnil, PyObject *_python_par_mxordn, PyObject *_python_par_mxords, PyObject *_python_par_printmessg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_y0; par_y0.object = _python_par_y0;
    PyObjectLocalVariable par_t; par_t.object = _python_par_t;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_Dfun; par_Dfun.object = _python_par_Dfun;
    PyObjectLocalVariable par_col_deriv; par_col_deriv.object = _python_par_col_deriv;
    PyObjectLocalVariable par_full_output; par_full_output.object = _python_par_full_output;
    PyObjectLocalVariable par_ml; par_ml.object = _python_par_ml;
    PyObjectLocalVariable par_mu; par_mu.object = _python_par_mu;
    PyObjectLocalVariable par_rtol; par_rtol.object = _python_par_rtol;
    PyObjectLocalVariable par_atol; par_atol.object = _python_par_atol;
    PyObjectLocalVariable par_tcrit; par_tcrit.object = _python_par_tcrit;
    PyObjectLocalVariable par_h0; par_h0.object = _python_par_h0;
    PyObjectLocalVariable par_hmax; par_hmax.object = _python_par_hmax;
    PyObjectLocalVariable par_hmin; par_hmin.object = _python_par_hmin;
    PyObjectLocalVariable par_ixpr; par_ixpr.object = _python_par_ixpr;
    PyObjectLocalVariable par_mxstep; par_mxstep.object = _python_par_mxstep;
    PyObjectLocalVariable par_mxhnil; par_mxhnil.object = _python_par_mxhnil;
    PyObjectLocalVariable par_mxordn; par_mxordn.object = _python_par_mxordn;
    PyObjectLocalVariable par_mxords; par_mxords.object = _python_par_mxords;
    PyObjectLocalVariable par_printmessg; par_printmessg.object = _python_par_printmessg;
    PyObjectLocalVariable var_output;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
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
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f7371aa081451eeb6774a4258b6df233, module_scipy$integrate$odepack );
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
    tmp_compare_left_1 = par_ml.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 138151 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
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
    tmp_assign_source_1 = const_int_neg_1;
    if (par_ml.object == NULL)
    {
        par_ml.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
    }
    else
    {
        PyObject *old = par_ml.object;
        par_ml.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_compare_left_2 = par_mu.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238724 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

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
    tmp_assign_source_2 = const_int_neg_1;
    if (par_mu.object == NULL)
    {
        par_mu.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = par_mu.object;
        par_mu.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82769 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_t.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 144;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    if (par_t.object == NULL)
    {
        par_t.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_t.object;
        par_t.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82769 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_y0.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2226 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 145;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    if (par_y0.object == NULL)
    {
        par_y0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_y0.object;
        par_y0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain__odepack );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__odepack );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238772 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_odeint );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_func.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_y0.object;

    tmp_call_arg_element_5 = par_t.object;

    tmp_call_arg_element_6 = par_args.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_Dfun.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238809 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = par_col_deriv.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238859 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = par_ml.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 138151 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = par_mu.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238724 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = par_full_output.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = par_rtol.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71963 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = par_atol.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71913 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = par_tcrit.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238971 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = par_h0.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239022 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = par_hmax.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239070 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = par_hmin.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239120 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = par_ixpr.object;

    if ( tmp_call_arg_element_18 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238467 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = par_mxstep.object;

    if ( tmp_call_arg_element_19 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239170 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = par_mxhnil.object;

    if ( tmp_call_arg_element_20 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239222 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = par_mxordn.object;

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239274 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = par_mxords.object;

    if ( tmp_call_arg_element_22 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239326 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 148;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS20( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    assert( var_output.object == NULL );
    var_output.object = tmp_assign_source_5;

    tmp_subscr_target_1 = var_output.object;

    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain__msgs );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__msgs );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239378 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = var_output.object;

    tmp_subscr_subscript_3 = const_int_neg_1;
    tmp_subscr_subscript_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_subscr_subscript_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_23 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_subscript_2 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 150;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_23 );
    Py_DECREF( tmp_call_arg_element_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_24 = const_str_digest_e71f916a0f48a3fab5635d0a96ebb986;
    frame_function->f_lineno = 151;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_3;
    branch_no_3:;
    tmp_cond_value_1 = par_printmessg.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239412 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
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
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain__msgs );

    if (unlikely( tmp_subscr_target_4 == NULL ))
    {
        tmp_subscr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__msgs );
    }

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239378 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_5 = var_output.object;

    tmp_subscr_subscript_5 = const_int_neg_1;
    tmp_subscr_subscript_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_subscr_subscript_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_25 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 154;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_25 );
    Py_DECREF( tmp_call_arg_element_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    branch_end_3:;
    tmp_cond_value_2 = par_full_output.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
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
    tmp_subscr_target_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain__msgs );

    if (unlikely( tmp_subscr_target_6 == NULL ))
    {
        tmp_subscr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__msgs );
    }

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239378 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_7 = var_output.object;

    tmp_subscr_subscript_7 = const_int_neg_1;
    tmp_subscr_subscript_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_subscr_subscript_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_subscript_6 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_8 = var_output.object;

    tmp_subscr_subscript_8 = const_int_pos_1;
    tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_message;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_output.object;

    tmp_assign_source_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    assert( var_output.object != NULL );
    {
        PyObject *old = var_output.object;
        var_output.object = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = var_output.object;

    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_subscr_target_9 = var_output.object;

    tmp_subscr_subscript_9 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    tmp_return_value = var_output.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_6:;

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
    if ((var_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output,
            var_output.object
        );

    }
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
        );

    }
    if ((par_y0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y0,
            par_y0.object
        );

    }
    if ((par_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            par_t.object
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
    if ((par_Dfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Dfun,
            par_Dfun.object
        );

    }
    if ((par_col_deriv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_col_deriv,
            par_col_deriv.object
        );

    }
    if ((par_full_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_full_output,
            par_full_output.object
        );

    }
    if ((par_ml.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ml,
            par_ml.object
        );

    }
    if ((par_mu.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mu,
            par_mu.object
        );

    }
    if ((par_rtol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rtol,
            par_rtol.object
        );

    }
    if ((par_atol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_atol,
            par_atol.object
        );

    }
    if ((par_tcrit.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tcrit,
            par_tcrit.object
        );

    }
    if ((par_h0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_h0,
            par_h0.object
        );

    }
    if ((par_hmax.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hmax,
            par_hmax.object
        );

    }
    if ((par_hmin.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hmin,
            par_hmin.object
        );

    }
    if ((par_ixpr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ixpr,
            par_ixpr.object
        );

    }
    if ((par_mxstep.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mxstep,
            par_mxstep.object
        );

    }
    if ((par_mxhnil.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mxhnil,
            par_mxhnil.object
        );

    }
    if ((par_mxordn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mxordn,
            par_mxordn.object
        );

    }
    if ((par_mxords.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mxords,
            par_mxords.object
        );

    }
    if ((par_printmessg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_printmessg,
            par_printmessg.object
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
static PyObject *fparse_function_1_odeint_of_module_scipy$integrate$odepack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_y0 = NULL;
    PyObject *_python_par_t = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_Dfun = NULL;
    PyObject *_python_par_col_deriv = NULL;
    PyObject *_python_par_full_output = NULL;
    PyObject *_python_par_ml = NULL;
    PyObject *_python_par_mu = NULL;
    PyObject *_python_par_rtol = NULL;
    PyObject *_python_par_atol = NULL;
    PyObject *_python_par_tcrit = NULL;
    PyObject *_python_par_h0 = NULL;
    PyObject *_python_par_hmax = NULL;
    PyObject *_python_par_hmin = NULL;
    PyObject *_python_par_ixpr = NULL;
    PyObject *_python_par_mxstep = NULL;
    PyObject *_python_par_mxhnil = NULL;
    PyObject *_python_par_mxordn = NULL;
    PyObject *_python_par_mxords = NULL;
    PyObject *_python_par_printmessg = NULL;
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
                PyErr_Format( PyExc_TypeError, "odeint() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_y0 == key )
            {
                assert( _python_par_y0 == NULL );
                _python_par_y0 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_t == key )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Dfun == key )
            {
                assert( _python_par_Dfun == NULL );
                _python_par_Dfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_col_deriv == key )
            {
                assert( _python_par_col_deriv == NULL );
                _python_par_col_deriv = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_full_output == key )
            {
                assert( _python_par_full_output == NULL );
                _python_par_full_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ml == key )
            {
                assert( _python_par_ml == NULL );
                _python_par_ml = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mu == key )
            {
                assert( _python_par_mu == NULL );
                _python_par_mu = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_rtol == key )
            {
                assert( _python_par_rtol == NULL );
                _python_par_rtol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_atol == key )
            {
                assert( _python_par_atol == NULL );
                _python_par_atol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_tcrit == key )
            {
                assert( _python_par_tcrit == NULL );
                _python_par_tcrit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_h0 == key )
            {
                assert( _python_par_h0 == NULL );
                _python_par_h0 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_hmax == key )
            {
                assert( _python_par_hmax == NULL );
                _python_par_hmax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_hmin == key )
            {
                assert( _python_par_hmin == NULL );
                _python_par_hmin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ixpr == key )
            {
                assert( _python_par_ixpr == NULL );
                _python_par_ixpr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mxstep == key )
            {
                assert( _python_par_mxstep == NULL );
                _python_par_mxstep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mxhnil == key )
            {
                assert( _python_par_mxhnil == NULL );
                _python_par_mxhnil = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mxordn == key )
            {
                assert( _python_par_mxordn == NULL );
                _python_par_mxordn = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mxords == key )
            {
                assert( _python_par_mxords == NULL );
                _python_par_mxords = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_printmessg == key )
            {
                assert( _python_par_printmessg == NULL );
                _python_par_printmessg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_y0, key ) == 1 )
            {
                assert( _python_par_y0 == NULL );
                _python_par_y0 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_t, key ) == 1 )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Dfun, key ) == 1 )
            {
                assert( _python_par_Dfun == NULL );
                _python_par_Dfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_col_deriv, key ) == 1 )
            {
                assert( _python_par_col_deriv == NULL );
                _python_par_col_deriv = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_full_output, key ) == 1 )
            {
                assert( _python_par_full_output == NULL );
                _python_par_full_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ml, key ) == 1 )
            {
                assert( _python_par_ml == NULL );
                _python_par_ml = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mu, key ) == 1 )
            {
                assert( _python_par_mu == NULL );
                _python_par_mu = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rtol, key ) == 1 )
            {
                assert( _python_par_rtol == NULL );
                _python_par_rtol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_atol, key ) == 1 )
            {
                assert( _python_par_atol == NULL );
                _python_par_atol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tcrit, key ) == 1 )
            {
                assert( _python_par_tcrit == NULL );
                _python_par_tcrit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_h0, key ) == 1 )
            {
                assert( _python_par_h0 == NULL );
                _python_par_h0 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_hmax, key ) == 1 )
            {
                assert( _python_par_hmax == NULL );
                _python_par_hmax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_hmin, key ) == 1 )
            {
                assert( _python_par_hmin == NULL );
                _python_par_hmin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ixpr, key ) == 1 )
            {
                assert( _python_par_ixpr == NULL );
                _python_par_ixpr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mxstep, key ) == 1 )
            {
                assert( _python_par_mxstep == NULL );
                _python_par_mxstep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mxhnil, key ) == 1 )
            {
                assert( _python_par_mxhnil == NULL );
                _python_par_mxhnil = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mxordn, key ) == 1 )
            {
                assert( _python_par_mxordn == NULL );
                _python_par_mxordn = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mxords, key ) == 1 )
            {
                assert( _python_par_mxords == NULL );
                _python_par_mxords = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_printmessg, key ) == 1 )
            {
                assert( _python_par_printmessg == NULL );
                _python_par_printmessg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "odeint() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 21 ))
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 0 + self->m_defaults_given >= 21  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 21 ) );
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
         if (unlikely( _python_par_y0 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_y0 = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_y0 == NULL )
    {
        if ( 1 + self->m_defaults_given >= 21  )
        {
            _python_par_y0 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 21 ) );
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
         if (unlikely( _python_par_t != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_t = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_t == NULL )
    {
        if ( 2 + self->m_defaults_given >= 21  )
        {
            _python_par_t = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 21 ) );
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
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 3 + self->m_defaults_given >= 21  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 21 ) );
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
         if (unlikely( _python_par_Dfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_Dfun = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_Dfun == NULL )
    {
        if ( 4 + self->m_defaults_given >= 21  )
        {
            _python_par_Dfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 21 ) );
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
         if (unlikely( _python_par_col_deriv != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_col_deriv = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_col_deriv == NULL )
    {
        if ( 5 + self->m_defaults_given >= 21  )
        {
            _python_par_col_deriv = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 21 ) );
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
         if (unlikely( _python_par_full_output != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_full_output = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_full_output == NULL )
    {
        if ( 6 + self->m_defaults_given >= 21  )
        {
            _python_par_full_output = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 21 ) );
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
         if (unlikely( _python_par_ml != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_ml = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_ml == NULL )
    {
        if ( 7 + self->m_defaults_given >= 21  )
        {
            _python_par_ml = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 21 ) );
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
         if (unlikely( _python_par_mu != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_mu = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_mu == NULL )
    {
        if ( 8 + self->m_defaults_given >= 21  )
        {
            _python_par_mu = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 21 ) );
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
         if (unlikely( _python_par_rtol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_rtol = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_rtol == NULL )
    {
        if ( 9 + self->m_defaults_given >= 21  )
        {
            _python_par_rtol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 21 ) );
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
         if (unlikely( _python_par_atol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_atol = INCREASE_REFCOUNT( args[ 10 ] );
    }
    else if ( _python_par_atol == NULL )
    {
        if ( 10 + self->m_defaults_given >= 21  )
        {
            _python_par_atol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 21 ) );
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
    if (likely( 11 < args_given ))
    {
         if (unlikely( _python_par_tcrit != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 11 );
             goto error_exit;
         }

        _python_par_tcrit = INCREASE_REFCOUNT( args[ 11 ] );
    }
    else if ( _python_par_tcrit == NULL )
    {
        if ( 11 + self->m_defaults_given >= 21  )
        {
            _python_par_tcrit = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 11 - 21 ) );
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
    if (likely( 12 < args_given ))
    {
         if (unlikely( _python_par_h0 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 12 );
             goto error_exit;
         }

        _python_par_h0 = INCREASE_REFCOUNT( args[ 12 ] );
    }
    else if ( _python_par_h0 == NULL )
    {
        if ( 12 + self->m_defaults_given >= 21  )
        {
            _python_par_h0 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 12 - 21 ) );
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
    if (likely( 13 < args_given ))
    {
         if (unlikely( _python_par_hmax != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 13 );
             goto error_exit;
         }

        _python_par_hmax = INCREASE_REFCOUNT( args[ 13 ] );
    }
    else if ( _python_par_hmax == NULL )
    {
        if ( 13 + self->m_defaults_given >= 21  )
        {
            _python_par_hmax = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 13 - 21 ) );
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
    if (likely( 14 < args_given ))
    {
         if (unlikely( _python_par_hmin != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 14 );
             goto error_exit;
         }

        _python_par_hmin = INCREASE_REFCOUNT( args[ 14 ] );
    }
    else if ( _python_par_hmin == NULL )
    {
        if ( 14 + self->m_defaults_given >= 21  )
        {
            _python_par_hmin = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 14 - 21 ) );
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
    if (likely( 15 < args_given ))
    {
         if (unlikely( _python_par_ixpr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 15 );
             goto error_exit;
         }

        _python_par_ixpr = INCREASE_REFCOUNT( args[ 15 ] );
    }
    else if ( _python_par_ixpr == NULL )
    {
        if ( 15 + self->m_defaults_given >= 21  )
        {
            _python_par_ixpr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 15 - 21 ) );
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
    if (likely( 16 < args_given ))
    {
         if (unlikely( _python_par_mxstep != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 16 );
             goto error_exit;
         }

        _python_par_mxstep = INCREASE_REFCOUNT( args[ 16 ] );
    }
    else if ( _python_par_mxstep == NULL )
    {
        if ( 16 + self->m_defaults_given >= 21  )
        {
            _python_par_mxstep = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 16 - 21 ) );
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
    if (likely( 17 < args_given ))
    {
         if (unlikely( _python_par_mxhnil != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 17 );
             goto error_exit;
         }

        _python_par_mxhnil = INCREASE_REFCOUNT( args[ 17 ] );
    }
    else if ( _python_par_mxhnil == NULL )
    {
        if ( 17 + self->m_defaults_given >= 21  )
        {
            _python_par_mxhnil = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 17 - 21 ) );
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
    if (likely( 18 < args_given ))
    {
         if (unlikely( _python_par_mxordn != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 18 );
             goto error_exit;
         }

        _python_par_mxordn = INCREASE_REFCOUNT( args[ 18 ] );
    }
    else if ( _python_par_mxordn == NULL )
    {
        if ( 18 + self->m_defaults_given >= 21  )
        {
            _python_par_mxordn = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 18 - 21 ) );
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
    if (likely( 19 < args_given ))
    {
         if (unlikely( _python_par_mxords != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 19 );
             goto error_exit;
         }

        _python_par_mxords = INCREASE_REFCOUNT( args[ 19 ] );
    }
    else if ( _python_par_mxords == NULL )
    {
        if ( 19 + self->m_defaults_given >= 21  )
        {
            _python_par_mxords = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 19 - 21 ) );
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
    if (likely( 20 < args_given ))
    {
         if (unlikely( _python_par_printmessg != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 20 );
             goto error_exit;
         }

        _python_par_printmessg = INCREASE_REFCOUNT( args[ 20 ] );
    }
    else if ( _python_par_printmessg == NULL )
    {
        if ( 20 + self->m_defaults_given >= 21  )
        {
            _python_par_printmessg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 20 - 21 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_y0 == NULL || _python_par_t == NULL || _python_par_args == NULL || _python_par_Dfun == NULL || _python_par_col_deriv == NULL || _python_par_full_output == NULL || _python_par_ml == NULL || _python_par_mu == NULL || _python_par_rtol == NULL || _python_par_atol == NULL || _python_par_tcrit == NULL || _python_par_h0 == NULL || _python_par_hmax == NULL || _python_par_hmin == NULL || _python_par_ixpr == NULL || _python_par_mxstep == NULL || _python_par_mxhnil == NULL || _python_par_mxordn == NULL || _python_par_mxords == NULL || _python_par_printmessg == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_y0, _python_par_t, _python_par_args, _python_par_Dfun, _python_par_col_deriv, _python_par_full_output, _python_par_ml, _python_par_mu, _python_par_rtol, _python_par_atol, _python_par_tcrit, _python_par_h0, _python_par_hmax, _python_par_hmin, _python_par_ixpr, _python_par_mxstep, _python_par_mxhnil, _python_par_mxordn, _python_par_mxords, _python_par_printmessg };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_odeint_of_module_scipy$integrate$odepack( self, _python_par_func, _python_par_y0, _python_par_t, _python_par_args, _python_par_Dfun, _python_par_col_deriv, _python_par_full_output, _python_par_ml, _python_par_mu, _python_par_rtol, _python_par_atol, _python_par_tcrit, _python_par_h0, _python_par_hmax, _python_par_hmin, _python_par_ixpr, _python_par_mxstep, _python_par_mxhnil, _python_par_mxordn, _python_par_mxords, _python_par_printmessg );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_y0 );
    Py_XDECREF( _python_par_t );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_Dfun );
    Py_XDECREF( _python_par_col_deriv );
    Py_XDECREF( _python_par_full_output );
    Py_XDECREF( _python_par_ml );
    Py_XDECREF( _python_par_mu );
    Py_XDECREF( _python_par_rtol );
    Py_XDECREF( _python_par_atol );
    Py_XDECREF( _python_par_tcrit );
    Py_XDECREF( _python_par_h0 );
    Py_XDECREF( _python_par_hmax );
    Py_XDECREF( _python_par_hmin );
    Py_XDECREF( _python_par_ixpr );
    Py_XDECREF( _python_par_mxstep );
    Py_XDECREF( _python_par_mxhnil );
    Py_XDECREF( _python_par_mxordn );
    Py_XDECREF( _python_par_mxords );
    Py_XDECREF( _python_par_printmessg );

    return NULL;
}

static PyObject *dparse_function_1_odeint_of_module_scipy$integrate$odepack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 21 )
    {
        return impl_function_1_odeint_of_module_scipy$integrate$odepack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), INCREASE_REFCOUNT( args[ 11 ] ), INCREASE_REFCOUNT( args[ 12 ] ), INCREASE_REFCOUNT( args[ 13 ] ), INCREASE_REFCOUNT( args[ 14 ] ), INCREASE_REFCOUNT( args[ 15 ] ), INCREASE_REFCOUNT( args[ 16 ] ), INCREASE_REFCOUNT( args[ 17 ] ), INCREASE_REFCOUNT( args[ 18 ] ), INCREASE_REFCOUNT( args[ 19 ] ), INCREASE_REFCOUNT( args[ 20 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_odeint_of_module_scipy$integrate$odepack( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_odeint_of_module_scipy$integrate$odepack( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_odeint_of_module_scipy$integrate$odepack,
        dparse_function_1_odeint_of_module_scipy$integrate$odepack,
        const_str_plain_odeint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a3f6cc1c0e8667d52466ed1c17194d4c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$odepack,
        const_str_digest_5d827834961687a66de3d751bccfc936
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$integrate$odepack =
{
    PyModuleDef_HEAD_INIT,
    "scipy.integrate.odepack",   /* m_name */
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

MOD_INIT_DECL( scipy$integrate$odepack )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$integrate$odepack );
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

    // puts( "in initscipy$integrate$odepack" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$integrate$odepack = Py_InitModule4(
        "scipy.integrate.odepack",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$integrate$odepack = PyModule_Create( &mdef_scipy$integrate$odepack );
#endif

    moduledict_scipy$integrate$odepack = (PyDictObject *)((PyModuleObject *)module_scipy$integrate$odepack)->md_dict;

    assertObject( module_scipy$integrate$odepack );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3b22cc055fbc22ed4a0dbd19768bb4c3, module_scipy$integrate$odepack );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$integrate$odepack );

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
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_848e5532c1bc365246bc49203fec485b;
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_b3ce02be8a278379912d228b8f03b862, module_scipy$integrate$odepack );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$integrate$odepack)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$integrate$odepack)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$integrate$odepack)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_odeint_list );
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$integrate$odepack)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain__odepack_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__odepack );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain__odepack, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$integrate$odepack)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_copy, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_copy_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_copy );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_8 );
    tmp_assign_source_9 = PyDict_Copy( const_dict_25d3e13920839768f861cb7d8366c841 );
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain__msgs, tmp_assign_source_9 );
    tmp_defaults_1 = const_tuple_05c2a5ff8126e7d6c0b18c575c5879a2_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_1_odeint_of_module_scipy$integrate$odepack( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$odepack, (Nuitka_StringObject *)const_str_plain_odeint, tmp_assign_source_10 );

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

    return MOD_RETURN_VALUE( module_scipy$integrate$odepack );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
