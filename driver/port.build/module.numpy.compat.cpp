// Generated code for Python source for module 'numpy.compat'
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

// The _module_numpy$compat is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$compat;
PyDictObject *moduledict_numpy$compat;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_py3k;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain__inspect;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_getargspec;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_formatargspec;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_py3k_tuple;
static PyObject *const_tuple_str_plain__inspect_tuple;
static PyObject *const_str_digest_22327070f70669a47cca9e45da73311f;
static PyObject *const_str_digest_4a2c810ba589d54a811926024f7553d6;
extern PyObject *const_str_digest_9718270fe5d2c916ce2b6f64e75a37af;
static PyObject *const_str_digest_98e779e22781030d18245b495ccaaa10;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_list_str_digest_22327070f70669a47cca9e45da73311f_list;
static PyObject *const_tuple_str_plain_getargspec_str_plain_formatargspec_tuple;

static void _initModuleConstants(void)
{
    const_tuple_str_plain_py3k_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_py3k_tuple, 0, const_str_plain_py3k ); Py_INCREF( const_str_plain_py3k );
    const_tuple_str_plain__inspect_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__inspect_tuple, 0, const_str_plain__inspect ); Py_INCREF( const_str_plain__inspect );
    const_str_digest_22327070f70669a47cca9e45da73311f = UNSTREAM_STRING( &constant_bin[ 630058 ], 45, 0 );
    const_str_digest_4a2c810ba589d54a811926024f7553d6 = UNSTREAM_STRING( &constant_bin[ 630103 ], 239, 0 );
    const_str_digest_98e779e22781030d18245b495ccaaa10 = UNSTREAM_STRING( &constant_bin[ 630342 ], 57, 0 );
    const_list_str_digest_22327070f70669a47cca9e45da73311f_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_22327070f70669a47cca9e45da73311f_list, 0, const_str_digest_22327070f70669a47cca9e45da73311f ); Py_INCREF( const_str_digest_22327070f70669a47cca9e45da73311f );
    const_tuple_str_plain_getargspec_str_plain_formatargspec_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getargspec_str_plain_formatargspec_tuple, 0, const_str_plain_getargspec ); Py_INCREF( const_str_plain_getargspec );
    PyTuple_SET_ITEM( const_tuple_str_plain_getargspec_str_plain_formatargspec_tuple, 1, const_str_plain_formatargspec ); Py_INCREF( const_str_plain_formatargspec );
}

// The module code objects.
static PyCodeObject *codeobj_962262a9316373984f422092d9625ac7;

static void _initModuleCodeObjects(void)
{
    codeobj_962262a9316373984f422092d9625ac7 = MAKE_CODEOBJ( const_str_digest_98e779e22781030d18245b495ccaaa10, const_str_plain_compat, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$compat =
{
    PyModuleDef_HEAD_INIT,
    "numpy.compat",   /* m_name */
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

MOD_INIT_DECL( numpy$compat )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$compat );
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

    // puts( "in initnumpy$compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$compat = Py_InitModule4(
        "numpy.compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$compat = PyModule_Create( &mdef_numpy$compat );
#endif

    moduledict_numpy$compat = (PyDictObject *)((PyModuleObject *)module_numpy$compat)->md_dict;

    assertObject( module_numpy$compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9718270fe5d2c916ce2b6f64e75a37af, module_numpy$compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$compat );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_star_imported_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_4a2c810ba589d54a811926024f7553d6;
    UPDATE_STRING_DICT0( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_98e779e22781030d18245b495ccaaa10;
    UPDATE_STRING_DICT0( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_22327070f70669a47cca9e45da73311f_list );
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_962262a9316373984f422092d9625ac7, module_numpy$compat );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$compat)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$compat)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$compat)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$compat)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain__inspect_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__inspect );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain__inspect, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$compat)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_empty, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_py3k_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_py3k );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain_py3k, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$compat)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain__inspect, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_getargspec_str_plain_formatargspec_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_getargspec );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain_getargspec, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$compat)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain__inspect, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_getargspec_str_plain_formatargspec_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_formatargspec );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain_formatargspec, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$compat)->md_dict;
    frame_module->f_lineno = 16;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_py3k, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$compat, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_assign_source_11 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extend );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain__inspect );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__inspect );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50667 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___all__ );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 19;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$compat, (Nuitka_StringObject *)const_str_plain_py3k );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_py3k );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50697 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___all__ );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 20;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
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

    return MOD_RETURN_VALUE( module_numpy$compat );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
