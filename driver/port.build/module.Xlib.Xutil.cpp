// Generated code for Python source for module 'Xlib.Xutil'
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

// The _module_Xlib$Xutil is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib$Xutil;
PyDictObject *moduledict_Xlib$Xutil;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_15;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_32;
extern PyObject *const_int_pos_64;
extern PyObject *const_int_pos_128;
extern PyObject *const_int_pos_256;
extern PyObject *const_int_pos_511;
extern PyObject *const_int_pos_512;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_PSize;
extern PyObject *const_str_plain_Xutil;
static PyObject *const_str_plain_USSize;
static PyObject *const_str_plain_XValue;
static PyObject *const_str_plain_YValue;
static PyObject *const_str_plain_NoValue;
static PyObject *const_str_plain_PAspect;
static PyObject *const_str_plain_XCNOENT;
static PyObject *const_str_plain_XCNOMEM;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_AllHints;
static PyObject *const_str_plain_PMaxSize;
static PyObject *const_str_plain_PMinSize;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_AllValues;
static PyObject *const_str_plain_InputHint;
static PyObject *const_str_plain_PAllHints;
static PyObject *const_str_plain_PBaseSize;
static PyObject *const_str_plain_PPosition;
static PyObject *const_str_plain_StateHint;
static PyObject *const_str_plain_XCSUCCESS;
static PyObject *const_str_plain_XNegative;
static PyObject *const_str_plain_YNegative;
static PyObject *const_str_plain_ZoomState;
static PyObject *const_str_plain_PResizeInc;
static PyObject *const_str_plain_USPosition;
static PyObject *const_str_plain_WidthValue;
static PyObject *const_str_plain_HeightValue;
extern PyObject *const_str_plain_IconicState;
static PyObject *const_str_plain_MessageHint;
extern PyObject *const_str_plain_NormalState;
static PyObject *const_str_plain_PWinGravity;
static PyObject *const_str_plain_RectangleIn;
static PyObject *const_str_plain_UrgencyHint;
static PyObject *const_str_plain_IconMaskHint;
static PyObject *const_str_plain_RectangleOut;
static PyObject *const_str_plain_VisualIDMask;
static PyObject *const_str_plain_VisualNoMask;
static PyObject *const_str_plain_BitmapSuccess;
static PyObject *const_str_plain_DontCareState;
static PyObject *const_str_plain_InactiveState;
static PyObject *const_str_plain_RectanglePart;
static PyObject *const_str_plain_VisualAllMask;
static PyObject *const_str_plain_BitmapNoMemory;
static PyObject *const_str_plain_IconPixmapHint;
static PyObject *const_str_plain_IconWindowHint;
extern PyObject *const_str_plain_WithdrawnState;
static PyObject *const_str_plain_VisualClassMask;
static PyObject *const_str_plain_VisualDepthMask;
static PyObject *const_str_plain_WindowGroupHint;
static PyObject *const_str_plain_BitmapOpenFailed;
static PyObject *const_str_plain_IconPositionHint;
static PyObject *const_str_plain_VisualScreenMask;
static PyObject *const_str_plain_BitmapFileInvalid;
static PyObject *const_str_plain_VisualRedMaskMask;
static PyObject *const_str_plain_VisualBlueMaskMask;
static PyObject *const_str_plain_VisualGreenMaskMask;
static PyObject *const_str_plain_VisualBitsPerRGBMask;
static PyObject *const_str_plain_VisualColormapSizeMask;
static PyObject *const_str_plain_ReleaseByFreeingColormap;
static PyObject *const_str_digest_08c9cb420f9158ebd1ed083ce84a5136;
static PyObject *const_str_digest_56b00bb489e274d683253e91ab794e76;

