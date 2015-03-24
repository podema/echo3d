// Generated code for Python source for module 'scipy.sparse.csgraph'
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

// The _module_scipy$sparse$csgraph is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$csgraph;
PyDictObject *moduledict_scipy$sparse$csgraph;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_Tester;
static PyObject *const_str_plain__tools;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_csgraph;
static PyObject *const_str_plain_johnson;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_dijkstra;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_deprecate;
extern PyObject *const_str_plain_laplacian;
extern PyObject *const_str_plain___future__;
static PyObject *const_str_plain__deprecate;
extern PyObject *const_str_plain__laplacian;
static PyObject *const_str_plain__traversal;
extern PyObject *const_str_plain__components;
static PyObject *const_str_plain_bellman_ford;
extern PyObject *const_str_plain___docformat__;
static PyObject *const_str_plain_shortest_path;
static PyObject *const_str_plain__shortest_path;
static PyObject *const_str_plain_floyd_warshall;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_csgraph_to_dense;
static PyObject *const_str_plain_depth_first_tree;
static PyObject *const_str_plain_reconstruct_path;
static PyObject *const_str_plain_depth_first_order;
static PyObject *const_str_plain_NegativeCycleError;
static PyObject *const_str_plain__min_spanning_tree;
static PyObject *const_str_plain_breadth_first_tree;
static PyObject *const_str_plain_csgraph_from_dense;
extern PyObject *const_tuple_str_plain_Tester_tuple;
static PyObject *const_str_plain_breadth_first_order;
extern PyObject *const_str_plain_cs_graph_components;
static PyObject *const_str_plain_csgraph_from_masked;
static PyObject *const_str_plain_connected_components;
static PyObject *const_str_plain_construct_dist_matrix;
static PyObject *const_str_plain_minimum_spanning_tree;
extern PyObject *const_tuple_str_plain_deprecate_tuple;
static PyObject *const_tuple_str_plain_laplacian_tuple;
static PyObject *const_str_plain_csgraph_masked_from_dense;
static PyObject *const_dict_faac0053e6325731ce91ff6525522ed4;
extern PyObject *const_tuple_str_plain_cs_graph_components_tuple;
static PyObject *const_list_78efb5adf48875fbfbddfa2d04e1f793_list;
static PyObject *const_str_digest_0cb1cbead9fd0865a1367065e2d15d16;
static PyObject *const_str_digest_0d5f5e4c3661918d9dd5ebb2ed7b427b;
static PyObject *const_str_digest_1906d91eb63f3c489b98e29dbd84ecc8;
extern PyObject *const_str_digest_83a0aac3d618d3c31fc37c156dca406d;
extern PyObject *const_str_digest_84b225ef8df4b1024b676eb721c5fe2d;
static PyObject *const_str_digest_9a0ed92be2311ef5fcc82514ece7ce71;
static PyObject *const_str_digest_bfc69c52acb350a6587590eed269d5f2;
static PyObject *const_tuple_str_plain_minimum_spanning_tree_tuple;
static PyObject *const_tuple_312b5d094516485d136c77549a4f8d87_tuple;
static PyObject *const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple;
static PyObject *const_list_str_digest_1906d91eb63f3c489b98e29dbd84ecc8_list;

