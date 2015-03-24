// Generated code for Python source for module 'scipy.linalg'
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

// The _module_scipy$linalg is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$linalg;
PyDictObject *moduledict_scipy$linalg;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_det;
extern PyObject *const_str_plain_eig;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_svd;
extern PyObject *const_str_plain_blas;
extern PyObject *const_str_plain_eigh;
extern PyObject *const_str_plain_eval;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_misc;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_pinv;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_basic;
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_str_plain_pinv2;
extern PyObject *const_str_plain_solve;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_angle_string;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_str_plain_decomp;
extern PyObject *const_str_plain_lapack;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_eigvals;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain__solvers;
extern PyObject *const_str_plain_cholesky;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_eigvalsh;
extern PyObject *const_str_plain_matfuncs;
extern PyObject *const_str_plain_decomp_lu;
extern PyObject *const_str_plain_decomp_qr;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain__decomp_qz;
extern PyObject *const_str_plain_decomp_svd;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_decomp_schur;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain__decomp_polar;
extern PyObject *const_str_plain_register_func;
extern PyObject *const_str_plain_linalg_version;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_decomp_cholesky;
extern PyObject *const_str_plain_special_matrices;
extern PyObject *const_tuple_str_plain_Tester_tuple;
extern PyObject *const_tuple_str_plain_register_func_tuple;
static PyObject *const_tuple_str_plain_linalg_version_tuple;
static PyObject *const_str_digest_198ca634007363e76d5180ff24982331;
extern PyObject *const_str_digest_262ad0ce7bf01ce8e1e2cd504c254e3b;
extern PyObject *const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
extern PyObject *const_str_digest_84b225ef8df4b1024b676eb721c5fe2d;
extern PyObject *const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862;
static PyObject *const_str_digest_b0290fae43fd38c076b8b4d3d24ca10b;
static PyObject *const_str_digest_d8a31aef8412a77c84c6c414a5242666;
static PyObject *const_tuple_85a2119870806da2121981bdd7303318_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_list_str_digest_b0290fae43fd38c076b8b4d3d24ca10b_list;

static void _initModuleConstants(void)
{
    const_tuple_str_plain_linalg_version_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_linalg_version_tuple, 0, const_str_plain_linalg_version ); Py_INCREF( const_str_plain_linalg_version );
    const_str_digest_198ca634007363e76d5180ff24982331 = UNSTREAM_STRING( &constant_bin[ 2151286 ], 4709, 0 );
    const_str_digest_b0290fae43fd38c076b8b4d3d24ca10b = UNSTREAM_STRING( &constant_bin[ 2155995 ], 45, 0 );
    const_str_digest_d8a31aef8412a77c84c6c414a5242666 = UNSTREAM_STRING( &constant_bin[ 2156040 ], 57, 0 );
    const_tuple_85a2119870806da2121981bdd7303318_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 0, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 1, const_str_plain_inv ); Py_INCREF( const_str_plain_inv );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 2, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 3, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 4, const_str_plain_det ); Py_INCREF( const_str_plain_det );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 5, const_str_plain_eig ); Py_INCREF( const_str_plain_eig );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 6, const_str_plain_eigh ); Py_INCREF( const_str_plain_eigh );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 7, const_str_plain_eigvals ); Py_INCREF( const_str_plain_eigvals );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 8, const_str_plain_eigvalsh ); Py_INCREF( const_str_plain_eigvalsh );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 9, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    PyTuple_SET_ITEM( const_tuple_85a2119870806da2121981bdd7303318_tuple, 10, const_str_plain_cholesky ); Py_INCREF( const_str_plain_cholesky );
    const_list_str_digest_b0290fae43fd38c076b8b4d3d24ca10b_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_b0290fae43fd38c076b8b4d3d24ca10b_list, 0, const_str_digest_b0290fae43fd38c076b8b4d3d24ca10b ); Py_INCREF( const_str_digest_b0290fae43fd38c076b8b4d3d24ca10b );
}

// The module code objects.
static PyCodeObject *codeobj_d048fbc433dc77a0cecd7b8e8fbc240f;

