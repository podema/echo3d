// Generated code for Python source for module 'numpy.random'
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

// The _module_numpy$random is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$random;
PyDictObject *moduledict_numpy$random;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_info;
static PyObject *const_str_plain_ranf;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_ignore;
static PyObject *const_str_plain_mtrand;
extern PyObject *const_str_plain_random;
extern PyObject *const_str_plain_sample;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_RandomState;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_random_sample;
extern PyObject *const_str_plain_catch_warnings;
extern PyObject *const_str_plain_filterwarnings;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain___RandomState_ctor;
extern PyObject *const_tuple_str_plain_Tester_tuple;
extern PyObject *const_tuple_str_plain_ignore_tuple;
static PyObject *const_dict_8d5ecb0ffa5021548091fbef6cfd7cd7;
static PyObject *const_str_digest_50caa02149cf97bd5dfffd930c7ea48b;
extern PyObject *const_str_digest_783753e47dfcb01e47cad374f1cc82a6;
extern PyObject *const_str_digest_84b225ef8df4b1024b676eb721c5fe2d;
static PyObject *const_str_digest_92243dccb1e5b8275aab869e2394e234;
static PyObject *const_str_digest_a24378a3499d159c8006a192b7a36d9b;
static PyObject *const_str_digest_f6171a21347f4128db317921140cb3a5;
static PyObject *const_str_digest_fcda2d27ae75462363a153fe6ac4979f;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_str_plain___doc___str_plain___all___tuple;
static PyObject *const_list_str_digest_f6171a21347f4128db317921140cb3a5_list;
static PyObject *const_list_str_plain_ranf_str_plain_random_str_plain_sample_list;

static void _initModuleConstants(void)
{
    const_str_plain_ranf = UNSTREAM_STRING( &constant_bin[ 1995754 ], 4, 1 );
    const_str_plain_mtrand = UNSTREAM_STRING( &constant_bin[ 1995758 ], 6, 1 );
    const_str_plain_random_sample = UNSTREAM_STRING( &constant_bin[ 210152 ], 13, 1 );
    const_str_plain___RandomState_ctor = UNSTREAM_STRING( &constant_bin[ 1995764 ], 18, 1 );
    const_dict_8d5ecb0ffa5021548091fbef6cfd7cd7 = _PyDict_NewPresized( 1 );
    const_str_digest_fcda2d27ae75462363a153fe6ac4979f = UNSTREAM_STRING( &constant_bin[ 1995782 ], 26, 0 );
    PyDict_SetItem( const_dict_8d5ecb0ffa5021548091fbef6cfd7cd7, const_str_plain_message, const_str_digest_fcda2d27ae75462363a153fe6ac4979f );
    const_str_digest_50caa02149cf97bd5dfffd930c7ea48b = UNSTREAM_STRING( &constant_bin[ 1995808 ], 4470, 0 );
    const_str_digest_92243dccb1e5b8275aab869e2394e234 = UNSTREAM_STRING( &constant_bin[ 2000278 ], 57, 0 );
    const_str_digest_a24378a3499d159c8006a192b7a36d9b = UNSTREAM_STRING( &constant_bin[ 2000335 ], 92, 0 );
    const_str_digest_f6171a21347f4128db317921140cb3a5 = UNSTREAM_STRING( &constant_bin[ 2000278 ], 45, 0 );
    const_tuple_str_plain___doc___str_plain___all___tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain___doc___str_plain___all___tuple, 0, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_str_plain___doc___str_plain___all___tuple, 1, const_str_plain___all__ ); Py_INCREF( const_str_plain___all__ );
    const_list_str_digest_f6171a21347f4128db317921140cb3a5_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_f6171a21347f4128db317921140cb3a5_list, 0, const_str_digest_f6171a21347f4128db317921140cb3a5 ); Py_INCREF( const_str_digest_f6171a21347f4128db317921140cb3a5 );
    const_list_str_plain_ranf_str_plain_random_str_plain_sample_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_ranf_str_plain_random_str_plain_sample_list, 0, const_str_plain_ranf ); Py_INCREF( const_str_plain_ranf );
    PyList_SET_ITEM( const_list_str_plain_ranf_str_plain_random_str_plain_sample_list, 1, const_str_plain_random ); Py_INCREF( const_str_plain_random );
    PyList_SET_ITEM( const_list_str_plain_ranf_str_plain_random_str_plain_sample_list, 2, const_str_plain_sample ); Py_INCREF( const_str_plain_sample );
}

