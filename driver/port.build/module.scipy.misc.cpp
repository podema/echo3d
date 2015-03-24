// Generated code for Python source for module 'scipy.misc'
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

// The _module_scipy$misc is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$misc;
PyDictObject *moduledict_scipy$misc;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_76;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_who;
extern PyObject *const_str_plain_comb;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_misc;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain__info;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_str_plain_common;
extern PyObject *const_str_plain_doccer;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain_source;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_pilutil;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_maxwidth;
extern PyObject *const_str_plain_toplevel;
extern PyObject *const_str_plain_factorial;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_factorial2;
extern PyObject *const_str_plain_factorialk;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_Tester_tuple;
static PyObject *const_tuple_str_plain_common_tuple;
static PyObject *const_tuple_str_plain_doccer_tuple;
static PyObject *const_tuple_str_plain_pilutil_tuple;
static PyObject *const_list_33e324b297a02e119930025f24a066ea_list;
extern PyObject *const_str_digest_19a2e77a4b30fc89ead03c1f85ca09d9;
static PyObject *const_str_digest_24e6029288c422cc54cbe4eaa9deb2d4;
static PyObject *const_str_digest_3a84910fe7096005565ba15587392487;
extern PyObject *const_str_digest_84b225ef8df4b1024b676eb721c5fe2d;
extern PyObject *const_str_digest_a175ed48db162ffdb55bc9a35e478b7b;
static PyObject *const_str_digest_f1eda8149ceedd51b4f48041acb2ff2d;
static PyObject *const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple;
extern PyObject *const_tuple_6c734d42bca9b6f502c7c48c75ff0fb0_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_list_str_digest_f1eda8149ceedd51b4f48041acb2ff2d_list;
static PyObject *const_tuple_str_plain_who_str_plain_source_str_plain_info_tuple;

static void _initModuleConstants(void)
{
    const_tuple_str_plain_common_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_common_tuple, 0, const_str_plain_common ); Py_INCREF( const_str_plain_common );
    const_tuple_str_plain_doccer_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_doccer_tuple, 0, const_str_plain_doccer ); Py_INCREF( const_str_plain_doccer );
    const_tuple_str_plain_pilutil_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pilutil_tuple, 0, const_str_plain_pilutil ); Py_INCREF( const_str_plain_pilutil );
    const_list_33e324b297a02e119930025f24a066ea_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_33e324b297a02e119930025f24a066ea_list, 0, const_str_plain_who ); Py_INCREF( const_str_plain_who );
    PyList_SET_ITEM( const_list_33e324b297a02e119930025f24a066ea_list, 1, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyList_SET_ITEM( const_list_33e324b297a02e119930025f24a066ea_list, 2, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyList_SET_ITEM( const_list_33e324b297a02e119930025f24a066ea_list, 3, const_str_plain_doccer ); Py_INCREF( const_str_plain_doccer );
    const_str_digest_24e6029288c422cc54cbe4eaa9deb2d4 = UNSTREAM_STRING( &constant_bin[ 2281850 ], 1673, 0 );
    const_str_digest_3a84910fe7096005565ba15587392487 = UNSTREAM_STRING( &constant_bin[ 2283523 ], 55, 0 );
    const_str_digest_f1eda8149ceedd51b4f48041acb2ff2d = UNSTREAM_STRING( &constant_bin[ 2283523 ], 43, 0 );
    const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple, 0, const_str_plain_comb ); Py_INCREF( const_str_plain_comb );
    PyTuple_SET_ITEM( const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple, 1, const_str_plain_factorial ); Py_INCREF( const_str_plain_factorial );
    PyTuple_SET_ITEM( const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple, 2, const_str_plain_factorial2 ); Py_INCREF( const_str_plain_factorial2 );
    PyTuple_SET_ITEM( const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple, 3, const_str_plain_factorialk ); Py_INCREF( const_str_plain_factorialk );
    const_list_str_digest_f1eda8149ceedd51b4f48041acb2ff2d_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_f1eda8149ceedd51b4f48041acb2ff2d_list, 0, const_str_digest_f1eda8149ceedd51b4f48041acb2ff2d ); Py_INCREF( const_str_digest_f1eda8149ceedd51b4f48041acb2ff2d );
    const_tuple_str_plain_who_str_plain_source_str_plain_info_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_who_str_plain_source_str_plain_info_tuple, 0, const_str_plain_who ); Py_INCREF( const_str_plain_who );
    PyTuple_SET_ITEM( const_tuple_str_plain_who_str_plain_source_str_plain_info_tuple, 1, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_str_plain_who_str_plain_source_str_plain_info_tuple, 2, const_str_plain_info ); Py_INCREF( const_str_plain_info );
}

