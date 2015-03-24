// Generated code for Python source for module '_markerlib'
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

// The _module__markerlib is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module__markerlib;
PyDictObject *moduledict__markerlib;

// The module constants used
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ast;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_marker;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_override;
extern PyObject *const_str_plain_interpret;
extern PyObject *const_str_plain_marker_fn;
extern PyObject *const_str_plain__markerlib;
extern PyObject *const_str_plain_environment;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_tuple_str_plain_marker_tuple;
extern PyObject *const_str_plain_default_environment;
static PyObject *const_str_digest_23fcff1a14cb3136a354f6e461c42d23;
static PyObject *const_str_digest_be5448890caffe81686310f127d6efae;
extern PyObject *const_str_digest_f4a0883f99431f6308d39fc0d45cedae;
static PyObject *const_tuple_a0909ce004ad48f7d7ca2a1a8885d266_tuple;
static PyObject *const_tuple_str_plain_marker_str_plain_marker_fn_tuple;
extern PyObject *const_tuple_str_plain_environment_str_plain_override_tuple;
static PyObject *const_list_str_digest_be5448890caffe81686310f127d6efae_list;
static PyObject *const_tuple_str_plain_marker_str_plain_environment_str_plain_override_tuple;

static void _initModuleConstants(void)
{
    const_str_digest_23fcff1a14cb3136a354f6e461c42d23 = UNSTREAM_STRING( &constant_bin[ 443387 ], 55, 0 );
    const_str_digest_be5448890caffe81686310f127d6efae = UNSTREAM_STRING( &constant_bin[ 443387 ], 43, 0 );
    const_tuple_a0909ce004ad48f7d7ca2a1a8885d266_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_a0909ce004ad48f7d7ca2a1a8885d266_tuple, 0, const_str_plain_default_environment ); Py_INCREF( const_str_plain_default_environment );
    PyTuple_SET_ITEM( const_tuple_a0909ce004ad48f7d7ca2a1a8885d266_tuple, 1, const_str_plain_compile ); Py_INCREF( const_str_plain_compile );
    PyTuple_SET_ITEM( const_tuple_a0909ce004ad48f7d7ca2a1a8885d266_tuple, 2, const_str_plain_interpret ); Py_INCREF( const_str_plain_interpret );
    const_tuple_str_plain_marker_str_plain_marker_fn_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_marker_str_plain_marker_fn_tuple, 0, const_str_plain_marker ); Py_INCREF( const_str_plain_marker );
    PyTuple_SET_ITEM( const_tuple_str_plain_marker_str_plain_marker_fn_tuple, 1, const_str_plain_marker_fn ); Py_INCREF( const_str_plain_marker_fn );
    const_list_str_digest_be5448890caffe81686310f127d6efae_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_be5448890caffe81686310f127d6efae_list, 0, const_str_digest_be5448890caffe81686310f127d6efae ); Py_INCREF( const_str_digest_be5448890caffe81686310f127d6efae );
    const_tuple_str_plain_marker_str_plain_environment_str_plain_override_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_marker_str_plain_environment_str_plain_override_tuple, 0, const_str_plain_marker ); Py_INCREF( const_str_plain_marker );
    PyTuple_SET_ITEM( const_tuple_str_plain_marker_str_plain_environment_str_plain_override_tuple, 1, const_str_plain_environment ); Py_INCREF( const_str_plain_environment );
    PyTuple_SET_ITEM( const_tuple_str_plain_marker_str_plain_environment_str_plain_override_tuple, 2, const_str_plain_override ); Py_INCREF( const_str_plain_override );
}

// The module code objects.
static PyCodeObject *codeobj_e6e192af6436f6de1a086343165fcd42;
static PyCodeObject *codeobj_d6e9440fff25f4787678f280e0e62708;
static PyCodeObject *codeobj_520c10fed1346274649c56755b3a35ab;
static PyCodeObject *codeobj_81cdd6653079d8451bd5cd5b9cd2c335;
static PyCodeObject *codeobj_7a6991372d0edf4b1fa0c00e5cbd81f9;
static PyCodeObject *codeobj_69b78188da2774a85bb89790f5f8d73e;

