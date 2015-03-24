// Generated code for Python source for module 'scipy.sparse.linalg.dsolve._add_newdocs'
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

// The _module_scipy$sparse$linalg$dsolve$_add_newdocs is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$linalg$dsolve$_add_newdocs;
PyDictObject *moduledict_scipy$sparse$linalg$dsolve$_add_newdocs;

// The module constants used
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_L;
extern PyObject *const_str_plain_U;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_nnz;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_solve;
static PyObject *const_str_plain_perm_c;
static PyObject *const_str_plain_perm_r;
extern PyObject *const_str_plain_SuperLU;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_add_newdoc;
extern PyObject *const_str_plain__add_newdocs;
extern PyObject *const_tuple_str_plain_add_newdoc_tuple;
static PyObject *const_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d;
static PyObject *const_str_digest_04b02f9ba61861b236970a80894cd20e;
extern PyObject *const_str_digest_0b4e4303427381d5eb687ef96e3ca993;
static PyObject *const_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87;
static PyObject *const_str_digest_420958672166c590cd479ceab2ae7440;
static PyObject *const_str_digest_5f31c399b296424cf8f2926b2c534274;
static PyObject *const_str_digest_816907a74b4c88201f222332f4df14de;
static PyObject *const_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71;
static PyObject *const_str_digest_b258f3179c7705f230a8de5bff6c8907;
static PyObject *const_str_digest_c257d4d52307571e2e7299e92f1d2ca7;
static PyObject *const_str_digest_c849b711101905cbc7651608f2385276;
static PyObject *const_str_digest_e26747786cd87b4ea6fad8f1af133c4f;
static PyObject *const_tuple_str_plain_L_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87_tuple;
static PyObject *const_tuple_str_plain_U_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d_tuple;
static PyObject *const_tuple_str_plain_nnz_str_digest_420958672166c590cd479ceab2ae7440_tuple;
static PyObject *const_tuple_str_plain_shape_str_digest_04b02f9ba61861b236970a80894cd20e_tuple;
static PyObject *const_tuple_str_plain_solve_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71_tuple;
static PyObject *const_tuple_str_plain_perm_c_str_digest_816907a74b4c88201f222332f4df14de_tuple;
static PyObject *const_tuple_str_plain_perm_r_str_digest_5f31c399b296424cf8f2926b2c534274_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_perm_c = UNSTREAM_STRING( &constant_bin[ 2384282 ], 6, 1 );
    const_str_plain_perm_r = UNSTREAM_STRING( &constant_bin[ 2384288 ], 6, 1 );
    const_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d = UNSTREAM_STRING( &constant_bin[ 2384294 ], 95, 0 );
    const_str_digest_04b02f9ba61861b236970a80894cd20e = UNSTREAM_STRING( &constant_bin[ 2384389 ], 58, 0 );
    const_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87 = UNSTREAM_STRING( &constant_bin[ 2384447 ], 118, 0 );
    const_str_digest_420958672166c590cd479ceab2ae7440 = UNSTREAM_STRING( &constant_bin[ 2384565 ], 51, 0 );
    const_str_digest_5f31c399b296424cf8f2926b2c534274 = UNSTREAM_STRING( &constant_bin[ 2384616 ], 186, 0 );
    const_str_digest_816907a74b4c88201f222332f4df14de = UNSTREAM_STRING( &constant_bin[ 2384802 ], 189, 0 );
    const_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71 = UNSTREAM_STRING( &constant_bin[ 2384991 ], 539, 0 );
    const_str_digest_b258f3179c7705f230a8de5bff6c8907 = UNSTREAM_STRING( &constant_bin[ 2385530 ], 35, 0 );
    const_str_digest_c257d4d52307571e2e7299e92f1d2ca7 = UNSTREAM_STRING( &constant_bin[ 2385565 ], 1838, 0 );
    const_str_digest_c849b711101905cbc7651608f2385276 = UNSTREAM_STRING( &constant_bin[ 2387403 ], 39, 0 );
    const_str_digest_e26747786cd87b4ea6fad8f1af133c4f = UNSTREAM_STRING( &constant_bin[ 2387442 ], 75, 0 );
    const_tuple_str_plain_L_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_L_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87_tuple, 0, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyTuple_SET_ITEM( const_tuple_str_plain_L_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87_tuple, 1, const_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87 ); Py_INCREF( const_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87 );
    const_tuple_str_plain_U_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_U_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d_tuple, 0, const_str_plain_U ); Py_INCREF( const_str_plain_U );
    PyTuple_SET_ITEM( const_tuple_str_plain_U_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d_tuple, 1, const_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d ); Py_INCREF( const_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d );
    const_tuple_str_plain_nnz_str_digest_420958672166c590cd479ceab2ae7440_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_nnz_str_digest_420958672166c590cd479ceab2ae7440_tuple, 0, const_str_plain_nnz ); Py_INCREF( const_str_plain_nnz );
    PyTuple_SET_ITEM( const_tuple_str_plain_nnz_str_digest_420958672166c590cd479ceab2ae7440_tuple, 1, const_str_digest_420958672166c590cd479ceab2ae7440 ); Py_INCREF( const_str_digest_420958672166c590cd479ceab2ae7440 );
    const_tuple_str_plain_shape_str_digest_04b02f9ba61861b236970a80894cd20e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_shape_str_digest_04b02f9ba61861b236970a80894cd20e_tuple, 0, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_shape_str_digest_04b02f9ba61861b236970a80894cd20e_tuple, 1, const_str_digest_04b02f9ba61861b236970a80894cd20e ); Py_INCREF( const_str_digest_04b02f9ba61861b236970a80894cd20e );
    const_tuple_str_plain_solve_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_solve_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71_tuple, 0, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyTuple_SET_ITEM( const_tuple_str_plain_solve_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71_tuple, 1, const_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71 ); Py_INCREF( const_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71 );
    const_tuple_str_plain_perm_c_str_digest_816907a74b4c88201f222332f4df14de_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_perm_c_str_digest_816907a74b4c88201f222332f4df14de_tuple, 0, const_str_plain_perm_c ); Py_INCREF( const_str_plain_perm_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_perm_c_str_digest_816907a74b4c88201f222332f4df14de_tuple, 1, const_str_digest_816907a74b4c88201f222332f4df14de ); Py_INCREF( const_str_digest_816907a74b4c88201f222332f4df14de );
    const_tuple_str_plain_perm_r_str_digest_5f31c399b296424cf8f2926b2c534274_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_perm_r_str_digest_5f31c399b296424cf8f2926b2c534274_tuple, 0, const_str_plain_perm_r ); Py_INCREF( const_str_plain_perm_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_perm_r_str_digest_5f31c399b296424cf8f2926b2c534274_tuple, 1, const_str_digest_5f31c399b296424cf8f2926b2c534274 ); Py_INCREF( const_str_digest_5f31c399b296424cf8f2926b2c534274 );
}

