// Generated code for Python source for module 'scipy.sparse.extract'
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

// The _module_scipy$sparse$extract is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$extract;
PyDictObject *moduledict_scipy$sparse$extract;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_k;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_coo;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_find;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_tril;
extern PyObject *const_str_plain_triu;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_tocoo;
extern PyObject *const_str_plain_tocsr;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_extract;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_asformat;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_coo_matrix;
extern PyObject *const_tuple_int_0_none_tuple;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_tuple_str_plain_A_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_eliminate_zeros;
extern PyObject *const_tuple_str_plain_coo_matrix_tuple;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
static PyObject *const_str_digest_01201f5b5e0ffab251c1aae5ece88c38;
static PyObject *const_str_digest_34039cf4447b6c64f6822ba611be1e71;
static PyObject *const_str_digest_7a95678d7845310cc8bee19a413dca2d;
extern PyObject *const_str_digest_83a0aac3d618d3c31fc37c156dca406d;
static PyObject *const_str_digest_b1ce4635a52237ecbfe9fb07b9be77a8;
static PyObject *const_str_digest_b591b29f4855b5a0db77425848dd7e79;
static PyObject *const_str_digest_bb33d483f486fc6d5706c0051131b5d0;
static PyObject *const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_str_plain_A_str_plain_k_str_plain_format_tuple;
static PyObject *const_list_str_plain_find_str_plain_tril_str_plain_triu_list;

static void _initModuleConstants(void)
{
    const_str_digest_01201f5b5e0ffab251c1aae5ece88c38 = UNSTREAM_STRING( &constant_bin[ 2358443 ], 56, 0 );
    const_str_digest_34039cf4447b6c64f6822ba611be1e71 = UNSTREAM_STRING( &constant_bin[ 2358499 ], 46, 0 );
    const_str_digest_7a95678d7845310cc8bee19a413dca2d = UNSTREAM_STRING( &constant_bin[ 2358545 ], 20, 0 );
    const_str_digest_b1ce4635a52237ecbfe9fb07b9be77a8 = UNSTREAM_STRING( &constant_bin[ 2358565 ], 1526, 0 );
    const_str_digest_b591b29f4855b5a0db77425848dd7e79 = UNSTREAM_STRING( &constant_bin[ 2360091 ], 1523, 0 );
    const_str_digest_bb33d483f486fc6d5706c0051131b5d0 = UNSTREAM_STRING( &constant_bin[ 2361614 ], 580, 0 );
    const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 3, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 4, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 5, const_str_plain_col ); Py_INCREF( const_str_plain_col );
    PyTuple_SET_ITEM( const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 6, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_tuple_str_plain_A_str_plain_k_str_plain_format_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_k_str_plain_format_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_k_str_plain_format_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_A_str_plain_k_str_plain_format_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_list_str_plain_find_str_plain_tril_str_plain_triu_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_find_str_plain_tril_str_plain_triu_list, 0, const_str_plain_find ); Py_INCREF( const_str_plain_find );
    PyList_SET_ITEM( const_list_str_plain_find_str_plain_tril_str_plain_triu_list, 1, const_str_plain_tril ); Py_INCREF( const_str_plain_tril );
    PyList_SET_ITEM( const_list_str_plain_find_str_plain_tril_str_plain_triu_list, 2, const_str_plain_triu ); Py_INCREF( const_str_plain_triu );
}

// The module code objects.
static PyCodeObject *codeobj_26f78007f80d91e7e7c9826835fc1b3d;
static PyCodeObject *codeobj_d1a3e90421b6f99f0bdf5b0365a6e8b8;
static PyCodeObject *codeobj_5f79f0ce337dc8bf0dcf726c88dafeaf;
static PyCodeObject *codeobj_4d11277f9bd9b40bfce0ba7e78268a13;
static PyCodeObject *codeobj_43267bb2c3206198585a21aa16e7a0bd;
static PyCodeObject *codeobj_0a76b04b0056bb577ea2c8de7f41829f;

