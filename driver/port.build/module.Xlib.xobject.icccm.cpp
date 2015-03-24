// Generated code for Python source for module 'Xlib.xobject.icccm'
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

// The _module_Xlib$xobject$icccm is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib$xobject$icccm;
PyDictObject *moduledict_Xlib$xobject$icccm;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_X;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_rq;
extern PyObject *const_str_plain_Pad;
extern PyObject *const_str_plain_Set;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_NONE;
extern PyObject *const_str_plain_Xlib;
static PyObject *const_str_plain_icon;
extern PyObject *const_str_plain_Int32;
extern PyObject *const_str_plain_Xutil;
static PyObject *const_str_plain_denum;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_icccm;
extern PyObject *const_str_plain_input;
extern PyObject *const_str_plain_state;
static PyObject *const_str_plain_Aspect;
extern PyObject *const_str_plain_Card32;
extern PyObject *const_str_plain_Object;
extern PyObject *const_str_plain_Pixmap;
extern PyObject *const_str_plain_Struct;
extern PyObject *const_str_plain_Window;
static PyObject *const_str_plain_icon_x;
static PyObject *const_str_plain_icon_y;
extern PyObject *const_str_plain_WMHints;
extern PyObject *const_str_plain_WMState;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_icon_mask;
static PyObject *const_str_plain_max_width;
static PyObject *const_str_plain_min_width;
static PyObject *const_str_plain_width_inc;
extern PyObject *const_str_plain_WMIconSize;
static PyObject *const_str_plain_base_width;
static PyObject *const_str_plain_height_inc;
static PyObject *const_str_plain_max_aspect;
static PyObject *const_str_plain_max_height;
static PyObject *const_str_plain_min_aspect;
static PyObject *const_str_plain_min_height;
extern PyObject *const_str_plain_IconicState;
extern PyObject *const_str_plain_NormalState;
static PyObject *const_str_plain_base_height;
static PyObject *const_str_plain_icon_pixmap;
static PyObject *const_str_plain_icon_window;
extern PyObject *const_str_plain_win_gravity;
static PyObject *const_str_plain_window_group;
extern PyObject *const_str_plain_WMNormalHints;
static PyObject *const_str_plain_initial_state;
extern PyObject *const_tuple_int_0_int_0_tuple;
extern PyObject *const_str_plain_WithdrawnState;
extern PyObject *const_tuple_str_plain_rq_tuple;
extern PyObject *const_tuple_str_plain_input_tuple;
static PyObject *const_tuple_str_plain_icon_x_tuple;
static PyObject *const_tuple_str_plain_icon_y_tuple;
static PyObject *const_tuple_str_plain_icon_mask_tuple;
static PyObject *const_tuple_str_plain_max_width_tuple;
static PyObject *const_tuple_str_plain_min_width_tuple;
static PyObject *const_tuple_str_plain_width_inc_tuple;
static PyObject *const_tuple_str_plain_base_width_tuple;
static PyObject *const_tuple_str_plain_height_inc_tuple;
static PyObject *const_tuple_str_plain_max_height_tuple;
static PyObject *const_tuple_str_plain_min_height_tuple;
static PyObject *const_tuple_str_plain_base_height_tuple;
static PyObject *const_tuple_str_plain_icon_pixmap_tuple;
static PyObject *const_tuple_str_plain_icon_window_tuple;
static PyObject *const_tuple_str_plain_win_gravity_tuple;
static PyObject *const_tuple_str_plain_window_group_tuple;
static PyObject *const_dict_6e6ad1f7f9ad133a37c803a2af55baf6;
static PyObject *const_dict_ef27aa2915bb88e6124369f3dcd9e2ac;
static PyObject *const_tuple_str_plain_X_str_plain_Xutil_tuple;
extern PyObject *const_str_digest_0df97c6d560821a4763cc4527efabdd8;
static PyObject *const_str_digest_529607439b565af0a8b9bd86e57cad16;
static PyObject *const_str_digest_d3af39ac6b4c951bd4bade905813c882;

