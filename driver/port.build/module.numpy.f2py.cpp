// Generated code for Python source for module 'numpy.f2py'
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

// The _module_numpy$f2py is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$f2py;
PyDictObject *moduledict_numpy$f2py;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_w;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_f2py;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_main;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_Tester;
extern PyObject *const_str_plain_f2py2e;
extern PyObject *const_str_plain_source;
extern PyObject *const_str_plain_suffix;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_diagnose;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_run_main;
extern PyObject *const_str_plain_tempfile;
extern PyObject *const_str_plain_untitled;
static PyObject *const_str_plain_source_fn;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_executable;
extern PyObject *const_str_plain_extra_args;
extern PyObject *const_str_plain_modulename;
extern PyObject *const_str_plain_subprocess;
extern PyObject *const_str_plain_exec_command;
extern PyObject *const_str_plain_f2py_testing;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_NamedTemporaryFile;
extern PyObject *const_tuple_str_plain_Tester_tuple;
extern PyObject *const_tuple_str_plain_f2py2e_tuple;
extern PyObject *const_tuple_str_plain___doc___tuple;
static PyObject *const_tuple_str_plain_diagnose_tuple;
extern PyObject *const_tuple_str_plain_exec_command_tuple;
static PyObject *const_tuple_str_plain_f2py_testing_tuple;
extern PyObject *const_dict_0936d274f11f8bb5814980a5d47eed29;
extern PyObject *const_str_digest_080140a463ef48d7305b3a11330fc327;
static PyObject *const_str_digest_1072fb5131584889544105b82dcdb60c;
static PyObject *const_str_digest_3719f3bbaee51adf632d5e3b7d8a9b7f;
extern PyObject *const_str_digest_4dd6695bdef67178aab45e6f1be31598;
extern PyObject *const_str_digest_84b225ef8df4b1024b676eb721c5fe2d;
extern PyObject *const_str_digest_9ee0065fb030b4d6c1f397a7967d740e;
static PyObject *const_str_digest_c18ee75bb02003f45b5ac3029c079258;
static PyObject *const_str_digest_f0554c10eda2383a1dfc8803ba36c1c4;
static PyObject *const_str_digest_ff5018bb7ceb6e1ecedf8acc021f2e09;
static PyObject *const_tuple_739cae2adda6b452c6041e84544c62e4_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_f2367b071d32a66923fe56b0539d28f1_tuple;
static PyObject *const_list_str_digest_1072fb5131584889544105b82dcdb60c_list;
static PyObject *const_tuple_str_plain_untitled_str_empty_int_pos_1_none_tuple;
static PyObject *const_list_str_plain_run_main_str_plain_compile_str_plain_f2py_testing_list;