static void _initModuleCodeObjects(void)
{
    codeobj_d048fbc433dc77a0cecd7b8e8fbc240f = MAKE_CODEOBJ( const_str_digest_d8a31aef8412a77c84c6c414a5242666, const_str_plain_linalg, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$linalg =
{
    PyModuleDef_HEAD_INIT,
    "scipy.linalg",   /* m_name */
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

MOD_INIT_DECL( scipy$linalg )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$linalg );
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

    // puts( "in initscipy$linalg" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$linalg = Py_InitModule4(
        "scipy.linalg",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$linalg = PyModule_Create( &mdef_scipy$linalg );
#endif

    moduledict_scipy$linalg = (PyDictObject *)((PyModuleObject *)module_scipy$linalg)->md_dict;

    assertObject( module_scipy$linalg );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862, module_scipy$linalg );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$linalg );

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
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_eval_1__globals;
    PyObjectTempVariable tmp_eval_1__locals;
    PyObjectTempVariable tmp_eval_1__source;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_eval_compiled_1;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_source_1;
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
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_198ca634007363e76d5180ff24982331;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d8a31aef8412a77c84c6c414a5242666;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_b0290fae43fd38c076b8b4d3d24ca10b_list );
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_d048fbc433dc77a0cecd7b8e8fbc240f, module_scipy$linalg );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 155;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 155;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 155;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 157;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_linalg_version, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_linalg_version_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_linalg_version );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 159;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 160;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_basic, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 161;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_decomp, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_3 );

        frame_module->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_3 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 162;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_plain_decomp_lu, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_4 );

        frame_module->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_4 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 163;
    tmp_star_imported_5 = IMPORT_MODULE( const_str_plain_decomp_cholesky, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_5 );

        frame_module->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_5 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 164;
    tmp_star_imported_6 = IMPORT_MODULE( const_str_plain_decomp_qr, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_6 );

        frame_module->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_6 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 165;
    tmp_star_imported_7 = IMPORT_MODULE( const_str_plain__decomp_qz, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_7 );

        frame_module->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_7 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 166;
    tmp_star_imported_8 = IMPORT_MODULE( const_str_plain_decomp_svd, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_8 );

        frame_module->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_8 );
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 167;
    tmp_star_imported_9 = IMPORT_MODULE( const_str_plain_decomp_schur, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_9 );

        frame_module->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_9 );
    tmp_import_globals_14 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 168;
    tmp_star_imported_10 = IMPORT_MODULE( const_str_plain__decomp_polar, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_10 );

        frame_module->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_10 );
    tmp_import_globals_15 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 169;
    tmp_star_imported_11 = IMPORT_MODULE( const_str_plain_matfuncs, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_11 );

        frame_module->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_11 );
    tmp_import_globals_16 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 170;
    tmp_star_imported_12 = IMPORT_MODULE( const_str_plain_blas, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_12 );

        frame_module->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_12 );
    tmp_import_globals_17 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 171;
    tmp_star_imported_13 = IMPORT_MODULE( const_str_plain_lapack, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_13 );

        frame_module->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_13 );
    tmp_import_globals_18 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 172;
    tmp_star_imported_14 = IMPORT_MODULE( const_str_plain_special_matrices, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_14 );

        frame_module->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_14 );
    tmp_import_globals_19 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 173;
    tmp_star_imported_15 = IMPORT_MODULE( const_str_plain__solvers, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_scipy$linalg, true, tmp_star_imported_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_15 );

        frame_module->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_15 );
    // Tried code
    tmp_assign_source_8 = NULL;
    // Tried code
    tmp_source_name_1 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }
    frame_module->f_lineno = 175;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_9;

    tmp_assign_source_10 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_10;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_11 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 175;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_assign_source_12 = tmp_listcontr_1__iter_value_0.object;

    UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_s, tmp_assign_source_12 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_s );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_s );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45739 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_startswith );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_1 = const_str_plain__;
    frame_module->f_lineno = 175;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_s );

    if (unlikely( tmp_append_value_1 == NULL ))
    {
        tmp_append_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_s );
    }

    if ( tmp_append_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45739 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }

    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 175;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_assign_source_8 = tmp_listcontr_1__listcontr_result.object;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_module->f_lineno;
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_module->f_lineno;
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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
    tmp_import_globals_20 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 177;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_262ad0ce7bf01ce8e1e2cd504c254e3b, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_plain_register_func_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_register_func );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_register_func, tmp_assign_source_13 );
    tmp_iter_arg_2 = const_tuple_85a2119870806da2121981bdd7303318_tuple;
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_14;

    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_15 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 178;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_assign_source_16 = tmp_for_loop_1__iter_value.object;

    UPDATE_STRING_DICT0( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_k, tmp_assign_source_16 );
    // Tried block of try/except
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_register_func );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register_func );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243410 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 181;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_k );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_k );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19412 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 181;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_3 = NULL;
    // Tried code
    tmp_assign_source_17 = Py_None;
    if (tmp_eval_1__globals.object == NULL)
    {
        tmp_eval_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = tmp_eval_1__globals.object;
        tmp_eval_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    tmp_assign_source_18 = Py_None;
    if (tmp_eval_1__locals.object == NULL)
    {
        tmp_eval_1__locals.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = tmp_eval_1__locals.object;
        tmp_eval_1__locals.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = tmp_eval_1__locals.object;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_2 = tmp_eval_1__globals.object;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_19 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_19 = tmp_eval_1__globals.object;

    condexpr_end_1:;
    assert( tmp_eval_1__locals.object != NULL );
    {
        PyObject *old = tmp_eval_1__locals.object;
        tmp_eval_1__locals.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_3 = tmp_eval_1__globals.object;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_20 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    assert( tmp_eval_1__globals.object != NULL );
    {
        PyObject *old = tmp_eval_1__globals.object;
        tmp_eval_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_assign_source_21 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_k );

    if (unlikely( tmp_assign_source_21 == NULL ))
    {
        tmp_assign_source_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_k );
    }

    if ( tmp_assign_source_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19412 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 181;
        goto try_finally_handler_4;
    }

    if (tmp_eval_1__source.object == NULL)
    {
        tmp_eval_1__source.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
    }
    else
    {
        PyObject *old = tmp_eval_1__source.object;
        tmp_eval_1__source.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }
    tmp_isinstance_inst_1 = tmp_eval_1__source.object;

    tmp_isinstance_cls_1 = (PyObject *)&PyCode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 181;
        goto try_finally_handler_4;
    }
    if (tmp_res == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = tmp_eval_1__source.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_strip );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 181;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_4 = const_str_digest_36a0ff6adef8f150baa070bcc241cce5;
    frame_module->f_lineno = 181;
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 181;
        goto try_finally_handler_4;
    }
    assert( tmp_eval_1__source.object != NULL );
    {
        PyObject *old = tmp_eval_1__source.object;
        tmp_eval_1__source.object = tmp_assign_source_22;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_eval_source_1 = tmp_eval_1__source.object;

    tmp_eval_globals_1 = tmp_eval_1__globals.object;

    tmp_eval_locals_1 = tmp_eval_1__locals.object;

    tmp_eval_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_eval, NULL, NULL );
    if ( tmp_eval_compiled_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 181;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_3 = EVAL_CODE( tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_eval_compiled_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 181;
        goto try_finally_handler_4;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_module->f_lineno;
    tmp_result = tmp_eval_1__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_1__globals.object );
        tmp_eval_1__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_eval_1__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_eval_1__locals.object );
        tmp_eval_1__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_eval_1__source.object );
    tmp_eval_1__source.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_except_handler_1;
    }

    goto finally_end_3;
    finally_end_3:;
    frame_module->f_lineno = 181;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 181;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
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
    tmp_compare_right_4 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 182;
        goto try_finally_handler_3;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_3;
    branch_no_5:;
    try_except_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 178;
        goto try_finally_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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
    // Tried block of try/except
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_register_func );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register_func );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243410 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 186;
        goto try_except_handler_2;
    }

    tmp_call_arg_element_5 = const_str_plain_pinv;
    tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_pinv2 );

    if (unlikely( tmp_call_arg_element_6 == NULL ))
    {
        tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pinv2 );
    }

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243445 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 186;
        goto try_except_handler_2;
    }

    frame_module->f_lineno = 186;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 186;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
    tmp_compare_right_5 = PyExc_ValueError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_no_6:;
    try_except_end_2:;
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$linalg, const_str_plain_k );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19412 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_scipy$linalg, const_str_plain_register_func );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243410 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_import_globals_21 = ((PyModuleObject *)module_scipy$linalg)->md_dict;
    frame_module->f_lineno = 192;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_84b225ef8df4b1024b676eb721c5fe2d, tmp_import_globals_21, tmp_import_globals_21, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_23 );
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 193;
    tmp_source_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_test );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_24 );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 194;
    tmp_source_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bench );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$linalg, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_25 );

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

    return MOD_RETURN_VALUE( module_scipy$linalg );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