// The module code objects.
static PyCodeObject *codeobj_d45d117d3b15707053204c2102c770e4;
static PyCodeObject *codeobj_773214dc5c2e68f047d1593690429126;

static void _initModuleCodeObjects(void)
{
    codeobj_d45d117d3b15707053204c2102c770e4 = MAKE_CODEOBJ( const_str_digest_3a84910fe7096005565ba15587392487, const_str_plain_info, 52, const_tuple_6c734d42bca9b6f502c7c48c75ff0fb0_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_773214dc5c2e68f047d1593690429126 = MAKE_CODEOBJ( const_str_digest_3a84910fe7096005565ba15587392487, const_str_plain_misc, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_info_of_module_scipy$misc( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_info_of_module_scipy$misc( Nuitka_FunctionObject *self, PyObject *_python_par_object, PyObject *_python_par_maxwidth, PyObject *_python_par_output, PyObject *_python_par_toplevel )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_object; par_object.object = _python_par_object;
    PyObjectLocalVariable par_maxwidth; par_maxwidth.object = _python_par_maxwidth;
    PyObjectLocalVariable par_output; par_output.object = _python_par_output;
    PyObjectLocalVariable par_toplevel; par_toplevel.object = _python_par_toplevel;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d45d117d3b15707053204c2102c770e4, module_scipy$misc );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain__info );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__info );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257271 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_object.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25332 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_maxwidth.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 181255 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_output.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82676 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_toplevel.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 181110 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 53;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
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
    if ((par_object.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_object,
            par_object.object
        );

    }
    if ((par_maxwidth.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxwidth,
            par_maxwidth.object
        );

    }
    if ((par_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output,
            par_output.object
        );

    }
    if ((par_toplevel.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_toplevel,
            par_toplevel.object
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
static PyObject *fparse_function_1_info_of_module_scipy$misc( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_object = NULL;
    PyObject *_python_par_maxwidth = NULL;
    PyObject *_python_par_output = NULL;
    PyObject *_python_par_toplevel = NULL;
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
                PyErr_Format( PyExc_TypeError, "info() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_object == key )
            {
                assert( _python_par_object == NULL );
                _python_par_object = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxwidth == key )
            {
                assert( _python_par_maxwidth == NULL );
                _python_par_maxwidth = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_output == key )
            {
                assert( _python_par_output == NULL );
                _python_par_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_toplevel == key )
            {
                assert( _python_par_toplevel == NULL );
                _python_par_toplevel = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_object, key ) == 1 )
            {
                assert( _python_par_object == NULL );
                _python_par_object = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxwidth, key ) == 1 )
            {
                assert( _python_par_maxwidth == NULL );
                _python_par_maxwidth = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_output, key ) == 1 )
            {
                assert( _python_par_output == NULL );
                _python_par_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_toplevel, key ) == 1 )
            {
                assert( _python_par_toplevel == NULL );
                _python_par_toplevel = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "info() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_object != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_object = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_object == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_object = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_maxwidth != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_maxwidth = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_maxwidth == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_maxwidth = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_output != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_output = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_output == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_output = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_toplevel != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_toplevel = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_toplevel == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_toplevel = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_object == NULL || _python_par_maxwidth == NULL || _python_par_output == NULL || _python_par_toplevel == NULL ))
    {
        PyObject *values[] = { _python_par_object, _python_par_maxwidth, _python_par_output, _python_par_toplevel };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_info_of_module_scipy$misc( self, _python_par_object, _python_par_maxwidth, _python_par_output, _python_par_toplevel );

error_exit:;

    Py_XDECREF( _python_par_object );
    Py_XDECREF( _python_par_maxwidth );
    Py_XDECREF( _python_par_output );
    Py_XDECREF( _python_par_toplevel );

    return NULL;
}

static PyObject *dparse_function_1_info_of_module_scipy$misc( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1_info_of_module_scipy$misc( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_info_of_module_scipy$misc( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_info_of_module_scipy$misc( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_info_of_module_scipy$misc,
        dparse_function_1_info_of_module_scipy$misc,
        const_str_plain_info,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d45d117d3b15707053204c2102c770e4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$misc =
{
    PyModuleDef_HEAD_INIT,
    "scipy.misc",   /* m_name */
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

MOD_INIT_DECL( scipy$misc )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$misc );
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

    // puts( "in initscipy$misc" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$misc = Py_InitModule4(
        "scipy.misc",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$misc = PyModule_Create( &mdef_scipy$misc );
#endif

    moduledict_scipy$misc = (PyDictObject *)((PyModuleObject *)module_scipy$misc)->md_dict;

    assertObject( module_scipy$misc );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_19a2e77a4b30fc89ead03c1f85ca09d9, module_scipy$misc );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$misc );

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
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_called_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
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
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_24e6029288c422cc54cbe4eaa9deb2d4;
    UPDATE_STRING_DICT0( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3a84910fe7096005565ba15587392487;
    UPDATE_STRING_DICT0( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f1eda8149ceedd51b4f48041acb2ff2d_list );
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_773214dc5c2e68f047d1593690429126, module_scipy$misc );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 40;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 40;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 40;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_33e324b297a02e119930025f24a066ea_list );
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 44;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_doccer_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_doccer );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_doccer, tmp_assign_source_8 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 45;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_common, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$misc, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 46;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_who_str_plain_source_str_plain_info_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_who );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_who, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 46;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_who_str_plain_source_str_plain_info_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_source );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_source, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 46;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_who_str_plain_source_str_plain_info_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_info );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain__info, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 47;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_a175ed48db162ffdb55bc9a35e478b7b, tmp_import_globals_9, tmp_import_globals_9, const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_comb );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_comb, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 47;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_a175ed48db162ffdb55bc9a35e478b7b, tmp_import_globals_10, tmp_import_globals_10, const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_factorial );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_factorial, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 47;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_a175ed48db162ffdb55bc9a35e478b7b, tmp_import_globals_11, tmp_import_globals_11, const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_factorial2 );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_factorial2, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 47;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_a175ed48db162ffdb55bc9a35e478b7b, tmp_import_globals_12, tmp_import_globals_12, const_tuple_4a55830a7d13b78c9bc3443ba18ce50e_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_factorialk );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_factorialk, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 49;
    tmp_assign_source_16 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_13, tmp_import_globals_13, Py_None, const_int_0 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_16 );
    tmp_defaults_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_76;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stdout );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_defaults_1 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_scipy;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
    tmp_assign_source_17 = MAKE_FUNCTION_function_1_info_of_module_scipy$misc( tmp_defaults_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_info, tmp_assign_source_17 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain__info );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__info );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257187 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___doc__ );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_info );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_info );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49191 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___doc__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$misc, const_str_plain_sys );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    // Tried block of try/except
    tmp_import_globals_14 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 58;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_pilutil, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 58;
        goto try_except_handler_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$misc, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 58;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    tmp_import_globals_15 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 59;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_empty, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_pilutil_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 59;
        goto try_except_handler_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_pilutil );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 59;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_pilutil, tmp_assign_source_18 );
    tmp_assign_source_19 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_19 == NULL ))
    {
        tmp_assign_source_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 60;
        goto try_except_handler_1;
    }

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_pilutil );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pilutil );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257214 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 60;
        goto try_finally_handler_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___all__ );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 60;
        goto try_finally_handler_1;
    }
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 60;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_20;

    tmp_compare_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_1 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if (tmp_isnot_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_21 = tmp_inplace_assign_1__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21 );
    branch_no_1:;
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
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_except_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$misc, const_str_plain_pilutil );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257214 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 61;
        goto try_except_handler_1;
    }

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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_no_2:;
    try_except_end_1:;
    tmp_import_globals_16 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 65;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_empty, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_common_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_common );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_common, tmp_assign_source_22 );
    tmp_assign_source_23 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_23 == NULL ))
    {
        tmp_assign_source_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_common );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_common );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257243 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 66;
        goto try_finally_handler_2;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___all__ );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto try_finally_handler_2;
    }
    tmp_assign_source_24 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto try_finally_handler_2;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_24;

    tmp_compare_left_3 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_2)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_25 = tmp_inplace_assign_2__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_25 );
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

    tmp_tried_lineno_2 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

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
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$misc, const_str_plain_common );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 257243 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_import_globals_17 = ((PyModuleObject *)module_scipy$misc)->md_dict;
    frame_module->f_lineno = 69;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_84b225ef8df4b1024b676eb721c5fe2d, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_26 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 70;
    tmp_source_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_test );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_27 );

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

    return MOD_RETURN_VALUE( module_scipy$misc );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
