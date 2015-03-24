// Generated code for Python source for module 'numpy.dual'
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

// The _module_numpy$dual is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$dual;
PyDictObject *moduledict_numpy$dual;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_f;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_i0;
extern PyObject *const_str_plain_det;
extern PyObject *const_str_plain_eig;
extern PyObject *const_str_plain_fft;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_svd;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain_dual;
extern PyObject *const_str_plain_eigh;
extern PyObject *const_str_plain_fft2;
extern PyObject *const_str_plain_fftn;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_ifft;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_pinv;
extern PyObject *const_str_plain_ifft2;
extern PyObject *const_str_plain_ifftn;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_str_plain_solve;
static PyObject *const_str_plain_fftpkg;
extern PyObject *const_str_plain_linalg;
static PyObject *const_str_plain_linpkg;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_eigvals;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_cholesky;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_eigvalsh;
extern PyObject *const_str_plain__getframe;
extern PyObject *const_str_plain_f_globals;
extern PyObject *const_str_plain___future__;
static PyObject *const_str_plain_restore_all;
static PyObject *const_str_plain_restore_func;
static PyObject *const_str_plain__restore_dict;
extern PyObject *const_str_plain_register_func;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_str_plain_i0_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_name_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_val_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_func_tuple;
static PyObject *const_list_4c1457df5290c03ea88b995397b0a4c9_list;
extern PyObject *const_str_digest_0b4e4303427381d5eb687ef96e3ca993;
extern PyObject *const_str_digest_250a4982694908c58c29a5486e0ff436;
extern PyObject *const_str_digest_262ad0ce7bf01ce8e1e2cd504c254e3b;
extern PyObject *const_str_digest_31c135a8754779dc25b4674933b86e04;
static PyObject *const_str_digest_5b23782d990d59e8d0a072324674420b;
static PyObject *const_str_digest_b336aa2a5a1d14a1c4266914db51b764;
static PyObject *const_str_digest_d70836751433a9addb6c174b7b2f1638;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_dual = UNSTREAM_STRING( &constant_bin[ 276315 ], 4, 1 );
    const_str_plain_fftpkg = UNSTREAM_STRING( &constant_bin[ 123675 ], 6, 1 );
    const_str_plain_linpkg = UNSTREAM_STRING( &constant_bin[ 123703 ], 6, 1 );
    const_str_plain_restore_all = UNSTREAM_STRING( &constant_bin[ 989333 ], 11, 1 );
    const_str_plain_restore_func = UNSTREAM_STRING( &constant_bin[ 123780 ], 12, 1 );
    const_str_plain__restore_dict = UNSTREAM_STRING( &constant_bin[ 123738 ], 13, 1 );
    const_tuple_str_plain_name_str_plain_val_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_val_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_val_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_tuple_str_plain_name_str_plain_func_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_func_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_func_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_list_4c1457df5290c03ea88b995397b0a4c9_list = PyList_New( 19 );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 0, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 1, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 2, const_str_plain_fftn ); Py_INCREF( const_str_plain_fftn );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 3, const_str_plain_ifftn ); Py_INCREF( const_str_plain_ifftn );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 4, const_str_plain_fft2 ); Py_INCREF( const_str_plain_fft2 );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 5, const_str_plain_ifft2 ); Py_INCREF( const_str_plain_ifft2 );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 6, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 7, const_str_plain_inv ); Py_INCREF( const_str_plain_inv );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 8, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 9, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 10, const_str_plain_det ); Py_INCREF( const_str_plain_det );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 11, const_str_plain_eig ); Py_INCREF( const_str_plain_eig );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 12, const_str_plain_eigvals ); Py_INCREF( const_str_plain_eigvals );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 13, const_str_plain_eigh ); Py_INCREF( const_str_plain_eigh );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 14, const_str_plain_eigvalsh ); Py_INCREF( const_str_plain_eigvalsh );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 15, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 16, const_str_plain_pinv ); Py_INCREF( const_str_plain_pinv );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 17, const_str_plain_cholesky ); Py_INCREF( const_str_plain_cholesky );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 18, const_str_plain_i0 ); Py_INCREF( const_str_plain_i0 );
    const_str_digest_5b23782d990d59e8d0a072324674420b = UNSTREAM_STRING( &constant_bin[ 989344 ], 376, 0 );
    const_str_digest_b336aa2a5a1d14a1c4266914db51b764 = UNSTREAM_STRING( &constant_bin[ 989720 ], 46, 0 );
    const_str_digest_d70836751433a9addb6c174b7b2f1638 = UNSTREAM_STRING( &constant_bin[ 989766 ], 23, 0 );
    const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
}

