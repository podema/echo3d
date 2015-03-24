// Generated code for Python source for module 'numpy.distutils.command'
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

// The _module_numpy$distutils$command is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command;
PyDictObject *moduledict_numpy$distutils$command;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_2;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_NA;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_bdist;
extern PyObject *const_str_plain_build;
extern PyObject *const_str_plain_clean;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_sdist;
extern PyObject *const_str_plain_config;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_command;
extern PyObject *const_str_plain_delattr;
extern PyObject *const_str_plain_install;
static PyObject *const_str_plain_payload;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_build_py;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_bdist_rpm;
extern PyObject *const_str_plain_build_ext;
extern PyObject *const_str_plain_build_src;
extern PyObject *const_str_plain___future__;
static PyObject *const_str_plain_bdist_dumb;
extern PyObject *const_str_plain_build_clib;
extern PyObject *const_str_plain_install_lib;
extern PyObject *const_str_plain___revision__;
extern PyObject *const_str_plain_install_clib;
extern PyObject *const_str_plain_install_data;
extern PyObject *const_str_plain_assert_raises;
extern PyObject *const_str_plain_bdist_wininst;
extern PyObject *const_str_plain_build_scripts;
static PyObject *const_str_plain_distutils_all;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_config_compiler;
extern PyObject *const_str_plain_install_headers;
extern PyObject *const_str_plain_install_scripts;
static PyObject *const_list_0bbba11320c0bcdfde9b2eb40463de91_list;
static PyObject *const_list_3e2e61107e998903d9314df3dd21b68a_list;
static PyObject *const_list_str_plain_payload_str_plain_dtype_list;
extern PyObject *const_str_digest_404a0227b167888c975e5dc246aff710;
static PyObject *const_str_digest_5cceff59f4caec6b36743fc223611a03;
extern PyObject *const_str_digest_99d531aa917ccafbd2d5bb0ba5350235;
static PyObject *const_str_digest_ac4555c7390ea481b559b48c7f873a75;
static PyObject *const_str_digest_c2db72ad64396d0bbc32a768ff7961df;
static PyObject *const_str_digest_fa6b155aa55880a6e5d97815e914a8bb;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_str_plain_test_na_writable_attributes_deletion;
static PyObject *const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple;
static PyObject *const_list_str_digest_c2db72ad64396d0bbc32a768ff7961df_list;

static void _initModuleConstants(void)
{
    const_str_plain_NA = UNSTREAM_STRING( &constant_bin[ 20621 ], 2, 1 );
    const_str_plain_payload = UNSTREAM_STRING( &constant_bin[ 896679 ], 7, 1 );
    const_str_plain_bdist_dumb = UNSTREAM_STRING( &constant_bin[ 896686 ], 10, 1 );
    const_str_plain_distutils_all = UNSTREAM_STRING( &constant_bin[ 83902 ], 13, 1 );
    const_list_0bbba11320c0bcdfde9b2eb40463de91_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 0, const_str_plain_build ); Py_INCREF( const_str_plain_build );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 1, const_str_plain_config_compiler ); Py_INCREF( const_str_plain_config_compiler );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 2, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 3, const_str_plain_build_src ); Py_INCREF( const_str_plain_build_src );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 4, const_str_plain_build_py ); Py_INCREF( const_str_plain_build_py );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 5, const_str_plain_build_ext ); Py_INCREF( const_str_plain_build_ext );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 6, const_str_plain_build_clib ); Py_INCREF( const_str_plain_build_clib );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 7, const_str_plain_build_scripts ); Py_INCREF( const_str_plain_build_scripts );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 8, const_str_plain_install ); Py_INCREF( const_str_plain_install );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 9, const_str_plain_install_data ); Py_INCREF( const_str_plain_install_data );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 10, const_str_plain_install_headers ); Py_INCREF( const_str_plain_install_headers );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 11, const_str_plain_install_lib ); Py_INCREF( const_str_plain_install_lib );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 12, const_str_plain_bdist_rpm ); Py_INCREF( const_str_plain_bdist_rpm );
    PyList_SET_ITEM( const_list_0bbba11320c0bcdfde9b2eb40463de91_list, 13, const_str_plain_sdist ); Py_INCREF( const_str_plain_sdist );
    const_list_3e2e61107e998903d9314df3dd21b68a_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 0, const_str_plain_clean ); Py_INCREF( const_str_plain_clean );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 1, const_str_plain_install_clib ); Py_INCREF( const_str_plain_install_clib );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 2, const_str_plain_install_scripts ); Py_INCREF( const_str_plain_install_scripts );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 3, const_str_plain_bdist ); Py_INCREF( const_str_plain_bdist );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 4, const_str_plain_bdist_dumb ); Py_INCREF( const_str_plain_bdist_dumb );
    PyList_SET_ITEM( const_list_3e2e61107e998903d9314df3dd21b68a_list, 5, const_str_plain_bdist_wininst ); Py_INCREF( const_str_plain_bdist_wininst );
    const_list_str_plain_payload_str_plain_dtype_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_payload_str_plain_dtype_list, 0, const_str_plain_payload ); Py_INCREF( const_str_plain_payload );
    PyList_SET_ITEM( const_list_str_plain_payload_str_plain_dtype_list, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_digest_5cceff59f4caec6b36743fc223611a03 = UNSTREAM_STRING( &constant_bin[ 896696 ], 68, 0 );
    const_str_digest_ac4555c7390ea481b559b48c7f873a75 = UNSTREAM_STRING( &constant_bin[ 896764 ], 54, 0 );
    const_str_digest_c2db72ad64396d0bbc32a768ff7961df = UNSTREAM_STRING( &constant_bin[ 896696 ], 56, 0 );
    const_str_digest_fa6b155aa55880a6e5d97815e914a8bb = UNSTREAM_STRING( &constant_bin[ 896818 ], 94, 0 );
    const_str_plain_test_na_writable_attributes_deletion = UNSTREAM_STRING( &constant_bin[ 896912 ], 36, 1 );
    const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple, 1, const_str_plain_attr ); Py_INCREF( const_str_plain_attr );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_list_str_digest_c2db72ad64396d0bbc32a768ff7961df_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_c2db72ad64396d0bbc32a768ff7961df_list, 0, const_str_digest_c2db72ad64396d0bbc32a768ff7961df ); Py_INCREF( const_str_digest_c2db72ad64396d0bbc32a768ff7961df );
}

