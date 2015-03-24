// Generated code for Python source for module 'serial'
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

// The _module_serial is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_serial;
PyDictObject *moduledict_serial;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_cli;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_java;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_klass;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_posix;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_serial;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_VERSION;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_do_open;
extern PyObject *const_str_plain_modules;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_instance;
extern PyObject *const_str_plain_platform;
extern PyObject *const_str_plain_protocol;
static PyObject *const_str_plain_url_nocase;
static PyObject *const_str_plain_do_not_open;
extern PyObject *const_str_plain_module_name;
extern PyObject *const_str_plain_package_name;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_handler_module;
static PyObject *const_str_plain_serial_for_url;
static PyObject *const_str_plain_protocol_handler_packages;
static PyObject *const_str_digest_1ed33ca25dab1e2ce0691bef612163d5;
static PyObject *const_str_digest_2b42b6c29c15dfb021feebabca8ea9c7;
extern PyObject *const_str_digest_32570b0934adce9667542fbb494ebf58;
static PyObject *const_str_digest_59fc7c5598e09c174868e09e934be0cf;
static PyObject *const_str_digest_78a4299bdcf617ddede2e97a1f951fee;
extern PyObject *const_str_digest_8d44ec8514b88bc2a4db2d8f875143c6;
extern PyObject *const_str_digest_93ce6cfe16d4162110e1228eff37f85f;
static PyObject *const_str_digest_96803246bdf6ee9b81b28f326f736ae6;
static PyObject *const_str_digest_b5d574b09a2118c1c3258629cf8b5686;
extern PyObject *const_str_digest_c7dd400a286fed74f94d802d5f3cc071;
static PyObject *const_str_digest_d0e5f27655754425719bae64b4186dce;
static PyObject *const_str_digest_de69004a5b8eb8bcfa5f540a8ac42b37;
extern PyObject *const_str_digest_ff216eaf21244ea79ffa794370aa703e;
static PyObject *const_tuple_92201a98516b0da3375342e210e83d34_tuple;
static PyObject *const_list_str_digest_78a4299bdcf617ddede2e97a1f951fee_list;
static PyObject *const_list_str_digest_b5d574b09a2118c1c3258629cf8b5686_list;
static PyObject *const_tuple_str_plain_url_str_plain_args_str_plain_kwargs_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_url_nocase = UNSTREAM_STRING( &constant_bin[ 293105 ], 10, 1 );
    const_str_plain_do_not_open = UNSTREAM_STRING( &constant_bin[ 2529177 ], 11, 1 );
    const_str_plain_handler_module = UNSTREAM_STRING( &constant_bin[ 2529188 ], 14, 1 );
    const_str_plain_serial_for_url = UNSTREAM_STRING( &constant_bin[ 2529202 ], 14, 1 );
    const_str_plain_protocol_handler_packages = UNSTREAM_STRING( &constant_bin[ 293158 ], 25, 1 );
    const_str_digest_1ed33ca25dab1e2ce0691bef612163d5 = UNSTREAM_STRING( &constant_bin[ 2529216 ], 14, 0 );
    const_str_digest_2b42b6c29c15dfb021feebabca8ea9c7 = UNSTREAM_STRING( &constant_bin[ 377806 ], 3, 0 );
    const_str_digest_59fc7c5598e09c174868e09e934be0cf = UNSTREAM_STRING( &constant_bin[ 2529230 ], 649, 0 );
    const_str_digest_78a4299bdcf617ddede2e97a1f951fee = UNSTREAM_STRING( &constant_bin[ 2529879 ], 17, 0 );
    const_str_digest_96803246bdf6ee9b81b28f326f736ae6 = UNSTREAM_STRING( &constant_bin[ 2529896 ], 34, 0 );
    const_str_digest_b5d574b09a2118c1c3258629cf8b5686 = UNSTREAM_STRING( &constant_bin[ 2529930 ], 39, 0 );
    const_str_digest_d0e5f27655754425719bae64b4186dce = UNSTREAM_STRING( &constant_bin[ 330409 ], 3, 0 );
    const_str_digest_de69004a5b8eb8bcfa5f540a8ac42b37 = UNSTREAM_STRING( &constant_bin[ 2529969 ], 51, 0 );
    const_tuple_92201a98516b0da3375342e210e83d34_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 3, const_str_plain_do_open ); Py_INCREF( const_str_plain_do_open );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 4, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 5, const_str_plain_url_nocase ); Py_INCREF( const_str_plain_url_nocase );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 6, const_str_plain_protocol ); Py_INCREF( const_str_plain_protocol );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 7, const_str_plain_package_name ); Py_INCREF( const_str_plain_package_name );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 8, const_str_plain_module_name ); Py_INCREF( const_str_plain_module_name );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 9, const_str_plain_handler_module ); Py_INCREF( const_str_plain_handler_module );
    PyTuple_SET_ITEM( const_tuple_92201a98516b0da3375342e210e83d34_tuple, 10, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    const_list_str_digest_78a4299bdcf617ddede2e97a1f951fee_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_78a4299bdcf617ddede2e97a1f951fee_list, 0, const_str_digest_78a4299bdcf617ddede2e97a1f951fee ); Py_INCREF( const_str_digest_78a4299bdcf617ddede2e97a1f951fee );
    const_list_str_digest_b5d574b09a2118c1c3258629cf8b5686_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_b5d574b09a2118c1c3258629cf8b5686_list, 0, const_str_digest_b5d574b09a2118c1c3258629cf8b5686 ); Py_INCREF( const_str_digest_b5d574b09a2118c1c3258629cf8b5686 );
    const_tuple_str_plain_url_str_plain_args_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_args_str_plain_kwargs_tuple, 0, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_args_str_plain_kwargs_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_url_str_plain_args_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
}