// The module code objects.
static PyCodeObject *codeobj_32f1edefc9de855eb82539e2d31b6fea;

static void _initModuleCodeObjects(void)
{
    codeobj_32f1edefc9de855eb82539e2d31b6fea = MAKE_CODEOBJ( const_str_digest_e26747786cd87b4ea6fad8f1af133c4f, const_str_plain__add_newdocs, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$dsolve$_add_newdocs =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.dsolve._add_newdocs",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$linalg$dsolve$_add_newdocs )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$dsolve$_add_newdocs );
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

    // puts( "in initscipy$sparse$linalg$dsolve$_add_newdocs" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$dsolve$_add_newdocs = Py_InitModule4(
        "scipy.sparse.linalg.dsolve._add_newdocs",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$linalg$dsolve$_add_newdocs = PyModule_Create( &mdef_scipy$sparse$linalg$dsolve$_add_newdocs );
#endif

    moduledict_scipy$sparse$linalg$dsolve$_add_newdocs = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$linalg$dsolve$_add_newdocs)->md_dict;

    assertObject( module_scipy$sparse$linalg$dsolve$_add_newdocs );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c849b711101905cbc7651608f2385276, module_scipy$sparse$linalg$dsolve$_add_newdocs );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$linalg$dsolve$_add_newdocs );

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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_name_from_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e26747786cd87b4ea6fad8f1af133c4f;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_32f1edefc9de855eb82539e2d31b6fea, module_scipy$sparse$linalg$dsolve$_add_newdocs );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$dsolve$_add_newdocs)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_0b4e4303427381d5eb687ef96e3ca993, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_add_newdoc_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_add_newdoc );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc, tmp_assign_source_3 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_newdoc );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50635 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_digest_b258f3179c7705f230a8de5bff6c8907;
    tmp_call_arg_element_2 = const_str_plain_SuperLU;
    tmp_call_arg_element_3 = const_str_digest_c257d4d52307571e2e7299e92f1d2ca7;
    frame_module->f_lineno = 81;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_newdoc );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50635 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = const_str_digest_b258f3179c7705f230a8de5bff6c8907;
    tmp_call_arg_element_5 = const_str_plain_SuperLU;
    tmp_call_arg_element_6 = const_tuple_str_plain_solve_str_digest_b20cd619a847e4b2e6f0f54a0a06cd71_tuple;
    frame_module->f_lineno = 106;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_newdoc );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50635 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = const_str_digest_b258f3179c7705f230a8de5bff6c8907;
    tmp_call_arg_element_8 = const_str_plain_SuperLU;
    tmp_call_arg_element_9 = const_tuple_str_plain_L_str_digest_251ffae1e0a48e2e1bade1f7fb6d3c87_tuple;
    frame_module->f_lineno = 114;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_newdoc );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50635 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = const_str_digest_b258f3179c7705f230a8de5bff6c8907;
    tmp_call_arg_element_11 = const_str_plain_SuperLU;
    tmp_call_arg_element_12 = const_tuple_str_plain_U_str_digest_011bc40397dbbd24aa7ed3d6ca87f99d_tuple;
    frame_module->f_lineno = 121;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_newdoc );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50635 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = const_str_digest_b258f3179c7705f230a8de5bff6c8907;
    tmp_call_arg_element_14 = const_str_plain_SuperLU;
    tmp_call_arg_element_15 = const_tuple_str_plain_shape_str_digest_04b02f9ba61861b236970a80894cd20e_tuple;
    frame_module->f_lineno = 126;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_newdoc );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50635 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = const_str_digest_b258f3179c7705f230a8de5bff6c8907;
    tmp_call_arg_element_17 = const_str_plain_SuperLU;
    tmp_call_arg_element_18 = const_tuple_str_plain_nnz_str_digest_420958672166c590cd479ceab2ae7440_tuple;
    frame_module->f_lineno = 131;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_newdoc );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50635 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = const_str_digest_b258f3179c7705f230a8de5bff6c8907;
    tmp_call_arg_element_20 = const_str_plain_SuperLU;
    tmp_call_arg_element_21 = const_tuple_str_plain_perm_c_str_digest_816907a74b4c88201f222332f4df14de_tuple;
    frame_module->f_lineno = 141;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$dsolve$_add_newdocs, (Nuitka_StringObject *)const_str_plain_add_newdoc );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add_newdoc );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50635 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = const_str_digest_b258f3179c7705f230a8de5bff6c8907;
    tmp_call_arg_element_23 = const_str_plain_SuperLU;
    tmp_call_arg_element_24 = const_tuple_str_plain_perm_r_str_digest_5f31c399b296424cf8f2926b2c534274_tuple;
    frame_module->f_lineno = 151;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$dsolve$_add_newdocs );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