// The module code objects.
static PyCodeObject *codeobj_445970612162afe90ec5cd285a8f2056;
static PyCodeObject *codeobj_1b75949e866213e15d242056ef2afb92;

static void _initModuleCodeObjects(void)
{
    codeobj_445970612162afe90ec5cd285a8f2056 = MAKE_CODEOBJ( const_str_digest_92243dccb1e5b8275aab869e2394e234, const_str_plain___RandomState_ctor, 105, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1b75949e866213e15d242056ef2afb92 = MAKE_CODEOBJ( const_str_digest_92243dccb1e5b8275aab869e2394e234, const_str_plain_random, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1___RandomState_ctor_of_module_numpy$random(  );


// The module function definitions.
static PyObject *impl_function_1___RandomState_ctor_of_module_numpy$random( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_445970612162afe90ec5cd285a8f2056, module_numpy$random );
    PyFrameObject *frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_RandomState );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RandomState );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 210181 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 110;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function )
    {
        PyTracebackObject *traceback_new = (PyTracebackObject *)MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }


    tmp_frame_locals = PyDict_New();
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_1___RandomState_ctor_of_module_numpy$random( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           args_given + kw_size
        );
#else
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           kw_size > 0 ? kw : NULL,
           args_given
        );
#endif

        goto error_exit;
    }


    return impl_function_1___RandomState_ctor_of_module_numpy$random( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1___RandomState_ctor_of_module_numpy$random( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_1___RandomState_ctor_of_module_numpy$random( self );
    }
    else
    {
        PyObject *result = fparse_function_1___RandomState_ctor_of_module_numpy$random( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___RandomState_ctor_of_module_numpy$random(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___RandomState_ctor_of_module_numpy$random,
        dparse_function_1___RandomState_ctor_of_module_numpy$random,
        const_str_plain___RandomState_ctor,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_445970612162afe90ec5cd285a8f2056,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$random,
        const_str_digest_a24378a3499d159c8006a192b7a36d9b
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$random =
{
    PyModuleDef_HEAD_INIT,
    "numpy.random",   /* m_name */
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

MOD_INIT_DECL( numpy$random )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$random );
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

    // puts( "in initnumpy$random" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$random = Py_InitModule4(
        "numpy.random",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$random = PyModule_Create( &mdef_numpy$random );
#endif

    moduledict_numpy$random = (PyDictObject *)((PyModuleObject *)module_numpy$random)->md_dict;

    assertObject( module_numpy$random );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_783753e47dfcb01e47cad374f1cc82a6, module_numpy$random );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$random );

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
    PyObjectTempVariable tmp_with_1__source;
    PyObjectTempVariable tmp_with_1__exit;
    PyObjectTempVariable tmp_with_1__enter;
    PyObjectTempVariable tmp_with_1__indicator;
    PyObjectTempVariable tmp_assign_unpack_1__assign_source;
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
    PyObject *tmp_attr_source_1;
    PyObject *tmp_attr_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
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
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_star_imported_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_50caa02149cf97bd5dfffd930c7ea48b;
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_92243dccb1e5b8275aab869e2394e234;
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f6171a21347f4128db317921140cb3a5_list );
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_1b75949e866213e15d242056ef2afb92, module_numpy$random );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 89;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 89;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 89;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 91;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 94;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain___doc___str_plain___all___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 94;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain___doc___str_plain___all___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain___all__ );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    // Tried code
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4693 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 97;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_catch_warnings );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_1;
    }
    frame_module->f_lineno = 97;
    tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_1;
    }
    assert( tmp_with_1__source.object == NULL );
    tmp_with_1__source.object = tmp_assign_source_10;

    tmp_attr_source_1 = tmp_with_1__source.object;

    tmp_assign_source_11 = LOOKUP_SPECIAL( tmp_attr_source_1, const_str_plain___exit__ );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_1;
    }
    assert( tmp_with_1__exit.object == NULL );
    tmp_with_1__exit.object = tmp_assign_source_11;

    tmp_attr_source_2 = tmp_with_1__source.object;

    tmp_called_2 = LOOKUP_SPECIAL( tmp_attr_source_2, const_str_plain___enter__ );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_1;
    }
    frame_module->f_lineno = 97;
    tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_1;
    }
    assert( tmp_with_1__enter.object == NULL );
    tmp_with_1__enter.object = tmp_assign_source_12;

    tmp_assign_source_13 = Py_True;
    assert( tmp_with_1__indicator.object == NULL );
    tmp_with_1__indicator.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    // Tried code
    // Tried block of try/except
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4693 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto try_except_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_filterwarnings );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 98;
        goto try_except_handler_1;
    }
    tmp_call_pos_1 = const_tuple_str_plain_ignore_tuple;
    tmp_call_kw_1 = PyDict_Copy( const_dict_8d5ecb0ffa5021548091fbef6cfd7cd7 );
    frame_module->f_lineno = 98;
    tmp_unused = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 98;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 99;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_mtrand, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 99;
        goto try_except_handler_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$random, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 99;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_star_imported_1 );
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
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );



        goto try_finally_handler_2;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_14 = Py_False;
    if (tmp_with_1__indicator.object == NULL)
    {
        tmp_with_1__indicator.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = tmp_with_1__indicator.object;
        tmp_with_1__indicator.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_called_4 = tmp_with_1__exit.object;

    tmp_call_arg_element_1 = PyThreadState_GET()->exc_type;
    tmp_call_arg_element_2 = PyThreadState_GET()->exc_value;
    tmp_call_arg_element_3 = PyThreadState_GET()->exc_traceback;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );



        goto try_finally_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );


        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_2;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_2;
    branch_end_1:;
    try_except_end_1:;
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
    tmp_compare_left_2 = tmp_with_1__indicator.object;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_5 = tmp_with_1__exit.object;

    tmp_call_arg_element_4 = Py_None;
    tmp_call_arg_element_5 = Py_None;
    tmp_call_arg_element_6 = Py_None;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );



        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
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
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_1 );exception_keeper_type_1 = NULL;
    Py_XDECREF( exception_keeper_value_1 );exception_keeper_value_1 = NULL;
    Py_XDECREF( exception_keeper_tb_1 );exception_keeper_tb_1 = NULL;
    goto try_finally_handler_1;
    finally_end_1:;
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
    Py_XDECREF( tmp_with_1__source.object );
    tmp_with_1__source.object = NULL;

    Py_XDECREF( tmp_with_1__enter.object );
    tmp_with_1__enter.object = NULL;

    Py_XDECREF( tmp_with_1__exit.object );
    tmp_with_1__exit.object = NULL;

    Py_XDECREF( tmp_with_1__indicator.object );
    tmp_with_1__indicator.object = NULL;

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
    // Tried code
    tmp_assign_source_15 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_random_sample );

    if (unlikely( tmp_assign_source_15 == NULL ))
    {
        tmp_assign_source_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random_sample );
    }

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 210146 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto try_finally_handler_3;
    }

    assert( tmp_assign_unpack_1__assign_source.object == NULL );
    tmp_assign_unpack_1__assign_source.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_assign_source_16 = tmp_assign_unpack_1__assign_source.object;

    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_ranf, tmp_assign_source_16 );
    tmp_assign_source_17 = tmp_assign_unpack_1__assign_source.object;

    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_random, tmp_assign_source_17 );
    tmp_assign_source_18 = tmp_assign_unpack_1__assign_source.object;

    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_sample, tmp_assign_source_18 );
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
    Py_XDECREF( tmp_assign_unpack_1__assign_source.object );
    tmp_assign_unpack_1__assign_source.object = NULL;

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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = LIST_COPY( const_list_str_plain_ranf_str_plain_random_str_plain_sample_list );
    frame_module->f_lineno = 103;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_19 = MAKE_FUNCTION_function_1___RandomState_ctor_of_module_numpy$random(  );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___RandomState_ctor, tmp_assign_source_19 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 112;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_84b225ef8df4b1024b676eb721c5fe2d, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_20 );
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 113;
    tmp_source_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_test );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_21 );
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 114;
    tmp_source_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bench );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_22 );

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

    return MOD_RETURN_VALUE( module_numpy$random );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
