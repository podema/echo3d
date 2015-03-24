// Generated code for Python source for module 'Xlib.ext'
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

// The _module_Xlib$ext is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib$ext;
PyDictObject *moduledict_Xlib$ext;

// The module constants used
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ext;
extern PyObject *const_str_plain_map;
static PyObject *const_str_plain_RANDR;
static PyObject *const_str_plain_SHAPE;
extern PyObject *const_str_plain_XTEST;
static PyObject *const_str_plain_randr;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_xtest;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_RECORD;
extern PyObject *const_str_plain_record;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_XINERAMA;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_xinerama;
static PyObject *const_str_plain_Composite;
extern PyObject *const_str_plain_composite;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain___extensions__;
static PyObject *const_list_acd7aaf7bc3b7e0bd69152190d18848e_list;
extern PyObject *const_str_digest_087a8513d813b54450b1c9bc11f21591;
static PyObject *const_str_digest_c307693b16b8fc4e947e1fe02d5ce4d0;
static PyObject *const_str_digest_d617937bf4760198db74244d7da4ef65;
static PyObject *const_tuple_str_plain_RANDR_str_plain_randr_tuple;
static PyObject *const_tuple_str_plain_SHAPE_str_plain_shape_tuple;
static PyObject *const_tuple_str_plain_XTEST_str_plain_xtest_tuple;
static PyObject *const_tuple_str_plain_RECORD_str_plain_record_tuple;
static PyObject *const_tuple_str_plain_XINERAMA_str_plain_xinerama_tuple;
static PyObject *const_tuple_str_plain_Composite_str_plain_composite_tuple;
static PyObject *const_list_str_digest_d617937bf4760198db74244d7da4ef65_list;

static void _initModuleConstants(void)
{
    const_str_plain_RANDR = UNSTREAM_STRING( &constant_bin[ 427666 ], 5, 1 );
    const_str_plain_SHAPE = UNSTREAM_STRING( &constant_bin[ 427671 ], 5, 1 );
    const_str_plain_randr = UNSTREAM_STRING( &constant_bin[ 427676 ], 5, 1 );
    const_str_plain_XINERAMA = UNSTREAM_STRING( &constant_bin[ 427681 ], 8, 1 );
    const_str_plain_xinerama = UNSTREAM_STRING( &constant_bin[ 427689 ], 8, 1 );
    const_str_plain_Composite = UNSTREAM_STRING( &constant_bin[ 427697 ], 9, 1 );
    const_list_acd7aaf7bc3b7e0bd69152190d18848e_list = PyList_New( 6 );
    const_tuple_str_plain_XTEST_str_plain_xtest_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_XTEST_str_plain_xtest_tuple, 0, const_str_plain_XTEST ); Py_INCREF( const_str_plain_XTEST );
    PyTuple_SET_ITEM( const_tuple_str_plain_XTEST_str_plain_xtest_tuple, 1, const_str_plain_xtest ); Py_INCREF( const_str_plain_xtest );
    PyList_SET_ITEM( const_list_acd7aaf7bc3b7e0bd69152190d18848e_list, 0, const_tuple_str_plain_XTEST_str_plain_xtest_tuple ); Py_INCREF( const_tuple_str_plain_XTEST_str_plain_xtest_tuple );
    const_tuple_str_plain_SHAPE_str_plain_shape_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SHAPE_str_plain_shape_tuple, 0, const_str_plain_SHAPE ); Py_INCREF( const_str_plain_SHAPE );
    PyTuple_SET_ITEM( const_tuple_str_plain_SHAPE_str_plain_shape_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyList_SET_ITEM( const_list_acd7aaf7bc3b7e0bd69152190d18848e_list, 1, const_tuple_str_plain_SHAPE_str_plain_shape_tuple ); Py_INCREF( const_tuple_str_plain_SHAPE_str_plain_shape_tuple );
    const_tuple_str_plain_XINERAMA_str_plain_xinerama_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_XINERAMA_str_plain_xinerama_tuple, 0, const_str_plain_XINERAMA ); Py_INCREF( const_str_plain_XINERAMA );
    PyTuple_SET_ITEM( const_tuple_str_plain_XINERAMA_str_plain_xinerama_tuple, 1, const_str_plain_xinerama ); Py_INCREF( const_str_plain_xinerama );
    PyList_SET_ITEM( const_list_acd7aaf7bc3b7e0bd69152190d18848e_list, 2, const_tuple_str_plain_XINERAMA_str_plain_xinerama_tuple ); Py_INCREF( const_tuple_str_plain_XINERAMA_str_plain_xinerama_tuple );
    const_tuple_str_plain_RECORD_str_plain_record_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RECORD_str_plain_record_tuple, 0, const_str_plain_RECORD ); Py_INCREF( const_str_plain_RECORD );
    PyTuple_SET_ITEM( const_tuple_str_plain_RECORD_str_plain_record_tuple, 1, const_str_plain_record ); Py_INCREF( const_str_plain_record );
    PyList_SET_ITEM( const_list_acd7aaf7bc3b7e0bd69152190d18848e_list, 3, const_tuple_str_plain_RECORD_str_plain_record_tuple ); Py_INCREF( const_tuple_str_plain_RECORD_str_plain_record_tuple );
    const_tuple_str_plain_Composite_str_plain_composite_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Composite_str_plain_composite_tuple, 0, const_str_plain_Composite ); Py_INCREF( const_str_plain_Composite );
    PyTuple_SET_ITEM( const_tuple_str_plain_Composite_str_plain_composite_tuple, 1, const_str_plain_composite ); Py_INCREF( const_str_plain_composite );
    PyList_SET_ITEM( const_list_acd7aaf7bc3b7e0bd69152190d18848e_list, 4, const_tuple_str_plain_Composite_str_plain_composite_tuple ); Py_INCREF( const_tuple_str_plain_Composite_str_plain_composite_tuple );
    const_tuple_str_plain_RANDR_str_plain_randr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RANDR_str_plain_randr_tuple, 0, const_str_plain_RANDR ); Py_INCREF( const_str_plain_RANDR );
    PyTuple_SET_ITEM( const_tuple_str_plain_RANDR_str_plain_randr_tuple, 1, const_str_plain_randr ); Py_INCREF( const_str_plain_randr );
    PyList_SET_ITEM( const_list_acd7aaf7bc3b7e0bd69152190d18848e_list, 5, const_tuple_str_plain_RANDR_str_plain_randr_tuple ); Py_INCREF( const_tuple_str_plain_RANDR_str_plain_randr_tuple );
    const_str_digest_c307693b16b8fc4e947e1fe02d5ce4d0 = UNSTREAM_STRING( &constant_bin[ 427706 ], 53, 0 );
    const_str_digest_d617937bf4760198db74244d7da4ef65 = UNSTREAM_STRING( &constant_bin[ 427706 ], 41, 0 );
    const_list_str_digest_d617937bf4760198db74244d7da4ef65_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_d617937bf4760198db74244d7da4ef65_list, 0, const_str_digest_d617937bf4760198db74244d7da4ef65 ); Py_INCREF( const_str_digest_d617937bf4760198db74244d7da4ef65 );
}

