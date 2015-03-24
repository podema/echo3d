// Generated code for Python source for module 'PIL.TiffTags'
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

// The _module_PIL$TiffTags is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_PIL$TiffTags;
PyDictObject *moduledict_PIL$TiffTags;

// The module constants used
extern PyObject *const_str_plain_TAGS;
extern PyObject *const_str_plain_TYPES;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___file__;
static PyObject *const_dict_1409ff088e3c5f0110edd8a81fc83c64;
static PyObject *const_dict_3215aa5336df780dd6336a3d50a8b702;
static PyObject *const_str_digest_aec8468d9696fa1dd26edd64233a61a4;
static PyObject *const_str_digest_f327d8a96f1103ae68411b70ec43ad7a;

static void _initModuleConstants(void)
{
    const_dict_1409ff088e3c5f0110edd8a81fc83c64 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 401756 ], 217 );
    const_dict_3215aa5336df780dd6336a3d50a8b702 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 401973 ], 5494 );
    const_str_digest_aec8468d9696fa1dd26edd64233a61a4 = UNSTREAM_STRING( &constant_bin[ 407467 ], 12, 0 );
    const_str_digest_f327d8a96f1103ae68411b70ec43ad7a = UNSTREAM_STRING( &constant_bin[ 407479 ], 48, 0 );
}

// The module code objects.


static void _initModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_PIL$TiffTags =
{
    PyModuleDef_HEAD_INIT,
    "PIL.TiffTags",   /* m_name */
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

MOD_INIT_DECL( PIL$TiffTags )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_PIL$TiffTags );
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

    // puts( "in initPIL$TiffTags" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_PIL$TiffTags = Py_InitModule4(
        "PIL.TiffTags",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_PIL$TiffTags = PyModule_Create( &mdef_PIL$TiffTags );
#endif

    moduledict_PIL$TiffTags = (PyDictObject *)((PyModuleObject *)module_PIL$TiffTags)->md_dict;

    assertObject( module_PIL$TiffTags );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_aec8468d9696fa1dd26edd64233a61a4, module_PIL$TiffTags );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_PIL$TiffTags );

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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f327d8a96f1103ae68411b70ec43ad7a;
    UPDATE_STRING_DICT0( moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyDict_Copy( const_dict_3215aa5336df780dd6336a3d50a8b702 );
    UPDATE_STRING_DICT1( moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain_TAGS, tmp_assign_source_3 );
    tmp_assign_source_4 = PyDict_Copy( const_dict_1409ff088e3c5f0110edd8a81fc83c64 );
    UPDATE_STRING_DICT1( moduledict_PIL$TiffTags, (Nuitka_StringObject *)const_str_plain_TYPES, tmp_assign_source_4 );

    return MOD_RETURN_VALUE( module_PIL$TiffTags );
}