static void _initModuleConstants(void)
{
    const_str_plain_source_fn = UNSTREAM_STRING( &constant_bin[ 123852 ], 9, 1 );
    const_str_plain_NamedTemporaryFile = UNSTREAM_STRING( &constant_bin[ 989789 ], 18, 1 );
    const_tuple_str_plain_diagnose_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diagnose_tuple, 0, const_str_plain_diagnose ); Py_INCREF( const_str_plain_diagnose );
    const_tuple_str_plain_f2py_testing_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f2py_testing_tuple, 0, const_str_plain_f2py_testing ); Py_INCREF( const_str_plain_f2py_testing );
    const_str_digest_1072fb5131584889544105b82dcdb60c = UNSTREAM_STRING( &constant_bin[ 989807 ], 43, 0 );
    const_str_digest_3719f3bbaee51adf632d5e3b7d8a9b7f = UNSTREAM_STRING( &constant_bin[ 989850 ], 15, 0 );
    const_str_digest_c18ee75bb02003f45b5ac3029c079258 = UNSTREAM_STRING( &constant_bin[ 989865 ], 52, 0 );
    const_str_digest_f0554c10eda2383a1dfc8803ba36c1c4 = UNSTREAM_STRING( &constant_bin[ 989917 ], 121, 0 );
    const_str_digest_ff5018bb7ceb6e1ecedf8acc021f2e09 = UNSTREAM_STRING( &constant_bin[ 990038 ], 55, 0 );
    const_tuple_739cae2adda6b452c6041e84544c62e4_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 0, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 1, const_str_plain_modulename ); Py_INCREF( const_str_plain_modulename );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 2, const_str_plain_extra_args ); Py_INCREF( const_str_plain_extra_args );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 3, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 4, const_str_plain_source_fn ); Py_INCREF( const_str_plain_source_fn );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 5, const_str_plain_exec_command ); Py_INCREF( const_str_plain_exec_command );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 6, const_str_plain_tempfile ); Py_INCREF( const_str_plain_tempfile );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 7, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 8, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 9, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 10, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 11, const_str_plain_o ); Py_INCREF( const_str_plain_o );
    const_tuple_f2367b071d32a66923fe56b0539d28f1_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_f2367b071d32a66923fe56b0539d28f1_tuple, 0, const_str_plain_source ); Py_INCREF( const_str_plain_source );
    PyTuple_SET_ITEM( const_tuple_f2367b071d32a66923fe56b0539d28f1_tuple, 1, const_str_plain_modulename ); Py_INCREF( const_str_plain_modulename );
    PyTuple_SET_ITEM( const_tuple_f2367b071d32a66923fe56b0539d28f1_tuple, 2, const_str_plain_extra_args ); Py_INCREF( const_str_plain_extra_args );
    PyTuple_SET_ITEM( const_tuple_f2367b071d32a66923fe56b0539d28f1_tuple, 3, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_f2367b071d32a66923fe56b0539d28f1_tuple, 4, const_str_plain_source_fn ); Py_INCREF( const_str_plain_source_fn );
    const_list_str_digest_1072fb5131584889544105b82dcdb60c_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_1072fb5131584889544105b82dcdb60c_list, 0, const_str_digest_1072fb5131584889544105b82dcdb60c ); Py_INCREF( const_str_digest_1072fb5131584889544105b82dcdb60c );
    const_tuple_str_plain_untitled_str_empty_int_pos_1_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_untitled_str_empty_int_pos_1_none_tuple, 0, const_str_plain_untitled ); Py_INCREF( const_str_plain_untitled );
    PyTuple_SET_ITEM( const_tuple_str_plain_untitled_str_empty_int_pos_1_none_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_str_plain_untitled_str_empty_int_pos_1_none_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_untitled_str_empty_int_pos_1_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_list_str_plain_run_main_str_plain_compile_str_plain_f2py_testing_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_run_main_str_plain_compile_str_plain_f2py_testing_list, 0, const_str_plain_run_main ); Py_INCREF( const_str_plain_run_main );
    PyList_SET_ITEM( const_list_str_plain_run_main_str_plain_compile_str_plain_f2py_testing_list, 1, const_str_plain_compile ); Py_INCREF( const_str_plain_compile );
    PyList_SET_ITEM( const_list_str_plain_run_main_str_plain_compile_str_plain_f2py_testing_list, 2, const_str_plain_f2py_testing ); Py_INCREF( const_str_plain_f2py_testing );
}

// The module code objects.
static PyCodeObject *codeobj_b7c2008c17a4919df41fedaef4aac3bd;
static PyCodeObject *codeobj_c8fed08ebc1edb71108c64f26e7d8cec;
static PyCodeObject *codeobj_11afaabbf3c992f3945404f41dc60e0c;