static void _initModuleConstants(void)
{
    const_str_plain__tools = UNSTREAM_STRING( &constant_bin[ 451586 ], 6, 1 );
    const_str_plain_johnson = UNSTREAM_STRING( &constant_bin[ 2339637 ], 7, 1 );
    const_str_plain_dijkstra = UNSTREAM_STRING( &constant_bin[ 2339644 ], 8, 1 );
    const_str_plain__deprecate = UNSTREAM_STRING( &constant_bin[ 265186 ], 10, 1 );
    const_str_plain__traversal = UNSTREAM_STRING( &constant_bin[ 2339652 ], 10, 1 );
    const_str_plain_bellman_ford = UNSTREAM_STRING( &constant_bin[ 2339662 ], 12, 1 );
    const_str_plain_shortest_path = UNSTREAM_STRING( &constant_bin[ 2339674 ], 13, 1 );
    const_str_plain__shortest_path = UNSTREAM_STRING( &constant_bin[ 2339687 ], 14, 1 );
    const_str_plain_floyd_warshall = UNSTREAM_STRING( &constant_bin[ 2339701 ], 14, 1 );
    const_str_plain_csgraph_to_dense = UNSTREAM_STRING( &constant_bin[ 2339715 ], 16, 1 );
    const_str_plain_depth_first_tree = UNSTREAM_STRING( &constant_bin[ 2339731 ], 16, 1 );
    const_str_plain_reconstruct_path = UNSTREAM_STRING( &constant_bin[ 2339747 ], 16, 1 );
    const_str_plain_depth_first_order = UNSTREAM_STRING( &constant_bin[ 2339763 ], 17, 1 );
    const_str_plain_NegativeCycleError = UNSTREAM_STRING( &constant_bin[ 2339780 ], 18, 1 );
    const_str_plain__min_spanning_tree = UNSTREAM_STRING( &constant_bin[ 2339798 ], 18, 1 );
    const_str_plain_breadth_first_tree = UNSTREAM_STRING( &constant_bin[ 2339816 ], 18, 1 );
    const_str_plain_csgraph_from_dense = UNSTREAM_STRING( &constant_bin[ 2339834 ], 18, 1 );
    const_str_plain_breadth_first_order = UNSTREAM_STRING( &constant_bin[ 2339852 ], 19, 1 );
    const_str_plain_csgraph_from_masked = UNSTREAM_STRING( &constant_bin[ 2339871 ], 19, 1 );
    const_str_plain_connected_components = UNSTREAM_STRING( &constant_bin[ 2339890 ], 20, 1 );
    const_str_plain_construct_dist_matrix = UNSTREAM_STRING( &constant_bin[ 2339910 ], 21, 1 );
    const_str_plain_minimum_spanning_tree = UNSTREAM_STRING( &constant_bin[ 2339931 ], 21, 1 );
    const_tuple_str_plain_laplacian_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_laplacian_tuple, 0, const_str_plain_laplacian ); Py_INCREF( const_str_plain_laplacian );
    const_str_plain_csgraph_masked_from_dense = UNSTREAM_STRING( &constant_bin[ 2339952 ], 25, 1 );
    const_dict_faac0053e6325731ce91ff6525522ed4 = _PyDict_NewPresized( 1 );
    const_str_digest_0cb1cbead9fd0865a1367065e2d15d16 = UNSTREAM_STRING( &constant_bin[ 2339977 ], 152, 0 );
    PyDict_SetItem( const_dict_faac0053e6325731ce91ff6525522ed4, const_str_plain_message, const_str_digest_0cb1cbead9fd0865a1367065e2d15d16 );
    const_list_78efb5adf48875fbfbddfa2d04e1f793_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2340129 ], 429 );
    const_str_digest_0d5f5e4c3661918d9dd5ebb2ed7b427b = UNSTREAM_STRING( &constant_bin[ 2340558 ], 5090, 0 );
    const_str_digest_1906d91eb63f3c489b98e29dbd84ecc8 = UNSTREAM_STRING( &constant_bin[ 2345648 ], 53, 0 );
    const_str_digest_9a0ed92be2311ef5fcc82514ece7ce71 = UNSTREAM_STRING( &constant_bin[ 2345701 ], 65, 0 );
    const_str_digest_bfc69c52acb350a6587590eed269d5f2 = UNSTREAM_STRING( &constant_bin[ 2340662 ], 20, 0 );
    const_tuple_str_plain_minimum_spanning_tree_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_minimum_spanning_tree_tuple, 0, const_str_plain_minimum_spanning_tree ); Py_INCREF( const_str_plain_minimum_spanning_tree );
    const_tuple_312b5d094516485d136c77549a4f8d87_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_312b5d094516485d136c77549a4f8d87_tuple, 0, const_str_plain_construct_dist_matrix ); Py_INCREF( const_str_plain_construct_dist_matrix );
    PyTuple_SET_ITEM( const_tuple_312b5d094516485d136c77549a4f8d87_tuple, 1, const_str_plain_reconstruct_path ); Py_INCREF( const_str_plain_reconstruct_path );
    PyTuple_SET_ITEM( const_tuple_312b5d094516485d136c77549a4f8d87_tuple, 2, const_str_plain_csgraph_from_dense ); Py_INCREF( const_str_plain_csgraph_from_dense );
    PyTuple_SET_ITEM( const_tuple_312b5d094516485d136c77549a4f8d87_tuple, 3, const_str_plain_csgraph_to_dense ); Py_INCREF( const_str_plain_csgraph_to_dense );
    PyTuple_SET_ITEM( const_tuple_312b5d094516485d136c77549a4f8d87_tuple, 4, const_str_plain_csgraph_masked_from_dense ); Py_INCREF( const_str_plain_csgraph_masked_from_dense );
    PyTuple_SET_ITEM( const_tuple_312b5d094516485d136c77549a4f8d87_tuple, 5, const_str_plain_csgraph_from_masked ); Py_INCREF( const_str_plain_csgraph_from_masked );
    const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 0, const_str_plain_shortest_path ); Py_INCREF( const_str_plain_shortest_path );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 1, const_str_plain_floyd_warshall ); Py_INCREF( const_str_plain_floyd_warshall );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 2, const_str_plain_dijkstra ); Py_INCREF( const_str_plain_dijkstra );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 3, const_str_plain_bellman_ford ); Py_INCREF( const_str_plain_bellman_ford );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 4, const_str_plain_johnson ); Py_INCREF( const_str_plain_johnson );
    PyTuple_SET_ITEM( const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, 5, const_str_plain_NegativeCycleError ); Py_INCREF( const_str_plain_NegativeCycleError );
    const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 0, const_str_plain_breadth_first_order ); Py_INCREF( const_str_plain_breadth_first_order );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 1, const_str_plain_depth_first_order ); Py_INCREF( const_str_plain_depth_first_order );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 2, const_str_plain_breadth_first_tree ); Py_INCREF( const_str_plain_breadth_first_tree );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 3, const_str_plain_depth_first_tree ); Py_INCREF( const_str_plain_depth_first_tree );
    PyTuple_SET_ITEM( const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, 4, const_str_plain_connected_components ); Py_INCREF( const_str_plain_connected_components );
    const_list_str_digest_1906d91eb63f3c489b98e29dbd84ecc8_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_1906d91eb63f3c489b98e29dbd84ecc8_list, 0, const_str_digest_1906d91eb63f3c489b98e29dbd84ecc8 ); Py_INCREF( const_str_digest_1906d91eb63f3c489b98e29dbd84ecc8 );
}

