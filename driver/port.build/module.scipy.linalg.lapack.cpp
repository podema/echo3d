// Generated code for Python source for module 'scipy.linalg.lapack'
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

// The _module_scipy$linalg$lapack is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$linalg$lapack;
PyDictObject *moduledict_scipy$linalg$lapack;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_blas;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_names;
extern PyObject *const_str_plain_LAPACK;
extern PyObject *const_str_plain_arrays;
static PyObject *const_str_plain_corgqr;
static PyObject *const_str_plain_corgrq;
static PyObject *const_str_plain_cormqr;
static PyObject *const_str_plain_cungqr;
static PyObject *const_str_plain_cungrq;
static PyObject *const_str_plain_cunmqr;
extern PyObject *const_str_plain_lapack;
static PyObject *const_str_plain_zorgqr;
static PyObject *const_str_plain_zorgrq;
static PyObject *const_str_plain_zormqr;
extern PyObject *const_str_plain_zungqr;
static PyObject *const_str_plain_zungrq;
static PyObject *const_str_plain_zunmqr;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_clapack;
static PyObject *const_str_plain_flapack;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__clapack;
static PyObject *const_str_plain__flapack;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain__get_funcs;
extern PyObject *const_str_plain_empty_module;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain__lapack_alias;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_DeprecatedImport;
extern PyObject *const_str_plain_get_lapack_funcs;
extern PyObject *const_str_plain__DeprecatedImport;
extern PyObject *const_tuple_tuple_empty_none_tuple;
extern PyObject *const_str_plain_find_best_blas_type;
static PyObject *const_tuple_str_plain__clapack_tuple;
static PyObject *const_tuple_str_plain__flapack_tuple;
static PyObject *const_str_plain_find_best_lapack_type;
static PyObject *const_tuple_str_plain__get_funcs_tuple;
static PyObject *const_list_str_plain_get_lapack_funcs_list;
static PyObject *const_dict_38e438bdf8fd48630e076796acd072ea;
extern PyObject *const_tuple_str_plain_DeprecatedImport_tuple;
static PyObject *const_tuple_str_plain_find_best_blas_type_tuple;
extern PyObject *const_str_digest_2039376ceb644e27dd4e49870f389fbc;
static PyObject *const_str_digest_240c56e92afa2de9119df3e3113ed4eb;
static PyObject *const_str_digest_4cf75414e8a8e229dcadf9bbf0790908;
static PyObject *const_str_digest_535c4fb362f6abe4bd4b7bcbdbb357a8;
static PyObject *const_str_digest_578dffb8c898ba6c17b14f2fd4b922bf;
extern PyObject *const_str_digest_5cb65088c66b06ca7a5257f2d11814d5;
extern PyObject *const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862;
static PyObject *const_str_digest_a62fd198ccfd141ec709cc16d11a3c50;
static PyObject *const_str_digest_bdd93abf26a9886f7991e7bbcdd8344b;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
extern PyObject *const_tuple_str_plain_names_str_plain_arrays_str_plain_dtype_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_corgqr = UNSTREAM_STRING( &constant_bin[ 2250791 ], 6, 1 );
    const_str_plain_corgrq = UNSTREAM_STRING( &constant_bin[ 2250797 ], 6, 1 );
    const_str_plain_cormqr = UNSTREAM_STRING( &constant_bin[ 2250803 ], 6, 1 );
    const_str_plain_cungqr = UNSTREAM_STRING( &constant_bin[ 2250809 ], 6, 1 );
    const_str_plain_cungrq = UNSTREAM_STRING( &constant_bin[ 2250815 ], 6, 1 );
    const_str_plain_cunmqr = UNSTREAM_STRING( &constant_bin[ 2250821 ], 6, 1 );
    const_str_plain_zorgqr = UNSTREAM_STRING( &constant_bin[ 2250827 ], 6, 1 );
    const_str_plain_zorgrq = UNSTREAM_STRING( &constant_bin[ 2250833 ], 6, 1 );
    const_str_plain_zormqr = UNSTREAM_STRING( &constant_bin[ 2250839 ], 6, 1 );
    const_str_plain_zungrq = UNSTREAM_STRING( &constant_bin[ 2250845 ], 6, 1 );
    const_str_plain_zunmqr = UNSTREAM_STRING( &constant_bin[ 2242017 ], 6, 1 );
    const_str_plain_clapack = UNSTREAM_STRING( &constant_bin[ 255808 ], 7, 1 );
    const_str_plain_flapack = UNSTREAM_STRING( &constant_bin[ 255771 ], 7, 1 );
    const_str_plain__clapack = UNSTREAM_STRING( &constant_bin[ 255807 ], 8, 1 );
    const_str_plain__flapack = UNSTREAM_STRING( &constant_bin[ 255770 ], 8, 1 );
    const_str_plain__lapack_alias = UNSTREAM_STRING( &constant_bin[ 255844 ], 13, 1 );
    const_tuple_str_plain__clapack_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__clapack_tuple, 0, const_str_plain__clapack ); Py_INCREF( const_str_plain__clapack );
    const_tuple_str_plain__flapack_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__flapack_tuple, 0, const_str_plain__flapack ); Py_INCREF( const_str_plain__flapack );
    const_str_plain_find_best_lapack_type = UNSTREAM_STRING( &constant_bin[ 2250851 ], 21, 1 );
    const_tuple_str_plain__get_funcs_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__get_funcs_tuple, 0, const_str_plain__get_funcs ); Py_INCREF( const_str_plain__get_funcs );
    const_list_str_plain_get_lapack_funcs_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_get_lapack_funcs_list, 0, const_str_plain_get_lapack_funcs ); Py_INCREF( const_str_plain_get_lapack_funcs );
    const_dict_38e438bdf8fd48630e076796acd072ea = _PyDict_NewPresized( 6 );
    PyDict_SetItem( const_dict_38e438bdf8fd48630e076796acd072ea, const_str_plain_corgrq, const_str_plain_cungrq );
    PyDict_SetItem( const_dict_38e438bdf8fd48630e076796acd072ea, const_str_plain_zorgqr, const_str_plain_zungqr );
    PyDict_SetItem( const_dict_38e438bdf8fd48630e076796acd072ea, const_str_plain_zormqr, const_str_plain_zunmqr );
    PyDict_SetItem( const_dict_38e438bdf8fd48630e076796acd072ea, const_str_plain_cormqr, const_str_plain_cunmqr );
    PyDict_SetItem( const_dict_38e438bdf8fd48630e076796acd072ea, const_str_plain_corgqr, const_str_plain_cungqr );
    PyDict_SetItem( const_dict_38e438bdf8fd48630e076796acd072ea, const_str_plain_zorgrq, const_str_plain_zungrq );
    const_tuple_str_plain_find_best_blas_type_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_best_blas_type_tuple, 0, const_str_plain_find_best_blas_type ); Py_INCREF( const_str_plain_find_best_blas_type );
    const_str_digest_240c56e92afa2de9119df3e3113ed4eb = UNSTREAM_STRING( &constant_bin[ 2250872 ], 2155, 0 );
    const_str_digest_4cf75414e8a8e229dcadf9bbf0790908 = UNSTREAM_STRING( &constant_bin[ 2253027 ], 25, 0 );
    const_str_digest_535c4fb362f6abe4bd4b7bcbdbb357a8 = UNSTREAM_STRING( &constant_bin[ 2253052 ], 55, 0 );
    const_str_digest_578dffb8c898ba6c17b14f2fd4b922bf = UNSTREAM_STRING( &constant_bin[ 2253107 ], 1241, 0 );
    const_str_digest_a62fd198ccfd141ec709cc16d11a3c50 = UNSTREAM_STRING( &constant_bin[ 2254348 ], 21, 0 );
    const_str_digest_bdd93abf26a9886f7991e7bbcdd8344b = UNSTREAM_STRING( &constant_bin[ 2254369 ], 25, 0 );
}