// The module code objects.
static PyCodeObject *codeobj_017f4dbca42460e8f8f0a21a64a8920a;
static PyCodeObject *codeobj_7c4e61051e39b56a4c2969b5e48446d1;
static PyCodeObject *codeobj_f1c41fced365cc6f4a4f15d882036239;

static void _initModuleCodeObjects(void)
{
    codeobj_017f4dbca42460e8f8f0a21a64a8920a = MAKE_CODEOBJ( const_str_digest_5cceff59f4caec6b36743fc223611a03, const_str_plain_command, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7c4e61051e39b56a4c2969b5e48446d1 = MAKE_CODEOBJ( const_str_digest_5cceff59f4caec6b36743fc223611a03, const_str_plain_test_na_writable_attributes_deletion, 9, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f1c41fced365cc6f4a4f15d882036239 = MAKE_CODEOBJ( const_str_digest_5cceff59f4caec6b36743fc223611a03, const_str_plain_test_na_writable_attributes_deletion, 9, const_tuple_str_plain_a_str_plain_attr_str_plain_s_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command(  );


// The module function definitions.
static PyObject *impl_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_attr;
    PyObjectLocalVariable var_s;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7c4e61051e39b56a4c2969b5e48446d1, module_numpy$distutils$command );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 10;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_NA );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_int_pos_2;
    frame_function->f_lineno = 10;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    assert( var_a.object == NULL );
    var_a.object = tmp_assign_source_1;

    tmp_assign_source_2 = LIST_COPY( const_list_str_plain_payload_str_plain_dtype_list );
    assert( var_attr.object == NULL );
    var_attr.object = tmp_assign_source_2;

    tmp_iter_arg_1 = var_attr.object;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_3;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_4 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 12;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_for_loop_1__iter_value.object;

    if (var_s.object == NULL)
    {
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_assert_raises );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_raises );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83931 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 13;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = PyExc_AttributeError;
    tmp_call_arg_element_3 = LOOKUP_BUILTIN( const_str_plain_delattr );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 13;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_4 = var_a.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 13;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_5 = var_s.object;

    frame_function->f_lineno = 13;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 13;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto try_finally_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
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

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
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
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            var_a.object
        );

    }
    if ((var_attr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_attr,
            var_attr.object
        );

    }
    if ((var_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_s,
            var_s.object
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command( self );
    }
    else
    {
        PyObject *result = fparse_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command,
        dparse_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command,
        const_str_plain_test_na_writable_attributes_deletion,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f1c41fced365cc6f4a4f15d882036239,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$command )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command );
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

    // puts( "in initnumpy$distutils$command" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command = Py_InitModule4(
        "numpy.distutils.command",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command = PyModule_Create( &mdef_numpy$distutils$command );
#endif

    moduledict_numpy$distutils$command = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command)->md_dict;

    assertObject( module_numpy$distutils$command );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_99d531aa917ccafbd2d5bb0ba5350235, module_numpy$distutils$command );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command );

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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = const_str_digest_fa6b155aa55880a6e5d97815e914a8bb;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5cceff59f4caec6b36743fc223611a03;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_c2db72ad64396d0bbc32a768ff7961df_list );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_017f4dbca42460e8f8f0a21a64a8920a, module_numpy$distutils$command );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$command)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_function_1_test_na_writable_attributes_deletion_of_module_numpy$distutils$command(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_test_na_writable_attributes_deletion, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_ac4555c7390ea481b559b48c7f873a75;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_8 );
    tmp_assign_source_9 = LIST_COPY( const_list_3e2e61107e998903d9314df3dd21b68a_list );
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_distutils_all, tmp_assign_source_9 );
    tmp_import_modulename_1 = const_str_digest_404a0227b167888c975e5dc246aff710;
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$command)->md_dict;
    tmp_import_locals_1 = ((PyModuleObject *)module_numpy$distutils$command)->md_dict;
    tmp_import_fromlist_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_distutils_all );

    if (unlikely( tmp_import_fromlist_1 == NULL ))
    {
        tmp_import_fromlist_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils_all );
    }

    if ( tmp_import_fromlist_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83896 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_import_level_1 = const_int_0;
    frame_module->f_lineno = 27;
    tmp_unused = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_4, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_1 = LIST_COPY( const_list_0bbba11320c0bcdfde9b2eb40463de91_list );
    tmp_binop_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain_distutils_all );

    if (unlikely( tmp_binop_right_1 == NULL ))
    {
        tmp_binop_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_distutils_all );
    }

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83896 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );

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

    return MOD_RETURN_VALUE( module_numpy$distutils$command );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
