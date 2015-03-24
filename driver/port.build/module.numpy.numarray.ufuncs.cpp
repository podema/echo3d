// Generated code for Python source for module 'numpy.numarray.ufuncs'
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

// The _module_numpy$numarray$ufuncs is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$numarray$ufuncs;
PyDictObject *moduledict_numpy$numarray$ufuncs;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_cos;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_sin;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_tan;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_cosh;
extern PyObject *const_str_plain_fabs;
extern PyObject *const_str_plain_fmod;
extern PyObject *const_str_plain_less;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_sinh;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_tanh;
extern PyObject *const_str_plain_equal;
extern PyObject *const_str_plain_floor;
extern PyObject *const_str_plain_hypot;
extern PyObject *const_str_plain_isnan;
extern PyObject *const_str_plain_log10;
static PyObject *const_str_plain_minus;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain_arccos;
extern PyObject *const_str_plain_arcsin;
extern PyObject *const_str_plain_arctan;
extern PyObject *const_str_plain_divide;
extern PyObject *const_str_plain_invert;
static PyObject *const_str_plain_lshift;
static PyObject *const_str_plain_rshift;
extern PyObject *const_str_plain_ufuncs;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_arccosh;
extern PyObject *const_str_plain_arcsinh;
extern PyObject *const_str_plain_arctan2;
extern PyObject *const_str_plain_arctanh;
extern PyObject *const_str_plain_greater;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_str_plain_minimum;
extern PyObject *const_str_plain_product;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_absolute;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_multiply;
extern PyObject *const_str_plain_negative;
extern PyObject *const_str_plain_subtract;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_not_equal;
extern PyObject *const_str_plain_remainder;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_bitwise_or;
extern PyObject *const_str_plain_left_shift;
extern PyObject *const_str_plain_less_equal;
extern PyObject *const_str_plain_logical_or;
extern PyObject *const_str_plain_bitwise_and;
extern PyObject *const_str_plain_bitwise_not;
extern PyObject *const_str_plain_bitwise_xor;
extern PyObject *const_str_plain_logical_and;
extern PyObject *const_str_plain_logical_not;
extern PyObject *const_str_plain_logical_xor;
extern PyObject *const_str_plain_right_shift;
extern PyObject *const_str_plain_true_divide;
extern PyObject *const_str_plain_floor_divide;
extern PyObject *const_str_plain_greater_equal;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_list_e44e0103b99d749c8e5d4b3bcb775721_list;
static PyObject *const_str_digest_2b8511175271e3acddf065739b103eb6;
static PyObject *const_str_digest_f3f2827eba02ec614bd94902d7db0f1b;
static PyObject *const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_minus = UNSTREAM_STRING( &constant_bin[ 812224 ], 5, 1 );
    const_str_plain_lshift = UNSTREAM_STRING( &constant_bin[ 1706120 ], 6, 1 );
    const_str_plain_rshift = UNSTREAM_STRING( &constant_bin[ 1706126 ], 6, 1 );
    const_list_e44e0103b99d749c8e5d4b3bcb775721_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1706132 ], 668 );
    const_str_digest_2b8511175271e3acddf065739b103eb6 = UNSTREAM_STRING( &constant_bin[ 1706800 ], 57, 0 );
    const_str_digest_f3f2827eba02ec614bd94902d7db0f1b = UNSTREAM_STRING( &constant_bin[ 1706857 ], 21, 0 );
    const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1706878 ], 664 );
}

// The module code objects.
static PyCodeObject *codeobj_2e1dc163b26878bccb2619827fe26315;

