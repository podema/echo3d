// Generated code for Python source for module 'numpy.core'
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

// The _module_numpy$core is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$core;
PyDictObject *moduledict_numpy$core;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_mod;
static PyObject *const_str_plain_rec;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_amax;
extern PyObject *const_str_plain_amin;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain_round;
extern PyObject *const_str_plain_ufunc;
extern PyObject *const_str_plain_umath;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_str_plain_machar;
extern PyObject *const_str_plain_memmap;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_pickle;
extern PyObject *const_str_plain_round_;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_copyreg;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_records;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_absolute;
extern PyObject *const_str_plain_copy_reg;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain__internal;
extern PyObject *const_str_plain_chararray;
extern PyObject *const_str_plain_getlimits;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_multiarray;
static PyObject *const_str_plain_scalarmath;
extern PyObject *const_str_plain_sctypeDict;
extern PyObject *const_str_plain_shape_base;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_fromnumeric;
static PyObject *const_str_plain_whichmodule;
extern PyObject *const_str_plain_defchararray;
extern PyObject *const_str_plain_numerictypes;
extern PyObject *const_str_plain_set_typeDict;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain__ufunc_reduce;
extern PyObject *const_str_plain_function_base;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_func_tuple;
extern PyObject *const_tuple_str_plain_umath_tuple;
static PyObject *const_str_plain__ufunc_reconstruct;
extern PyObject *const_tuple_str_plain_Tester_tuple;
static PyObject *const_tuple_str_plain_machar_tuple;
static PyObject *const_list_str_plain_chararray_list;
extern PyObject *const_tuple_str_plain___doc___tuple;
extern PyObject *const_tuple_str_plain_numeric_tuple;
static PyObject *const_tuple_str_plain_records_tuple;
extern PyObject *const_tuple_str_plain_version_tuple;
static PyObject *const_tuple_str_plain_absolute_tuple;
static PyObject *const_tuple_str_plain__internal_tuple;
extern PyObject *const_tuple_str_plain_chararray_tuple;
extern PyObject *const_tuple_str_plain_getlimits_tuple;
extern PyObject *const_tuple_str_plain_multiarray_tuple;
static PyObject *const_tuple_str_plain_scalarmath_tuple;
static PyObject *const_tuple_str_plain_shape_base_tuple;
extern PyObject *const_tuple_str_plain_fromnumeric_tuple;
static PyObject *const_tuple_str_plain_whichmodule_tuple;
static PyObject *const_tuple_str_plain_defchararray_tuple;
extern PyObject *const_tuple_str_plain_numerictypes_tuple;
extern PyObject *const_tuple_str_plain_function_base_tuple;
extern PyObject *const_str_digest_2e907e4e986e5c31c19852745e3b9bed;
extern PyObject *const_str_digest_3e8d4c5fbc78426f466387c576765620;
static PyObject *const_str_digest_499a472636482af0e32c32fb2a8d92a8;
extern PyObject *const_str_digest_84b225ef8df4b1024b676eb721c5fe2d;
static PyObject *const_str_digest_af27b010ffb0fe037731be0af07c66a5;
static PyObject *const_tuple_str_plain_module_str_plain_name_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_list_str_digest_499a472636482af0e32c32fb2a8d92a8_list;
static PyObject *const_list_str_plain_char_str_plain_rec_str_plain_memmap_list;
static PyObject *const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple;
static PyObject *const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple;
static PyObject *const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_rec = UNSTREAM_STRING( &constant_bin[ 1535 ], 3, 1 );
    const_str_plain_scalarmath = UNSTREAM_STRING( &constant_bin[ 634588 ], 10, 1 );
    const_str_plain_whichmodule = UNSTREAM_STRING( &constant_bin[ 634598 ], 11, 1 );
    const_str_plain__ufunc_reduce = UNSTREAM_STRING( &constant_bin[ 52670 ], 13, 1 );
    const_str_plain__ufunc_reconstruct = UNSTREAM_STRING( &constant_bin[ 52705 ], 18, 1 );
    const_tuple_str_plain_machar_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_machar_tuple, 0, const_str_plain_machar ); Py_INCREF( const_str_plain_machar );
    const_list_str_plain_chararray_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_chararray_list, 0, const_str_plain_chararray ); Py_INCREF( const_str_plain_chararray );
    const_tuple_str_plain_records_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_records_tuple, 0, const_str_plain_records ); Py_INCREF( const_str_plain_records );
    const_tuple_str_plain_absolute_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_absolute_tuple, 0, const_str_plain_absolute ); Py_INCREF( const_str_plain_absolute );
    const_tuple_str_plain__internal_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__internal_tuple, 0, const_str_plain__internal ); Py_INCREF( const_str_plain__internal );
    const_tuple_str_plain_scalarmath_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scalarmath_tuple, 0, const_str_plain_scalarmath ); Py_INCREF( const_str_plain_scalarmath );
    const_tuple_str_plain_shape_base_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_shape_base_tuple, 0, const_str_plain_shape_base ); Py_INCREF( const_str_plain_shape_base );
    const_tuple_str_plain_whichmodule_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_whichmodule_tuple, 0, const_str_plain_whichmodule ); Py_INCREF( const_str_plain_whichmodule );
    const_tuple_str_plain_defchararray_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_defchararray_tuple, 0, const_str_plain_defchararray ); Py_INCREF( const_str_plain_defchararray );
    const_str_digest_499a472636482af0e32c32fb2a8d92a8 = UNSTREAM_STRING( &constant_bin[ 634609 ], 43, 0 );
    const_str_digest_af27b010ffb0fe037731be0af07c66a5 = UNSTREAM_STRING( &constant_bin[ 634652 ], 55, 0 );
    const_tuple_str_plain_module_str_plain_name_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_name_tuple, 0, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_name_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_list_str_digest_499a472636482af0e32c32fb2a8d92a8_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_499a472636482af0e32c32fb2a8d92a8_list, 0, const_str_digest_499a472636482af0e32c32fb2a8d92a8 ); Py_INCREF( const_str_digest_499a472636482af0e32c32fb2a8d92a8 );
    const_list_str_plain_char_str_plain_rec_str_plain_memmap_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_char_str_plain_rec_str_plain_memmap_list, 0, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    PyList_SET_ITEM( const_list_str_plain_char_str_plain_rec_str_plain_memmap_list, 1, const_str_plain_rec ); Py_INCREF( const_str_plain_rec );
    PyList_SET_ITEM( const_list_str_plain_char_str_plain_rec_str_plain_memmap_list, 2, const_str_plain_memmap ); Py_INCREF( const_str_plain_memmap );
    const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple, 0, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple, 2, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, 0, const_str_plain_amax ); Py_INCREF( const_str_plain_amax );
    PyTuple_SET_ITEM( const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, 1, const_str_plain_amin ); Py_INCREF( const_str_plain_amin );
    PyTuple_SET_ITEM( const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, 2, const_str_plain_round_ ); Py_INCREF( const_str_plain_round_ );
    const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple, 1, const_str_plain_whichmodule ); Py_INCREF( const_str_plain_whichmodule );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
}