static void _initModuleCodeObjects(void)
{
    codeobj_b7c2008c17a4919df41fedaef4aac3bd = MAKE_CODEOBJ( const_str_digest_ff5018bb7ceb6e1ecedf8acc021f2e09, const_str_plain_compile, 19, const_tuple_f2367b071d32a66923fe56b0539d28f1_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c8fed08ebc1edb71108c64f26e7d8cec = MAKE_CODEOBJ( const_str_digest_ff5018bb7ceb6e1ecedf8acc021f2e09, const_str_plain_compile, 19, const_tuple_739cae2adda6b452c6041e84544c62e4_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_11afaabbf3c992f3945404f41dc60e0c = MAKE_CODEOBJ( const_str_digest_ff5018bb7ceb6e1ecedf8acc021f2e09, const_str_plain_f2py, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_compile_of_module_numpy$f2py( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_compile_of_module_numpy$f2py( Nuitka_FunctionObject *self, PyObject *_python_par_source, PyObject *_python_par_modulename, PyObject *_python_par_extra_args, PyObject *_python_par_verbose, PyObject *_python_par_source_fn )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_source; par_source.object = _python_par_source;
    PyObjectLocalVariable par_modulename; par_modulename.object = _python_par_modulename;
    PyObjectLocalVariable par_extra_args; par_extra_args.object = _python_par_extra_args;
    PyObjectLocalVariable par_verbose; par_verbose.object = _python_par_verbose;
    PyObjectLocalVariable par_source_fn; par_source_fn.object = _python_par_source_fn;
    PyObjectLocalVariable var_exec_command;
    PyObjectLocalVariable var_tempfile;
    PyObjectLocalVariable var_f;
    PyObjectLocalVariable var_args;
    PyObjectLocalVariable var_c;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_o;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b7c2008c17a4919df41fedaef4aac3bd, module_numpy$f2py );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_exec_command.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_exec_command,
            var_exec_command.object
        );

    }
    if ((var_tempfile.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_tempfile,
            var_tempfile.object
        );

    }
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_f,
            var_f.object
        );

    }
    if ((var_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            var_args.object
        );

    }
    if ((var_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_c,
            var_c.object
        );

    }
    if ((var_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_s,
            var_s.object
        );

    }
    if ((var_o.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_o,
            var_o.object
        );

    }
    if ((par_source.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_source,
            par_source.object
        );

    }
    if ((par_modulename.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_modulename,
            par_modulename.object
        );

    }
    if ((par_extra_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_extra_args,
            par_extra_args.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_source_fn.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_source_fn,
            par_source_fn.object
        );

    }
    frame_function->f_lineno = 28;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_9ee0065fb030b4d6c1f397a7967d740e, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_exec_command_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_exec_command );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    assert( var_exec_command.object == NULL );
    var_exec_command.object = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_exec_command.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_exec_command,
            var_exec_command.object
        );

    }
    if ((var_tempfile.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_tempfile,
            var_tempfile.object
        );

    }
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_f,
            var_f.object
        );

    }
    if ((var_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_args,
            var_args.object
        );

    }
    if ((var_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_c,
            var_c.object
        );

    }
    if ((var_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_s,
            var_s.object
        );

    }
    if ((var_o.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_o,
            var_o.object
        );

    }
    if ((par_source.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_source,
            par_source.object
        );

    }
    if ((par_modulename.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_modulename,
            par_modulename.object
        );

    }
    if ((par_extra_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_extra_args,
            par_extra_args.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_source_fn.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_source_fn,
            par_source_fn.object
        );

    }
    frame_function->f_lineno = 29;
    tmp_assign_source_2 = IMPORT_MODULE( const_str_plain_tempfile, tmp_import_globals_2, tmp_import_locals_2, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    assert( var_tempfile.object == NULL );
    var_tempfile.object = tmp_assign_source_2;

    tmp_compare_left_1 = par_source_fn.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123836 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = var_tempfile.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_NamedTemporaryFile );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_1 = PyDict_Copy( const_dict_0936d274f11f8bb5814980a5d47eed29 );
    frame_function->f_lineno = 31;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_3;

    goto branch_end_1;
    branch_no_1:;
    tmp_open_filename_1 = par_source_fn.object;

    if ( tmp_open_filename_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123836 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_open_mode_1 = const_str_plain_w;
    tmp_assign_source_4 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_4;

    branch_end_1:;
    // Tried code
    tmp_source_name_2 = var_f.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = par_source.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88385 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 36;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_f.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_flush );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 37;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_1 = const_str_digest_3719f3bbaee51adf632d5e3b7d8a9b7f;
    tmp_binop_right_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_modulename.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123891 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_4 = var_f.object;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 39;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_extra_args.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 2, tmp_tuple_element_1 );
    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto try_finally_handler_1;
    }
    assert( var_args.object == NULL );
    var_args.object = tmp_assign_source_5;

    tmp_binop_left_2 = const_str_digest_c18ee75bb02003f45b5ac3029c079258;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_executable );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 41;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_args.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_2 );
    tmp_assign_source_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
        goto try_finally_handler_1;
    }
    assert( var_c.object == NULL );
    var_c.object = tmp_assign_source_6;

    // Tried code
    tmp_called_4 = var_exec_command.object;

    tmp_call_arg_element_2 = var_c.object;

    frame_function->f_lineno = 42;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_7;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 42;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_8;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_9 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( !ERROR_OCCURED() )
        {
            exception_type = INCREASE_REFCOUNT( PyExc_StopIteration );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        }


        frame_function->f_lineno = 42;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_9;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_1 ); assert( PyIter_Check( tmp_iterator_name_1 ) );

    tmp_iterator_attempt_1 = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt_1 == NULL ))
    {
        // TODO: Could first fetch, then check, should be faster.
        if ( !ERROR_OCCURED() )
        {
        }
        else if ( PyErr_ExceptionMatches( PyExc_StopIteration ))
        {
            PyErr_Clear();
        }
        else
        {
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

            goto try_finally_handler_2;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_1 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1.object;

    assert( var_s.object == NULL );
    var_s.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2.object;

    assert( var_o.object == NULL );
    var_o.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

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
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    tmp_source_name_6 = var_f.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6491 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto try_finally_handler_error_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_close );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
        goto try_finally_handler_error_1;
    }
    frame_function->f_lineno = 44;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
        goto try_finally_handler_error_1;
    }
    Py_DECREF( tmp_unused );
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
    try_finally_handler_error_1:;
    Py_XDECREF( exception_keeper_type_2 );exception_keeper_type_2 = NULL;
    Py_XDECREF( exception_keeper_value_2 );exception_keeper_value_2 = NULL;
    Py_XDECREF( exception_keeper_tb_2 );exception_keeper_tb_2 = NULL;
    goto frame_exception_exit_1;
    finally_end_2:;
    tmp_return_value = var_s.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
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
    if ((var_exec_command.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_exec_command,
            var_exec_command.object
        );

    }
    if ((var_tempfile.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tempfile,
            var_tempfile.object
        );

    }
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f,
            var_f.object
        );

    }
    if ((var_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            var_args.object
        );

    }
    if ((var_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c,
            var_c.object
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
    if ((var_o.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_o,
            var_o.object
        );

    }
    if ((par_source.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_source,
            par_source.object
        );

    }
    if ((par_modulename.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_modulename,
            par_modulename.object
        );

    }
    if ((par_extra_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_args,
            par_extra_args.object
        );

    }
    if ((par_verbose.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_verbose,
            par_verbose.object
        );

    }
    if ((par_source_fn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_source_fn,
            par_source_fn.object
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
static PyObject *fparse_function_1_compile_of_module_numpy$f2py( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_source = NULL;
    PyObject *_python_par_modulename = NULL;
    PyObject *_python_par_extra_args = NULL;
    PyObject *_python_par_verbose = NULL;
    PyObject *_python_par_source_fn = NULL;
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
                PyErr_Format( PyExc_TypeError, "compile() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_source == key )
            {
                assert( _python_par_source == NULL );
                _python_par_source = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_modulename == key )
            {
                assert( _python_par_modulename == NULL );
                _python_par_modulename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_extra_args == key )
            {
                assert( _python_par_extra_args == NULL );
                _python_par_extra_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_verbose == key )
            {
                assert( _python_par_verbose == NULL );
                _python_par_verbose = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_source_fn == key )
            {
                assert( _python_par_source_fn == NULL );
                _python_par_source_fn = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_source, key ) == 1 )
            {
                assert( _python_par_source == NULL );
                _python_par_source = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_modulename, key ) == 1 )
            {
                assert( _python_par_modulename == NULL );
                _python_par_modulename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_extra_args, key ) == 1 )
            {
                assert( _python_par_extra_args == NULL );
                _python_par_extra_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_verbose, key ) == 1 )
            {
                assert( _python_par_verbose == NULL );
                _python_par_verbose = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_source_fn, key ) == 1 )
            {
                assert( _python_par_source_fn == NULL );
                _python_par_source_fn = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "compile() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 5 ))
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
         if (unlikely( _python_par_source != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_source = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_source == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_source = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_modulename != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_modulename = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_modulename == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_modulename = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
    if (likely( 2 < args_given ))
    {
         if (unlikely( _python_par_extra_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_extra_args = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_extra_args == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_extra_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
    if (likely( 3 < args_given ))
    {
         if (unlikely( _python_par_verbose != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_verbose = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_verbose == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_verbose = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
    if (likely( 4 < args_given ))
    {
         if (unlikely( _python_par_source_fn != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_source_fn = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_source_fn == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_source_fn = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_source == NULL || _python_par_modulename == NULL || _python_par_extra_args == NULL || _python_par_verbose == NULL || _python_par_source_fn == NULL ))
    {
        PyObject *values[] = { _python_par_source, _python_par_modulename, _python_par_extra_args, _python_par_verbose, _python_par_source_fn };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_compile_of_module_numpy$f2py( self, _python_par_source, _python_par_modulename, _python_par_extra_args, _python_par_verbose, _python_par_source_fn );

error_exit:;

    Py_XDECREF( _python_par_source );
    Py_XDECREF( _python_par_modulename );
    Py_XDECREF( _python_par_extra_args );
    Py_XDECREF( _python_par_verbose );
    Py_XDECREF( _python_par_source_fn );

    return NULL;
}

static PyObject *dparse_function_1_compile_of_module_numpy$f2py( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_compile_of_module_numpy$f2py( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_compile_of_module_numpy$f2py( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_compile_of_module_numpy$f2py( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_compile_of_module_numpy$f2py,
        dparse_function_1_compile_of_module_numpy$f2py,
        const_str_plain_compile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c8fed08ebc1edb71108c64f26e7d8cec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py,
        const_str_digest_f0554c10eda2383a1dfc8803ba36c1c4
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$f2py =
{
    PyModuleDef_HEAD_INIT,
    "numpy.f2py",   /* m_name */
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

MOD_INIT_DECL( numpy$f2py )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$f2py );
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

    // puts( "in initnumpy$f2py" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$f2py = Py_InitModule4(
        "numpy.f2py",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$f2py = PyModule_Create( &mdef_numpy$f2py );
#endif

    moduledict_numpy$f2py = (PyDictObject *)((PyModuleObject *)module_numpy$f2py)->md_dict;

    assertObject( module_numpy$f2py );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4dd6695bdef67178aab45e6f1be31598, module_numpy$f2py );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$f2py );

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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_defaults_1;
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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ff5018bb7ceb6e1ecedf8acc021f2e09;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_1072fb5131584889544105b82dcdb60c_list );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_11afaabbf3c992f3945404f41dc60e0c, module_numpy$f2py );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_str_plain_run_main_str_plain_compile_str_plain_f2py_testing_list );
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_8 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_9 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_subprocess, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_subprocess, tmp_assign_source_10 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_f2py2e_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_f2py2e );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_f2py2e, tmp_assign_source_11 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_empty, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_f2py_testing_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_f2py_testing );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_f2py_testing, tmp_assign_source_12 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_empty, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_diagnose_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_diagnose );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_diagnose, tmp_assign_source_13 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain___doc___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_14 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_f2py2e );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_f2py2e );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123808 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_run_main );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_run_main, tmp_assign_source_15 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_f2py2e );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_f2py2e );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123808 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_main );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_16 );
    tmp_defaults_1 = const_tuple_str_plain_untitled_str_empty_int_pos_1_none_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_function_1_compile_of_module_numpy$f2py( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_compile, tmp_assign_source_17 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$f2py)->md_dict;
    frame_module->f_lineno = 47;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_84b225ef8df4b1024b676eb721c5fe2d, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_Tester_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Tester );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_Tester, tmp_assign_source_18 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 48;
    tmp_source_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_test );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_19 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_Tester );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tester );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48476 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 49;
    tmp_source_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_bench );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_20 );

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

    return MOD_RETURN_VALUE( module_numpy$f2py );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