static void _initModuleCodeObjects(void)
{
    codeobj_2e1dc163b26878bccb2619827fe26315 = MAKE_CODEOBJ( const_str_digest_2b8511175271e3acddf065739b103eb6, const_str_plain_ufuncs, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$numarray$ufuncs =
{
    PyModuleDef_HEAD_INIT,
    "numpy.numarray.ufuncs",   /* m_name */
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

MOD_INIT_DECL( numpy$numarray$ufuncs )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$numarray$ufuncs );
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

    // puts( "in initnumpy$numarray$ufuncs" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$numarray$ufuncs = Py_InitModule4(
        "numpy.numarray.ufuncs",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$numarray$ufuncs = PyModule_Create( &mdef_numpy$numarray$ufuncs );
#endif

    moduledict_numpy$numarray$ufuncs = (PyDictObject *)((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;

    assertObject( module_numpy$numarray$ufuncs );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f3f2827eba02ec614bd94902d7db0f1b, module_numpy$numarray$ufuncs );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$numarray$ufuncs );

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
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
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
    PyObject *tmp_import_globals_24;
    PyObject *tmp_import_globals_25;
    PyObject *tmp_import_globals_26;
    PyObject *tmp_import_globals_27;
    PyObject *tmp_import_globals_28;
    PyObject *tmp_import_globals_29;
    PyObject *tmp_import_globals_30;
    PyObject *tmp_import_globals_31;
    PyObject *tmp_import_globals_32;
    PyObject *tmp_import_globals_33;
    PyObject *tmp_import_globals_34;
    PyObject *tmp_import_globals_35;
    PyObject *tmp_import_globals_36;
    PyObject *tmp_import_globals_37;
    PyObject *tmp_import_globals_38;
    PyObject *tmp_import_globals_39;
    PyObject *tmp_import_globals_40;
    PyObject *tmp_import_globals_41;
    PyObject *tmp_import_globals_42;
    PyObject *tmp_import_globals_43;
    PyObject *tmp_import_globals_44;
    PyObject *tmp_import_globals_45;
    PyObject *tmp_import_globals_46;
    PyObject *tmp_import_globals_47;
    PyObject *tmp_import_globals_48;
    PyObject *tmp_import_globals_49;
    PyObject *tmp_import_globals_50;
    PyObject *tmp_import_globals_51;
    PyObject *tmp_import_globals_52;
    PyObject *tmp_import_globals_53;
    PyObject *tmp_import_globals_54;
    PyObject *tmp_import_globals_55;
    PyObject *tmp_import_globals_56;
    PyObject *tmp_import_globals_57;
    PyObject *tmp_import_globals_58;
    PyObject *tmp_import_globals_59;
    PyObject *tmp_import_globals_60;
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
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_import_name_from_35;
    PyObject *tmp_import_name_from_36;
    PyObject *tmp_import_name_from_37;
    PyObject *tmp_import_name_from_38;
    PyObject *tmp_import_name_from_39;
    PyObject *tmp_import_name_from_40;
    PyObject *tmp_import_name_from_41;
    PyObject *tmp_import_name_from_42;
    PyObject *tmp_import_name_from_43;
    PyObject *tmp_import_name_from_44;
    PyObject *tmp_import_name_from_45;
    PyObject *tmp_import_name_from_46;
    PyObject *tmp_import_name_from_47;
    PyObject *tmp_import_name_from_48;
    PyObject *tmp_import_name_from_49;
    PyObject *tmp_import_name_from_50;
    PyObject *tmp_import_name_from_51;
    PyObject *tmp_import_name_from_52;
    PyObject *tmp_import_name_from_53;
    PyObject *tmp_import_name_from_54;
    PyObject *tmp_import_name_from_55;
    PyObject *tmp_import_name_from_56;
    PyObject *tmp_import_name_from_57;
    PyObject *tmp_import_name_from_58;
    PyObject *tmp_import_name_from_59;
    PyObject *tmp_import_name_from_60;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_2b8511175271e3acddf065739b103eb6;
    UPDATE_STRING_DICT0( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_2e1dc163b26878bccb2619827fe26315, module_numpy$numarray$ufuncs );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_e44e0103b99d749c8e5d4b3bcb775721_list );
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_absolute );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_abs, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_absolute );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_absolute, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_add );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_add, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_arccos );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_arccos, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_8, tmp_import_globals_8, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_arccosh );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_arccosh, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_9, tmp_import_globals_9, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_arcsin );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_arcsin, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_10, tmp_import_globals_10, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_arcsinh );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_arcsinh, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_11, tmp_import_globals_11, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_arctan );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_arctan, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_12, tmp_import_globals_12, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_arctan2 );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_arctan2, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_13, tmp_import_globals_13, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_arctanh );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_arctanh, tmp_assign_source_16 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_14, tmp_import_globals_14, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_bitwise_and );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_bitwise_and, tmp_assign_source_17 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_15, tmp_import_globals_15, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_invert );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_bitwise_not, tmp_assign_source_18 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_16, tmp_import_globals_16, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_bitwise_or );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_bitwise_or, tmp_assign_source_19 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_17, tmp_import_globals_17, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_bitwise_xor );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_bitwise_xor, tmp_assign_source_20 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_18, tmp_import_globals_18, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_ceil );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_ceil, tmp_assign_source_21 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_19, tmp_import_globals_19, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_cos );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_cos, tmp_assign_source_22 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_20, tmp_import_globals_20, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_cosh );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_cosh, tmp_assign_source_23 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_21, tmp_import_globals_21, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_divide );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_divide, tmp_assign_source_24 );
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_22, tmp_import_globals_22, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_equal );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_equal, tmp_assign_source_25 );
    tmp_import_globals_23 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_23, tmp_import_globals_23, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_exp );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_exp, tmp_assign_source_26 );
    tmp_import_globals_24 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_24 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_24, tmp_import_globals_24, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_fabs );
    Py_DECREF( tmp_import_name_from_24 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_fabs, tmp_assign_source_27 );
    tmp_import_globals_25 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_25 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_25, tmp_import_globals_25, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_floor );
    Py_DECREF( tmp_import_name_from_25 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_floor, tmp_assign_source_28 );
    tmp_import_globals_26 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_26 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_26, tmp_import_globals_26, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_floor_divide );
    Py_DECREF( tmp_import_name_from_26 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_floor_divide, tmp_assign_source_29 );
    tmp_import_globals_27 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_27 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_27, tmp_import_globals_27, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_fmod );
    Py_DECREF( tmp_import_name_from_27 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_fmod, tmp_assign_source_30 );
    tmp_import_globals_28 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_28 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_28, tmp_import_globals_28, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_greater );
    Py_DECREF( tmp_import_name_from_28 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_greater, tmp_assign_source_31 );
    tmp_import_globals_29 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_29 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_29, tmp_import_globals_29, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_greater_equal );
    Py_DECREF( tmp_import_name_from_29 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_greater_equal, tmp_assign_source_32 );
    tmp_import_globals_30 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_30 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_30, tmp_import_globals_30, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_hypot );
    Py_DECREF( tmp_import_name_from_30 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_hypot, tmp_assign_source_33 );
    tmp_import_globals_31 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_31 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_31, tmp_import_globals_31, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_isnan );
    Py_DECREF( tmp_import_name_from_31 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_isnan, tmp_assign_source_34 );
    tmp_import_globals_32 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_32 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_32, tmp_import_globals_32, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_less );
    Py_DECREF( tmp_import_name_from_32 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_less, tmp_assign_source_35 );
    tmp_import_globals_33 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_33 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_33, tmp_import_globals_33, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_less_equal );
    Py_DECREF( tmp_import_name_from_33 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_less_equal, tmp_assign_source_36 );
    tmp_import_globals_34 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_34 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_34, tmp_import_globals_34, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_34 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_37 );
    tmp_import_globals_35 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_35 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_35, tmp_import_globals_35, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_log10 );
    Py_DECREF( tmp_import_name_from_35 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_log10, tmp_assign_source_38 );
    tmp_import_globals_36 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_36 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_36, tmp_import_globals_36, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_logical_and );
    Py_DECREF( tmp_import_name_from_36 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_logical_and, tmp_assign_source_39 );
    tmp_import_globals_37 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_37 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_37, tmp_import_globals_37, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain_logical_not );
    Py_DECREF( tmp_import_name_from_37 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_logical_not, tmp_assign_source_40 );
    tmp_import_globals_38 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_38 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_38, tmp_import_globals_38, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_38, const_str_plain_logical_or );
    Py_DECREF( tmp_import_name_from_38 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_logical_or, tmp_assign_source_41 );
    tmp_import_globals_39 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_39 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_39, tmp_import_globals_39, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_39, const_str_plain_logical_xor );
    Py_DECREF( tmp_import_name_from_39 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_logical_xor, tmp_assign_source_42 );
    tmp_import_globals_40 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_40 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_40, tmp_import_globals_40, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_40, const_str_plain_left_shift );
    Py_DECREF( tmp_import_name_from_40 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_lshift, tmp_assign_source_43 );
    tmp_import_globals_41 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_41 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_41, tmp_import_globals_41, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_41, const_str_plain_maximum );
    Py_DECREF( tmp_import_name_from_41 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_maximum, tmp_assign_source_44 );
    tmp_import_globals_42 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_42 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_42, tmp_import_globals_42, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_42, const_str_plain_minimum );
    Py_DECREF( tmp_import_name_from_42 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_minimum, tmp_assign_source_45 );
    tmp_import_globals_43 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_43 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_43, tmp_import_globals_43, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_43, const_str_plain_negative );
    Py_DECREF( tmp_import_name_from_43 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_minus, tmp_assign_source_46 );
    tmp_import_globals_44 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_44 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_44, tmp_import_globals_44, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_44, const_str_plain_multiply );
    Py_DECREF( tmp_import_name_from_44 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_multiply, tmp_assign_source_47 );
    tmp_import_globals_45 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_45 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_45, tmp_import_globals_45, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_45, const_str_plain_negative );
    Py_DECREF( tmp_import_name_from_45 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_negative, tmp_assign_source_48 );
    tmp_import_globals_46 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_46 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_46, tmp_import_globals_46, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_46, const_str_plain_not_equal );
    Py_DECREF( tmp_import_name_from_46 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_not_equal, tmp_assign_source_49 );
    tmp_import_globals_47 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_47 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_47, tmp_import_globals_47, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_47, const_str_plain_power );
    Py_DECREF( tmp_import_name_from_47 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_power, tmp_assign_source_50 );
    tmp_import_globals_48 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_48 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_48, tmp_import_globals_48, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_51 = IMPORT_NAME( tmp_import_name_from_48, const_str_plain_product );
    Py_DECREF( tmp_import_name_from_48 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_product, tmp_assign_source_51 );
    tmp_import_globals_49 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_49 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_49, tmp_import_globals_49, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_49, const_str_plain_remainder );
    Py_DECREF( tmp_import_name_from_49 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_remainder, tmp_assign_source_52 );
    tmp_import_globals_50 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_50 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_50, tmp_import_globals_50, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_53 = IMPORT_NAME( tmp_import_name_from_50, const_str_plain_right_shift );
    Py_DECREF( tmp_import_name_from_50 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_rshift, tmp_assign_source_53 );
    tmp_import_globals_51 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_51 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_51, tmp_import_globals_51, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_51, const_str_plain_sin );
    Py_DECREF( tmp_import_name_from_51 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_sin, tmp_assign_source_54 );
    tmp_import_globals_52 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_52 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_52, tmp_import_globals_52, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_55 = IMPORT_NAME( tmp_import_name_from_52, const_str_plain_sinh );
    Py_DECREF( tmp_import_name_from_52 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_sinh, tmp_assign_source_55 );
    tmp_import_globals_53 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_53 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_53, tmp_import_globals_53, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_56 = IMPORT_NAME( tmp_import_name_from_53, const_str_plain_sqrt );
    Py_DECREF( tmp_import_name_from_53 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_56 );
    tmp_import_globals_54 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_54 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_54, tmp_import_globals_54, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_57 = IMPORT_NAME( tmp_import_name_from_54, const_str_plain_subtract );
    Py_DECREF( tmp_import_name_from_54 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_subtract, tmp_assign_source_57 );
    tmp_import_globals_55 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_55 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_55, tmp_import_globals_55, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_58 = IMPORT_NAME( tmp_import_name_from_55, const_str_plain_sum );
    Py_DECREF( tmp_import_name_from_55 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_sum, tmp_assign_source_58 );
    tmp_import_globals_56 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_56 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_56, tmp_import_globals_56, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_59 = IMPORT_NAME( tmp_import_name_from_56, const_str_plain_tan );
    Py_DECREF( tmp_import_name_from_56 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_tan, tmp_assign_source_59 );
    tmp_import_globals_57 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_57 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_57, tmp_import_globals_57, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_60 = IMPORT_NAME( tmp_import_name_from_57, const_str_plain_tanh );
    Py_DECREF( tmp_import_name_from_57 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_tanh, tmp_assign_source_60 );
    tmp_import_globals_58 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_58 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_58, tmp_import_globals_58, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_61 = IMPORT_NAME( tmp_import_name_from_58, const_str_plain_true_divide );
    Py_DECREF( tmp_import_name_from_58 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_true_divide, tmp_assign_source_61 );
    tmp_import_globals_59 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_59 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_59, tmp_import_globals_59, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_62 = IMPORT_NAME( tmp_import_name_from_59, const_str_plain_conjugate );
    Py_DECREF( tmp_import_name_from_59 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_conjugate, tmp_assign_source_62 );
    tmp_import_globals_60 = ((PyModuleObject *)module_numpy$numarray$ufuncs)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_60 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_60, tmp_import_globals_60, const_tuple_524ba9f59a286812e0c72a756687ecd8_tuple, const_int_0 );
    if ( tmp_import_name_from_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_63 = IMPORT_NAME( tmp_import_name_from_60, const_str_plain_sign );
    Py_DECREF( tmp_import_name_from_60 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$numarray$ufuncs, (Nuitka_StringObject *)const_str_plain_sign, tmp_assign_source_63 );

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

    return MOD_RETURN_VALUE( module_numpy$numarray$ufuncs );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