// The module code objects.
static PyCodeObject *codeobj_ea398494c9ec34986920bad4eb72ac7b;
static PyCodeObject *codeobj_7ecde191733f6adee2b4035cdf0c8b82;
static PyCodeObject *codeobj_ad57b0795f566634bd0ec7d6feb79ac8;

static void _initModuleCodeObjects(void)
{
    codeobj_ea398494c9ec34986920bad4eb72ac7b = MAKE_CODEOBJ( const_str_digest_de69004a5b8eb8bcfa5f540a8ac42b37, const_str_plain_serial, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_7ecde191733f6adee2b4035cdf0c8b82 = MAKE_CODEOBJ( const_str_digest_de69004a5b8eb8bcfa5f540a8ac42b37, const_str_plain_serial_for_url, 32, const_tuple_str_plain_url_str_plain_args_str_plain_kwargs_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ad57b0795f566634bd0ec7d6feb79ac8 = MAKE_CODEOBJ( const_str_digest_de69004a5b8eb8bcfa5f540a8ac42b37, const_str_plain_serial_for_url, 32, const_tuple_92201a98516b0da3375342e210e83d34_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_pos_star_list_star_dict_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_star_arg_list, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_1_serial_for_url_of_module_serial(  );


// The module function definitions.
static PyObject *impl_function_1_serial_for_url_of_module_serial( Nuitka_FunctionObject *self, PyObject *_python_par_url, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_url; par_url.object = _python_par_url;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_kwargs; par_kwargs.object = _python_par_kwargs;
    PyObjectLocalVariable var_do_open;
    PyObjectLocalVariable var_klass;
    PyObjectLocalVariable var_url_nocase;
    PyObjectLocalVariable var_protocol;
    PyObjectLocalVariable var_package_name;
    PyObjectLocalVariable var_module_name;
    PyObjectLocalVariable var_handler_module;
    PyObjectLocalVariable var_instance;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_1__break_indicator;
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObjectTempVariable tmp_try_except_2__unhandled_indicator;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    bool tmp_break_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next1_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unary_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7ecde191733f6adee2b4035cdf0c8b82, module_serial );
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
    // Tried code
    tmp_assign_source_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = const_str_plain_do_not_open;
    tmp_compexpr_right_1 = par_kwargs.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto try_finally_handler_2;
    }

    tmp_assign_source_2 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_cond_value_1 = tmp_or_1__value_1.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_1 = tmp_or_1__value_1.object;

    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_1 = par_kwargs.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_1 = const_str_plain_do_not_open;
    tmp_unary_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_finally_handler_3;
    }
    tmp_assign_source_1 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto try_finally_handler_3;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_finally_handler_2;
    }

    goto finally_end_1;
    finally_end_1:;
    condexpr_end_1:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_1;
    }

    goto finally_end_2;
    finally_end_2:;
    assert( var_do_open.object == NULL );
    var_do_open.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
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
    tmp_compare_left_1 = const_str_plain_do_not_open;
    tmp_compare_right_1 = par_kwargs.object;

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_delsubscr_target_1 = par_kwargs.object;

    if ( tmp_delsubscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_delsubscr_subscript_1 = const_str_plain_do_not_open;
    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_assign_source_3 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_Serial );

    if (unlikely( tmp_assign_source_3 == NULL ))
    {
        tmp_assign_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Serial );
    }

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293005 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    assert( var_klass.object == NULL );
    var_klass.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_assign_source_4 = Py_True;
    assert( tmp_try_except_2__unhandled_indicator.object == NULL );
    tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    // Tried code
    // Tried block of try/except
    tmp_source_name_1 = par_url.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293040 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto try_except_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 54;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_except_handler_1;
    }
    assert( var_url_nocase.object == NULL );
    var_url_nocase.object = tmp_assign_source_5;

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_6 = Py_False;
    if (tmp_try_except_2__unhandled_indicator.object == NULL)
    {
        tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = tmp_try_except_2__unhandled_indicator.object;
        tmp_try_except_2__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto try_finally_handler_4;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_4;
    branch_no_2:;
    try_except_end_1:;
    tmp_compare_left_3 = tmp_try_except_2__unhandled_indicator.object;

    tmp_compare_right_3 = Py_True;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compare_left_4 = const_str_digest_2b42b6c29c15dfb021feebabca8ea9c7;
    tmp_compare_right_4 = var_url_nocase.object;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293089 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto try_finally_handler_4;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto try_finally_handler_4;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_2 = var_url_nocase.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293089 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_split );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_1 = const_str_digest_2b42b6c29c15dfb021feebabca8ea9c7;
    tmp_call_arg_element_2 = const_int_pos_1;
    frame_function->f_lineno = 60;
    tmp_subscr_target_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    assert( var_protocol.object == NULL );
    var_protocol.object = tmp_assign_source_7;

    // Tried code
    tmp_assign_source_8 = Py_False;
    assert( tmp_for_loop_1__break_indicator.object == NULL );
    tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_protocol_handler_packages );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_protocol_handler_packages );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293145 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto try_finally_handler_5;
    }

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto try_finally_handler_5;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_9;

    // Tried code
    loop_start_1:;
    // Tried block of try/except
    tmp_next1_arg_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next1_arg_1 );
    if ( tmp_assign_source_10 == NULL )
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


        frame_function->f_lineno = 61;
        goto try_except_handler_2;
    }
    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    goto try_except_end_2;
    try_except_handler_2:;
    // Exception handler of try/except
    tmp_compare_left_5 = exception_type;
    tmp_compare_right_5 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto try_finally_handler_6;
    }
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_11 = Py_True;
    if (tmp_for_loop_1__break_indicator.object == NULL)
    {
        tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = tmp_for_loop_1__break_indicator.object;
        tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    goto loop_end_1;
    goto branch_end_5;
    branch_no_5:;
    goto try_finally_handler_6;
    branch_end_5:;
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );

    try_except_end_2:;
    tmp_assign_source_12 = tmp_for_loop_1__iter_value.object;

    if (var_package_name.object == NULL)
    {
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_package_name.object;
        var_package_name.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_binop_left_1 = const_str_digest_1ed33ca25dab1e2ce0691bef612163d5;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_package_name.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_protocol.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293199 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto try_finally_handler_6;
    }
    if (var_module_name.object == NULL)
    {
        var_module_name.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_module_name.object;
        var_module_name.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_assign_source_14 = Py_True;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_break_1 = false;
    // Tried code
    // Tried block of try/except
    tmp_import_modulename_1 = var_module_name.object;

    tmp_import_fromlist_1 = const_tuple_empty;
    tmp_import_level_1 = const_int_neg_1;
    tmp_import_globals_1 = ((PyModuleObject *)module_serial)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_do_open.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_do_open,
            var_do_open.object
        );

    }
    if ((var_klass.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_klass,
            var_klass.object
        );

    }
    if ((var_url_nocase.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_url_nocase,
            var_url_nocase.object
        );

    }
    if ((var_protocol.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_protocol,
            var_protocol.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_module_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_module_name,
            var_module_name.object
        );

    }
    if ((var_handler_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_handler_module,
            var_handler_module.object
        );

    }
    if ((var_instance.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_instance,
            var_instance.object
        );

    }
    if ((par_url.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_url,
            par_url.object
        );

    }
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            par_args.object
        );

    }
    if ((par_kwargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_kwargs,
            par_kwargs.object
        );

    }
    frame_function->f_lineno = 64;
    tmp_assign_source_15 = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto try_except_handler_3;
    }
    if (var_handler_module.object == NULL)
    {
        var_handler_module.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_handler_module.object;
        var_handler_module.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    goto try_except_end_3;
    try_except_handler_3:;
    // Exception handler of try/except
    tmp_assign_source_16 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
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
    tmp_compare_left_6 = PyThreadState_GET()->exc_type;
    tmp_compare_right_6 = PyExc_ImportError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto try_finally_handler_7;
    }
    if (tmp_exc_match_exception_match_3 == 1)
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_7;
    branch_no_6:;
    try_except_end_3:;
    tmp_compare_left_7 = tmp_try_except_1__unhandled_indicator.object;

    tmp_compare_right_7 = Py_True;
    tmp_is_2 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if (tmp_is_2)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto try_finally_handler_7;
    }

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_modules );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto try_finally_handler_7;
    }
    tmp_subscr_subscript_3 = var_module_name.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {
        Py_DECREF( tmp_subscr_target_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 83044 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto try_finally_handler_7;
    }

    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto try_finally_handler_7;
    }
    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Serial );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto try_finally_handler_7;
    }
    if (var_klass.object == NULL)
    {
        var_klass.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = var_klass.object;
        var_klass.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    tmp_break_1 = true;
    goto try_finally_handler_start_1;
    branch_no_7:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_6;
    }

    // Break if entered via break.
    if ( tmp_break_1 )
    {

    goto loop_end_1;
    }
    goto finally_end_4;
    finally_end_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto try_finally_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_5;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_compare_left_8 = tmp_for_loop_1__break_indicator.object;

    tmp_compare_right_8 = Py_True;
    tmp_is_3 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    if (tmp_is_3)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_binop_left_2 = const_str_digest_96803246bdf6ee9b81b28f326f736ae6;
    tmp_binop_right_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_protocol.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293199 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 71;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_5;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 71;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_5;
    branch_no_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    tmp_result = tmp_for_loop_1__break_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_for_loop_1__break_indicator.object );
        tmp_for_loop_1__break_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_4;
    }

    goto finally_end_6;
    finally_end_6:;
    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_18 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_Serial );

    if (unlikely( tmp_assign_source_18 == NULL ))
    {
        tmp_assign_source_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Serial );
    }

    if ( tmp_assign_source_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293005 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto try_finally_handler_4;
    }

    if (var_klass.object == NULL)
    {
        var_klass.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = var_klass.object;
        var_klass.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    branch_end_4:;
    branch_no_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    tmp_result = tmp_try_except_2__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_2__unhandled_indicator.object );
        tmp_try_except_2__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_5;
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
    tmp_dircall_arg1_1 = var_klass.object;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 80579 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = const_tuple_none_tuple;
    tmp_dircall_arg3_1 = par_args.object;

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg4_1 = par_kwargs.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_19 = impl_function_6_complex_call_helper_pos_star_list_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), INCREASE_REFCOUNT( tmp_dircall_arg2_1 ), INCREASE_REFCOUNT( tmp_dircall_arg3_1 ), INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    assert( var_instance.object == NULL );
    var_instance.object = tmp_assign_source_19;

    tmp_assattr_name_1 = par_url.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293040 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = var_instance.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_port, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = var_do_open.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293253 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_5 = var_instance.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_open );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 78;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;

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


    tmp_frame_locals = PyDict_New();
    if ((var_do_open.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_do_open,
            var_do_open.object
        );

    }
    if ((var_klass.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_klass,
            var_klass.object
        );

    }
    if ((var_url_nocase.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_url_nocase,
            var_url_nocase.object
        );

    }
    if ((var_protocol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_protocol,
            var_protocol.object
        );

    }
    if ((var_package_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_package_name,
            var_package_name.object
        );

    }
    if ((var_module_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_module_name,
            var_module_name.object
        );

    }
    if ((var_handler_module.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_handler_module,
            var_handler_module.object
        );

    }
    if ((var_instance.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_instance,
            var_instance.object
        );

    }
    if ((par_url.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_url,
            par_url.object
        );

    }
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
        );

    }
    if ((par_kwargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_kwargs,
            par_kwargs.object
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
    tmp_return_value = var_instance.object;

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
static PyObject *fparse_function_1_serial_for_url_of_module_serial( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_url = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_kwargs = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwargs = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

            for ( int i = 0; i <= ((PyDictObject *)kw)->ma_mask; i++ )
            {
                PyDictEntry *entry = &((PyDictObject *)kw)->ma_table[ i ];

                if ( entry->me_value != NULL )
                {

#if PYTHON_VERSION < 300
                    if (unlikely( !PyString_Check( entry->me_key ) && !PyUnicode_Check( entry->me_key ) ))
#else
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
#endif
                    {
                        PyErr_Format( PyExc_TypeError, "serial_for_url() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, entry->me_value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
#else
        if ( _PyDict_HasSplitTable( (PyDictObject *)kw) )
        {
            PyDictObject *mp = (PyDictObject *)kw;

            PyObject **newvalues = PyMem_NEW( PyObject *, mp->ma_keys->dk_size );
            assert (newvalues != NULL);

            PyDictObject *split_copy = PyObject_GC_New( PyDictObject, &PyDict_Type );
            assert( split_copy != NULL );

            split_copy->ma_values = newvalues;
            split_copy->ma_keys = mp->ma_keys;
            split_copy->ma_used = mp->ma_used;

            mp->ma_keys->dk_refcnt += 1;

            Nuitka_GC_Track( split_copy );

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &split_copy->ma_keys->dk_entries[ i ];

                if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                {
                    PyErr_Format( PyExc_TypeError, "serial_for_url() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwargs = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwargs = PyDict_New();

            PyDictObject *mp = (PyDictObject *)kw;

            Py_ssize_t size = mp->ma_keys->dk_size;
            for ( Py_ssize_t i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &mp->ma_keys->dk_entries[i];

                // TODO: One of these cases has been dealt with above.
                PyObject *value;
                if ( mp->ma_values )
                {
                    value = mp->ma_values[ i ];
                }
                else
                {
                    value = entry->me_value;
                }

                if ( value != NULL )
                {
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                    {
                        PyErr_Format( PyExc_TypeError, "serial_for_url() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
        }
#endif
        }
        else
        {
            _python_par_kwargs = PyDict_New();
        }
    }

    // Check if argument url was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, const_str_plain_url );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_url == NULL );

            _python_par_url = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, const_str_plain_url );

            kw_found += 1;
        }
    }

    // Copy normal parameter values given as part of the args list to the respective variables:

    if (likely( 0 < args_given ))
    {
         if (unlikely( _python_par_url != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_url = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_url == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_url = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_url == NULL ))
    {
        PyObject *values[] = { _python_par_url };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_1_serial_for_url_of_module_serial( self, _python_par_url, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_url );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_serial_for_url_of_module_serial( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1_serial_for_url_of_module_serial( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_serial_for_url_of_module_serial( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_serial_for_url_of_module_serial(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_serial_for_url_of_module_serial,
        dparse_function_1_serial_for_url_of_module_serial,
        const_str_plain_serial_for_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad57b0795f566634bd0ec7d6feb79ac8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial,
        const_str_digest_59fc7c5598e09c174868e09e934be0cf
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial =
{
    PyModuleDef_HEAD_INIT,
    "serial",   /* m_name */
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

MOD_INIT_DECL( serial )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial );
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

    // puts( "in initserial" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial = Py_InitModule4(
        "serial",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial = PyModule_Create( &mdef_serial );
#endif

    moduledict_serial = (PyDictObject *)((PyModuleObject *)module_serial)->md_dict;

    assertObject( module_serial );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_serial, module_serial );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial );

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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_de69004a5b8eb8bcfa5f540a8ac42b37;
    UPDATE_STRING_DICT0( moduledict_serial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_b5d574b09a2118c1c3258629cf8b5686_list );
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_d0e5f27655754425719bae64b4186dce;
    UPDATE_STRING_DICT0( moduledict_serial, (Nuitka_StringObject *)const_str_plain_VERSION, tmp_assign_source_4 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_ea398494c9ec34986920bad4eb72ac7b, module_serial );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_serial)->md_dict;
    frame_module->f_lineno = 11;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_platform );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_cli;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_2 = ((PyModuleObject *)module_serial)->md_dict;
    frame_module->f_lineno = 14;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_c7dd400a286fed74f94d802d5f3cc071, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    goto branch_end_1;
    branch_no_1:;
    tmp_import_globals_3 = ((PyModuleObject *)module_serial)->md_dict;
    frame_module->f_lineno = 16;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_nt;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_4 = ((PyModuleObject *)module_serial)->md_dict;
    frame_module->f_lineno = 19;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_digest_93ce6cfe16d4162110e1228eff37f85f, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_posix;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_import_globals_5 = ((PyModuleObject *)module_serial)->md_dict;
    frame_module->f_lineno = 21;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_digest_8d44ec8514b88bc2a4db2d8f875143c6, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial, true, tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_3 );

        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_3 );
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_name );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_plain_java;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_import_globals_6 = ((PyModuleObject *)module_serial)->md_dict;
    frame_module->f_lineno = 23;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_digest_32570b0934adce9667542fbb494ebf58, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial, true, tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_4 );

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_4 );
    goto branch_end_4;
    branch_no_4:;
    tmp_binop_left_1 = const_str_digest_ff216eaf21244ea79ffa794370aa703e;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_name );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 25;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_module->f_lineno = 25;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_assign_source_7 = LIST_COPY( const_list_str_digest_78a4299bdcf617ddede2e97a1f951fee_list );
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_protocol_handler_packages, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_function_1_serial_for_url_of_module_serial(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial, (Nuitka_StringObject *)const_str_plain_serial_for_url, tmp_assign_source_8 );

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

    return MOD_RETURN_VALUE( module_serial );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
