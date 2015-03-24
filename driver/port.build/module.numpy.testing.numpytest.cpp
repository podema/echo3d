// Generated code for Python source for module 'numpy.testing.numpytest'
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

// The _module_numpy$testing$numpytest is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$testing$numpytest;
PyDictObject *moduledict_numpy$testing$numpytest;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_dot;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_m;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_exec;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_isdir;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_angle_string;
extern PyObject *const_str_plain_isfile;
extern PyObject *const_str_plain_subdir;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_listdir;
extern PyObject *const_str_plain_package;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_importall;
extern PyObject *const_str_plain_numpytest;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_package_dir;
extern PyObject *const_str_plain_package_name;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_subpackage_name;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_list_str_plain_importall_list;
static PyObject *const_tuple_str_plain_package_tuple;
static PyObject *const_str_digest_1181840f58e7ba62864bd006bf2201ad;
static PyObject *const_str_digest_39f00a002e70060c3938ef708f0967e4;
static PyObject *const_str_digest_3f78654b3954012b92d0347c08f0fe22;
extern PyObject *const_str_digest_743b1adbf37db12e16e01ef62a6f7d72;
static PyObject *const_str_digest_b01859696cdaac3186cbce641d3f2427;
static PyObject *const_str_digest_be6ae86c4728ae1665f737794dba1c58;
static PyObject *const_str_digest_f7afab021fb129ace0674b4adb266544;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple;

static void _initModuleConstants(void)
{
    const_list_str_plain_importall_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_importall_list, 0, const_str_plain_importall ); Py_INCREF( const_str_plain_importall );
    const_tuple_str_plain_package_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_package_tuple, 0, const_str_plain_package ); Py_INCREF( const_str_plain_package );
    const_str_digest_1181840f58e7ba62864bd006bf2201ad = UNSTREAM_STRING( &constant_bin[ 2020430 ], 132, 0 );
    const_str_digest_39f00a002e70060c3938ef708f0967e4 = UNSTREAM_STRING( &constant_bin[ 2020562 ], 14, 0 );
    const_str_digest_3f78654b3954012b92d0347c08f0fe22 = UNSTREAM_STRING( &constant_bin[ 2020576 ], 60, 0 );
    const_str_digest_b01859696cdaac3186cbce641d3f2427 = UNSTREAM_STRING( &constant_bin[ 2020636 ], 23, 0 );
    const_str_digest_be6ae86c4728ae1665f737794dba1c58 = UNSTREAM_STRING( &constant_bin[ 2020659 ], 59, 0 );
    const_str_digest_f7afab021fb129ace0674b4adb266544 = UNSTREAM_STRING( &constant_bin[ 2020718 ], 23, 0 );
    const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple, 0, const_str_plain_package ); Py_INCREF( const_str_plain_package );
    PyTuple_SET_ITEM( const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple, 1, const_str_plain_package_name ); Py_INCREF( const_str_plain_package_name );
    PyTuple_SET_ITEM( const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple, 2, const_str_plain_package_dir ); Py_INCREF( const_str_plain_package_dir );
    PyTuple_SET_ITEM( const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple, 3, const_str_plain_subpackage_name ); Py_INCREF( const_str_plain_subpackage_name );
    PyTuple_SET_ITEM( const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple, 4, const_str_plain_subdir ); Py_INCREF( const_str_plain_subdir );
    PyTuple_SET_ITEM( const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple, 5, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple, 6, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
}

// The module code objects.
static PyCodeObject *codeobj_126d8c8cb31407af80a99aaa4f7804d0;
static PyCodeObject *codeobj_0ed0c448ea533bbe3c3ca7095ab2f6e7;
static PyCodeObject *codeobj_30df4aad2f2c6e4d1e61a2530c0a1b2b;