// The module code objects.
static PyCodeObject *codeobj_31b7cf9e3b7a452f6fdb2c8deeb2ba2d;
static PyCodeObject *codeobj_d47980b8e30b4c358ec75d7bce8ebada;
static PyCodeObject *codeobj_0879a16260c35f785a3ad30793fc04ae;
static PyCodeObject *codeobj_b92eb19fbde47fa96a52232e083c21bc;
static PyCodeObject *codeobj_6111db91fa9d880f4c179b0744c4e344;

static void _initModuleCodeObjects(void)
{
    codeobj_31b7cf9e3b7a452f6fdb2c8deeb2ba2d = MAKE_CODEOBJ( const_str_digest_af27b010ffb0fe037731be0af07c66a5, const_str_plain__ufunc_reconstruct, 54, const_tuple_str_plain_module_str_plain_name_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d47980b8e30b4c358ec75d7bce8ebada = MAKE_CODEOBJ( const_str_digest_af27b010ffb0fe037731be0af07c66a5, const_str_plain__ufunc_reconstruct, 54, const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0879a16260c35f785a3ad30793fc04ae = MAKE_CODEOBJ( const_str_digest_af27b010ffb0fe037731be0af07c66a5, const_str_plain__ufunc_reduce, 58, const_tuple_str_plain_func_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b92eb19fbde47fa96a52232e083c21bc = MAKE_CODEOBJ( const_str_digest_af27b010ffb0fe037731be0af07c66a5, const_str_plain__ufunc_reduce, 58, const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6111db91fa9d880f4c179b0744c4e344 = MAKE_CODEOBJ( const_str_digest_af27b010ffb0fe037731be0af07c66a5, const_str_plain_core, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1__ufunc_reconstruct_of_module_numpy$core(  );


static PyObject *MAKE_FUNCTION_function_2__ufunc_reduce_of_module_numpy$core(  );


// The module function definitions.
static PyObject *impl_function_1__ufunc_reconstruct_of_module_numpy$core( Nuitka_FunctionObject *self, PyObject *_python_par_module, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_module; par_module.object = _python_par_module;
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable var_mod;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_31b7cf9e3b7a452f6fdb2c8deeb2ba2d, module_numpy$core );
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
    tmp_import_modulename_1 = par_module.object;

    if ( tmp_import_modulename_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47503 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_import_fromlist_1 = const_tuple_empty;
    tmp_import_level_1 = const_int_0;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_mod.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mod,
            var_mod.object
        );

    }
    if ((par_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_module,
            par_module.object
        );

    }
    if ((par_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_name,
            par_name.object
        );

    }
    frame_function->f_lineno = 55;
    tmp_assign_source_1 = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    assert( var_mod.object == NULL );
    var_mod.object = tmp_assign_source_1;

    tmp_getattr_target_1 = var_mod.object;

    tmp_getattr_attr_1 = par_name.object;

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
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
    if ((var_mod.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mod,
            var_mod.object
        );

    }
    if ((par_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_module,
            par_module.object
        );

    }
    if ((par_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            par_name.object
        );

    }
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
static PyObject *fparse_function_1__ufunc_reconstruct_of_module_numpy$core( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_module = NULL;
    PyObject *_python_par_name = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_ufunc_reconstruct() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_module == key )
            {
                assert( _python_par_module == NULL );
                _python_par_module = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_module, key ) == 1 )
            {
                assert( _python_par_module == NULL );
                _python_par_module = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_ufunc_reconstruct() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_module != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_module = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_module == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_module = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }
    if (likely( 1 < args_given ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_module == NULL || _python_par_name == NULL ))
    {
        PyObject *values[] = { _python_par_module, _python_par_name };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1__ufunc_reconstruct_of_module_numpy$core( self, _python_par_module, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_module );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_1__ufunc_reconstruct_of_module_numpy$core( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1__ufunc_reconstruct_of_module_numpy$core( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__ufunc_reconstruct_of_module_numpy$core( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__ufunc_reduce_of_module_numpy$core( Nuitka_FunctionObject *self, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable var_whichmodule;
    PyObjectLocalVariable var_name;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0879a16260c35f785a3ad30793fc04ae, module_numpy$core );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_whichmodule.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_whichmodule,
            var_whichmodule.object
        );

    }
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_func,
            par_func.object
        );

    }
    frame_function->f_lineno = 59;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_pickle, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_whichmodule_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_whichmodule );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    assert( var_whichmodule.object == NULL );
    var_whichmodule.object = tmp_assign_source_1;

    tmp_source_name_1 = par_func.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    assert( var_name.object == NULL );
    var_name.object = tmp_assign_source_2;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52739 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_called_1 = var_whichmodule.object;

    tmp_call_arg_element_1 = par_func.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_name.object;

    frame_function->f_lineno = 61;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_name.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
    if ((var_whichmodule.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_whichmodule,
            var_whichmodule.object
        );

    }
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
        );

    }
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
static PyObject *fparse_function_2__ufunc_reduce_of_module_numpy$core( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "_ufunc_reduce() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_ufunc_reduce() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
#if PYTHON_VERSION < 270
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_size );
#elif PYTHON_VERSION < 330
        ERROR_TOO_MANY_ARGUMENTS( self, args_given + kw_found );
#else
        ERROR_TOO_MANY_ARGUMENTS( self, args_given, kw_only_found );
#endif
        goto error_exit;
    }


    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
