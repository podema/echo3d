// Generated code for Python source for module 'numpy.lib'
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

// The _module_numpy$lib is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$lib;
PyDictObject *moduledict_numpy$lib;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_lib;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_bench;
static PyObject *const_str_plain_emath;
extern PyObject *const_str_plain_npyio;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_scimath;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_arraypad;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_financial;
extern PyObject *const_str_plain_ufunclike;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_polynomial;
extern PyObject *const_str_plain_shape_base;
extern PyObject *const_str_plain_type_check;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_arraysetops;
extern PyObject *const_str_plain_twodim_base;
extern PyObject *const_str_plain_arrayterator;
extern PyObject *const_str_plain_index_tricks;
extern PyObject *const_str_plain_nanfunctions;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_function_base;
extern PyObject *const_str_plain_stride_tricks;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_Tester_tuple;
extern PyObject *const_tuple_str_plain___doc___tuple;
static PyObject *const_tuple_str_plain_scimath_tuple;
extern PyObject *const_tuple_str_plain_version_tuple;
static PyObject *const_list_str_plain_emath_str_plain_math_list;
extern PyObject *const_str_digest_0b4e4303427381d5eb687ef96e3ca993;
static PyObject *const_str_digest_1354fcfb0e2ca2399f448abb231d5900;
extern PyObject *const_str_digest_2e907e4e986e5c31c19852745e3b9bed;
extern PyObject *const_str_digest_84b225ef8df4b1024b676eb721c5fe2d;
static PyObject *const_str_digest_e65bff91462a5b884315b9401e72e933;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_list_str_digest_e65bff91462a5b884315b9401e72e933_list;

static void _initModuleConstants(void)
{
    const_str_plain_emath = UNSTREAM_STRING( &constant_bin[ 1138803 ], 5, 1 );
    const_tuple_str_plain_scimath_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scimath_tuple, 0, const_str_plain_scimath ); Py_INCREF( const_str_plain_scimath );
    const_list_str_plain_emath_str_plain_math_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_emath_str_plain_math_list, 0, const_str_plain_emath ); Py_INCREF( const_str_plain_emath );
    PyList_SET_ITEM( const_list_str_plain_emath_str_plain_math_list, 1, const_str_plain_math ); Py_INCREF( const_str_plain_math );
    const_str_digest_1354fcfb0e2ca2399f448abb231d5900 = UNSTREAM_STRING( &constant_bin[ 1138808 ], 54, 0 );
    const_str_digest_e65bff91462a5b884315b9401e72e933 = UNSTREAM_STRING( &constant_bin[ 1138808 ], 42, 0 );
    const_list_str_digest_e65bff91462a5b884315b9401e72e933_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_e65bff91462a5b884315b9401e72e933_list, 0, const_str_digest_e65bff91462a5b884315b9401e72e933 ); Py_INCREF( const_str_digest_e65bff91462a5b884315b9401e72e933 );
}

// The module code objects.
static PyCodeObject *codeobj_56f71763bccf0959d4c23c6ce37e4748;