static void _initModuleConstants(void)
{
    const_str_plain_PSize = UNSTREAM_STRING( &constant_bin[ 23963 ], 5, 1 );
    const_str_plain_USSize = UNSTREAM_STRING( &constant_bin[ 411552 ], 6, 1 );
    const_str_plain_XValue = UNSTREAM_STRING( &constant_bin[ 411558 ], 6, 1 );
    const_str_plain_YValue = UNSTREAM_STRING( &constant_bin[ 411564 ], 6, 1 );
    const_str_plain_NoValue = UNSTREAM_STRING( &constant_bin[ 411570 ], 7, 1 );
    const_str_plain_PAspect = UNSTREAM_STRING( &constant_bin[ 24082 ], 7, 1 );
    const_str_plain_XCNOENT = UNSTREAM_STRING( &constant_bin[ 411577 ], 7, 1 );
    const_str_plain_XCNOMEM = UNSTREAM_STRING( &constant_bin[ 411584 ], 7, 1 );
    const_str_plain_AllHints = UNSTREAM_STRING( &constant_bin[ 411591 ], 8, 1 );
    const_str_plain_PMaxSize = UNSTREAM_STRING( &constant_bin[ 24020 ], 8, 1 );
    const_str_plain_PMinSize = UNSTREAM_STRING( &constant_bin[ 23990 ], 8, 1 );
    const_str_plain_AllValues = UNSTREAM_STRING( &constant_bin[ 411599 ], 9, 1 );
    const_str_plain_InputHint = UNSTREAM_STRING( &constant_bin[ 24111 ], 9, 1 );
    const_str_plain_PAllHints = UNSTREAM_STRING( &constant_bin[ 411608 ], 9, 1 );
    const_str_plain_PBaseSize = UNSTREAM_STRING( &constant_bin[ 411617 ], 9, 1 );
    const_str_plain_PPosition = UNSTREAM_STRING( &constant_bin[ 23932 ], 9, 1 );
    const_str_plain_StateHint = UNSTREAM_STRING( &constant_bin[ 24142 ], 9, 1 );
    const_str_plain_XCSUCCESS = UNSTREAM_STRING( &constant_bin[ 411626 ], 9, 1 );
    const_str_plain_XNegative = UNSTREAM_STRING( &constant_bin[ 411635 ], 9, 1 );
    const_str_plain_YNegative = UNSTREAM_STRING( &constant_bin[ 411644 ], 9, 1 );
    const_str_plain_ZoomState = UNSTREAM_STRING( &constant_bin[ 411653 ], 9, 1 );
    const_str_plain_PResizeInc = UNSTREAM_STRING( &constant_bin[ 24050 ], 10, 1 );
    const_str_plain_USPosition = UNSTREAM_STRING( &constant_bin[ 411662 ], 10, 1 );
    const_str_plain_WidthValue = UNSTREAM_STRING( &constant_bin[ 411672 ], 10, 1 );
    const_str_plain_HeightValue = UNSTREAM_STRING( &constant_bin[ 411682 ], 11, 1 );
    const_str_plain_MessageHint = UNSTREAM_STRING( &constant_bin[ 24354 ], 11, 1 );
    const_str_plain_PWinGravity = UNSTREAM_STRING( &constant_bin[ 411693 ], 11, 1 );
    const_str_plain_RectangleIn = UNSTREAM_STRING( &constant_bin[ 411704 ], 11, 1 );
    const_str_plain_UrgencyHint = UNSTREAM_STRING( &constant_bin[ 24387 ], 11, 1 );
    const_str_plain_IconMaskHint = UNSTREAM_STRING( &constant_bin[ 24283 ], 12, 1 );
    const_str_plain_RectangleOut = UNSTREAM_STRING( &constant_bin[ 411715 ], 12, 1 );
    const_str_plain_VisualIDMask = UNSTREAM_STRING( &constant_bin[ 411727 ], 12, 1 );
    const_str_plain_VisualNoMask = UNSTREAM_STRING( &constant_bin[ 411739 ], 12, 1 );
    const_str_plain_BitmapSuccess = UNSTREAM_STRING( &constant_bin[ 411751 ], 13, 1 );
    const_str_plain_DontCareState = UNSTREAM_STRING( &constant_bin[ 411764 ], 13, 1 );
    const_str_plain_InactiveState = UNSTREAM_STRING( &constant_bin[ 411777 ], 13, 1 );
    const_str_plain_RectanglePart = UNSTREAM_STRING( &constant_bin[ 411790 ], 13, 1 );
    const_str_plain_VisualAllMask = UNSTREAM_STRING( &constant_bin[ 411803 ], 13, 1 );
    const_str_plain_BitmapNoMemory = UNSTREAM_STRING( &constant_bin[ 411816 ], 14, 1 );
    const_str_plain_IconPixmapHint = UNSTREAM_STRING( &constant_bin[ 24173 ], 14, 1 );
    const_str_plain_IconWindowHint = UNSTREAM_STRING( &constant_bin[ 24209 ], 14, 1 );
    const_str_plain_VisualClassMask = UNSTREAM_STRING( &constant_bin[ 411830 ], 15, 1 );
    const_str_plain_VisualDepthMask = UNSTREAM_STRING( &constant_bin[ 411845 ], 15, 1 );
    const_str_plain_WindowGroupHint = UNSTREAM_STRING( &constant_bin[ 24317 ], 15, 1 );
    const_str_plain_BitmapOpenFailed = UNSTREAM_STRING( &constant_bin[ 411860 ], 16, 1 );
    const_str_plain_IconPositionHint = UNSTREAM_STRING( &constant_bin[ 24245 ], 16, 1 );
    const_str_plain_VisualScreenMask = UNSTREAM_STRING( &constant_bin[ 411876 ], 16, 1 );
    const_str_plain_BitmapFileInvalid = UNSTREAM_STRING( &constant_bin[ 411892 ], 17, 1 );
    const_str_plain_VisualRedMaskMask = UNSTREAM_STRING( &constant_bin[ 411909 ], 17, 1 );
    const_str_plain_VisualBlueMaskMask = UNSTREAM_STRING( &constant_bin[ 411926 ], 18, 1 );
    const_str_plain_VisualGreenMaskMask = UNSTREAM_STRING( &constant_bin[ 411944 ], 19, 1 );
    const_str_plain_VisualBitsPerRGBMask = UNSTREAM_STRING( &constant_bin[ 411963 ], 20, 1 );
    const_str_plain_VisualColormapSizeMask = UNSTREAM_STRING( &constant_bin[ 411983 ], 22, 1 );
    const_str_plain_ReleaseByFreeingColormap = UNSTREAM_STRING( &constant_bin[ 412005 ], 24, 1 );
    const_str_digest_08c9cb420f9158ebd1ed083ce84a5136 = UNSTREAM_STRING( &constant_bin[ 412029 ], 10, 0 );
    const_str_digest_56b00bb489e274d683253e91ab794e76 = UNSTREAM_STRING( &constant_bin[ 412039 ], 46, 0 );
}