// The module code objects.
static PyCodeObject *codeobj_63eaa9ab3ce5a3639628aec5ac7c1313;
static PyCodeObject *codeobj_a76ce63e1d1768c212e86352da0fb251;
static PyCodeObject *codeobj_c832e274dd84cc08c8064721a538a5a2;
static PyCodeObject *codeobj_49a6b4d851048efa9c5bb1eaea945df5;
static PyCodeObject *codeobj_71ffd599b18a1d8b64155866d658e04a;
static PyCodeObject *codeobj_878b502d55dbbf180ebfa7ff09af16b0;
static PyCodeObject *codeobj_79a73f3786822021f11e2b2cdbf7b96c;

static void _initModuleCodeObjects(void)
{
    codeobj_63eaa9ab3ce5a3639628aec5ac7c1313 = MAKE_CODEOBJ( const_str_digest_b336aa2a5a1d14a1c4266914db51b764, const_str_plain_dual, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a76ce63e1d1768c212e86352da0fb251 = MAKE_CODEOBJ( const_str_digest_b336aa2a5a1d14a1c4266914db51b764, const_str_plain_register_func, 52, const_tuple_str_plain_name_str_plain_func_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c832e274dd84cc08c8064721a538a5a2 = MAKE_CODEOBJ( const_str_digest_b336aa2a5a1d14a1c4266914db51b764, const_str_plain_register_func, 52, const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_49a6b4d851048efa9c5bb1eaea945df5 = MAKE_CODEOBJ( const_str_digest_b336aa2a5a1d14a1c4266914db51b764, const_str_plain_restore_all, 69, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_71ffd599b18a1d8b64155866d658e04a = MAKE_CODEOBJ( const_str_digest_b336aa2a5a1d14a1c4266914db51b764, const_str_plain_restore_all, 69, const_tuple_str_plain_name_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_878b502d55dbbf180ebfa7ff09af16b0 = MAKE_CODEOBJ( const_str_digest_b336aa2a5a1d14a1c4266914db51b764, const_str_plain_restore_func, 59, const_tuple_str_plain_name_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_79a73f3786822021f11e2b2cdbf7b96c = MAKE_CODEOBJ( const_str_digest_b336aa2a5a1d14a1c4266914db51b764, const_str_plain_restore_func, 59, const_tuple_str_plain_name_str_plain_val_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_register_func_of_module_numpy$dual(  );


static PyObject *MAKE_FUNCTION_function_2_restore_func_of_module_numpy$dual(  );


static PyObject *MAKE_FUNCTION_function_3_restore_all_of_module_numpy$dual(  );


// The module function definitions.
static PyObject *impl_function_1_register_func_of_module_numpy$dual( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable var_f;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a76ce63e1d1768c212e86352da0fb251, module_numpy$dual );
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
    tmp_compare_left_1 = par_name.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69267 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_binop_left_1 = const_str_digest_d70836751433a9addb6c174b7b2f1638;
    tmp_binop_right_1 = par_name.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 54;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 54;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__getframe );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_int_0;
    frame_function->f_lineno = 55;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_f_globals );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_1;

    tmp_subscr_target_1 = var_f.object;

    tmp_subscr_subscript_1 = par_name.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain__restore_dict );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__restore_dict );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123725 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = par_name.object;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = par_func.object;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = var_f.object;

    tmp_ass_subscript_2 = par_name.object;

    if ( tmp_ass_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
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
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f,
            var_f.object
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
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
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
static PyObject *fparse_function_1_register_func_of_module_numpy$dual( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_func = NULL;
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
                PyErr_Format( PyExc_TypeError, "register_func() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "register_func() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_name == NULL || _python_par_func == NULL ))
    {
        PyObject *values[] = { _python_par_name, _python_par_func };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_register_func_of_module_numpy$dual( self, _python_par_name, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_1_register_func_of_module_numpy$dual( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_register_func_of_module_numpy$dual( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_register_func_of_module_numpy$dual( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_restore_func_of_module_numpy$dual( Nuitka_FunctionObject *self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable var_val;
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_878b502d55dbbf180ebfa7ff09af16b0, module_numpy$dual );
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
    tmp_compare_left_1 = par_name.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69267 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_binop_left_1 = const_str_digest_d70836751433a9addb6c174b7b2f1638;
    tmp_binop_right_1 = par_name.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 61;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 61;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    // Tried code
    // Tried block of try/except
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain__restore_dict );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__restore_dict );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123725 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_1 = par_name.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto try_except_handler_1;
    }

    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto try_except_handler_1;
    }
    assert( var_val.object == NULL );
    var_val.object = tmp_assign_source_2;

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_3 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
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
    tmp_compare_right_2 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto try_finally_handler_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_2:;
    try_except_end_1:;
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
    tmp_ass_subvalue_1 = var_val.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__getframe );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = const_int_0;
    frame_function->f_lineno = 67;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_f_globals );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_ass_subscript_1 = par_name.object;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    branch_no_3:;
    try_finally_handler_start_1:;
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

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;

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
    if ((var_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            var_val.object
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
static PyObject *fparse_function_2_restore_func_of_module_numpy$dual( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "restore_func() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "restore_func() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_name == NULL ))
    {
        PyObject *values[] = { _python_par_name };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_restore_func_of_module_numpy$dual( self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_2_restore_func_of_module_numpy$dual( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_restore_func_of_module_numpy$dual( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_restore_func_of_module_numpy$dual( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_restore_all_of_module_numpy$dual( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_name;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_49a6b4d851048efa9c5bb1eaea945df5, module_numpy$dual );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain__restore_dict );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__restore_dict );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123725 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 70;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_1;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_2 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 70;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_assign_source_3 = tmp_for_loop_1__iter_value.object;

    if (var_name.object == NULL)
    {
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_restore_func );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_restore_func );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123767 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = var_name.object;

    frame_function->f_lineno = 71;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
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
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
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
static PyObject *fparse_function_3_restore_all_of_module_numpy$dual( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           args_given + kw_size
        );
#else
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           kw_size > 0 ? kw : NULL,
           args_given
        );
#endif

        goto error_exit;
    }


    return impl_function_3_restore_all_of_module_numpy$dual( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_3_restore_all_of_module_numpy$dual( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_3_restore_all_of_module_numpy$dual( self );
    }
    else
    {
        PyObject *result = fparse_function_3_restore_all_of_module_numpy$dual( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_register_func_of_module_numpy$dual(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_register_func_of_module_numpy$dual,
        dparse_function_1_register_func_of_module_numpy$dual,
        const_str_plain_register_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c832e274dd84cc08c8064721a538a5a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$dual,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_restore_func_of_module_numpy$dual(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_restore_func_of_module_numpy$dual,
        dparse_function_2_restore_func_of_module_numpy$dual,
        const_str_plain_restore_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_79a73f3786822021f11e2b2cdbf7b96c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$dual,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_restore_all_of_module_numpy$dual(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_restore_all_of_module_numpy$dual,
        dparse_function_3_restore_all_of_module_numpy$dual,
        const_str_plain_restore_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_71ffd599b18a1d8b64155866d658e04a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$dual,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$dual =
{
    PyModuleDef_HEAD_INIT,
    "numpy.dual",   /* m_name */
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

MOD_INIT_DECL( numpy$dual )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$dual );
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

    // puts( "in initnumpy$dual" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$dual = Py_InitModule4(
        "numpy.dual",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$dual = PyModule_Create( &mdef_numpy$dual );
#endif

    moduledict_numpy$dual = (PyDictObject *)((PyModuleObject *)module_numpy$dual)->md_dict;

    assertObject( module_numpy$dual );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_262ad0ce7bf01ce8e1e2cd504c254e3b, module_numpy$dual );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$dual );

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
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
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

    // Module code.
    tmp_assign_source_1 = const_str_digest_5b23782d990d59e8d0a072324674420b;
    UPDATE_STRING_DICT0( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b336aa2a5a1d14a1c4266914db51b764;
    UPDATE_STRING_DICT0( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_63eaa9ab3ce5a3639628aec5ac7c1313, module_numpy$dual );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_4c1457df5290c03ea88b995397b0a4c9_list );
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_31c135a8754779dc25b4674933b86e04, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_linalg );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_250a4982694908c58c29a5486e0ff436, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_fft );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 26;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_0b4e4303427381d5eb687ef96e3ca993, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_i0_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_i0 );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_i0, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 27;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_7, tmp_import_globals_7, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_10 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123669 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fft );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fft, tmp_assign_source_11 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123669 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ifft );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_ifft, tmp_assign_source_12 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123669 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fftn );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftn, tmp_assign_source_13 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123669 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ifftn );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_ifftn, tmp_assign_source_14 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123669 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fft2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fft2, tmp_assign_source_15 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123669 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ifft2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_ifft2, tmp_assign_source_16 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_norm );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_17 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_inv );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_inv, tmp_assign_source_18 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_svd );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_19 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_solve );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_solve, tmp_assign_source_20 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_det );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_det, tmp_assign_source_21 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_eig );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_eig, tmp_assign_source_22 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_eigvals );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_eigvals, tmp_assign_source_23 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_eigh );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_eigh, tmp_assign_source_24 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_eigvalsh );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_eigvalsh, tmp_assign_source_25 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_lstsq );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_lstsq, tmp_assign_source_26 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_pinv );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_pinv, tmp_assign_source_27 );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123697 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_cholesky );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_cholesky, tmp_assign_source_28 );
    tmp_assign_source_29 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain__restore_dict, tmp_assign_source_29 );
    tmp_assign_source_30 = MAKE_FUNCTION_function_1_register_func_of_module_numpy$dual(  );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_register_func, tmp_assign_source_30 );
    tmp_assign_source_31 = MAKE_FUNCTION_function_2_restore_func_of_module_numpy$dual(  );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_31 );

        frame_module->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_restore_func, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_function_3_restore_all_of_module_numpy$dual(  );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        frame_module->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_restore_all, tmp_assign_source_32 );

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

    return MOD_RETURN_VALUE( module_numpy$dual );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