// The module code objects.
static PyCodeObject *codeobj_e6469d1a5cb449c89015bc702ed5d1d8;
static PyCodeObject *codeobj_178ad5c73738218196663f516bcb1c8b;

static void _initModuleCodeObjects(void)
{
    codeobj_e6469d1a5cb449c89015bc702ed5d1d8 = MAKE_CODEOBJ( const_str_digest_535c4fb362f6abe4bd4b7bcbdbb357a8, const_str_plain_get_lapack_funcs, 239, const_tuple_str_plain_names_str_plain_arrays_str_plain_dtype_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_178ad5c73738218196663f516bcb1c8b = MAKE_CODEOBJ( const_str_digest_535c4fb362f6abe4bd4b7bcbdbb357a8, const_str_plain_lapack, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( Nuitka_FunctionObject *self, PyObject *_python_par_names, PyObject *_python_par_arrays, PyObject *_python_par_dtype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_names; par_names.object = _python_par_names;
    PyObjectLocalVariable par_arrays; par_arrays.object = _python_par_arrays;
    PyObjectLocalVariable par_dtype; par_dtype.object = _python_par_dtype;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e6469d1a5cb449c89015bc702ed5d1d8, module_scipy$linalg$lapack );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__get_funcs );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_funcs );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 250611 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_names.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 51020 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_arrays.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 176923 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_dtype.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 53034 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = const_str_plain_LAPACK;
    tmp_call_arg_element_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__flapack );

    if (unlikely( tmp_call_arg_element_5 == NULL ))
    {
        tmp_call_arg_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flapack );
    }

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255757 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__clapack );

    if (unlikely( tmp_call_arg_element_6 == NULL ))
    {
        tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__clapack );
    }

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255794 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = const_str_plain_flapack;
    tmp_call_arg_element_8 = const_str_plain_clapack;
    tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__lapack_alias );

    if (unlikely( tmp_call_arg_element_9 == NULL ))
    {
        tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__lapack_alias );
    }

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 255831 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 278;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS9( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
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
    if ((par_names.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_names,
            par_names.object
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
static PyObject *fparse_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_names = NULL;
    PyObject *_python_par_arrays = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_lapack_funcs() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_names == key )
            {
                assert( _python_par_names == NULL );
                _python_par_names = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_arrays == key )
            {
                assert( _python_par_arrays == NULL );
                _python_par_arrays = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_names, key ) == 1 )
            {
                assert( _python_par_names == NULL );
                _python_par_names = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arrays, key ) == 1 )
            {
                assert( _python_par_arrays == NULL );
                _python_par_arrays = value;

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
                   "get_lapack_funcs() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_names != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_names = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_names == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_names = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_arrays != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_arrays = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_arrays == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_arrays = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
    if (unlikely( _python_par_names == NULL || _python_par_arrays == NULL || _python_par_dtype == NULL ))
    {
        PyObject *values[] = { _python_par_names, _python_par_arrays, _python_par_dtype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( self, _python_par_names, _python_par_arrays, _python_par_dtype );

error_exit:;

    Py_XDECREF( _python_par_names );
    Py_XDECREF( _python_par_arrays );
    Py_XDECREF( _python_par_dtype );

    return NULL;
}

static PyObject *dparse_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack,
        dparse_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack,
        const_str_plain_get_lapack_funcs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e6469d1a5cb449c89015bc702ed5d1d8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$linalg$lapack,
        const_str_digest_578dffb8c898ba6c17b14f2fd4b922bf
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg$lapack =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg.lapack",   /* m_name */
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

MOD_INIT_DECL( scipy$linalg$lapack )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg$lapack );
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

    // puts( "in initscipy$linalg$lapack" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg$lapack = Py_InitModule4(
        "scipy.linalg.lapack",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$linalg$lapack = PyModule_Create( &mdef_scipy$linalg$lapack );
#endif

    moduledict_scipy$linalg$lapack = (PyDictObject *)((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;

    assertObject( module_scipy$linalg$lapack );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5cb65088c66b06ca7a5257f2d11814d5, module_scipy$linalg$lapack );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$linalg$lapack );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_star_imported_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_240c56e92afa2de9119df3e3113ed4eb;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_535c4fb362f6abe4bd4b7bcbdbb357a8;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_178ad5c73738218196663f516bcb1c8b, module_scipy$linalg$lapack );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 206;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 206;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 206;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_get_lapack_funcs_list );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 210;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_blas, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain__get_funcs_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__get_funcs );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__get_funcs, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 213;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_blas, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_find_best_blas_type_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_find_best_blas_type );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_find_best_lapack_type, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 215;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain__flapack_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain__flapack );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__flapack, tmp_assign_source_9 );
    // Tried block of try/except
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 217;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain__clapack_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 217;
        goto try_except_handler_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain__clapack );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 217;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__clapack, tmp_assign_source_10 );
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


        frame_module->f_lineno = 218;
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
    tmp_assign_source_11 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__clapack, tmp_assign_source_11 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 222;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_2039376ceb644e27dd4e49870f389fbc, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_DeprecatedImport_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DeprecatedImport );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__DeprecatedImport, tmp_assign_source_12 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__DeprecatedImport );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DeprecatedImport );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 250065 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_digest_bdd93abf26a9886f7991e7bbcdd8344b;
    tmp_call_arg_element_2 = const_str_digest_5cb65088c66b06ca7a5257f2d11814d5;
    frame_module->f_lineno = 223;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_clapack, tmp_assign_source_13 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__DeprecatedImport );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DeprecatedImport );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 250065 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = const_str_digest_4cf75414e8a8e229dcadf9bbf0790908;
    tmp_call_arg_element_4 = const_str_digest_5cb65088c66b06ca7a5257f2d11814d5;
    frame_module->f_lineno = 224;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_flapack, tmp_assign_source_14 );
    tmp_assign_source_15 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_empty_module, tmp_assign_source_15 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$linalg$lapack)->md_dict;
    frame_module->f_lineno = 228;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_a62fd198ccfd141ec709cc16d11a3c50, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg$lapack, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$linalg$lapack, const_str_plain_empty_module );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 250031 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = PyDict_Copy( const_dict_38e438bdf8fd48630e076796acd072ea );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain__lapack_alias, tmp_assign_source_16 );
    tmp_defaults_1 = const_tuple_tuple_empty_none_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_function_1_get_lapack_funcs_of_module_scipy$linalg$lapack( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_module->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg$lapack, (Nuitka_StringObject *)const_str_plain_get_lapack_funcs, tmp_assign_source_17 );

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

    return MOD_RETURN_VALUE( module_scipy$linalg$lapack );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