static void _initModuleConstants(void)
{
    const_str_plain_icon = UNSTREAM_STRING( &constant_bin[ 442031 ], 4, 1 );
    const_str_plain_denum = UNSTREAM_STRING( &constant_bin[ 27153 ], 5, 1 );
    const_str_plain_Aspect = UNSTREAM_STRING( &constant_bin[ 24083 ], 6, 1 );
    const_str_plain_icon_x = UNSTREAM_STRING( &constant_bin[ 442982 ], 6, 1 );
    const_str_plain_icon_y = UNSTREAM_STRING( &constant_bin[ 442988 ], 6, 1 );
    const_str_plain_icon_mask = UNSTREAM_STRING( &constant_bin[ 442994 ], 9, 1 );
    const_str_plain_max_width = UNSTREAM_STRING( &constant_bin[ 443003 ], 9, 1 );
    const_str_plain_min_width = UNSTREAM_STRING( &constant_bin[ 443012 ], 9, 1 );
    const_str_plain_width_inc = UNSTREAM_STRING( &constant_bin[ 443021 ], 9, 1 );
    const_str_plain_base_width = UNSTREAM_STRING( &constant_bin[ 443030 ], 10, 1 );
    const_str_plain_height_inc = UNSTREAM_STRING( &constant_bin[ 443040 ], 10, 1 );
    const_str_plain_max_aspect = UNSTREAM_STRING( &constant_bin[ 443050 ], 10, 1 );
    const_str_plain_max_height = UNSTREAM_STRING( &constant_bin[ 443060 ], 10, 1 );
    const_str_plain_min_aspect = UNSTREAM_STRING( &constant_bin[ 443070 ], 10, 1 );
    const_str_plain_min_height = UNSTREAM_STRING( &constant_bin[ 443080 ], 10, 1 );
    const_str_plain_base_height = UNSTREAM_STRING( &constant_bin[ 443090 ], 11, 1 );
    const_str_plain_icon_pixmap = UNSTREAM_STRING( &constant_bin[ 443101 ], 11, 1 );
    const_str_plain_icon_window = UNSTREAM_STRING( &constant_bin[ 443112 ], 11, 1 );
    const_str_plain_window_group = UNSTREAM_STRING( &constant_bin[ 443123 ], 12, 1 );
    const_str_plain_initial_state = UNSTREAM_STRING( &constant_bin[ 443135 ], 13, 1 );
    const_tuple_str_plain_icon_x_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_icon_x_tuple, 0, const_str_plain_icon_x ); Py_INCREF( const_str_plain_icon_x );
    const_tuple_str_plain_icon_y_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_icon_y_tuple, 0, const_str_plain_icon_y ); Py_INCREF( const_str_plain_icon_y );
    const_tuple_str_plain_icon_mask_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_icon_mask_tuple, 0, const_str_plain_icon_mask ); Py_INCREF( const_str_plain_icon_mask );
    const_tuple_str_plain_max_width_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_max_width_tuple, 0, const_str_plain_max_width ); Py_INCREF( const_str_plain_max_width );
    const_tuple_str_plain_min_width_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_min_width_tuple, 0, const_str_plain_min_width ); Py_INCREF( const_str_plain_min_width );
    const_tuple_str_plain_width_inc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_width_inc_tuple, 0, const_str_plain_width_inc ); Py_INCREF( const_str_plain_width_inc );
    const_tuple_str_plain_base_width_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_base_width_tuple, 0, const_str_plain_base_width ); Py_INCREF( const_str_plain_base_width );
    const_tuple_str_plain_height_inc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_height_inc_tuple, 0, const_str_plain_height_inc ); Py_INCREF( const_str_plain_height_inc );
    const_tuple_str_plain_max_height_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_max_height_tuple, 0, const_str_plain_max_height ); Py_INCREF( const_str_plain_max_height );
    const_tuple_str_plain_min_height_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_min_height_tuple, 0, const_str_plain_min_height ); Py_INCREF( const_str_plain_min_height );
    const_tuple_str_plain_base_height_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_base_height_tuple, 0, const_str_plain_base_height ); Py_INCREF( const_str_plain_base_height );
    const_tuple_str_plain_icon_pixmap_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_icon_pixmap_tuple, 0, const_str_plain_icon_pixmap ); Py_INCREF( const_str_plain_icon_pixmap );
    const_tuple_str_plain_icon_window_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_icon_window_tuple, 0, const_str_plain_icon_window ); Py_INCREF( const_str_plain_icon_window );
    const_tuple_str_plain_win_gravity_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_win_gravity_tuple, 0, const_str_plain_win_gravity ); Py_INCREF( const_str_plain_win_gravity );
    const_tuple_str_plain_window_group_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_window_group_tuple, 0, const_str_plain_window_group ); Py_INCREF( const_str_plain_window_group );
    const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6, const_str_plain_default, const_int_0 );
    const_dict_ef27aa2915bb88e6124369f3dcd9e2ac = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_ef27aa2915bb88e6124369f3dcd9e2ac, const_str_plain_default, const_tuple_int_0_int_0_tuple );
    const_tuple_str_plain_X_str_plain_Xutil_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_Xutil_tuple, 0, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_str_plain_X_str_plain_Xutil_tuple, 1, const_str_plain_Xutil ); Py_INCREF( const_str_plain_Xutil );
    const_str_digest_529607439b565af0a8b9bd86e57cad16 = UNSTREAM_STRING( &constant_bin[ 443148 ], 18, 0 );
    const_str_digest_d3af39ac6b4c951bd4bade905813c882 = UNSTREAM_STRING( &constant_bin[ 443166 ], 54, 0 );
}

