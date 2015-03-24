// Generated code for Python source for module 'scipy'
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

// The _module_scipy is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy;
PyDictObject *moduledict_scipy;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fft;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain__num;
extern PyObject *const_str_plain__sys;
extern PyObject *const_str_plain_ifft;
extern PyObject *const_str_plain_rand;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_randn;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_remove;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_show_config;
extern PyObject *const_str_plain_NumpyVersion;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain__NumpyVersion;
static PyObject *const_list_str_plain_test_list;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain___SCIPY_SETUP__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_show_tuple;
static PyObject *const_str_plain___numpy_version__;
static PyObject *const_str_plain_show_numpy_config;
extern PyObject *const_tuple_str_plain_Tester_tuple;
extern PyObject *const_tuple_str_plain_version_tuple;
extern PyObject *const_tuple_str_plain___version___tuple;
static PyObject *const_tuple_str_plain_show_config_tuple;
extern PyObject *const_tuple_str_plain_NumpyVersion_tuple;
static PyObject *const_tuple_str_plain_fft_str_plain_ifft_tuple;
static PyObject *const_tuple_str_plain_rand_str_plain_randn_tuple;
extern PyObject *const_str_digest_00bca5178c15e5f38c5adbf2138bf46b;
static PyObject *const_str_digest_138a9e63786704a55227a7504de422ff;
extern PyObject *const_str_digest_250a4982694908c58c29a5486e0ff436;
static PyObject *const_str_digest_3ef04b1c4bad2e221ab8bdb7ce5bb803;
static PyObject *const_str_digest_506e45952b0be53cccf79a2b20eb6069;
extern PyObject *const_str_digest_783753e47dfcb01e47cad374f1cc82a6;
extern PyObject *const_str_digest_84b225ef8df4b1024b676eb721c5fe2d;
extern PyObject *const_str_digest_8bffe7a95fe39be1ad9352a24aab382f;
extern PyObject *const_str_digest_8c7708844c265543addfe00e2247b7ad;
static PyObject *const_str_digest_c4bd3d97880fb00150871ea4a7849bb0;
static PyObject *const_str_digest_cd1e3faea2e2c2acb7bff33f60c57269;
static PyObject *const_str_digest_d3496047cd9dcc9d504098dbedd6f98b;
extern PyObject *const_str_digest_d80070d4d75c39594f24b62f60b8481f;
static PyObject *const_str_digest_de394aba95c92d6bdf382389e110083d;
static PyObject *const_str_digest_e5d373a4ed3636146c628a18a4437887;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_list_str_digest_138a9e63786704a55227a7504de422ff_list;
static PyObject *const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list;