#elif PYTHON_VERSION < 300
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found );
#else
            ERROR_TOO_FEW_ARGUMENTS( self, args_given + kw_found - kw_only_found );
#endif

            goto error_exit;
        }
#endif
    }

#if PYTHON_VERSION >= 330
    if (unlikely( _python_par_func == NULL ))
    {
        PyObject *values[] = { _python_par_func };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2__ufunc_reduce_of_module_numpy$core( self, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_2__ufunc_reduce_of_module_numpy$core( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2__ufunc_reduce_of_module_numpy$core( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__ufunc_reduce_of_module_numpy$core( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1__ufunc_reconstruct_of_module_numpy$core(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__ufunc_reconstruct_of_module_numpy$core,
        dparse_function_1__ufunc_reconstruct_of_module_numpy$core,
        const_str_plain__ufunc_reconstruct,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d47980b8e30b4c358ec75d7bce8ebada,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__ufunc_reduce_of_module_numpy$core(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__ufunc_reduce_of_module_numpy$core,
        dparse_function_2__ufunc_reduce_of_module_numpy$core,
        const_str_plain__ufunc_reduce,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b92eb19fbde47fa96a52232e083c21bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core",   /* m_name */
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

MOD_INIT_DECL( numpy$core )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core );
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

    // puts( "in initnumpy$core" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core = Py_InitModule4(
        "numpy.core",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core = PyModule_Create( &mdef_numpy$core );
#endif

    moduledict_numpy$core = (PyDictObject *)((PyModuleObject *)module_numpy$core)->md_dict;

    assertObject( module_numpy$core );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3e8d4c5fbc78426f466387c576765620, module_numpy$core );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$core );

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
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
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
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    bool tmp_isnot_7;
    bool tmp_isnot_8;
    int tmp_res;
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
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_star_imported_5;
    PyObject *tmp_star_imported_6;
    PyObject *tmp_star_imported_7;
    PyObject *tmp_star_imported_8;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_af27b010ffb0fe037731be0af07c66a5;
    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_499a472636482af0e32c32fb2a8d92a8_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_6111db91fa9d880f4c179b0744c4e344, module_numpy$core );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$core)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$core)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain___doc___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_2e907e4e986e5c31c19852745e3b9bed, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_version_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_version );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_empty, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_multiarray_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_multiarray );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_multiarray, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_empty, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_umath_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_umath );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_umath, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_empty, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain__internal_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain__internal );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__internal, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_empty, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_numerictypes_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_numerictypes );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_nt, tmp_assign_source_12 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_multiarray );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_multiarray );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52339 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_typeDict );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52371 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sctypeDict );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 10;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_empty, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_numeric_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_numeric, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 12;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_empty, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_fromnumeric_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_fromnumeric );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_fromnumeric, tmp_assign_source_14 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 14;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_fromnumeric, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_empty, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_defchararray_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_defchararray );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_char, tmp_assign_source_15 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_empty, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_records_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_records );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_rec, tmp_assign_source_16 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 17;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_records, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_3 );

        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_3 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 18;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_plain_memmap, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_4 );

        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_4 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_defchararray, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_plain_chararray_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_chararray );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_chararray, tmp_assign_source_17 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_empty, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_plain_scalarmath_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_scalarmath );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_scalarmath, tmp_assign_source_18 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_empty, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_plain_function_base_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_function_base );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_function_base, tmp_assign_source_19 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 22;
    tmp_star_imported_5 = IMPORT_MODULE( const_str_plain_function_base, tmp_import_globals_21, tmp_import_globals_21, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_5 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_5 );
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_empty, tmp_import_globals_22, tmp_import_globals_22, const_tuple_str_plain_machar_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_machar );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_machar, tmp_assign_source_20 );
    tmp_import_globals_23 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 24;
    tmp_star_imported_6 = IMPORT_MODULE( const_str_plain_machar, tmp_import_globals_23, tmp_import_globals_23, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_6 );

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_6 );
    tmp_import_globals_24 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_empty, tmp_import_globals_24, tmp_import_globals_24, const_tuple_str_plain_getlimits_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_getlimits );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_getlimits, tmp_assign_source_21 );
    tmp_import_globals_25 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 26;
    tmp_star_imported_7 = IMPORT_MODULE( const_str_plain_getlimits, tmp_import_globals_25, tmp_import_globals_25, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_7 );

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_7 );
    tmp_import_globals_26 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 27;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_empty, tmp_import_globals_26, tmp_import_globals_26, const_tuple_str_plain_shape_base_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_shape_base );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_shape_base, tmp_assign_source_22 );
    tmp_import_globals_27 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 28;
    tmp_star_imported_8 = IMPORT_MODULE( const_str_plain_shape_base, tmp_import_globals_27, tmp_import_globals_27, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_8 );

        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_8 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_nt );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52371 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_import_globals_28 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_plain_fromnumeric, tmp_import_globals_28, tmp_import_globals_28, const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, const_int_pos_1 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_amax );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_max, tmp_assign_source_23 );
    tmp_import_globals_29 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_plain_fromnumeric, tmp_import_globals_29, tmp_import_globals_29, const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, const_int_pos_1 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_amin );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_min, tmp_assign_source_24 );
    tmp_import_globals_30 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 31;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_plain_fromnumeric, tmp_import_globals_30, tmp_import_globals_30, const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, const_int_pos_1 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_round_ );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_round, tmp_assign_source_25 );
    tmp_import_globals_31 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 33;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_31, tmp_import_globals_31, const_tuple_str_plain_absolute_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_absolute );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_abs, tmp_assign_source_26 );
    tmp_assign_source_27 = LIST_COPY( const_list_str_plain_char_str_plain_rec_str_plain_memmap_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_27 );
    tmp_assign_source_28 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_28 == NULL ))
    {
        tmp_assign_source_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_28 );

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52395 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 36;
        goto try_finally_handler_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___all__ );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto try_finally_handler_1;
    }
    tmp_assign_source_29 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_29;

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
    tmp_assign_source_30 = tmp_inplace_assign_1__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_30 );
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
    tmp_assign_source_31 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_31 == NULL ))
    {
        tmp_assign_source_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_31 );

    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_2__inplace_start.object;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_fromnumeric );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fromnumeric );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52424 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto try_finally_handler_2;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___all__ );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_2;
    }
    tmp_assign_source_32 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_2;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_32;

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
    tmp_assign_source_33 = tmp_inplace_assign_2__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_33 );
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
    tmp_assign_source_34 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_34 == NULL ))
    {
        tmp_assign_source_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_3__inplace_start.object == NULL );
    tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_34 );

    // Tried code
    tmp_binop_left_3 = tmp_inplace_assign_3__inplace_start.object;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_rec );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rec );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52457 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto try_finally_handler_3;
    }

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___all__ );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto try_finally_handler_3;
    }
    tmp_assign_source_35 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto try_finally_handler_3;
    }
    assert( tmp_inplace_assign_3__inplace_end.object == NULL );
    tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_35;

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
    tmp_assign_source_36 = tmp_inplace_assign_3__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_36 );
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
    tmp_assign_source_37 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_37 == NULL ))
    {
        tmp_assign_source_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_4__inplace_start.object == NULL );
    tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_37 );

    // Tried code
    tmp_binop_left_4 = tmp_inplace_assign_4__inplace_start.object;

    tmp_binop_right_4 = LIST_COPY( const_list_str_plain_chararray_list );
    tmp_assign_source_38 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto try_finally_handler_4;
    }
    assert( tmp_inplace_assign_4__inplace_end.object == NULL );
    tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_38;

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
    tmp_assign_source_39 = tmp_inplace_assign_4__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_39 );
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
    tmp_assign_source_40 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_40 == NULL ))
    {
        tmp_assign_source_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_5__inplace_start.object == NULL );
    tmp_inplace_assign_5__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_40 );

    // Tried code
    tmp_binop_left_5 = tmp_inplace_assign_5__inplace_start.object;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_function_base );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52482 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto try_finally_handler_5;
    }

    tmp_binop_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___all__ );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto try_finally_handler_5;
    }
    tmp_assign_source_41 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto try_finally_handler_5;
    }
    assert( tmp_inplace_assign_5__inplace_end.object == NULL );
    tmp_inplace_assign_5__inplace_end.object = tmp_assign_source_41;

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
    tmp_assign_source_42 = tmp_inplace_assign_5__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_42 );
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
    tmp_assign_source_43 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_43 == NULL ))
    {
        tmp_assign_source_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_6__inplace_start.object == NULL );
    tmp_inplace_assign_6__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_43 );

    // Tried code
    tmp_binop_left_6 = tmp_inplace_assign_6__inplace_start.object;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_machar );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_machar );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52517 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto try_finally_handler_6;
    }

    tmp_binop_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___all__ );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto try_finally_handler_6;
    }
    tmp_assign_source_44 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto try_finally_handler_6;
    }
    assert( tmp_inplace_assign_6__inplace_end.object == NULL );
    tmp_inplace_assign_6__inplace_end.object = tmp_assign_source_44;

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
    tmp_assign_source_45 = tmp_inplace_assign_6__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_45 );
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
    tmp_assign_source_46 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_46 == NULL ))
    {
        tmp_assign_source_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_7__inplace_start.object == NULL );
    tmp_inplace_assign_7__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_46 );

    // Tried code
    tmp_binop_left_7 = tmp_inplace_assign_7__inplace_start.object;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_getlimits );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getlimits );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52545 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 42;
        goto try_finally_handler_7;
    }

    tmp_binop_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___all__ );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 42;
        goto try_finally_handler_7;
    }
    tmp_assign_source_47 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 42;
        goto try_finally_handler_7;
    }
    assert( tmp_inplace_assign_7__inplace_end.object == NULL );
    tmp_inplace_assign_7__inplace_end.object = tmp_assign_source_47;

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
    tmp_assign_source_48 = tmp_inplace_assign_7__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_48 );
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
    tmp_assign_source_49 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_assign_source_49 == NULL ))
    {
        tmp_assign_source_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_assign_source_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48529 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_8__inplace_start.object == NULL );
    tmp_inplace_assign_8__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_49 );

    // Tried code
    tmp_binop_left_8 = tmp_inplace_assign_8__inplace_start.object;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_shape_base );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shape_base );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52576 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 43;
        goto try_finally_handler_8;
    }

    tmp_binop_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___all__ );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 43;
        goto try_finally_handler_8;
    }
    tmp_assign_source_50 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 43;
        goto try_finally_handler_8;
    }
    assert( tmp_inplace_assign_8__inplace_end.object == NULL );
    tmp_inplace_assign_8__inplace_end.object = tmp_assign_source_50;

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
    tmp_assign_source_51 = tmp_inplace_assign_8__inplace_end.object;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_51 );
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
    tmp_import_globals_32 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 46;
    tmp_import_name_from_24 = IMPORT_MODULE( const_str_digest_84b225ef8df4b1024b676eb721c5fe2d, tmp_import_globals_32, tmp_import_globals_32, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_24 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_52 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 47;
    tmp_source_name_10 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_53 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_test );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_53 );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 48;
    tmp_source_name_11 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_bench );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_54 );
    tmp_assign_source_55 = MAKE_FUNCTION_function_1__ufunc_reconstruct_of_module_numpy$core(  );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_55 );

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct, tmp_assign_source_55 );
    tmp_assign_source_56 = MAKE_FUNCTION_function_2__ufunc_reduce_of_module_numpy$core(  );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_56 );

        frame_module->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reduce, tmp_assign_source_56 );
    tmp_import_globals_33 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 64;
    tmp_assign_source_57 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_33, tmp_import_globals_33, Py_None, const_int_0 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_57 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_version_info );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compare_left_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = const_int_pos_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        frame_module->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_import_globals_34 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 66;
    tmp_assign_source_58 = IMPORT_MODULE( const_str_plain_copyreg, tmp_import_globals_34, tmp_import_globals_34, Py_None, const_int_0 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_copyreg, tmp_assign_source_58 );
    goto branch_end_9;
    branch_no_9:;
    tmp_import_globals_35 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 68;
    tmp_assign_source_59 = IMPORT_MODULE( const_str_plain_copy_reg, tmp_import_globals_35, tmp_import_globals_35, Py_None, const_int_0 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_copyreg, tmp_assign_source_59 );
    branch_end_9:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_copyreg );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copyreg );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52608 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_pickle );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_ufunc );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ufunc );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52637 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reduce );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ufunc_reduce );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52664 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct );

    if (unlikely( tmp_call_arg_element_4 == NULL ))
    {
        tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct );
    }

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52699 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 70;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_copyreg );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52608 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_sys );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain__ufunc_reduce );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52664 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }


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

    return MOD_RETURN_VALUE( module_numpy$core );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