// The module code objects.
static PyCodeObject *codeobj_fec3e81baac527bbd93daa6b3933219c;

static void _initModuleCodeObjects(void)
{
    codeobj_fec3e81baac527bbd93daa6b3933219c = MAKE_CODEOBJ( const_str_digest_9a0ed92be2311ef5fcc82514ece7ce71, const_str_plain_csgraph, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$csgraph =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.csgraph",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$csgraph )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$csgraph );
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

    // puts( "in initscipy$sparse$csgraph" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$csgraph = Py_InitModule4(
        "scipy.sparse.csgraph",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$csgraph = PyModule_Create( &mdef_scipy$sparse$csgraph );
#endif

    moduledict_scipy$sparse$csgraph = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;

    assertObject( module_scipy$sparse$csgraph );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_bfc69c52acb350a6587590eed269d5f2, module_scipy$sparse$csgraph );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$csgraph );

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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_0d5f5e4c3661918d9dd5ebb2ed7b427b;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9a0ed92be2311ef5fcc82514ece7ce71;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_1906d91eb63f3c489b98e29dbd84ecc8_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_fec3e81baac527bbd93daa6b3933219c, module_scipy$sparse$csgraph );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 121;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 121;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 121;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_83a0aac3d618d3c31fc37c156dca406d;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_78efb5adf48875fbfbddfa2d04e1f793_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 146;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain__components, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_cs_graph_components_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_cs_graph_components );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_cs_graph_components, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 147;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain__laplacian, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_laplacian_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_laplacian );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_laplacian, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 148;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain__shortest_path, tmp_import_globals_6, tmp_import_globals_6, const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_shortest_path );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_shortest_path, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 148;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain__shortest_path, tmp_import_globals_7, tmp_import_globals_7, const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_floyd_warshall );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_floyd_warshall, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 148;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain__shortest_path, tmp_import_globals_8, tmp_import_globals_8, const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_dijkstra );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_dijkstra, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 148;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain__shortest_path, tmp_import_globals_9, tmp_import_globals_9, const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_bellman_ford );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_bellman_ford, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 148;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain__shortest_path, tmp_import_globals_10, tmp_import_globals_10, const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_johnson );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_johnson, tmp_assign_source_15 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 148;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain__shortest_path, tmp_import_globals_11, tmp_import_globals_11, const_tuple_31b4ce20bef9f3ea3899fdbb27148fe7_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_NegativeCycleError );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_NegativeCycleError, tmp_assign_source_16 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 150;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain__traversal, tmp_import_globals_12, tmp_import_globals_12, const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_breadth_first_order );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_breadth_first_order, tmp_assign_source_17 );
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 150;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain__traversal, tmp_import_globals_13, tmp_import_globals_13, const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_depth_first_order );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_depth_first_order, tmp_assign_source_18 );
    tmp_import_globals_14 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 150;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain__traversal, tmp_import_globals_14, tmp_import_globals_14, const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_breadth_first_tree );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_breadth_first_tree, tmp_assign_source_19 );
    tmp_import_globals_15 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 150;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain__traversal, tmp_import_globals_15, tmp_import_globals_15, const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_depth_first_tree );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_depth_first_tree, tmp_assign_source_20 );
    tmp_import_globals_16 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 150;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain__traversal, tmp_import_globals_16, tmp_import_globals_16, const_tuple_d3fe661e994584dd66eaf82519f0bd9a_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_connected_components );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_connected_components, tmp_assign_source_21 );
    tmp_import_globals_17 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 152;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain__min_spanning_tree, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_minimum_spanning_tree_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_minimum_spanning_tree );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_minimum_spanning_tree, tmp_assign_source_22 );
    tmp_import_globals_18 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 153;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_plain__tools, tmp_import_globals_18, tmp_import_globals_18, const_tuple_312b5d094516485d136c77549a4f8d87_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_construct_dist_matrix );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_construct_dist_matrix, tmp_assign_source_23 );
    tmp_import_globals_19 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 153;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_plain__tools, tmp_import_globals_19, tmp_import_globals_19, const_tuple_312b5d094516485d136c77549a4f8d87_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_reconstruct_path );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_reconstruct_path, tmp_assign_source_24 );
    tmp_import_globals_20 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 153;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_plain__tools, tmp_import_globals_20, tmp_import_globals_20, const_tuple_312b5d094516485d136c77549a4f8d87_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_csgraph_from_dense );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_from_dense, tmp_assign_source_25 );
    tmp_import_globals_21 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 153;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_plain__tools, tmp_import_globals_21, tmp_import_globals_21, const_tuple_312b5d094516485d136c77549a4f8d87_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_csgraph_to_dense );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_to_dense, tmp_assign_source_26 );
    tmp_import_globals_22 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 153;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_plain__tools, tmp_import_globals_22, tmp_import_globals_22, const_tuple_312b5d094516485d136c77549a4f8d87_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_csgraph_masked_from_dense );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_masked_from_dense, tmp_assign_source_27 );
    tmp_import_globals_23 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 153;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_plain__tools, tmp_import_globals_23, tmp_import_globals_23, const_tuple_312b5d094516485d136c77549a4f8d87_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_csgraph_from_masked );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_csgraph_from_masked, tmp_assign_source_28 );
    tmp_import_globals_24 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 157;
    tmp_import_name_from_24 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_24, tmp_import_globals_24, const_tuple_str_plain_deprecate_tuple, const_int_0 );
    if ( tmp_import_name_from_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_deprecate );
    Py_DECREF( tmp_import_name_from_24 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain__deprecate, tmp_assign_source_29 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain__deprecate );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__deprecate );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265180 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_cs_graph_components );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cs_graph_components );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 265212 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 158;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_faac0053e6325731ce91ff6525522ed4 );
    frame_module->f_lineno = 159;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_cs_graph_components, tmp_assign_source_30 );
    tmp_import_globals_25 = ((PyModuleObject *)module_scipy$sparse$csgraph)->md_dict;
    frame_module->f_lineno = 166;
    tmp_import_name_from_25 = IMPORT_MODULE( const_str_digest_84b225ef8df4b1024b676eb721c5fe2d, tmp_import_globals_25, tmp_import_globals_25, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_25 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_31 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 167;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_test );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$csgraph, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_32 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$csgraph );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