static void _initModuleCodeObjects(void)
{
    codeobj_126d8c8cb31407af80a99aaa4f7804d0 = MAKE_CODEOBJ( const_str_digest_be6ae86c4728ae1665f737794dba1c58, const_str_plain_importall, 9, const_tuple_str_plain_package_tuple, 1, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ed0c448ea533bbe3c3ca7095ab2f6e7 = MAKE_CODEOBJ( const_str_digest_be6ae86c4728ae1665f737794dba1c58, const_str_plain_importall, 9, const_tuple_bcaab369c8a3bb76f00202299da357d9_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_30df4aad2f2c6e4d1e61a2530c0a1b2b = MAKE_CODEOBJ( const_str_digest_be6ae86c4728ae1665f737794dba1c58, const_str_plain_numpytest, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_importall_of_module_numpy$testing$numpytest(  );


// The module function definitions.
static PyObject *impl_function_1_importall_of_module_numpy$testing$numpytest( Nuitka_FunctionObject *self, PyObject *_python_par_package )
{
    // No context is used.

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObjectLocalVariable par_package; par_package.object = _python_par_package;
    PyObjectLocalVariable var_package_name;
    PyObjectLocalVariable var_package_dir;
    PyObjectLocalVariable var_subpackage_name;
    PyObjectLocalVariable var_subdir;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_msg;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_exec_1__globals;
    PyObjectTempVariable tmp_exec_1__locals;
    PyObjectTempVariable tmp_exec_1__source;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_source_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_exec_compiled_1;
    PyObject *tmp_exec_result_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_locals_source;
    PyObject *tmp_locals_value;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_126d8c8cb31407af80a99aaa4f7804d0, module_numpy$testing$numpytest );
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
    tmp_source_name_1 = PyDict_GetItem( locals_dict, const_str_plain_warnings );

    if ( tmp_source_name_1 == NULL )
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_warnings );
        if (unlikely( tmp_source_name_1 == NULL ))
        {
            tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4693 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 15;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_3f78654b3954012b92d0347c08f0fe22;
    tmp_call_arg_element_2 = PyDict_GetItem( locals_dict, const_str_plain_DeprecationWarning );

    if ( tmp_call_arg_element_2 == NULL )
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
        if (unlikely( tmp_call_arg_element_2 == NULL ))
        {
            tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
        }
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6871 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 16;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_isinstance_inst_1 = par_package.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_modulename_1 = par_package.object;

    if ( tmp_import_modulename_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_import_fromlist_1 = const_tuple_empty;
    tmp_import_level_1 = const_int_0;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$numpytest)->md_dict;
    tmp_import_locals_1 = INCREASE_REFCOUNT( locals_dict );
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_package_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package_dir,
            var_package_dir.object
        );

    }
    if ((var_subpackage_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_subpackage_name,
            var_subpackage_name.object
        );

    }
    if ((var_subdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_subdir,
            var_subdir.object
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
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_package.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package,
            par_package.object
        );

    }
    frame_function->f_lineno = 19;
    tmp_assign_source_1 = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    if (par_package.object == NULL)
    {
        par_package.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_package.object;
        par_package.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_source_name_2 = par_package.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    assert( var_package_name.object == NULL );
    var_package_name.object = tmp_assign_source_2;

    tmp_source_name_4 = PyDict_GetItem( locals_dict, const_str_plain_os );

    if ( tmp_source_name_4 == NULL )
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_os );
        if (unlikely( tmp_source_name_4 == NULL ))
        {
            tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_package.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 87730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___file__ );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 22;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    assert( var_package_dir.object == NULL );
    var_package_dir.object = tmp_assign_source_3;

    tmp_source_name_6 = PyDict_GetItem( locals_dict, const_str_plain_os );

    if ( tmp_source_name_6 == NULL )
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_os );
        if (unlikely( tmp_source_name_6 == NULL ))
        {
            tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_listdir );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_package_dir.object;

    frame_function->f_lineno = 23;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_4;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_5 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 23;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_assign_source_6 = tmp_for_loop_1__iter_value.object;

    if (var_subpackage_name.object == NULL)
    {
        var_subpackage_name.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_subpackage_name.object;
        var_subpackage_name.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_source_name_8 = PyDict_GetItem( locals_dict, const_str_plain_os );

    if ( tmp_source_name_8 == NULL )
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_os );
        if (unlikely( tmp_source_name_8 == NULL ))
        {
            tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 24;
        goto try_finally_handler_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_package_dir.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48909 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 24;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = var_subpackage_name.object;

    frame_function->f_lineno = 24;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto try_finally_handler_1;
    }
    if (var_subdir.object == NULL)
    {
        var_subdir.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_subdir.object;
        var_subdir.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_source_name_10 = PyDict_GetItem( locals_dict, const_str_plain_os );

    if ( tmp_source_name_10 == NULL )
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_os );
        if (unlikely( tmp_source_name_10 == NULL ))
        {
            tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_isdir );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_7 = var_subdir.object;

    frame_function->f_lineno = 25;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 25;
        goto try_finally_handler_1;
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
    goto loop_start_1;
    branch_no_2:;
    tmp_source_name_12 = PyDict_GetItem( locals_dict, const_str_plain_os );

    if ( tmp_source_name_12 == NULL )
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_os );
        if (unlikely( tmp_source_name_12 == NULL ))
        {
            tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }
    tmp_source_name_14 = PyDict_GetItem( locals_dict, const_str_plain_os );

    if ( tmp_source_name_14 == NULL )
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_os );
        if (unlikely( tmp_source_name_14 == NULL ))
        {
            tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_9 = var_subdir.object;

    tmp_call_arg_element_10 = const_str_digest_743b1adbf37db12e16e01ef62a6f7d72;
    frame_function->f_lineno = 27;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 27;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 27;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    goto loop_start_1;
    branch_no_3:;
    tmp_binop_left_2 = var_package_name.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 49133 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 29;
        goto try_finally_handler_1;
    }

    tmp_binop_right_2 = const_str_dot;
    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 29;
        goto try_finally_handler_1;
    }
    tmp_binop_right_1 = var_subpackage_name.object;

    tmp_assign_source_8 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 29;
        goto try_finally_handler_1;
    }
    if (var_name.object == NULL)
    {
        var_name.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    // Tried block of try/except
    // Tried code
    tmp_assign_source_9 = Py_None;
    if (tmp_exec_1__globals.object == NULL)
    {
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = tmp_exec_1__globals.object;
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_assign_source_10 = Py_None;
    if (tmp_exec_1__locals.object == NULL)
    {
        tmp_exec_1__locals.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = tmp_exec_1__locals.object;
        tmp_exec_1__locals.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = tmp_exec_1__locals.object;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_compare_left_2 = tmp_exec_1__globals.object;

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
    tmp_assign_source_11 = INCREASE_REFCOUNT( locals_dict );
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_11,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_package_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_11,
            const_str_plain_package_dir,
            var_package_dir.object
        );

    }
    if ((var_subpackage_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_11,
            const_str_plain_subpackage_name,
            var_subpackage_name.object
        );

    }
    if ((var_subdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_11,
            const_str_plain_subdir,
            var_subdir.object
        );

    }
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_11,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_11,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_package.object != NULL))
    {
        PyDict_SetItem(
            tmp_assign_source_11,
            const_str_plain_package,
            par_package.object
        );

    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_11 = tmp_exec_1__globals.object;

    Py_INCREF( tmp_assign_source_11 );
    condexpr_end_1:;
    assert( tmp_exec_1__locals.object != NULL );
    {
        PyObject *old = tmp_exec_1__locals.object;
        tmp_exec_1__locals.object = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_compare_left_3 = tmp_exec_1__globals.object;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_12 = ((PyModuleObject *)module_numpy$testing$numpytest)->md_dict;
    assert( tmp_exec_1__globals.object != NULL );
    {
        PyObject *old = tmp_exec_1__globals.object;
        tmp_exec_1__globals.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_binop_left_3 = const_str_digest_39f00a002e70060c3938ef708f0967e4;
    tmp_binop_right_3 = var_name.object;

    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    if (tmp_exec_1__source.object == NULL)
    {
        tmp_exec_1__source.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_exec_1__source.object;
        tmp_exec_1__source.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_isinstance_inst_2 = tmp_exec_1__source.object;

    tmp_isinstance_cls_2 = (PyObject *)&PyFile_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_15 = tmp_exec_1__source.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_read );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 31;
    tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    assert( tmp_exec_1__source.object != NULL );
    {
        PyObject *old = tmp_exec_1__source.object;
        tmp_exec_1__source.object = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_eval_source_1 = tmp_exec_1__source.object;

    tmp_eval_globals_1 = tmp_exec_1__globals.object;

    tmp_eval_locals_1 = tmp_exec_1__locals.object;

    tmp_exec_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_exec, NULL, NULL );
    if ( tmp_exec_compiled_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    tmp_exec_result_1 = EVAL_CODE( tmp_exec_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_exec_compiled_1 );
    if ( tmp_exec_result_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_exec_result_1 );
    if ( tmp_eval_locals_1 == locals_dict )
    {
        tmp_locals_source = tmp_eval_locals_1;
    }
    else if ( tmp_eval_globals_1 == locals_dict )
    {
        tmp_locals_source = tmp_eval_globals_1;
    }
    else
    {
        tmp_locals_source = NULL;
    }

    if ( tmp_locals_source != NULL )
    {
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_package );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (par_package.object == NULL)
    {
        par_package.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = par_package.object;
        par_package.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_package_name );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_package_name.object == NULL)
    {
        var_package_name.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_package_dir );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_package_dir.object == NULL)
    {
        var_package_dir.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_package_dir.object;
        var_package_dir.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_subpackage_name );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_subpackage_name.object == NULL)
    {
        var_subpackage_name.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_subpackage_name.object;
        var_subpackage_name.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_subdir );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_subdir.object == NULL)
    {
        var_subdir.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_subdir.object;
        var_subdir.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_name );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_name.object == NULL)
    {
        var_name.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_name.object;
        var_name.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    tmp_locals_value = PyObject_GetItem( tmp_locals_source, const_str_plain_msg );
    if ( tmp_locals_value == NULL && !PyErr_ExceptionMatches( PyExc_KeyError ) )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto try_finally_handler_2;
    }
    PyErr_Clear();
    if (tmp_locals_value != NULL)
    {
    if (var_msg.object == NULL)
    {
        var_msg.object = tmp_locals_value;
    }
    else
    {
        PyObject *old = var_msg.object;
        var_msg.object = tmp_locals_value;
        Py_DECREF( old );
    }
    }
    }
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

    tmp_tried_lineno_1 = frame_function->f_lineno;
    tmp_result = tmp_exec_1__globals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__globals.object );
        tmp_exec_1__globals.object = NULL;
    }

    assert( tmp_result != false );
    tmp_result = tmp_exec_1__locals.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_exec_1__locals.object );
        tmp_exec_1__locals.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_exec_1__source.object );
    tmp_exec_1__source.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_except_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_function ) );
    }
    else if ( exception_tb->tb_frame != frame_function || exception_tb->tb_lineno != frame_function->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_function, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
        goto try_finally_handler_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_15 = PyThreadState_GET()->exc_value;
    if (var_msg.object == NULL)
    {
        var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_msg.object;
        var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto try_finally_handler_1;
    }
    tmp_binop_left_4 = const_str_digest_b01859696cdaac3186cbce641d3f2427;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_name.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_msg.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_11 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 33;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    goto loop_start_1;
    goto branch_end_7;
    branch_no_7:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_7:;
    try_except_end_1:;
    tmp_called_10 = PyDict_GetItem( locals_dict, const_str_plain_importall );

    if ( tmp_called_10 == NULL )
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_importall );
        if (unlikely( tmp_called_10 == NULL ))
        {
            tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importall );
        }
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213453 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_12 = PyDict_GetItem( locals_dict, const_str_plain_m );

    if ( tmp_call_arg_element_12 == NULL )
    {
        tmp_call_arg_element_12 = GET_STRING_DICT_VALUE( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_m );
        if (unlikely( tmp_call_arg_element_12 == NULL ))
        {
            tmp_call_arg_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_m );
        }
    }

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 213484 ], 23, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 35;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 23;
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
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
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