static void _initModuleCodeObjects(void)
{
    codeobj_56f71763bccf0959d4c23c6ce37e4748 = MAKE_CODEOBJ( const_str_digest_1354fcfb0e2ca2399f448abb231d5900, const_str_plain_lib, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib",   /* m_name */
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

MOD_INIT_DECL( numpy$lib )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib );
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

    // puts( "in initnumpy$lib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib = Py_InitModule4(
        "numpy.lib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib = PyModule_Create( &mdef_numpy$lib );
#endif

    moduledict_numpy$lib = (PyDictObject *)((PyModuleObject *)module_numpy$lib)->md_dict;

    assertObject( module_numpy$lib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0b4e4303427381d5eb687ef96e3ca993, module_numpy$lib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib );

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
    PyObjectTempVariable tmp_inplace_assign_3__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_5__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_5__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_6__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_6__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_7__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_7__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_8__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_8__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_9__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_9__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_10__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_10__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_11__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_11__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_12__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_12__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_13__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_13__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_14__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_14__inplace_end;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
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
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_left_8;
    PyObject *tmp_binop_left_9;
    PyObject *tmp_binop_left_10;
    PyObject *tmp_binop_left_11;
    PyObject *tmp_binop_left_12;
    PyObject *tmp_binop_left_13;
    PyObject *tmp_binop_left_14;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
    PyObject *tmp_binop_right_9;
    PyObject *tmp_binop_right_10;
    PyObject *tmp_binop_right_11;
    PyObject *tmp_binop_right_12;
    PyObject *tmp_binop_right_13;
    PyObject *tmp_binop_right_14;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
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
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_globals_22;
    PyObject *tmp_import_globals_23;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    bool tmp_isnot_7;
    bool tmp_isnot_8;
    bool tmp_isnot_9;
    bool tmp_isnot_10;
    bool tmp_isnot_11;
    bool tmp_isnot_12;
    bool tmp_isnot_13;
    bool tmp_isnot_14;
    bool tmp_result;
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
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_star_imported_5;
    PyObject *tmp_star_imported_6;
    PyObject *tmp_star_imported_7;
    PyObject *tmp_star_imported_8;
    PyObject *tmp_star_imported_9;
    PyObject *tmp_star_imported_10;
    PyObject *tmp_star_imported_11;
    PyObject *tmp_star_imported_12;
    PyObject *tmp_star_imported_13;
    PyObject *tmp_star_imported_14;
    PyObject *tmp_star_imported_15;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    int tmp_tried_lineno_9;
    int tmp_tried_lineno_10;
    int tmp_tried_lineno_11;
    int tmp_tried_lineno_12;
    int tmp_tried_lineno_13;
    int tmp_tried_lineno_14;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_1354fcfb0e2ca2399f448abb231d5900;
    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_e65bff91462a5b884315b9401e72e933_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_56f71763bccf0959d4c23c6ce37e4748, module_numpy$lib );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_math, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain___doc___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_2e907e4e986e5c31c19852745e3b9bed, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_version_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_version );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 8;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_type_check, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 9;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_index_tricks, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 10;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_function_base, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_3 );

        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_3 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 11;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_plain_nanfunctions, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_4 );

        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_4 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 12;
    tmp_star_imported_5 = IMPORT_MODULE( const_str_plain_shape_base, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_5 );

        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_5 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 13;
    tmp_star_imported_6 = IMPORT_MODULE( const_str_plain_stride_tricks, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_6 );

        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_6 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 14;
    tmp_star_imported_7 = IMPORT_MODULE( const_str_plain_twodim_base, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_7 );

        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_7 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 15;
    tmp_star_imported_8 = IMPORT_MODULE( const_str_plain_ufunclike, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_8 );

        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_8 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_empty, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_scimath_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_scimath );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_emath, tmp_assign_source_10 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 18;
    tmp_star_imported_9 = IMPORT_MODULE( const_str_plain_polynomial, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_9 );

        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_9 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 20;
    tmp_star_imported_10 = IMPORT_MODULE( const_str_plain_utils, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_10 );

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_10 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 21;
    tmp_star_imported_11 = IMPORT_MODULE( const_str_plain_arraysetops, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_11 );

        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_11 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 22;
    tmp_star_imported_12 = IMPORT_MODULE( const_str_plain_npyio, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_12 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_12 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 23;
    tmp_star_imported_13 = IMPORT_MODULE( const_str_plain_financial, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_13 );

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_13 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 24;
    tmp_star_imported_14 = IMPORT_MODULE( const_str_plain_arrayterator, tmp_import_globals_21, tmp_import_globals_21, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_14 );

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_14 );
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 25;
    tmp_star_imported_15 = IMPORT_MODULE( const_str_plain_arraypad, tmp_import_globals_22, tmp_import_globals_22, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_15 );

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_15 );
    tmp_assign_source_11 = LIST_COPY( const_list_str_plain_emath_str_plain_math_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    tmp_assign_source_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_12 == NULL ))
    {
        tmp_assign_source_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_type_check );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_type_check );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 153999 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 28;
        goto try_finally_handler_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___all__ );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto try_finally_handler_1;
    }
    tmp_assign_source_13 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_13;

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
    tmp_assign_source_14 = tmp_inplace_assign_1__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_14 );
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

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_15 == NULL ))
    {
        tmp_assign_source_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_index_tricks );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_index_tricks );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154031 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto try_finally_handler_2;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___all__ );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto try_finally_handler_2;
    }
    tmp_assign_source_16 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto try_finally_handler_2;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_16;

    tmp_compare_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_17 = tmp_inplace_assign_2__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17 );
    branch_no_2:;
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
    tmp_assign_source_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_18 == NULL ))
    {
        tmp_assign_source_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_3__inplace_start.object == NULL );
    tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    // Tried code
    tmp_binop_left_3 = tmp_inplace_assign_3__inplace_start.object;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_function_base );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52482 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto try_finally_handler_3;
    }

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___all__ );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_finally_handler_3;
    }
    tmp_assign_source_19 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_finally_handler_3;
    }
    assert( tmp_inplace_assign_3__inplace_end.object == NULL );
    tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_19;

    tmp_compare_left_3 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_3 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_3)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_20 = tmp_inplace_assign_3__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_20 );
    branch_no_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_assign_source_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_21 == NULL ))
    {
        tmp_assign_source_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_4__inplace_start.object == NULL );
    tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    // Tried code
    tmp_binop_left_4 = tmp_inplace_assign_4__inplace_start.object;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_shape_base );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shape_base );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52576 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 31;
        goto try_finally_handler_4;
    }

    tmp_binop_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___all__ );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto try_finally_handler_4;
    }
    tmp_assign_source_22 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto try_finally_handler_4;
    }
    assert( tmp_inplace_assign_4__inplace_end.object == NULL );
    tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_22;

    tmp_compare_left_4 = tmp_inplace_assign_4__inplace_start.object;

    tmp_compare_right_4 = tmp_inplace_assign_4__inplace_end.object;

    tmp_isnot_4 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if (tmp_isnot_4)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_23 = tmp_inplace_assign_4__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_23 );
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_4__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_4__inplace_start.object );
        tmp_inplace_assign_4__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_4__inplace_end.object );
    tmp_inplace_assign_4__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto frame_exception_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_assign_source_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_24 == NULL ))
    {
        tmp_assign_source_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_5__inplace_start.object == NULL );
    tmp_inplace_assign_5__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_24 );

    // Tried code
    tmp_binop_left_5 = tmp_inplace_assign_5__inplace_start.object;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_stride_tricks );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stride_tricks );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154065 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto try_finally_handler_5;
    }

    tmp_binop_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___all__ );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto try_finally_handler_5;
    }
    tmp_assign_source_25 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto try_finally_handler_5;
    }
    assert( tmp_inplace_assign_5__inplace_end.object == NULL );
    tmp_inplace_assign_5__inplace_end.object = tmp_assign_source_25;

    tmp_compare_left_5 = tmp_inplace_assign_5__inplace_start.object;

    tmp_compare_right_5 = tmp_inplace_assign_5__inplace_end.object;

    tmp_isnot_5 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_5)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_26 = tmp_inplace_assign_5__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_26 );
    branch_no_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_5__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_5__inplace_start.object );
        tmp_inplace_assign_5__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_5__inplace_end.object );
    tmp_inplace_assign_5__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_5;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto frame_exception_exit_1;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_assign_source_27 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_27 == NULL ))
    {
        tmp_assign_source_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_6__inplace_start.object == NULL );
    tmp_inplace_assign_6__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    // Tried code
    tmp_binop_left_6 = tmp_inplace_assign_6__inplace_start.object;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_twodim_base );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_twodim_base );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154100 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 33;
        goto try_finally_handler_6;
    }

    tmp_binop_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___all__ );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_finally_handler_6;
    }
    tmp_assign_source_28 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_finally_handler_6;
    }
    assert( tmp_inplace_assign_6__inplace_end.object == NULL );
    tmp_inplace_assign_6__inplace_end.object = tmp_assign_source_28;

    tmp_compare_left_6 = tmp_inplace_assign_6__inplace_start.object;

    tmp_compare_right_6 = tmp_inplace_assign_6__inplace_end.object;

    tmp_isnot_6 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if (tmp_isnot_6)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_29 = tmp_inplace_assign_6__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_29 );
    branch_no_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_6__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_6__inplace_start.object );
        tmp_inplace_assign_6__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_6__inplace_end.object );
    tmp_inplace_assign_6__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto frame_exception_exit_1;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_assign_source_30 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_30 == NULL ))
    {
        tmp_assign_source_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_7__inplace_start.object == NULL );
    tmp_inplace_assign_7__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_30 );

    // Tried code
    tmp_binop_left_7 = tmp_inplace_assign_7__inplace_start.object;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_ufunclike );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ufunclike );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154133 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 34;
        goto try_finally_handler_7;
    }

    tmp_binop_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___all__ );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 34;
        goto try_finally_handler_7;
    }
    tmp_assign_source_31 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 34;
        goto try_finally_handler_7;
    }
    assert( tmp_inplace_assign_7__inplace_end.object == NULL );
    tmp_inplace_assign_7__inplace_end.object = tmp_assign_source_31;

    tmp_compare_left_7 = tmp_inplace_assign_7__inplace_start.object;

    tmp_compare_right_7 = tmp_inplace_assign_7__inplace_end.object;

    tmp_isnot_7 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if (tmp_isnot_7)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_32 = tmp_inplace_assign_7__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_32 );
    branch_no_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_7__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_7__inplace_start.object );
        tmp_inplace_assign_7__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_7__inplace_end.object );
    tmp_inplace_assign_7__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto frame_exception_exit_1;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_assign_source_33 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_33 == NULL ))
    {
        tmp_assign_source_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_8__inplace_start.object == NULL );
    tmp_inplace_assign_8__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_33 );

    // Tried code
    tmp_binop_left_8 = tmp_inplace_assign_8__inplace_start.object;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_arraypad );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arraypad );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154164 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 35;
        goto try_finally_handler_8;
    }

    tmp_binop_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___all__ );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto try_finally_handler_8;
    }
    tmp_assign_source_34 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto try_finally_handler_8;
    }
    assert( tmp_inplace_assign_8__inplace_end.object == NULL );
    tmp_inplace_assign_8__inplace_end.object = tmp_assign_source_34;

    tmp_compare_left_8 = tmp_inplace_assign_8__inplace_start.object;

    tmp_compare_right_8 = tmp_inplace_assign_8__inplace_end.object;

    tmp_isnot_8 = ( tmp_compare_left_8 != tmp_compare_right_8 );
    if (tmp_isnot_8)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_35 = tmp_inplace_assign_8__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_35 );
    branch_no_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_8__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_8__inplace_start.object );
        tmp_inplace_assign_8__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_8__inplace_end.object );
    tmp_inplace_assign_8__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto frame_exception_exit_1;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_assign_source_36 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_36 == NULL ))
    {
        tmp_assign_source_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_9__inplace_start.object == NULL );
    tmp_inplace_assign_9__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_36 );

    // Tried code
    tmp_binop_left_9 = tmp_inplace_assign_9__inplace_start.object;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_polynomial );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polynomial );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154194 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 36;
        goto try_finally_handler_9;
    }

    tmp_binop_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___all__ );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto try_finally_handler_9;
    }
    tmp_assign_source_37 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto try_finally_handler_9;
    }
    assert( tmp_inplace_assign_9__inplace_end.object == NULL );
    tmp_inplace_assign_9__inplace_end.object = tmp_assign_source_37;

    tmp_compare_left_9 = tmp_inplace_assign_9__inplace_start.object;

    tmp_compare_right_9 = tmp_inplace_assign_9__inplace_end.object;

    tmp_isnot_9 = ( tmp_compare_left_9 != tmp_compare_right_9 );
    if (tmp_isnot_9)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_38 = tmp_inplace_assign_9__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_38 );
    branch_no_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_9__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_9__inplace_start.object );
        tmp_inplace_assign_9__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_9__inplace_end.object );
    tmp_inplace_assign_9__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto frame_exception_exit_1;
    }

    goto finally_end_9;
    finally_end_9:;
    tmp_assign_source_39 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_39 == NULL ))
    {
        tmp_assign_source_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_10__inplace_start.object == NULL );
    tmp_inplace_assign_10__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_39 );

    // Tried code
    tmp_binop_left_10 = tmp_inplace_assign_10__inplace_start.object;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154226 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto try_finally_handler_10;
    }

    tmp_binop_right_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___all__ );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_10;
    }
    tmp_assign_source_40 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_10;
    }
    assert( tmp_inplace_assign_10__inplace_end.object == NULL );
    tmp_inplace_assign_10__inplace_end.object = tmp_assign_source_40;

    tmp_compare_left_10 = tmp_inplace_assign_10__inplace_start.object;

    tmp_compare_right_10 = tmp_inplace_assign_10__inplace_end.object;

    tmp_isnot_10 = ( tmp_compare_left_10 != tmp_compare_right_10 );
    if (tmp_isnot_10)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_41 = tmp_inplace_assign_10__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_41 );
    branch_no_10:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_10__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_10__inplace_start.object );
        tmp_inplace_assign_10__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_10__inplace_end.object );
    tmp_inplace_assign_10__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto frame_exception_exit_1;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_assign_source_42 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_42 == NULL ))
    {
        tmp_assign_source_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_11__inplace_start.object == NULL );
    tmp_inplace_assign_11__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_42 );

    // Tried code
    tmp_binop_left_11 = tmp_inplace_assign_11__inplace_start.object;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_arraysetops );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arraysetops );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154253 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto try_finally_handler_11;
    }

    tmp_binop_right_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___all__ );
    if ( tmp_binop_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto try_finally_handler_11;
    }
    tmp_assign_source_43 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto try_finally_handler_11;
    }
    assert( tmp_inplace_assign_11__inplace_end.object == NULL );
    tmp_inplace_assign_11__inplace_end.object = tmp_assign_source_43;

    tmp_compare_left_11 = tmp_inplace_assign_11__inplace_start.object;

    tmp_compare_right_11 = tmp_inplace_assign_11__inplace_end.object;

    tmp_isnot_11 = ( tmp_compare_left_11 != tmp_compare_right_11 );
    if (tmp_isnot_11)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_44 = tmp_inplace_assign_11__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_44 );
    branch_no_11:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_11__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_11__inplace_start.object );
        tmp_inplace_assign_11__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_11__inplace_end.object );
    tmp_inplace_assign_11__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto frame_exception_exit_1;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_assign_source_45 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_45 == NULL ))
    {
        tmp_assign_source_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_12__inplace_start.object == NULL );
    tmp_inplace_assign_12__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_45 );

    // Tried code
    tmp_binop_left_12 = tmp_inplace_assign_12__inplace_start.object;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_npyio );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_npyio );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154286 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto try_finally_handler_12;
    }

    tmp_binop_right_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___all__ );
    if ( tmp_binop_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto try_finally_handler_12;
    }
    tmp_assign_source_46 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto try_finally_handler_12;
    }
    assert( tmp_inplace_assign_12__inplace_end.object == NULL );
    tmp_inplace_assign_12__inplace_end.object = tmp_assign_source_46;

    tmp_compare_left_12 = tmp_inplace_assign_12__inplace_start.object;

    tmp_compare_right_12 = tmp_inplace_assign_12__inplace_end.object;

    tmp_isnot_12 = ( tmp_compare_left_12 != tmp_compare_right_12 );
    if (tmp_isnot_12)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_47 = tmp_inplace_assign_12__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_47 );
    branch_no_12:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_12__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_12__inplace_start.object );
        tmp_inplace_assign_12__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_12__inplace_end.object );
    tmp_inplace_assign_12__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto frame_exception_exit_1;
    }

    goto finally_end_12;
    finally_end_12:;
    tmp_assign_source_48 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_48 == NULL ))
    {
        tmp_assign_source_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_13__inplace_start.object == NULL );
    tmp_inplace_assign_13__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_48 );

    // Tried code
    tmp_binop_left_13 = tmp_inplace_assign_13__inplace_start.object;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_financial );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_financial );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154313 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto try_finally_handler_13;
    }

    tmp_binop_right_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___all__ );
    if ( tmp_binop_right_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto try_finally_handler_13;
    }
    tmp_assign_source_49 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_13, tmp_binop_right_13 );
    Py_DECREF( tmp_binop_right_13 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto try_finally_handler_13;
    }
    assert( tmp_inplace_assign_13__inplace_end.object == NULL );
    tmp_inplace_assign_13__inplace_end.object = tmp_assign_source_49;

    tmp_compare_left_13 = tmp_inplace_assign_13__inplace_start.object;

    tmp_compare_right_13 = tmp_inplace_assign_13__inplace_end.object;

    tmp_isnot_13 = ( tmp_compare_left_13 != tmp_compare_right_13 );
    if (tmp_isnot_13)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assign_source_50 = tmp_inplace_assign_13__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_50 );
    branch_no_13:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_13 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_13__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_13__inplace_start.object );
        tmp_inplace_assign_13__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_13__inplace_end.object );
    tmp_inplace_assign_13__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_13;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto frame_exception_exit_1;
    }

    goto finally_end_13;
    finally_end_13:;
    tmp_assign_source_51 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_51 == NULL ))
    {
        tmp_assign_source_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_14__inplace_start.object == NULL );
    tmp_inplace_assign_14__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_51 );

    // Tried code
    tmp_binop_left_14 = tmp_inplace_assign_14__inplace_start.object;

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_nanfunctions );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nanfunctions );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 154344 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto try_finally_handler_14;
    }

    tmp_binop_right_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___all__ );
    if ( tmp_binop_right_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto try_finally_handler_14;
    }
    tmp_assign_source_52 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_14, tmp_binop_right_14 );
    Py_DECREF( tmp_binop_right_14 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto try_finally_handler_14;
    }
    assert( tmp_inplace_assign_14__inplace_end.object == NULL );
    tmp_inplace_assign_14__inplace_end.object = tmp_assign_source_52;

    tmp_compare_left_14 = tmp_inplace_assign_14__inplace_start.object;

    tmp_compare_right_14 = tmp_inplace_assign_14__inplace_end.object;

    tmp_isnot_14 = ( tmp_compare_left_14 != tmp_compare_right_14 );
    if (tmp_isnot_14)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assign_source_53 = tmp_inplace_assign_14__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_53 );
    branch_no_14:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_module->f_lineno;
    tmp_result = tmp_inplace_assign_14__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_14__inplace_start.object );
        tmp_inplace_assign_14__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_14__inplace_end.object );
    tmp_inplace_assign_14__inplace_end.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_14;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto frame_exception_exit_1;
    }

    goto finally_end_14;
    finally_end_14:;
    tmp_import_globals_23 = ((PyModuleObject *)module_numpy$lib)->md_dict;
    frame_module->f_lineno = 43;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_84b225ef8df4b1024b676eb721c5fe2d, tmp_import_globals_23, tmp_import_globals_23, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_54 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 44;
    tmp_source_name_15 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_test );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_55 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 45;
    tmp_source_name_16 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_56 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_bench );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_56 );

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

    return MOD_RETURN_VALUE( module_numpy$lib );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