// The module code objects.
static PyCodeObject *codeobj_82f7e639b131dd0db3c3831181b13be9;
static PyCodeObject *codeobj_b50cec43c99c57182cf41f68a9debe2e;

static void _initModuleCodeObjects(void)
{
    codeobj_82f7e639b131dd0db3c3831181b13be9 = MAKE_CODEOBJ( const_str_digest_c307693b16b8fc4e947e1fe02d5ce4d0, const_str_angle_lambda, 32, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b50cec43c99c57182cf41f68a9debe2e = MAKE_CODEOBJ( const_str_digest_c307693b16b8fc4e947e1fe02d5ce4d0, const_str_plain_ext, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_module_Xlib$ext(  );


// The module function definitions.
static PyObject *impl_lambda_1_lambda_of_module_Xlib$ext( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_82f7e639b131dd0db3c3831181b13be9, module_Xlib$ext );
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
    tmp_subscr_target_1 = par_x.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
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
    if ((par_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            par_x.object
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
static PyObject *fparse_lambda_1_lambda_of_module_Xlib$ext( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_lambda_1_lambda_of_module_Xlib$ext( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_module_Xlib$ext( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_lambda_1_lambda_of_module_Xlib$ext( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_module_Xlib$ext( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_module_Xlib$ext(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_module_Xlib$ext,
        dparse_lambda_1_lambda_of_module_Xlib$ext,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_82f7e639b131dd0db3c3831181b13be9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib$ext =
{
    PyModuleDef_HEAD_INIT,
    "Xlib.ext",   /* m_name */
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

MOD_INIT_DECL( Xlib$ext )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib$ext );
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

    // puts( "in initXlib$ext" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib$ext = Py_InitModule4(
        "Xlib.ext",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib$ext = PyModule_Create( &mdef_Xlib$ext );
#endif

    moduledict_Xlib$ext = (PyDictObject *)((PyModuleObject *)module_Xlib$ext)->md_dict;

    assertObject( module_Xlib$ext );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_087a8513d813b54450b1c9bc11f21591, module_Xlib$ext );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib$ext );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c307693b16b8fc4e947e1fe02d5ce4d0;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_d617937bf4760198db74244d7da4ef65_list );
    UPDATE_STRING_DICT1( moduledict_Xlib$ext, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = LIST_COPY( const_list_acd7aaf7bc3b7e0bd69152190d18848e_list );
    UPDATE_STRING_DICT1( moduledict_Xlib$ext, (Nuitka_StringObject *)const_str_plain___extensions__, tmp_assign_source_4 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_b50cec43c99c57182cf41f68a9debe2e, module_Xlib$ext );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = MAKE_FUNCTION_lambda_1_lambda_of_module_Xlib$ext(  );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext, (Nuitka_StringObject *)const_str_plain___extensions__ );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___extensions__ );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28402 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 32;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );

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

    return MOD_RETURN_VALUE( module_Xlib$ext );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