static void _initModuleCodeObjects(void)
{
    codeobj_e6e192af6436f6de1a086343165fcd42 = MAKE_CODEOBJ( const_str_digest_23fcff1a14cb3136a354f6e461c42d23, const_str_plain__markerlib, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_d6e9440fff25f4787678f280e0e62708 = MAKE_CODEOBJ( const_str_digest_23fcff1a14cb3136a354f6e461c42d23, const_str_plain_compile, 9, const_tuple_str_plain_marker_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_520c10fed1346274649c56755b3a35ab = MAKE_CODEOBJ( const_str_digest_23fcff1a14cb3136a354f6e461c42d23, const_str_plain_compile, 9, const_tuple_str_plain_marker_str_plain_marker_fn_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_81cdd6653079d8451bd5cd5b9cd2c335 = MAKE_CODEOBJ( const_str_digest_23fcff1a14cb3136a354f6e461c42d23, const_str_plain_default_environment, 7, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_7a6991372d0edf4b1fa0c00e5cbd81f9 = MAKE_CODEOBJ( const_str_digest_23fcff1a14cb3136a354f6e461c42d23, const_str_plain_interpret, 15, const_tuple_str_plain_marker_str_plain_environment_str_plain_override_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_69b78188da2774a85bb89790f5f8d73e = MAKE_CODEOBJ( const_str_digest_23fcff1a14cb3136a354f6e461c42d23, const_str_plain_marker_fn, 10, const_tuple_str_plain_environment_str_plain_override_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_default_environment_of_module__markerlib(  );


static PyObject *MAKE_FUNCTION_function_1_marker_fn_of_function_2_compile_of_module__markerlib( PyObject *defaults, PyObjectSharedLocalVariable &closure_marker );


// This structure is for attachment as self of function_1_marker_fn_of_function_2_compile_of_module__markerlib.
// It is allocated at the time the function object is created.
struct _context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_marker;
};

static void _context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_destructor( void *context_voidptr )
{
    _context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_t *_python_context = (_context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_2_compile_of_module__markerlib(  );


static PyObject *MAKE_FUNCTION_function_3_interpret_of_module__markerlib( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_default_environment_of_module__markerlib( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = PyDict_New();
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_1_default_environment_of_module__markerlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1_default_environment_of_module__markerlib( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_default_environment_of_module__markerlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_1_default_environment_of_module__markerlib( self );
    }
    else
    {
        PyObject *result = fparse_function_1_default_environment_of_module__markerlib( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_compile_of_module__markerlib( Nuitka_FunctionObject *self, PyObject *_python_par_marker )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable par_marker; par_marker.storage->object = _python_par_marker;
    PyObjectLocalVariable var_marker_fn;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d6e9440fff25f4787678f280e0e62708, module__markerlib );
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
    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_marker_fn_of_function_2_compile_of_module__markerlib( INCREASE_REFCOUNT( tmp_defaults_1 ), par_marker );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    assert( var_marker_fn.object == NULL );
    var_marker_fn.object = tmp_assign_source_1;

    tmp_assattr_name_1 = par_marker.storage->object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14669 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = var_marker_fn.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___doc__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 13;
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
    if ((var_marker_fn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_marker_fn,
            var_marker_fn.object
        );

    }
    if ((par_marker.storage != NULL && par_marker.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_marker,
            par_marker.storage->object
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
    tmp_return_value = var_marker_fn.object;

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
static PyObject *fparse_function_2_compile_of_module__markerlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_marker = NULL;
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
                PyErr_Format( PyExc_TypeError, "compile() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_marker == key )
            {
                assert( _python_par_marker == NULL );
                _python_par_marker = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_marker, key ) == 1 )
            {
                assert( _python_par_marker == NULL );
                _python_par_marker = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "compile() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_marker != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_marker = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_marker == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_marker = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_marker == NULL ))
    {
        PyObject *values[] = { _python_par_marker };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_compile_of_module__markerlib( self, _python_par_marker );

error_exit:;

    Py_XDECREF( _python_par_marker );

    return NULL;
}

static PyObject *dparse_function_2_compile_of_module__markerlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_compile_of_module__markerlib( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_compile_of_module__markerlib( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_marker_fn_of_function_2_compile_of_module__markerlib( Nuitka_FunctionObject *self, PyObject *_python_par_environment, PyObject *_python_par_override )
{
    // The context of the function.
    struct _context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_t *_python_context = (struct _context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_environment; par_environment.object = _python_par_environment;
    PyObjectLocalVariable par_override; par_override.object = _python_par_override;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unary_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_69b78188da2774a85bb89790f5f8d73e, module__markerlib );
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
    tmp_source_name_1 = _python_context->closure_marker.storage->object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14669 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_strip );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 12;
    tmp_unary_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
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
    if ((par_environment.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_environment,
            par_environment.object
        );

    }
    if ((par_override.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_override,
            par_override.object
        );

    }
    if ((_python_context->closure_marker.storage != NULL && _python_context->closure_marker.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_marker,
            _python_context->closure_marker.storage->object
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
static PyObject *fparse_function_1_marker_fn_of_function_2_compile_of_module__markerlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_environment = NULL;
    PyObject *_python_par_override = NULL;
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
                PyErr_Format( PyExc_TypeError, "marker_fn() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_environment == key )
            {
                assert( _python_par_environment == NULL );
                _python_par_environment = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_override == key )
            {
                assert( _python_par_override == NULL );
                _python_par_override = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_environment, key ) == 1 )
            {
                assert( _python_par_environment == NULL );
                _python_par_environment = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_override, key ) == 1 )
            {
                assert( _python_par_override == NULL );
                _python_par_override = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "marker_fn() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_environment != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_environment = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_environment == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_environment = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_override != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_override = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_override == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_override = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_environment == NULL || _python_par_override == NULL ))
    {
        PyObject *values[] = { _python_par_environment, _python_par_override };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_marker_fn_of_function_2_compile_of_module__markerlib( self, _python_par_environment, _python_par_override );

error_exit:;

    Py_XDECREF( _python_par_environment );
    Py_XDECREF( _python_par_override );

    return NULL;
}

static PyObject *dparse_function_1_marker_fn_of_function_2_compile_of_module__markerlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_marker_fn_of_function_2_compile_of_module__markerlib( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_marker_fn_of_function_2_compile_of_module__markerlib( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_interpret_of_module__markerlib( Nuitka_FunctionObject *self, PyObject *_python_par_marker, PyObject *_python_par_environment, PyObject *_python_par_override )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_marker; par_marker.object = _python_par_marker;
    PyObjectLocalVariable par_environment; par_environment.object = _python_par_environment;
    PyObjectLocalVariable par_override; par_override.object = _python_par_override;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7a6991372d0edf4b1fa0c00e5cbd81f9, module__markerlib );
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain_compile );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_compile );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45941 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_marker.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 14669 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 16;
    tmp_called_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 16;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 16;
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
    if ((par_marker.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_marker,
            par_marker.object
        );

    }
    if ((par_environment.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_environment,
            par_environment.object
        );

    }
    if ((par_override.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_override,
            par_override.object
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
static PyObject *fparse_function_3_interpret_of_module__markerlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_marker = NULL;
    PyObject *_python_par_environment = NULL;
    PyObject *_python_par_override = NULL;
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
                PyErr_Format( PyExc_TypeError, "interpret() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_marker == key )
            {
                assert( _python_par_marker == NULL );
                _python_par_marker = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_environment == key )
            {
                assert( _python_par_environment == NULL );
                _python_par_environment = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_override == key )
            {
                assert( _python_par_override == NULL );
                _python_par_override = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_marker, key ) == 1 )
            {
                assert( _python_par_marker == NULL );
                _python_par_marker = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_environment, key ) == 1 )
            {
                assert( _python_par_environment == NULL );
                _python_par_environment = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_override, key ) == 1 )
            {
                assert( _python_par_override == NULL );
                _python_par_override = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "interpret() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_marker != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_marker = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_marker == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_marker = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_environment != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_environment = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_environment == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_environment = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_override != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_override = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_override == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_override = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_marker == NULL || _python_par_environment == NULL || _python_par_override == NULL ))
    {
        PyObject *values[] = { _python_par_marker, _python_par_environment, _python_par_override };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_interpret_of_module__markerlib( self, _python_par_marker, _python_par_environment, _python_par_override );

error_exit:;

    Py_XDECREF( _python_par_marker );
    Py_XDECREF( _python_par_environment );
    Py_XDECREF( _python_par_override );

    return NULL;
}

static PyObject *dparse_function_3_interpret_of_module__markerlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3_interpret_of_module__markerlib( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_interpret_of_module__markerlib( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_default_environment_of_module__markerlib(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_default_environment_of_module__markerlib,
        dparse_function_1_default_environment_of_module__markerlib,
        const_str_plain_default_environment,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_81cdd6653079d8451bd5cd5b9cd2c335,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module__markerlib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_marker_fn_of_function_2_compile_of_module__markerlib( PyObject *defaults, PyObjectSharedLocalVariable &closure_marker )
{
    struct _context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_t *_python_context = new _context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_marker.shareWith( closure_marker );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_marker_fn_of_function_2_compile_of_module__markerlib,
        dparse_function_1_marker_fn_of_function_2_compile_of_module__markerlib,
        const_str_plain_marker_fn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_69b78188da2774a85bb89790f5f8d73e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module__markerlib,
        Py_None,
        _python_context,
        _context_function_1_marker_fn_of_function_2_compile_of_module__markerlib_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_compile_of_module__markerlib(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_compile_of_module__markerlib,
        dparse_function_2_compile_of_module__markerlib,
        const_str_plain_compile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_520c10fed1346274649c56755b3a35ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module__markerlib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_interpret_of_module__markerlib( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_interpret_of_module__markerlib,
        dparse_function_3_interpret_of_module__markerlib,
        const_str_plain_interpret,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7a6991372d0edf4b1fa0c00e5cbd81f9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module__markerlib,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef__markerlib =
{
    PyModuleDef_HEAD_INIT,
    "_markerlib",   /* m_name */
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

MOD_INIT_DECL( _markerlib )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module__markerlib );
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

    // puts( "in init_markerlib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module__markerlib = Py_InitModule4(
        "_markerlib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module__markerlib = PyModule_Create( &mdef__markerlib );
#endif

    moduledict__markerlib = (PyDictObject *)((PyModuleObject *)module__markerlib)->md_dict;

    assertObject( module__markerlib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain__markerlib, module__markerlib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module__markerlib );

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
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_defaults_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_23fcff1a14cb3136a354f6e461c42d23;
    UPDATE_STRING_DICT0( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_be5448890caffe81686310f127d6efae_list );
    UPDATE_STRING_DICT1( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_e6e192af6436f6de1a086343165fcd42, module__markerlib );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    // Tried block of try/except
    tmp_import_globals_1 = ((PyModuleObject *)module__markerlib)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_ast, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain_ast, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module__markerlib)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_f4a0883f99431f6308d39fc0d45cedae, tmp_import_globals_2, tmp_import_globals_2, const_tuple_a0909ce004ad48f7d7ca2a1a8885d266_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto try_except_handler_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_default_environment );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain_default_environment, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module__markerlib)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_f4a0883f99431f6308d39fc0d45cedae, tmp_import_globals_3, tmp_import_globals_3, const_tuple_a0909ce004ad48f7d7ca2a1a8885d266_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto try_except_handler_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_compile );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain_compile, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module__markerlib)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_f4a0883f99431f6308d39fc0d45cedae, tmp_import_globals_4, tmp_import_globals_4, const_tuple_a0909ce004ad48f7d7ca2a1a8885d266_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto try_except_handler_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_interpret );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain_interpret, tmp_assign_source_7 );
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


        frame_module->f_lineno = 4;
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
    tmp_compare_left_2 = const_str_plain_ast;
    tmp_compare_right_2 = ((PyModuleObject *)module__markerlib)->md_dict;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assign_source_8 = MAKE_FUNCTION_function_1_default_environment_of_module__markerlib(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain_default_environment, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_function_2_compile_of_module__markerlib(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain_compile, tmp_assign_source_9 );
    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_3_interpret_of_module__markerlib( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict__markerlib, (Nuitka_StringObject *)const_str_plain_interpret, tmp_assign_source_10 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;

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

    return MOD_RETURN_VALUE( module__markerlib );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