#if 1
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
#if 1
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


    tmp_frame_locals = INCREASE_REFCOUNT( locals_dict );
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_package_dir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_dir,
            var_package_dir.object
        );

    }
    if ((var_subpackage_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_subpackage_name,
            var_subpackage_name.object
        );

    }
    if ((var_subdir.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_subdir,
            var_subdir.object
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
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((par_package.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package,
            par_package.object
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
Py_DECREF( locals_dict );
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
Py_DECREF( locals_dict );
    return tmp_return_value;

}
static PyObject *fparse_function_1_importall_of_module_numpy$testing$numpytest( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_package = NULL;
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
                PyErr_Format( PyExc_TypeError, "importall() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_package == key )
            {
                assert( _python_par_package == NULL );
                _python_par_package = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_package, key ) == 1 )
            {
                assert( _python_par_package == NULL );
                _python_par_package = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "importall() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_package != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_package = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_package == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_package = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_package == NULL ))
    {
        PyObject *values[] = { _python_par_package };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_importall_of_module_numpy$testing$numpytest( self, _python_par_package );

error_exit:;

    Py_XDECREF( _python_par_package );

    return NULL;
}

static PyObject *dparse_function_1_importall_of_module_numpy$testing$numpytest( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_importall_of_module_numpy$testing$numpytest( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_importall_of_module_numpy$testing$numpytest( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_importall_of_module_numpy$testing$numpytest(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_importall_of_module_numpy$testing$numpytest,
        dparse_function_1_importall_of_module_numpy$testing$numpytest,
        const_str_plain_importall,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0ed0c448ea533bbe3c3ca7095ab2f6e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$testing$numpytest,
        const_str_digest_1181840f58e7ba62864bd006bf2201ad
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$testing$numpytest =
{
    PyModuleDef_HEAD_INIT,
    "numpy.testing.numpytest",   /* m_name */
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

MOD_INIT_DECL( numpy$testing$numpytest )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$testing$numpytest );
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

    // puts( "in initnumpy$testing$numpytest" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$testing$numpytest = Py_InitModule4(
        "numpy.testing.numpytest",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$testing$numpytest = PyModule_Create( &mdef_numpy$testing$numpytest );
#endif

    moduledict_numpy$testing$numpytest = (PyDictObject *)((PyModuleObject *)module_numpy$testing$numpytest)->md_dict;

    assertObject( module_numpy$testing$numpytest );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f7afab021fb129ace0674b4adb266544, module_numpy$testing$numpytest );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$testing$numpytest );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_be6ae86c4728ae1665f737794dba1c58;
    UPDATE_STRING_DICT0( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_30df4aad2f2c6e4d1e61a2530c0a1b2b, module_numpy$testing$numpytest );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$testing$numpytest)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$testing$numpytest)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$testing$numpytest)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$testing$numpytest)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$testing$numpytest)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_str_plain_importall_list );
    UPDATE_STRING_DICT1( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_function_1_importall_of_module_numpy$testing$numpytest(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$testing$numpytest, (Nuitka_StringObject *)const_str_plain_importall, tmp_assign_source_9 );

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

    return MOD_RETURN_VALUE( module_numpy$testing$numpytest );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
