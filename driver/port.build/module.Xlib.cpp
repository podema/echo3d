// Generated code for Python source for module 'Xlib'
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

// The _module_Xlib is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib;
PyDictObject *moduledict_Xlib;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_dot;
extern PyObject *const_str_empty;
extern PyObject *const_int_pos_14;
extern PyObject *const_str_plain_X;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_XK;
extern PyObject *const_str_plain_map;
static PyObject *const_str_plain_rdb;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_Xlib;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_Xatom;
extern PyObject *const_str_plain_Xutil;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_display;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_Xcursorfont;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain___version_extra__;
static PyObject *const_str_plain___version_string__;
static PyObject *const_tuple_int_0_int_pos_14_tuple;
static PyObject *const_list_cac855bd267849d85fd09d90d4c0b6cc_list;
static PyObject *const_str_digest_6c6810cc99c628bb0a379a920d99f498;
static PyObject *const_str_digest_86581d3cd7fc1938866dd3b1218f2018;
static PyObject *const_list_str_digest_86581d3cd7fc1938866dd3b1218f2018_list;

static void _initModuleConstants(void)
{
    const_str_plain_rdb = UNSTREAM_STRING( &constant_bin[ 407924 ], 3, 1 );
    const_str_plain_Xcursorfont = UNSTREAM_STRING( &constant_bin[ 407927 ], 11, 1 );
    const_str_plain___version_extra__ = UNSTREAM_STRING( &constant_bin[ 23225 ], 17, 1 );
    const_str_plain___version_string__ = UNSTREAM_STRING( &constant_bin[ 407938 ], 18, 1 );
    const_tuple_int_0_int_pos_14_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_14_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_14_tuple, 1, const_int_pos_14 ); Py_INCREF( const_int_pos_14 );
    const_list_cac855bd267849d85fd09d90d4c0b6cc_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_cac855bd267849d85fd09d90d4c0b6cc_list, 0, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyList_SET_ITEM( const_list_cac855bd267849d85fd09d90d4c0b6cc_list, 1, const_str_plain_XK ); Py_INCREF( const_str_plain_XK );
    PyList_SET_ITEM( const_list_cac855bd267849d85fd09d90d4c0b6cc_list, 2, const_str_plain_Xatom ); Py_INCREF( const_str_plain_Xatom );
    PyList_SET_ITEM( const_list_cac855bd267849d85fd09d90d4c0b6cc_list, 3, const_str_plain_Xcursorfont ); Py_INCREF( const_str_plain_Xcursorfont );
    PyList_SET_ITEM( const_list_cac855bd267849d85fd09d90d4c0b6cc_list, 4, const_str_plain_Xutil ); Py_INCREF( const_str_plain_Xutil );
    PyList_SET_ITEM( const_list_cac855bd267849d85fd09d90d4c0b6cc_list, 5, const_str_plain_display ); Py_INCREF( const_str_plain_display );
    PyList_SET_ITEM( const_list_cac855bd267849d85fd09d90d4c0b6cc_list, 6, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyList_SET_ITEM( const_list_cac855bd267849d85fd09d90d4c0b6cc_list, 7, const_str_plain_rdb ); Py_INCREF( const_str_plain_rdb );
    const_str_digest_6c6810cc99c628bb0a379a920d99f498 = UNSTREAM_STRING( &constant_bin[ 407956 ], 49, 0 );
    const_str_digest_86581d3cd7fc1938866dd3b1218f2018 = UNSTREAM_STRING( &constant_bin[ 407956 ], 37, 0 );
    const_list_str_digest_86581d3cd7fc1938866dd3b1218f2018_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_86581d3cd7fc1938866dd3b1218f2018_list, 0, const_str_digest_86581d3cd7fc1938866dd3b1218f2018 ); Py_INCREF( const_str_digest_86581d3cd7fc1938866dd3b1218f2018 );
}

// The module code objects.
static PyCodeObject *codeobj_6fbe3f8976f614062e4b4870511b1067;

static void _initModuleCodeObjects(void)
{
    codeobj_6fbe3f8976f614062e4b4870511b1067 = MAKE_CODEOBJ( const_str_digest_6c6810cc99c628bb0a379a920d99f498, const_str_plain_Xlib, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib =
{
    PyModuleDef_HEAD_INIT,
    "Xlib",   /* m_name */
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

MOD_INIT_DECL( Xlib )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib );
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

    // puts( "in initXlib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib = Py_InitModule4(
        "Xlib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib = PyModule_Create( &mdef_Xlib );
#endif

    moduledict_Xlib = (PyDictObject *)((PyModuleObject *)module_Xlib)->md_dict;

    assertObject( module_Xlib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_Xlib, module_Xlib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib );

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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_source_name_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6c6810cc99c628bb0a379a920d99f498;
    UPDATE_STRING_DICT0( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_86581d3cd7fc1938866dd3b1218f2018_list );
    UPDATE_STRING_DICT1( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_tuple_int_0_int_pos_14_tuple;
    UPDATE_STRING_DICT0( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_empty;
    UPDATE_STRING_DICT0( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___version_extra__, tmp_assign_source_5 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_6fbe3f8976f614062e4b4870511b1067, module_Xlib );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = const_str_dot;
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___version__ );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___version__ );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23186 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 23;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 23;
    tmp_binop_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = GET_STRING_DICT_VALUE( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___version_extra__ );

    if (unlikely( tmp_binop_right_1 == NULL ))
    {
        tmp_binop_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___version_extra__ );
    }

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23219 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___version_string__, tmp_assign_source_6 );

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
    tmp_assign_source_7 = LIST_COPY( const_list_cac855bd267849d85fd09d90d4c0b6cc_list );
    UPDATE_STRING_DICT1( moduledict_Xlib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_Xlib );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