// The module code objects.
static PyCodeObject *codeobj_fc5670f117b6bcda8f68e591a402ff30;

static void _initModuleCodeObjects(void)
{
    codeobj_fc5670f117b6bcda8f68e591a402ff30 = MAKE_CODEOBJ( const_str_digest_56b00bb489e274d683253e91ab794e76, const_str_plain_Xutil, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib$Xutil =
{
    PyModuleDef_HEAD_INIT,
    "Xlib.Xutil",   /* m_name */
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

MOD_INIT_DECL( Xlib$Xutil )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib$Xutil );
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

    // puts( "in initXlib$Xutil" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib$Xutil = Py_InitModule4(
        "Xlib.Xutil",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib$Xutil = PyModule_Create( &mdef_Xlib$Xutil );
#endif

    moduledict_Xlib$Xutil = (PyDictObject *)((PyModuleObject *)module_Xlib$Xutil)->md_dict;

    assertObject( module_Xlib$Xutil );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_08c9cb420f9158ebd1ed083ce84a5136, module_Xlib$Xutil );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib$Xutil );

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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_56b00bb489e274d683253e91ab794e76;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_NoValue, tmp_assign_source_3 );
    tmp_assign_source_4 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_XValue, tmp_assign_source_4 );
    tmp_assign_source_5 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_YValue, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_WidthValue, tmp_assign_source_6 );
    tmp_assign_source_7 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_HeightValue, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_15;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_AllValues, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_XNegative, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_YNegative, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_USPosition, tmp_assign_source_11 );
    tmp_assign_source_12 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_USSize, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PPosition, tmp_assign_source_13 );
    tmp_assign_source_14 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PSize, tmp_assign_source_14 );
    tmp_assign_source_15 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PMinSize, tmp_assign_source_15 );
    tmp_assign_source_16 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PMaxSize, tmp_assign_source_16 );
    tmp_assign_source_17 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PResizeInc, tmp_assign_source_17 );
    tmp_assign_source_18 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PAspect, tmp_assign_source_18 );
    tmp_assign_source_19 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PBaseSize, tmp_assign_source_19 );
    tmp_assign_source_20 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PWinGravity, tmp_assign_source_20 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_fc5670f117b6bcda8f68e591a402ff30, module_Xlib$Xutil );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_binop_left_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PPosition );

    if (unlikely( tmp_binop_left_5 == NULL ))
    {
        tmp_binop_left_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PPosition );
    }

    if ( tmp_binop_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23926 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PSize );

    if (unlikely( tmp_binop_right_5 == NULL ))
    {
        tmp_binop_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSize );
    }

    if ( tmp_binop_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23957 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PMinSize );

    if (unlikely( tmp_binop_right_4 == NULL ))
    {
        tmp_binop_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PMinSize );
    }

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23984 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_3 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PMaxSize );

    if (unlikely( tmp_binop_right_3 == NULL ))
    {
        tmp_binop_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PMaxSize );
    }

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24014 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PResizeInc );

    if (unlikely( tmp_binop_right_2 == NULL ))
    {
        tmp_binop_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PResizeInc );
    }

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24044 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PAspect );

    if (unlikely( tmp_binop_right_1 == NULL ))
    {
        tmp_binop_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PAspect );
    }

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24076 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_PAllHints, tmp_assign_source_21 );
    tmp_assign_source_22 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_InputHint, tmp_assign_source_22 );
    tmp_assign_source_23 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_StateHint, tmp_assign_source_23 );
    tmp_assign_source_24 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconPixmapHint, tmp_assign_source_24 );
    tmp_assign_source_25 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconWindowHint, tmp_assign_source_25 );
    tmp_assign_source_26 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconPositionHint, tmp_assign_source_26 );
    tmp_assign_source_27 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconMaskHint, tmp_assign_source_27 );
    tmp_assign_source_28 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_WindowGroupHint, tmp_assign_source_28 );
    tmp_assign_source_29 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_MessageHint, tmp_assign_source_29 );
    tmp_assign_source_30 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_UrgencyHint, tmp_assign_source_30 );
    tmp_binop_left_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_InputHint );

    if (unlikely( tmp_binop_left_13 == NULL ))
    {
        tmp_binop_left_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InputHint );
    }

    if ( tmp_binop_left_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24105 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_StateHint );

    if (unlikely( tmp_binop_right_13 == NULL ))
    {
        tmp_binop_right_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StateHint );
    }

    if ( tmp_binop_right_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24136 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_12 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconPixmapHint );

    if (unlikely( tmp_binop_right_12 == NULL ))
    {
        tmp_binop_right_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IconPixmapHint );
    }

    if ( tmp_binop_right_12 == NULL )
    {
        Py_DECREF( tmp_binop_left_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24167 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_11 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    if ( tmp_binop_left_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconWindowHint );

    if (unlikely( tmp_binop_right_11 == NULL ))
    {
        tmp_binop_right_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IconWindowHint );
    }

    if ( tmp_binop_right_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24203 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_10 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_left_11 );
    if ( tmp_binop_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconPositionHint );

    if (unlikely( tmp_binop_right_10 == NULL ))
    {
        tmp_binop_right_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IconPositionHint );
    }

    if ( tmp_binop_right_10 == NULL )
    {
        Py_DECREF( tmp_binop_left_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24239 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_9 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_left_10 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconMaskHint );

    if (unlikely( tmp_binop_right_9 == NULL ))
    {
        tmp_binop_right_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IconMaskHint );
    }

    if ( tmp_binop_right_9 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24277 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_8 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_WindowGroupHint );

    if (unlikely( tmp_binop_right_8 == NULL ))
    {
        tmp_binop_right_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WindowGroupHint );
    }

    if ( tmp_binop_right_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24311 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_7 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_MessageHint );

    if (unlikely( tmp_binop_right_7 == NULL ))
    {
        tmp_binop_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MessageHint );
    }

    if ( tmp_binop_right_7 == NULL )
    {
        Py_DECREF( tmp_binop_left_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24348 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_6 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_UrgencyHint );

    if (unlikely( tmp_binop_right_6 == NULL ))
    {
        tmp_binop_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UrgencyHint );
    }

    if ( tmp_binop_right_6 == NULL )
    {
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24381 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_31 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_AllHints, tmp_assign_source_31 );

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
    tmp_assign_source_32 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_WithdrawnState, tmp_assign_source_32 );
    tmp_assign_source_33 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_NormalState, tmp_assign_source_33 );
    tmp_assign_source_34 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_IconicState, tmp_assign_source_34 );
    tmp_assign_source_35 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_DontCareState, tmp_assign_source_35 );
    tmp_assign_source_36 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_ZoomState, tmp_assign_source_36 );
    tmp_assign_source_37 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_InactiveState, tmp_assign_source_37 );
    tmp_assign_source_38 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_RectangleOut, tmp_assign_source_38 );
    tmp_assign_source_39 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_RectangleIn, tmp_assign_source_39 );
    tmp_assign_source_40 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_RectanglePart, tmp_assign_source_40 );
    tmp_assign_source_41 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualNoMask, tmp_assign_source_41 );
    tmp_assign_source_42 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualIDMask, tmp_assign_source_42 );
    tmp_assign_source_43 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualScreenMask, tmp_assign_source_43 );
    tmp_assign_source_44 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualDepthMask, tmp_assign_source_44 );
    tmp_assign_source_45 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualClassMask, tmp_assign_source_45 );
    tmp_assign_source_46 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualRedMaskMask, tmp_assign_source_46 );
    tmp_assign_source_47 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualGreenMaskMask, tmp_assign_source_47 );
    tmp_assign_source_48 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualBlueMaskMask, tmp_assign_source_48 );
    tmp_assign_source_49 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualColormapSizeMask, tmp_assign_source_49 );
    tmp_assign_source_50 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualBitsPerRGBMask, tmp_assign_source_50 );
    tmp_assign_source_51 = const_int_pos_511;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_VisualAllMask, tmp_assign_source_51 );
    tmp_assign_source_52 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_ReleaseByFreeingColormap, tmp_assign_source_52 );
    tmp_assign_source_53 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_BitmapSuccess, tmp_assign_source_53 );
    tmp_assign_source_54 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_BitmapOpenFailed, tmp_assign_source_54 );
    tmp_assign_source_55 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_BitmapFileInvalid, tmp_assign_source_55 );
    tmp_assign_source_56 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_BitmapNoMemory, tmp_assign_source_56 );
    tmp_assign_source_57 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_XCSUCCESS, tmp_assign_source_57 );
    tmp_assign_source_58 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_XCNOMEM, tmp_assign_source_58 );
    tmp_assign_source_59 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$Xutil, (Nuitka_StringObject *)const_str_plain_XCNOENT, tmp_assign_source_59 );

    return MOD_RETURN_VALUE( module_Xlib$Xutil );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