static void _initModuleConstants(void)
{
    const_str_plain__num = UNSTREAM_STRING( &constant_bin[ 27097 ], 4, 1 );
    const_str_plain_randn = UNSTREAM_STRING( &constant_bin[ 1234144 ], 5, 1 );
    const_str_plain__NumpyVersion = UNSTREAM_STRING( &constant_bin[ 236359 ], 13, 1 );
    const_list_str_plain_test_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_test_list, 0, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    const_str_plain___SCIPY_SETUP__ = UNSTREAM_STRING( &constant_bin[ 236322 ], 15, 1 );
    const_str_plain___numpy_version__ = UNSTREAM_STRING( &constant_bin[ 236394 ], 17, 1 );
    const_str_plain_show_numpy_config = UNSTREAM_STRING( &constant_bin[ 236229 ], 17, 1 );
    const_tuple_str_plain_show_config_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_show_config_tuple, 0, const_str_plain_show_config ); Py_INCREF( const_str_plain_show_config );
    const_tuple_str_plain_fft_str_plain_ifft_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fft_str_plain_ifft_tuple, 0, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyTuple_SET_ITEM( const_tuple_str_plain_fft_str_plain_ifft_tuple, 1, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
    const_tuple_str_plain_rand_str_plain_randn_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_randn_tuple, 0, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyTuple_SET_ITEM( const_tuple_str_plain_rand_str_plain_randn_tuple, 1, const_str_plain_randn ); Py_INCREF( const_str_plain_randn );
    const_str_digest_138a9e63786704a55227a7504de422ff = UNSTREAM_STRING( &constant_bin[ 2088063 ], 38, 0 );
    const_str_digest_3ef04b1c4bad2e221ab8bdb7ce5bb803 = UNSTREAM_STRING( &constant_bin[ 2088101 ], 5, 0 );
    const_str_digest_506e45952b0be53cccf79a2b20eb6069 = UNSTREAM_STRING( &constant_bin[ 2088106 ], 2750, 0 );
    const_str_digest_c4bd3d97880fb00150871ea4a7849bb0 = UNSTREAM_STRING( &constant_bin[ 2090856 ], 50, 0 );
    const_str_digest_cd1e3faea2e2c2acb7bff33f60c57269 = UNSTREAM_STRING( &constant_bin[ 2090906 ], 83, 0 );
    const_str_digest_d3496047cd9dcc9d504098dbedd6f98b = UNSTREAM_STRING( &constant_bin[ 2090989 ], 37, 0 );
    const_str_digest_de394aba95c92d6bdf382389e110083d = UNSTREAM_STRING( &constant_bin[ 2091026 ], 179, 0 );
    const_str_digest_e5d373a4ed3636146c628a18a4437887 = UNSTREAM_STRING( &constant_bin[ 2091205 ], 61, 0 );
    const_list_str_digest_138a9e63786704a55227a7504de422ff_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_138a9e63786704a55227a7504de422ff_list, 0, const_str_digest_138a9e63786704a55227a7504de422ff ); Py_INCREF( const_str_digest_138a9e63786704a55227a7504de422ff );
    const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list, 0, const_str_plain_randn ); Py_INCREF( const_str_plain_randn );
    PyList_SET_ITEM( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list, 1, const_str_plain_rand ); Py_INCREF( const_str_plain_rand );
    PyList_SET_ITEM( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list, 2, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyList_SET_ITEM( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list, 3, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
}

// The module code objects.
static PyCodeObject *codeobj_04033b63e2f28da99cb473c3d57b1cc6;

static void _initModuleCodeObjects(void)
{
    codeobj_04033b63e2f28da99cb473c3d57b1cc6 = MAKE_CODEOBJ( const_str_digest_c4bd3d97880fb00150871ea4a7849bb0, const_str_plain_scipy, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy =
{
    PyModuleDef_HEAD_INIT,
    "scipy",   /* m_name */
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

MOD_INIT_DECL( scipy )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy );
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

    // puts( "in initscipy" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy = Py_InitModule4(
        "scipy",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy = PyModule_Create( &mdef_scipy );
#endif

    moduledict_scipy = (PyDictObject *)((PyModuleObject *)module_scipy)->md_dict;

    assertObject( module_scipy );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_scipy, module_scipy );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy );

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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
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
    PyObject *tmp_import_globals_18;
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
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_506e45952b0be53cccf79a2b20eb6069;
    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c4bd3d97880fb00150871ea4a7849bb0;
    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_138a9e63786704a55227a7504de422ff_list );
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_04033b63e2f28da99cb473c3d57b1cc6, module_scipy );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 66;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 66;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 66;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_str_plain_test_list );
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 70;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_show_config_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_show_config );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_show_numpy_config, tmp_assign_source_8 );
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_show_numpy_config );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show_numpy_config );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236223 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 71;
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
    tmp_make_exception_arg_1 = const_str_digest_e5d373a4ed3636146c628a18a4437887;
    frame_module->f_lineno = 72;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_module->f_lineno = 72;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 73;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain___version___tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain___version__ );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___numpy_version__, tmp_assign_source_9 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 76;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__num, tmp_assign_source_10 );
    tmp_assign_source_11 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_linalg, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 78;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 79;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_783753e47dfcb01e47cad374f1cc82a6, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_rand_str_plain_randn_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_rand );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_rand, tmp_assign_source_12 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 79;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_783753e47dfcb01e47cad374f1cc82a6, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_rand_str_plain_randn_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_randn );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_randn, tmp_assign_source_13 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 80;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_250a4982694908c58c29a5486e0ff436, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_fft_str_plain_ifft_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_fft );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_fft, tmp_assign_source_14 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 80;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_250a4982694908c58c29a5486e0ff436, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_fft_str_plain_ifft_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ifft );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_ifft, tmp_assign_source_15 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 81;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_digest_00bca5178c15e5f38c5adbf2138bf46b, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    tmp_assign_source_16 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_16 == NULL ))
    {
        tmp_assign_source_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__num );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__num );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236262 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 84;
        goto try_finally_handler_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___all__ );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 84;
        goto try_finally_handler_1;
    }
    tmp_assign_source_17 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 84;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_17;

    tmp_compare_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_18 = tmp_inplace_assign_1__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    branch_no_2:;
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

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_19 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_19 == NULL ))
    {
        tmp_assign_source_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_binop_right_2 = LIST_COPY( const_list_str_plain_randn_str_plain_rand_str_plain_fft_str_plain_ifft_list );
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto try_finally_handler_2;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_20;

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
    tmp_assign_source_21 = tmp_inplace_assign_2__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21 );
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
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain__num );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236262 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain_linalg );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236288 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_remove );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_linalg;
    frame_module->f_lineno = 91;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried block of try/except
    tmp_unused = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__ );

    if (unlikely( tmp_unused == NULL ))
    {
        tmp_unused = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__ );
    }

    if ( tmp_unused == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236316 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 96;
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
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_NameError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_22 = Py_False;
    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__, tmp_assign_source_22 );
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_4:;
    try_except_end_1:;
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__ );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___SCIPY_SETUP__ );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236316 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 102;
    tmp_assign_source_23 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_13, tmp_import_globals_13, Py_None, const_int_0 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__sys, tmp_assign_source_23 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48361 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stderr );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_digest_d3496047cd9dcc9d504098dbedd6f98b;
    frame_module->f_lineno = 103;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain__sys );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48361 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    goto branch_end_5;
    branch_no_5:;
    // Tried block of try/except
    tmp_import_globals_14 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 107;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_8bffe7a95fe39be1ad9352a24aab382f, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_show_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 107;
        goto try_except_handler_2;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_show );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 107;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_show_config, tmp_assign_source_24 );
    goto try_except_end_2;
    try_except_handler_2:;
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
    tmp_compare_left_5 = PyThreadState_GET()->exc_type;
    tmp_compare_right_5 = PyExc_ImportError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_25 = const_str_digest_de394aba95c92d6bdf382389e110083d;
    UPDATE_STRING_DICT0( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_msg, tmp_assign_source_25 );
    tmp_make_exception_arg_2 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_msg );

    if (unlikely( tmp_make_exception_arg_2 == NULL ))
    {
        tmp_make_exception_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_msg );
    }

    if ( tmp_make_exception_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48387 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 112;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_module->f_lineno = 112;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_6;
    branch_no_6:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_6:;
    try_except_end_2:;
    tmp_import_globals_15 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 114;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_8c7708844c265543addfe00e2247b7ad, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_version_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_version );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_26 );
    tmp_import_globals_16 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 115;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_d80070d4d75c39594f24b62f60b8481f, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_NumpyVersion_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_NumpyVersion );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__NumpyVersion, tmp_assign_source_27 );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain__NumpyVersion );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NumpyVersion );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236353 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___numpy_version__ );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___numpy_version__ );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236388 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 116;
    tmp_compare_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = const_str_digest_3ef04b1c4bad2e221ab8bdb7ce5bb803;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_6 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_import_globals_17 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 117;
    tmp_assign_source_28 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_17, tmp_import_globals_17, Py_None, const_int_0 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_28 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4693 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_warn );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = const_str_digest_cd1e3faea2e2c2acb7bff33f60c57269;
    tmp_binop_right_3 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain___numpy_version__ );

    if (unlikely( tmp_binop_right_3 == NULL ))
    {
        tmp_binop_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___numpy_version__ );
    }

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236388 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_call_arg_element_5 == NULL ))
    {
        tmp_call_arg_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97418 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 120;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy, const_str_plain__NumpyVersion );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 236353 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_import_globals_18 = ((PyModuleObject *)module_scipy)->md_dict;
    frame_module->f_lineno = 124;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_84b225ef8df4b1024b676eb721c5fe2d, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_29 );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 125;
    tmp_source_name_6 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_test );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_30 );
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 126;
    tmp_source_name_7 = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_bench );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_31 );
    branch_end_5:;

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

    return MOD_RETURN_VALUE( module_scipy );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