static void _initModuleCodeObjects(void)
{
    codeobj_26f78007f80d91e7e7c9826835fc1b3d = MAKE_CODEOBJ( const_str_digest_01201f5b5e0ffab251c1aae5ece88c38, const_str_plain_extract, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d1a3e90421b6f99f0bdf5b0365a6e8b8 = MAKE_CODEOBJ( const_str_digest_01201f5b5e0ffab251c1aae5ece88c38, const_str_plain_find, 14, const_tuple_str_plain_A_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5f79f0ce337dc8bf0dcf726c88dafeaf = MAKE_CODEOBJ( const_str_digest_01201f5b5e0ffab251c1aae5ece88c38, const_str_plain_tril, 45, const_tuple_str_plain_A_str_plain_k_str_plain_format_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4d11277f9bd9b40bfce0ba7e78268a13 = MAKE_CODEOBJ( const_str_digest_01201f5b5e0ffab251c1aae5ece88c38, const_str_plain_tril, 45, const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_43267bb2c3206198585a21aa16e7a0bd = MAKE_CODEOBJ( const_str_digest_01201f5b5e0ffab251c1aae5ece88c38, const_str_plain_triu, 111, const_tuple_str_plain_A_str_plain_k_str_plain_format_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0a76b04b0056bb577ea2c8de7f41829f = MAKE_CODEOBJ( const_str_digest_01201f5b5e0ffab251c1aae5ece88c38, const_str_plain_triu, 111, const_tuple_a8e586e6cc705f195d5c84635cdf3c83_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_find_of_module_scipy$sparse$extract(  );


static PyObject *MAKE_FUNCTION_function_2_tril_of_module_scipy$sparse$extract( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_triu_of_module_scipy$sparse$extract( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_find_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject *_python_par_A )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d1a3e90421b6f99f0bdf5b0365a6e8b8, module_scipy$sparse$extract );
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 38;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tocsr );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 38;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
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
    tmp_source_name_2 = par_A.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_eliminate_zeros );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 39;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_A.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_tocoo );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 40;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_4, tmp_call_kw_1 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    assert( par_A.object != NULL );
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_return_value = PyTuple_New( 3 );
    tmp_source_name_4 = par_A.object;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_row );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = par_A.object;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_col );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_source_name_6 = par_A.object;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_data );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
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
    if ((par_A.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A,
            par_A.object
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
static PyObject *fparse_function_1_find_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "find() keywords must be strings" );
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
                   "find() got an unexpected keyword argument '%s'",
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


    return impl_function_1_find_of_module_scipy$sparse$extract( self, _python_par_A );

error_exit:;

    Py_XDECREF( _python_par_A );

    return NULL;
}

static PyObject *dparse_function_1_find_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_find_of_module_scipy$sparse$extract( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_find_of_module_scipy$sparse$extract( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_tril_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_k, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_k; par_k.object = _python_par_k;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable var_mask;
    PyObjectLocalVariable var_row;
    PyObjectLocalVariable var_col;
    PyObjectLocalVariable var_data;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5f79f0ce337dc8bf0dcf726c88dafeaf, module_scipy$sparse$extract );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_A.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 100;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
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
    tmp_source_name_1 = par_A.object;

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_row );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = par_k.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_A.object;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_col );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    assert( var_mask.object == NULL );
    var_mask.object = tmp_assign_source_2;

    tmp_source_name_3 = par_A.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_row );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = var_mask.object;

    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    assert( var_row.object == NULL );
    var_row.object = tmp_assign_source_3;

    tmp_source_name_4 = par_A.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_col );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = var_mask.object;

    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    assert( var_col.object == NULL );
    var_col.object = tmp_assign_source_4;

    tmp_source_name_5 = par_A.object;

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_data );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = var_mask.object;

    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    assert( var_data.object == NULL );
    var_data.object = tmp_assign_source_5;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_data.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_row.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_col.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_7 = par_A.object;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 108;
    tmp_source_name_6 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_format.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 108;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
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
    if ((var_mask.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mask,
            var_mask.object
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
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            var_data.object
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
    if ((par_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            par_k.object
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
static PyObject *fparse_function_2_tril_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_k = NULL;
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
                PyErr_Format( PyExc_TypeError, "tril() keywords must be strings" );
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
            if ( found == false && const_str_plain_k == key )
            {
                assert( _python_par_k == NULL );
                _python_par_k = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_k, key ) == 1 )
            {
                assert( _python_par_k == NULL );
                _python_par_k = value;

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
                   "tril() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_k != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_k = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_k == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_k = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_k == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_k, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_tril_of_module_scipy$sparse$extract( self, _python_par_A, _python_par_k, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_k );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_2_tril_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2_tril_of_module_scipy$sparse$extract( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_tril_of_module_scipy$sparse$extract( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_triu_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_k, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_k; par_k.object = _python_par_k;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable var_mask;
    PyObjectLocalVariable var_row;
    PyObjectLocalVariable var_col;
    PyObjectLocalVariable var_data;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_43267bb2c3206198585a21aa16e7a0bd, module_scipy$sparse$extract );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_A.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 166;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
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
    tmp_source_name_1 = par_A.object;

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_row );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = par_k.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_A.object;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_col );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    assert( var_mask.object == NULL );
    var_mask.object = tmp_assign_source_2;

    tmp_source_name_3 = par_A.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_row );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = var_mask.object;

    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    assert( var_row.object == NULL );
    var_row.object = tmp_assign_source_3;

    tmp_source_name_4 = par_A.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_col );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = var_mask.object;

    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    assert( var_col.object == NULL );
    var_col.object = tmp_assign_source_4;

    tmp_source_name_5 = par_A.object;

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_data );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = var_mask.object;

    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    assert( var_data.object == NULL );
    var_data.object = tmp_assign_source_5;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_coo_matrix );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 263549 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_data.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_row.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_col.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_7 = par_A.object;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 174;
    tmp_source_name_6 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_asformat );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_format.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 174;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
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
    if ((var_mask.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mask,
            var_mask.object
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
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            var_data.object
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
    if ((par_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            par_k.object
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
static PyObject *fparse_function_3_triu_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_k = NULL;
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
                PyErr_Format( PyExc_TypeError, "triu() keywords must be strings" );
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
            if ( found == false && const_str_plain_k == key )
            {
                assert( _python_par_k == NULL );
                _python_par_k = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_k, key ) == 1 )
            {
                assert( _python_par_k == NULL );
                _python_par_k = value;

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
                   "triu() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_k != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_k = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_k == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_k = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_k == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_k, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_triu_of_module_scipy$sparse$extract( self, _python_par_A, _python_par_k, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_k );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_3_triu_of_module_scipy$sparse$extract( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3_triu_of_module_scipy$sparse$extract( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_triu_of_module_scipy$sparse$extract( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_find_of_module_scipy$sparse$extract(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_find_of_module_scipy$sparse$extract,
        dparse_function_1_find_of_module_scipy$sparse$extract,
        const_str_plain_find,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d1a3e90421b6f99f0bdf5b0365a6e8b8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$extract,
        const_str_digest_bb33d483f486fc6d5706c0051131b5d0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_tril_of_module_scipy$sparse$extract( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_tril_of_module_scipy$sparse$extract,
        dparse_function_2_tril_of_module_scipy$sparse$extract,
        const_str_plain_tril,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4d11277f9bd9b40bfce0ba7e78268a13,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$extract,
        const_str_digest_b591b29f4855b5a0db77425848dd7e79
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_triu_of_module_scipy$sparse$extract( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_triu_of_module_scipy$sparse$extract,
        dparse_function_3_triu_of_module_scipy$sparse$extract,
        const_str_plain_triu,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0a76b04b0056bb577ea2c8de7f41829f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$extract,
        const_str_digest_b1ce4635a52237ecbfe9fb07b9be77a8
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$extract =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.extract",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$extract )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$extract );
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

    // puts( "in initscipy$sparse$extract" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$extract = Py_InitModule4(
        "scipy.sparse.extract",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$extract = PyModule_Create( &mdef_scipy$sparse$extract );
#endif

    moduledict_scipy$sparse$extract = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$extract)->md_dict;

    assertObject( module_scipy$sparse$extract );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7a95678d7845310cc8bee19a413dca2d, module_scipy$sparse$extract );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$extract );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;

    // Module code.
    tmp_assign_source_1 = const_str_digest_34039cf4447b6c64f6822ba611be1e71;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_01201f5b5e0ffab251c1aae5ece88c38;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_26f78007f80d91e7e7c9826835fc1b3d, module_scipy$sparse$extract );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$extract)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$extract)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$extract)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_83a0aac3d618d3c31fc37c156dca406d;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_str_plain_find_str_plain_tril_str_plain_triu_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$extract)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_coo, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_coo_matrix_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_coo_matrix );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_coo_matrix, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_function_1_find_of_module_scipy$sparse$extract(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_find, tmp_assign_source_9 );
    tmp_defaults_1 = const_tuple_int_0_none_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_2_tril_of_module_scipy$sparse$extract( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_tril, tmp_assign_source_10 );
    tmp_defaults_2 = const_tuple_int_0_none_tuple;
    tmp_assign_source_11 = MAKE_FUNCTION_function_3_triu_of_module_scipy$sparse$extract( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$extract, (Nuitka_StringObject *)const_str_plain_triu, tmp_assign_source_11 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$extract );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