// The module code objects.
static PyCodeObject *codeobj_1a768222a6e3911931ac4333899f95f5;

static void _initModuleCodeObjects(void)
{
    codeobj_1a768222a6e3911931ac4333899f95f5 = MAKE_CODEOBJ( const_str_digest_d3af39ac6b4c951bd4bade905813c882, const_str_plain_icccm, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib$xobject$icccm =
{
    PyModuleDef_HEAD_INIT,
    "Xlib.xobject.icccm",   /* m_name */
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

MOD_INIT_DECL( Xlib$xobject$icccm )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib$xobject$icccm );
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

    // puts( "in initXlib$xobject$icccm" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib$xobject$icccm = Py_InitModule4(
        "Xlib.xobject.icccm",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib$xobject$icccm = PyModule_Create( &mdef_Xlib$xobject$icccm );
#endif

    moduledict_Xlib$xobject$icccm = (PyDictObject *)((PyModuleObject *)module_Xlib$xobject$icccm)->md_dict;

    assertObject( module_Xlib$xobject$icccm );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_529607439b565af0a8b9bd86e57cad16, module_Xlib$xobject$icccm );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib$xobject$icccm );

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
    PyObject *tmp_call_arg_element_25;
    PyObject *tmp_call_arg_element_26;
    PyObject *tmp_call_arg_element_27;
    PyObject *tmp_call_arg_element_28;
    PyObject *tmp_call_arg_element_29;
    PyObject *tmp_call_arg_element_30;
    PyObject *tmp_call_arg_element_31;
    PyObject *tmp_call_arg_element_32;
    PyObject *tmp_call_arg_element_33;
    PyObject *tmp_call_arg_element_34;
    PyObject *tmp_call_arg_element_35;
    PyObject *tmp_call_arg_element_36;
    PyObject *tmp_call_arg_element_37;
    PyObject *tmp_call_arg_element_38;
    PyObject *tmp_call_arg_element_39;
    PyObject *tmp_call_arg_element_40;
    PyObject *tmp_call_arg_element_41;
    PyObject *tmp_call_arg_element_42;
    PyObject *tmp_call_arg_element_43;
    PyObject *tmp_call_arg_element_44;
    PyObject *tmp_call_arg_element_45;
    PyObject *tmp_call_arg_element_46;
    PyObject *tmp_call_arg_element_47;
    PyObject *tmp_call_arg_element_48;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_kw_6;
    PyObject *tmp_call_kw_7;
    PyObject *tmp_call_kw_8;
    PyObject *tmp_call_kw_9;
    PyObject *tmp_call_kw_10;
    PyObject *tmp_call_kw_11;
    PyObject *tmp_call_kw_12;
    PyObject *tmp_call_kw_13;
    PyObject *tmp_call_kw_14;
    PyObject *tmp_call_kw_15;
    PyObject *tmp_call_kw_16;
    PyObject *tmp_call_kw_17;
    PyObject *tmp_call_kw_18;
    PyObject *tmp_call_kw_19;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_call_pos_5;
    PyObject *tmp_call_pos_6;
    PyObject *tmp_call_pos_7;
    PyObject *tmp_call_pos_8;
    PyObject *tmp_call_pos_9;
    PyObject *tmp_call_pos_10;
    PyObject *tmp_call_pos_11;
    PyObject *tmp_call_pos_12;
    PyObject *tmp_call_pos_13;
    PyObject *tmp_call_pos_14;
    PyObject *tmp_call_pos_15;
    PyObject *tmp_call_pos_16;
    PyObject *tmp_call_pos_17;
    PyObject *tmp_call_pos_18;
    PyObject *tmp_call_pos_19;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    PyObject *tmp_called_10;
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_called_13;
    PyObject *tmp_called_14;
    PyObject *tmp_called_15;
    PyObject *tmp_called_16;
    PyObject *tmp_called_17;
    PyObject *tmp_called_18;
    PyObject *tmp_called_19;
    PyObject *tmp_called_20;
    PyObject *tmp_called_21;
    PyObject *tmp_called_22;
    PyObject *tmp_called_23;
    PyObject *tmp_called_24;
    PyObject *tmp_called_25;
    PyObject *tmp_called_26;
    PyObject *tmp_called_27;
    PyObject *tmp_called_28;
    PyObject *tmp_called_29;
    PyObject *tmp_called_30;
    PyObject *tmp_called_31;
    PyObject *tmp_called_32;
    PyObject *tmp_called_33;
    PyObject *tmp_called_34;
    PyObject *tmp_called_35;
    PyObject *tmp_called_36;
    PyObject *tmp_called_37;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
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
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d3af39ac6b4c951bd4bade905813c882;
    UPDATE_STRING_DICT0( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_1a768222a6e3911931ac4333899f95f5, module_Xlib$xobject$icccm );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_Xlib$xobject$icccm)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_Xlib, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_X_str_plain_Xutil_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_X );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_X, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_Xlib$xobject$icccm)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_Xlib, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_X_str_plain_Xutil_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Xutil );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Xutil, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_Xlib$xobject$icccm)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_0df97c6d560821a4763cc4527efabdd8, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_rq_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_rq );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq, tmp_assign_source_5 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Int32 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_num;
    frame_module->f_lineno = 22;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Int32 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_denum;
    frame_module->f_lineno = 22;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 22;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Aspect, tmp_assign_source_6 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Struct );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Card32 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_flags;
    frame_module->f_lineno = 24;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Pad );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_int_pos_16;
    frame_module->f_lineno = 25;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Int32 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = const_tuple_str_plain_min_width_tuple;
    tmp_call_kw_1 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 26;
    tmp_call_arg_element_9 = CALL_FUNCTION( tmp_called_7, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Int32 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = const_tuple_str_plain_min_height_tuple;
    tmp_call_kw_2 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 27;
    tmp_call_arg_element_10 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Int32 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_3 = const_tuple_str_plain_max_width_tuple;
    tmp_call_kw_3 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 28;
    tmp_call_arg_element_11 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Int32 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_4 = const_tuple_str_plain_max_height_tuple;
    tmp_call_kw_4 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 29;
    tmp_call_arg_element_12 = CALL_FUNCTION( tmp_called_10, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Int32 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_5 = const_tuple_str_plain_width_inc_tuple;
    tmp_call_kw_5 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 30;
    tmp_call_arg_element_13 = CALL_FUNCTION( tmp_called_11, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Int32 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_6 = const_tuple_str_plain_height_inc_tuple;
    tmp_call_kw_6 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 31;
    tmp_call_arg_element_14 = CALL_FUNCTION( tmp_called_12, tmp_call_pos_6, tmp_call_kw_6 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Object );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_7 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_min_aspect;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_7, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Aspect );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Aspect );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_pos_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45228 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_7, 1, tmp_tuple_element_1 );
    tmp_call_kw_7 = PyDict_Copy( const_dict_ef27aa2915bb88e6124369f3dcd9e2ac );
    frame_module->f_lineno = 32;
    tmp_call_arg_element_15 = CALL_FUNCTION( tmp_called_13, tmp_call_pos_7, tmp_call_kw_7 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_pos_7 );
    Py_DECREF( tmp_call_kw_7 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_Object );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_8 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_max_aspect;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_8, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Aspect );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Aspect );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45228 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_8, 1, tmp_tuple_element_2 );
    tmp_call_kw_8 = PyDict_Copy( const_dict_ef27aa2915bb88e6124369f3dcd9e2ac );
    frame_module->f_lineno = 33;
    tmp_call_arg_element_16 = CALL_FUNCTION( tmp_called_14, tmp_call_pos_8, tmp_call_kw_8 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_pos_8 );
    Py_DECREF( tmp_call_kw_8 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_Int32 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );

        frame_module->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_9 = const_tuple_str_plain_base_width_tuple;
    tmp_call_kw_9 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 34;
    tmp_call_arg_element_17 = CALL_FUNCTION( tmp_called_15, tmp_call_pos_9, tmp_call_kw_9 );
    Py_DECREF( tmp_called_15 );
    Py_DECREF( tmp_call_kw_9 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );

        frame_module->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_Int32 );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_10 = const_tuple_str_plain_base_height_tuple;
    tmp_call_kw_10 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 35;
    tmp_call_arg_element_18 = CALL_FUNCTION( tmp_called_16, tmp_call_pos_10, tmp_call_kw_10 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_kw_10 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_Int32 );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_module->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_11 = const_tuple_str_plain_win_gravity_tuple;
    tmp_call_kw_11 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 36;
    tmp_call_arg_element_19 = CALL_FUNCTION( tmp_called_17, tmp_call_pos_11, tmp_call_kw_11 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_kw_11 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_module->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 36;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS13( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_7, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_13 );
    Py_DECREF( tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_WMNormalHints, tmp_assign_source_7 );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_Struct );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_Card32 );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = const_str_plain_flags;
    frame_module->f_lineno = 39;
    tmp_call_arg_element_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_Card32 );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_12 = const_tuple_str_plain_input_tuple;
    tmp_call_kw_12 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 40;
    tmp_call_arg_element_22 = CALL_FUNCTION( tmp_called_20, tmp_call_pos_12, tmp_call_kw_12 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_kw_12 );
    if ( tmp_call_arg_element_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_Set );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_13 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_initial_state;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_13, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_int_pos_4;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_13, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyTuple_New( 3 );
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Xutil );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Xutil );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_pos_13 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45256 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_WithdrawnState );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_pos_13 );
        Py_DECREF( tmp_tuple_element_3 );

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Xutil );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Xutil );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_pos_13 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45256 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_NormalState );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_pos_13 );
        Py_DECREF( tmp_tuple_element_3 );

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_3, 1, tmp_tuple_element_4 );
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Xutil );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Xutil );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_pos_13 );
        Py_DECREF( tmp_tuple_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45256 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_IconicState );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_pos_13 );
        Py_DECREF( tmp_tuple_element_3 );

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_3, 2, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_13, 2, tmp_tuple_element_3 );
    tmp_call_kw_13 = _PyDict_NewPresized( 1 );
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Xutil );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Xutil );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_pos_13 );
        Py_DECREF( tmp_call_kw_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45256 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_NormalState );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_pos_13 );
        Py_DECREF( tmp_call_kw_13 );

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_default;
    PyDict_SetItem( tmp_call_kw_13, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_module->f_lineno = 49;
    tmp_call_arg_element_23 = CALL_FUNCTION( tmp_called_21, tmp_call_pos_13, tmp_call_kw_13 );
    Py_DECREF( tmp_called_21 );
    Py_DECREF( tmp_call_pos_13 );
    Py_DECREF( tmp_call_kw_13 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_Pixmap );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_14 = const_tuple_str_plain_icon_pixmap_tuple;
    tmp_call_kw_14 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 50;
    tmp_call_arg_element_24 = CALL_FUNCTION( tmp_called_22, tmp_call_pos_14, tmp_call_kw_14 );
    Py_DECREF( tmp_called_22 );
    Py_DECREF( tmp_call_kw_14 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_Window );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );

        frame_module->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_15 = const_tuple_str_plain_icon_window_tuple;
    tmp_call_kw_15 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 51;
    tmp_call_arg_element_25 = CALL_FUNCTION( tmp_called_23, tmp_call_pos_15, tmp_call_kw_15 );
    Py_DECREF( tmp_called_23 );
    Py_DECREF( tmp_call_kw_15 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );

        frame_module->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_Int32 );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_16 = const_tuple_str_plain_icon_x_tuple;
    tmp_call_kw_16 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 52;
    tmp_call_arg_element_26 = CALL_FUNCTION( tmp_called_24, tmp_call_pos_16, tmp_call_kw_16 );
    Py_DECREF( tmp_called_24 );
    Py_DECREF( tmp_call_kw_16 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_Int32 );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );

        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_17 = const_tuple_str_plain_icon_y_tuple;
    tmp_call_kw_17 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 53;
    tmp_call_arg_element_27 = CALL_FUNCTION( tmp_called_25, tmp_call_pos_17, tmp_call_kw_17 );
    Py_DECREF( tmp_called_25 );
    Py_DECREF( tmp_call_kw_17 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );

        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_Pixmap );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_18 = const_tuple_str_plain_icon_mask_tuple;
    tmp_call_kw_18 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 54;
    tmp_call_arg_element_28 = CALL_FUNCTION( tmp_called_26, tmp_call_pos_18, tmp_call_kw_18 );
    Py_DECREF( tmp_called_26 );
    Py_DECREF( tmp_call_kw_18 );
    if ( tmp_call_arg_element_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_Window );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_28 );

        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_19 = const_tuple_str_plain_window_group_tuple;
    tmp_call_kw_19 = PyDict_Copy( const_dict_6e6ad1f7f9ad133a37c803a2af55baf6 );
    frame_module->f_lineno = 55;
    tmp_call_arg_element_29 = CALL_FUNCTION( tmp_called_27, tmp_call_pos_19, tmp_call_kw_19 );
    Py_DECREF( tmp_called_27 );
    Py_DECREF( tmp_call_kw_19 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_28 );

        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 55;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS9( tmp_called_18, tmp_call_arg_element_20, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24, tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27, tmp_call_arg_element_28, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_18 );
    Py_DECREF( tmp_call_arg_element_20 );
    Py_DECREF( tmp_call_arg_element_22 );
    Py_DECREF( tmp_call_arg_element_23 );
    Py_DECREF( tmp_call_arg_element_24 );
    Py_DECREF( tmp_call_arg_element_25 );
    Py_DECREF( tmp_call_arg_element_26 );
    Py_DECREF( tmp_call_arg_element_27 );
    Py_DECREF( tmp_call_arg_element_28 );
    Py_DECREF( tmp_call_arg_element_29 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_WMHints, tmp_assign_source_8 );
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_Struct );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_Set );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );

        frame_module->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_31 = const_str_plain_state;
    tmp_call_arg_element_32 = const_int_pos_4;
    tmp_call_arg_element_33 = PyTuple_New( 3 );
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Xutil );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Xutil );
    }

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_arg_element_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45256 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_WithdrawnState );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_arg_element_33 );

        frame_module->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_33, 0, tmp_tuple_element_5 );
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Xutil );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Xutil );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_arg_element_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45256 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_NormalState );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_arg_element_33 );

        frame_module->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_33, 1, tmp_tuple_element_5 );
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_Xutil );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Xutil );
    }

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_arg_element_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45256 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_IconicState );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_arg_element_33 );

        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_33, 2, tmp_tuple_element_5 );
    frame_module->f_lineno = 61;
    tmp_call_arg_element_30 = CALL_FUNCTION_WITH_ARGS3( tmp_called_29, tmp_call_arg_element_31, tmp_call_arg_element_32, tmp_call_arg_element_33 );
    Py_DECREF( tmp_called_29 );
    Py_DECREF( tmp_call_arg_element_33 );
    if ( tmp_call_arg_element_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );

        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_arg_element_30 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_30 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_Window );
    if ( tmp_called_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_arg_element_30 );

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_35 = const_str_plain_icon;
    tmp_call_arg_element_36 = PyTuple_New( 1 );
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_called_30 );
        Py_DECREF( tmp_call_arg_element_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_NONE );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_called_30 );
        Py_DECREF( tmp_call_arg_element_36 );

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_36, 0, tmp_tuple_element_6 );
    frame_module->f_lineno = 62;
    tmp_call_arg_element_34 = CALL_FUNCTION_WITH_ARGS2( tmp_called_30, tmp_call_arg_element_35, tmp_call_arg_element_36 );
    Py_DECREF( tmp_called_30 );
    Py_DECREF( tmp_call_arg_element_36 );
    if ( tmp_call_arg_element_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_arg_element_30 );

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 62;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_28, tmp_call_arg_element_30, tmp_call_arg_element_34 );
    Py_DECREF( tmp_called_28 );
    Py_DECREF( tmp_call_arg_element_30 );
    Py_DECREF( tmp_call_arg_element_34 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_WMState, tmp_assign_source_9 );
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_called_31 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_Struct );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_source_name_40 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_40 == NULL ))
    {
        tmp_source_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_called_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_called_32 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_Card32 );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );

        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_38 = const_str_plain_min_width;
    frame_module->f_lineno = 66;
    tmp_call_arg_element_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_32, tmp_call_arg_element_38 );
    Py_DECREF( tmp_called_32 );
    if ( tmp_call_arg_element_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );

        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_41 == NULL )
    {
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_called_33 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_Card32 );
    if ( tmp_called_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );

        frame_module->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_40 = const_str_plain_min_height;
    frame_module->f_lineno = 67;
    tmp_call_arg_element_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_40 );
    Py_DECREF( tmp_called_33 );
    if ( tmp_call_arg_element_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );

        frame_module->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_called_34 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_Card32 );
    if ( tmp_called_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );

        frame_module->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_42 = const_str_plain_max_width;
    frame_module->f_lineno = 68;
    tmp_call_arg_element_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_34, tmp_call_arg_element_42 );
    Py_DECREF( tmp_called_34 );
    if ( tmp_call_arg_element_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );

        frame_module->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_called_35 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_Card32 );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );

        frame_module->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_44 = const_str_plain_max_height;
    frame_module->f_lineno = 69;
    tmp_call_arg_element_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_35, tmp_call_arg_element_44 );
    Py_DECREF( tmp_called_35 );
    if ( tmp_call_arg_element_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );

        frame_module->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_called_36 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_Card32 );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_46 = const_str_plain_width_inc;
    frame_module->f_lineno = 70;
    tmp_call_arg_element_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_36, tmp_call_arg_element_46 );
    Py_DECREF( tmp_called_36 );
    if ( tmp_call_arg_element_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = GET_STRING_DICT_VALUE( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_45 == NULL ))
    {
        tmp_source_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );
        Py_DECREF( tmp_call_arg_element_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_called_37 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_Card32 );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );
        Py_DECREF( tmp_call_arg_element_45 );

        frame_module->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_48 = const_str_plain_height_inc;
    frame_module->f_lineno = 71;
    tmp_call_arg_element_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_48 );
    Py_DECREF( tmp_called_37 );
    if ( tmp_call_arg_element_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_31 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );
        Py_DECREF( tmp_call_arg_element_45 );

        frame_module->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 71;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS6( tmp_called_31, tmp_call_arg_element_37, tmp_call_arg_element_39, tmp_call_arg_element_41, tmp_call_arg_element_43, tmp_call_arg_element_45, tmp_call_arg_element_47 );
    Py_DECREF( tmp_called_31 );
    Py_DECREF( tmp_call_arg_element_37 );
    Py_DECREF( tmp_call_arg_element_39 );
    Py_DECREF( tmp_call_arg_element_41 );
    Py_DECREF( tmp_call_arg_element_43 );
    Py_DECREF( tmp_call_arg_element_45 );
    Py_DECREF( tmp_call_arg_element_47 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$xobject$icccm, (Nuitka_StringObject *)const_str_plain_WMIconSize, tmp_assign_source_10 );

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

    return MOD_RETURN_VALUE( module_Xlib$xobject$icccm );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
