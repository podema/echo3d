// Generated code for Python source for module 'numpy.distutils.command.config_compiler'
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

// The _module_numpy$distutils$command$config_compiler is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$distutils$command$config_compiler;
PyDictObject *moduledict_numpy$distutils$command$config_compiler;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_v;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_v1;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_opt;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_arch;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_dist;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_build;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_noopt;
extern PyObject *const_str_plain__cache;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_config;
extern PyObject *const_str_plain_noarch;
extern PyObject *const_str_plain_Command;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_f77exec;
static PyObject *const_str_plain_f90exec;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_cmd_list;
extern PyObject *const_str_plain_compiler;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_f77flags;
extern PyObject *const_str_plain_f90flags;
extern PyObject *const_str_plain_build_ext;
extern PyObject *const_str_plain_config_cc;
extern PyObject *const_str_plain_config_fc;
extern PyObject *const_str_plain_distutils;
extern PyObject *const_str_plain_fcompiler;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_build_clib;
extern PyObject *const_str_plain_description;
extern PyObject *const_str_plain_help_options;
extern PyObject *const_str_plain_user_options;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_compiler_type;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_boolean_options;
extern PyObject *const_str_plain_config_compiler;
extern PyObject *const_str_plain_show_fcompilers;
extern PyObject *const_tuple_str_plain_log_tuple;
extern PyObject *const_str_plain_finalize_options;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_initialize_options;
extern PyObject *const_tuple_str_plain__cache_tuple;
extern PyObject *const_str_plain__setup_distribution;
extern PyObject *const_tuple_str_plain_Command_tuple;
extern PyObject *const_tuple_str_plain_compiler_tuple;
extern PyObject *const_str_plain_get_finalized_command;
extern PyObject *const_tuple_str_plain_fcompiler_tuple;
extern PyObject *const_str_plain_show_fortran_compilers;
static PyObject *const_tuple_str_plain_show_fcompilers_tuple;
static PyObject *const_list_76b9954937d5436259b98dda095c5817_list;
static PyObject *const_str_digest_239c931e1f3f306d9f422e7689cbef87;
static PyObject *const_str_digest_24b7833a15d391211ffde9dde54b01fc;
extern PyObject *const_str_digest_2b4a68262e2530d19ed27f39d54ab744;
static PyObject *const_str_digest_340d9e7bd013be0d394bc87100ac1ae7;
extern PyObject *const_str_digest_4e1df17c1b7cdf4d421633c2f6340f5b;
static PyObject *const_str_digest_52842e61f1fba6842a31f8c423110ca2;
static PyObject *const_str_digest_663d86a37203d85bf10dbe9ea659a6e8;
static PyObject *const_str_digest_6cb2132bd3781ffe46e73959f57caad5;
extern PyObject *const_str_digest_82da08cae06897a215db1f3ea599b730;
extern PyObject *const_str_digest_c07776b8cc05a1d77cee3bcbe831bd84;
extern PyObject *const_str_digest_c0ab1120b239d942b77d52b1ebe617bb;
extern PyObject *const_str_digest_c0fff8163aabf90b654f2f3ba03fe760;
static PyObject *const_str_digest_c3ff6db89de260255de62813ddfc48e6;
static PyObject *const_str_digest_d354479b9dcaee8917e5b239653b2e0d;
static PyObject *const_str_digest_d4b93c611a80e1e0d3406b64bd024714;
static PyObject *const_str_digest_e81e9469d271284d305f614d827727b5;
static PyObject *const_tuple_5000cf0904873403fbd4b6d132142572_tuple;
static PyObject *const_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple;
static PyObject *const_tuple_91e611c1939cab0d67c89a96836d520f_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_list_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple_list;
static PyObject *const_list_str_plain_debug_str_plain_noopt_str_plain_noarch_list;

static void _initModuleConstants(void)
{
    const_str_plain_f77exec = UNSTREAM_STRING( &constant_bin[ 908683 ], 7, 1 );
    const_str_plain_f90exec = UNSTREAM_STRING( &constant_bin[ 908690 ], 7, 1 );
    const_str_plain_cmd_list = UNSTREAM_STRING( &constant_bin[ 93164 ], 8, 1 );
    const_tuple_str_plain_show_fcompilers_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_show_fcompilers_tuple, 0, const_str_plain_show_fcompilers ); Py_INCREF( const_str_plain_show_fcompilers );
    const_list_76b9954937d5436259b98dda095c5817_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 908697 ], 555 );
    const_str_digest_239c931e1f3f306d9f422e7689cbef87 = UNSTREAM_STRING( &constant_bin[ 909252 ], 74, 0 );
    const_str_digest_24b7833a15d391211ffde9dde54b01fc = UNSTREAM_STRING( &constant_bin[ 909326 ], 148, 0 );
    const_str_digest_340d9e7bd013be0d394bc87100ac1ae7 = UNSTREAM_STRING( &constant_bin[ 909474 ], 75, 0 );
    const_str_digest_52842e61f1fba6842a31f8c423110ca2 = UNSTREAM_STRING( &constant_bin[ 909549 ], 34, 0 );
    const_str_digest_663d86a37203d85bf10dbe9ea659a6e8 = UNSTREAM_STRING( &constant_bin[ 899184 ], 9, 0 );
    const_str_digest_6cb2132bd3781ffe46e73959f57caad5 = UNSTREAM_STRING( &constant_bin[ 909583 ], 83, 0 );
    const_str_digest_c3ff6db89de260255de62813ddfc48e6 = UNSTREAM_STRING( &constant_bin[ 909666 ], 27, 0 );
    const_str_digest_d354479b9dcaee8917e5b239653b2e0d = UNSTREAM_STRING( &constant_bin[ 909693 ], 78, 0 );
    const_str_digest_d4b93c611a80e1e0d3406b64bd024714 = UNSTREAM_STRING( &constant_bin[ 909771 ], 84, 0 );
    const_str_digest_e81e9469d271284d305f614d827727b5 = UNSTREAM_STRING( &constant_bin[ 909855 ], 50, 0 );
    const_tuple_5000cf0904873403fbd4b6d132142572_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5000cf0904873403fbd4b6d132142572_tuple, 0, const_str_plain__cache ); Py_INCREF( const_str_plain__cache );
    PyTuple_SET_ITEM( const_tuple_5000cf0904873403fbd4b6d132142572_tuple, 1, const_str_plain_show_fcompilers ); Py_INCREF( const_str_plain_show_fcompilers );
    PyTuple_SET_ITEM( const_tuple_5000cf0904873403fbd4b6d132142572_tuple, 2, const_str_plain_distutils ); Py_INCREF( const_str_plain_distutils );
    PyTuple_SET_ITEM( const_tuple_5000cf0904873403fbd4b6d132142572_tuple, 3, const_str_plain_dist ); Py_INCREF( const_str_plain_dist );
    const_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple, 0, const_str_digest_663d86a37203d85bf10dbe9ea659a6e8 ); Py_INCREF( const_str_digest_663d86a37203d85bf10dbe9ea659a6e8 );
    PyTuple_SET_ITEM( const_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple, 2, const_str_digest_c3ff6db89de260255de62813ddfc48e6 ); Py_INCREF( const_str_digest_c3ff6db89de260255de62813ddfc48e6 );
    const_tuple_91e611c1939cab0d67c89a96836d520f_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 1, const_str_plain_build_clib ); Py_INCREF( const_str_plain_build_clib );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 2, const_str_plain_build_ext ); Py_INCREF( const_str_plain_build_ext );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 3, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 4, const_str_plain_build ); Py_INCREF( const_str_plain_build );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 5, const_str_plain_cmd_list ); Py_INCREF( const_str_plain_cmd_list );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 6, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 7, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 8, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 9, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 10, const_str_plain_v1 ); Py_INCREF( const_str_plain_v1 );
    const_list_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple_list, 0, const_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple ); Py_INCREF( const_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple );
    const_list_str_plain_debug_str_plain_noopt_str_plain_noarch_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_debug_str_plain_noopt_str_plain_noarch_list, 0, const_str_plain_debug ); Py_INCREF( const_str_plain_debug );
    PyList_SET_ITEM( const_list_str_plain_debug_str_plain_noopt_str_plain_noarch_list, 1, const_str_plain_noopt ); Py_INCREF( const_str_plain_noopt );
    PyList_SET_ITEM( const_list_str_plain_debug_str_plain_noopt_str_plain_noarch_list, 2, const_str_plain_noarch ); Py_INCREF( const_str_plain_noarch );
}

// The module code objects.
static PyCodeObject *codeobj_c92aa495a2b9361ea11dc2cb6771fed3;
static PyCodeObject *codeobj_79ecc75e69d2994d7ee91de945fe9558;
static PyCodeObject *codeobj_7924c0acd055dd1f51d4b86938c36183;
static PyCodeObject *codeobj_edd0e091c8f2443c1a5a8ce9aa6402d4;
static PyCodeObject *codeobj_296dceb2bc412d7285927381e8cb838c;
static PyCodeObject *codeobj_30bef94f869cf4a229b3cd44889185dd;
static PyCodeObject *codeobj_b574103f25a6150a74bbf589ad7c0839;
static PyCodeObject *codeobj_3baadc374aebf5d8826cb998932a3c65;
static PyCodeObject *codeobj_9090ab7dfdbe98e382173caf7006eda4;
static PyCodeObject *codeobj_c1917f413e8af00bf504b7882647afc3;
static PyCodeObject *codeobj_f9781b28b5d1385dab71e89a94237b6b;
static PyCodeObject *codeobj_b9571c3fe5e49ec21c4328100fc32c86;
static PyCodeObject *codeobj_5e1a131d262349b8d415967cdcb75b45;

static void _initModuleCodeObjects(void)
{
    codeobj_c92aa495a2b9361ea11dc2cb6771fed3 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_config_cc, 85, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_79ecc75e69d2994d7ee91de945fe9558 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_config_compiler, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7924c0acd055dd1f51d4b86938c36183 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_config_fc, 17, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_edd0e091c8f2443c1a5a8ce9aa6402d4 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_finalize_options, 58, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_296dceb2bc412d7285927381e8cb838c = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_finalize_options, 58, const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_30bef94f869cf4a229b3cd44889185dd = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_finalize_options, 99, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b574103f25a6150a74bbf589ad7c0839 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_finalize_options, 99, const_tuple_91e611c1939cab0d67c89a96836d520f_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3baadc374aebf5d8826cb998932a3c65 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_initialize_options, 46, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9090ab7dfdbe98e382173caf7006eda4 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_initialize_options, 96, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1917f413e8af00bf504b7882647afc3 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_run, 81, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f9781b28b5d1385dab71e89a94237b6b = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_run, 123, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b9571c3fe5e49ec21c4328100fc32c86 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_show_fortran_compilers, 8, const_tuple_str_plain__cache_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5e1a131d262349b8d415967cdcb75b45 = MAKE_CODEOBJ( const_str_digest_340d9e7bd013be0d394bc87100ac1ae7, const_str_plain_show_fortran_compilers, 8, const_tuple_5000cf0904873403fbd4b6d132142572_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  );


static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  );


static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  );


static PyObject *MAKE_FUNCTION_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  );


static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  );


static PyObject *MAKE_FUNCTION_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  );


static PyObject *MAKE_FUNCTION_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  );


// The module function definitions.
static PyObject *impl_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject *_python_par__cache )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par__cache; par__cache.object = _python_par__cache;
    PyObjectLocalVariable var_show_fcompilers;
    PyObjectLocalVariable var_distutils;
    PyObjectLocalVariable var_dist;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b9571c3fe5e49ec21c4328100fc32c86, module_numpy$distutils$command$config_compiler );
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
    tmp_cond_value_1 = par__cache.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93096 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 10;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par__cache.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93096 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 11;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_int_pos_1;
    frame_function->f_lineno = 11;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$config_compiler)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_show_fcompilers.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_show_fcompilers,
            var_show_fcompilers.object
        );

    }
    if ((var_distutils.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_distutils,
            var_distutils.object
        );

    }
    if ((var_dist.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dist,
            var_dist.object
        );

    }
    if ((par__cache.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain__cache,
            par__cache.object
        );

    }
    frame_function->f_lineno = 12;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c0ab1120b239d942b77d52b1ebe617bb, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_show_fcompilers_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_show_fcompilers );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    assert( var_show_fcompilers.object == NULL );
    var_show_fcompilers.object = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$config_compiler)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_show_fcompilers.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_show_fcompilers,
            var_show_fcompilers.object
        );

    }
    if ((var_distutils.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_distutils,
            var_distutils.object
        );

    }
    if ((var_dist.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_dist,
            var_dist.object
        );

    }
    if ((par__cache.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain__cache,
            par__cache.object
        );

    }
    frame_function->f_lineno = 13;
    tmp_assign_source_2 = IMPORT_MODULE( const_str_digest_c07776b8cc05a1d77cee3bcbe831bd84, tmp_import_globals_2, tmp_import_locals_2, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    assert( var_distutils.object == NULL );
    var_distutils.object = tmp_assign_source_2;

    tmp_source_name_3 = var_distutils.object;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_core );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__setup_distribution );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    assert( var_dist.object == NULL );
    var_dist.object = tmp_assign_source_3;

    tmp_called_2 = var_show_fcompilers.object;

    tmp_call_arg_element_2 = var_dist.object;

    frame_function->f_lineno = 15;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    if ((var_show_fcompilers.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_show_fcompilers,
            var_show_fcompilers.object
        );

    }
    if ((var_distutils.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_distutils,
            var_distutils.object
        );

    }
    if ((var_dist.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dist,
            var_dist.object
        );

    }
    if ((par__cache.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__cache,
            par__cache.object
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
static PyObject *fparse_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par__cache = NULL;
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
                PyErr_Format( PyExc_TypeError, "show_fortran_compilers() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain__cache == key )
            {
                assert( _python_par__cache == NULL );
                _python_par__cache = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain__cache, key ) == 1 )
            {
                assert( _python_par__cache == NULL );
                _python_par__cache = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "show_fortran_compilers() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par__cache != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par__cache = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par__cache == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par__cache = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par__cache == NULL ))
    {
        PyObject *values[] = { _python_par__cache };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( self, _python_par__cache );

error_exit:;

    Py_XDECREF( _python_par__cache );

    return NULL;
}

static PyObject *dparse_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var_description;
    PyObjectLocalVariable var_user_options;
    PyObjectLocalVariable var_help_options;
    PyObjectLocalVariable var_boolean_options;
    PyObjectLocalVariable var_initialize_options;
    PyObjectLocalVariable var_finalize_options;
    PyObjectLocalVariable var_run;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2b4a68262e2530d19ed27f39d54ab744;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_24b7833a15d391211ffde9dde54b01fc;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = const_str_digest_e81e9469d271284d305f614d827727b5;
    assert( var_description.object == NULL );
    var_description.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_assign_source_4 = LIST_COPY( const_list_76b9954937d5436259b98dda095c5817_list );
    assert( var_user_options.object == NULL );
    var_user_options.object = tmp_assign_source_4;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7924c0acd055dd1f51d4b86938c36183, module_numpy$distutils$command$config_compiler );
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
    tmp_assign_source_5 = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = const_str_digest_4e1df17c1b7cdf4d421633c2f6340f5b;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_digest_82da08cae06897a215db1f3ea599b730;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 84232 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 3, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
    assert( var_help_options.object == NULL );
    var_help_options.object = tmp_assign_source_5;

    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_debug_str_plain_noopt_str_plain_noarch_list );
    assert( var_boolean_options.object == NULL );
    var_boolean_options.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    assert( var_initialize_options.object == NULL );
    var_initialize_options.object = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    assert( var_finalize_options.object == NULL );
    var_finalize_options.object = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    assert( var_run.object == NULL );
    var_run.object = tmp_assign_source_9;


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
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_description,
            var_description.object
        );

    }
    if ((var_user_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_user_options,
            var_user_options.object
        );

    }
    if ((var_help_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_help_options,
            var_help_options.object
        );

    }
    if ((var_boolean_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_boolean_options,
            var_boolean_options.object
        );

    }
    if ((var_initialize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_initialize_options,
            var_initialize_options.object
        );

    }
    if ((var_finalize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_finalize_options,
            var_finalize_options.object
        );

    }
    if ((var_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_run,
            var_run.object
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
    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_description,
            var_description.object
        );

    }
    if ((var_user_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_user_options,
            var_user_options.object
        );

    }
    if ((var_help_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_help_options,
            var_help_options.object
        );

    }
    if ((var_boolean_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_boolean_options,
            var_boolean_options.object
        );

    }
    if ((var_initialize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_initialize_options,
            var_initialize_options.object
        );

    }
    if ((var_finalize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_finalize_options,
            var_finalize_options.object
        );

    }
    if ((var_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_run,
            var_run.object
        );

    }
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


static PyObject *impl_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3baadc374aebf5d8826cb998932a3c65, module_numpy$distutils$command$config_compiler );
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
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_fcompiler, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_f77exec, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_f90exec, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = Py_None;
    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_f77flags, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = Py_None;
    tmp_assattr_target_5 = par_self.object;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_f90flags, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self.object;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_opt, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self.object;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_arch, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self.object;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_debug, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = Py_None;
    tmp_assattr_target_9 = par_self.object;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_noopt, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = Py_None;
    tmp_assattr_target_10 = par_self.object;

    if ( tmp_assattr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_noarch, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
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
static PyObject *fparse_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "initialize_options() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "initialize_options() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_build_clib;
    PyObjectLocalVariable var_build_ext;
    PyObjectLocalVariable var_config;
    PyObjectLocalVariable var_build;
    PyObjectLocalVariable var_cmd_list;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_l;
    PyObjectLocalVariable var_c;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_v1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
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
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_edd0e091c8f2443c1a5a8ce9aa6402d4, module_numpy$distutils$command$config_compiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_info );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_d4b93c611a80e1e0d3406b64bd024714;
    frame_function->f_lineno = 59;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_finalized_command );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_build_clib;
    frame_function->f_lineno = 60;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib.object == NULL );
    var_build_clib.object = tmp_assign_source_1;

    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get_finalized_command );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_plain_build_ext;
    frame_function->f_lineno = 61;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    assert( var_build_ext.object == NULL );
    var_build_ext.object = tmp_assign_source_2;

    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get_finalized_command );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_config;
    frame_function->f_lineno = 62;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( var_config.object == NULL );
    var_config.object = tmp_assign_source_3;

    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get_finalized_command );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_build;
    frame_function->f_lineno = 63;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    assert( var_build.object == NULL );
    var_build.object = tmp_assign_source_4;

    tmp_assign_source_5 = PyList_New( 5 );
    tmp_list_element_1 = par_self.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_config.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_build_clib.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 2, tmp_list_element_1 );
    tmp_list_element_1 = var_build_ext.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 3, tmp_list_element_1 );
    tmp_list_element_1 = var_build.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 4, tmp_list_element_1 );
    assert( var_cmd_list.object == NULL );
    var_cmd_list.object = tmp_assign_source_5;

    tmp_iter_arg_1 = const_tuple_str_plain_fcompiler_tuple;
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_6;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_7 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 65;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_for_loop_1__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_assign_source_9 = PyList_New( 0 );
    if (var_l.object == NULL)
    {
        var_l.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_l.object;
        var_l.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_iter_arg_2 = var_cmd_list.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93148 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_11 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 67;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_assign_source_12 = tmp_for_loop_2__iter_value.object;

    if (var_c.object == NULL)
    {
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_c.object;
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_getattr_target_1 = var_c.object;

    tmp_getattr_attr_1 = var_a.object;

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto try_finally_handler_2;
    }

    tmp_assign_source_13 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto try_finally_handler_2;
    }
    if (var_v.object == NULL)
    {
        var_v.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_v.object;

    tmp_compare_right_1 = Py_None;
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
    tmp_isinstance_inst_1 = var_v.object;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_2;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_2;
    }
    if (tmp_res == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_6 = var_v.object;

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_compiler_type );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_2;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_2 = var_v.object;

    tmp_compare_right_2 = var_l.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_2;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_2;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_7 = var_l.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_2;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_6 = var_v.object;

    frame_function->f_lineno = 71;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

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
    tmp_cond_value_1 = var_l.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_assign_source_15 = Py_None;
    if (var_v1.object == NULL)
    {
        var_v1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_v1.object;
        var_v1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_subscr_target_1 = var_l.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto try_finally_handler_1;
    }
    if (var_v1.object == NULL)
    {
        var_v1.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_v1.object;
        var_v1.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    branch_end_4:;
    tmp_len_arg_1 = var_l.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto try_finally_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_warn );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto try_finally_handler_1;
    }
    tmp_binop_left_1 = const_str_digest_239c931e1f3f306d9f422e7689cbef87;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_l.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 75;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 75;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_cond_value_2 = var_v1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_iter_arg_3 = var_cmd_list.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93148 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto try_finally_handler_1;
    }

    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_finally_handler_1;
    }
    if (tmp_for_loop_3__for_iterator.object == NULL)
    {
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__for_iterator.object;
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_18 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 78;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_assign_source_19 = tmp_for_loop_3__iter_value.object;

    if (var_c.object == NULL)
    {
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_c.object;
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    tmp_getattr_target_2 = var_c.object;

    tmp_getattr_attr_2 = var_a.object;

    if ( tmp_getattr_attr_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto try_finally_handler_3;
    }

    tmp_compare_left_4 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto try_finally_handler_3;
    }
    tmp_compare_right_4 = Py_None;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_is_1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_setattr_target_1 = var_c.object;

    tmp_setattr_attr_1 = var_a.object;

    if ( tmp_setattr_attr_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto try_finally_handler_3;
    }

    tmp_setattr_value_1 = var_v1.object;

    if ( tmp_setattr_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93202 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto try_finally_handler_3;
    }

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto try_finally_handler_3;
    }
    branch_no_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_finally_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
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
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
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
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
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
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;

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
    if ((var_build_clib.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_clib,
            var_build_clib.object
        );

    }
    if ((var_build_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_ext,
            var_build_ext.object
        );

    }
    if ((var_config.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_config,
            var_config.object
        );

    }
    if ((var_build.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build,
            var_build.object
        );

    }
    if ((var_cmd_list.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd_list,
            var_cmd_list.object
        );

    }
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            var_a.object
        );

    }
    if ((var_l.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_l,
            var_l.object
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
    if ((var_v.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_v,
            var_v.object
        );

    }
    if ((var_v1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_v1,
            var_v1.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
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
static PyObject *fparse_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "finalize_options() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "finalize_options() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "run() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "run() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var_description;
    PyObjectLocalVariable var_user_options;
    PyObjectLocalVariable var_initialize_options;
    PyObjectLocalVariable var_finalize_options;
    PyObjectLocalVariable var_run;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_2b4a68262e2530d19ed27f39d54ab744;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_d354479b9dcaee8917e5b239653b2e0d;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = const_str_digest_52842e61f1fba6842a31f8c423110ca2;
    assert( var_description.object == NULL );
    var_description.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_assign_source_4 = LIST_COPY( const_list_tuple_73f3cf492d1c9e8f7c479e05f434a4e5_tuple_list );
    assert( var_user_options.object == NULL );
    var_user_options.object = tmp_assign_source_4;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c92aa495a2b9361ea11dc2cb6771fed3, module_numpy$distutils$command$config_compiler );
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
    tmp_assign_source_5 = MAKE_FUNCTION_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    assert( var_initialize_options.object == NULL );
    var_initialize_options.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    assert( var_finalize_options.object == NULL );
    var_finalize_options.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    assert( var_run.object == NULL );
    var_run.object = tmp_assign_source_7;


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
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_description,
            var_description.object
        );

    }
    if ((var_user_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_user_options,
            var_user_options.object
        );

    }
    if ((var_initialize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_initialize_options,
            var_initialize_options.object
        );

    }
    if ((var_finalize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_finalize_options,
            var_finalize_options.object
        );

    }
    if ((var_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_run,
            var_run.object
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
    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__.object
        );

    }
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var_description.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_description,
            var_description.object
        );

    }
    if ((var_user_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_user_options,
            var_user_options.object
        );

    }
    if ((var_initialize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_initialize_options,
            var_initialize_options.object
        );

    }
    if ((var_finalize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_finalize_options,
            var_finalize_options.object
        );

    }
    if ((var_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_run,
            var_run.object
        );

    }
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


static PyObject *impl_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9090ab7dfdbe98e382173caf7006eda4, module_numpy$distutils$command$config_compiler );
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
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_compiler, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
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
static PyObject *fparse_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "initialize_options() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "initialize_options() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_build_clib;
    PyObjectLocalVariable var_build_ext;
    PyObjectLocalVariable var_config;
    PyObjectLocalVariable var_build;
    PyObjectLocalVariable var_cmd_list;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_l;
    PyObjectLocalVariable var_c;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_v1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
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
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_30bef94f869cf4a229b3cd44889185dd, module_numpy$distutils$command$config_compiler );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_info );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_6cb2132bd3781ffe46e73959f57caad5;
    frame_function->f_lineno = 100;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_finalized_command );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_build_clib;
    frame_function->f_lineno = 101;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    assert( var_build_clib.object == NULL );
    var_build_clib.object = tmp_assign_source_1;

    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get_finalized_command );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_plain_build_ext;
    frame_function->f_lineno = 102;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    assert( var_build_ext.object == NULL );
    var_build_ext.object = tmp_assign_source_2;

    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get_finalized_command );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_config;
    frame_function->f_lineno = 103;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    assert( var_config.object == NULL );
    var_config.object = tmp_assign_source_3;

    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get_finalized_command );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_build;
    frame_function->f_lineno = 104;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    assert( var_build.object == NULL );
    var_build.object = tmp_assign_source_4;

    tmp_assign_source_5 = PyList_New( 5 );
    tmp_list_element_1 = par_self.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_config.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_build_clib.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 2, tmp_list_element_1 );
    tmp_list_element_1 = var_build_ext.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 3, tmp_list_element_1 );
    tmp_list_element_1 = var_build.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_5, 4, tmp_list_element_1 );
    assert( var_cmd_list.object == NULL );
    var_cmd_list.object = tmp_assign_source_5;

    tmp_iter_arg_1 = const_tuple_str_plain_compiler_tuple;
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_6;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_7 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 106;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_for_loop_1__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_assign_source_9 = PyList_New( 0 );
    if (var_l.object == NULL)
    {
        var_l.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_l.object;
        var_l.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_iter_arg_2 = var_cmd_list.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93148 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto try_finally_handler_1;
    }

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto try_finally_handler_1;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_11 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 108;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_assign_source_12 = tmp_for_loop_2__iter_value.object;

    if (var_c.object == NULL)
    {
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_c.object;
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_getattr_target_1 = var_c.object;

    tmp_getattr_attr_1 = var_a.object;

    if ( tmp_getattr_attr_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto try_finally_handler_2;
    }

    tmp_assign_source_13 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto try_finally_handler_2;
    }
    if (var_v.object == NULL)
    {
        var_v.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_v.object;

    tmp_compare_right_1 = Py_None;
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
    tmp_isinstance_inst_1 = var_v.object;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    if (tmp_res == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_6 = var_v.object;

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_compiler_type );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto try_finally_handler_2;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_2 = var_v.object;

    tmp_compare_right_2 = var_l.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_2;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_2;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_7 = var_l.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_2;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_append );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_6 = var_v.object;

    frame_function->f_lineno = 112;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto try_finally_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

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
    tmp_cond_value_1 = var_l.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_assign_source_15 = Py_None;
    if (var_v1.object == NULL)
    {
        var_v1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
    }
    else
    {
        PyObject *old = var_v1.object;
        var_v1.object = INCREASE_REFCOUNT( tmp_assign_source_15 );
        Py_DECREF( old );
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_subscr_target_1 = var_l.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto try_finally_handler_1;
    }
    if (var_v1.object == NULL)
    {
        var_v1.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_v1.object;
        var_v1.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    branch_end_4:;
    tmp_len_arg_1 = var_l.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto try_finally_handler_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto try_finally_handler_1;
    }
    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 115;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto try_finally_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_warn );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto try_finally_handler_1;
    }
    tmp_binop_left_1 = const_str_digest_239c931e1f3f306d9f422e7689cbef87;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_l.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 116;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 116;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_cond_value_2 = var_v1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_iter_arg_3 = var_cmd_list.object;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93148 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_1;
    }

    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_1;
    }
    if (tmp_for_loop_3__for_iterator.object == NULL)
    {
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__for_iterator.object;
        tmp_for_loop_3__for_iterator.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_18 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 119;
            goto try_finally_handler_3;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_assign_source_19 = tmp_for_loop_3__iter_value.object;

    if (var_c.object == NULL)
    {
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_c.object;
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    tmp_getattr_target_2 = var_c.object;

    tmp_getattr_attr_2 = var_a.object;

    if ( tmp_getattr_attr_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_3;
    }

    tmp_compare_left_4 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_3;
    }
    tmp_compare_right_4 = Py_None;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_is_1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_setattr_target_1 = var_c.object;

    tmp_setattr_attr_1 = var_a.object;

    if ( tmp_setattr_attr_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_3;
    }

    tmp_setattr_value_1 = var_v1.object;

    if ( tmp_setattr_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93202 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto try_finally_handler_3;
    }

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_3;
    }
    branch_no_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
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
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
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
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
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
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto frame_exception_exit_1;
    }

    goto finally_end_3;
    finally_end_3:;

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
    if ((var_build_clib.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_clib,
            var_build_clib.object
        );

    }
    if ((var_build_ext.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build_ext,
            var_build_ext.object
        );

    }
    if ((var_config.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_config,
            var_config.object
        );

    }
    if ((var_build.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_build,
            var_build.object
        );

    }
    if ((var_cmd_list.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd_list,
            var_cmd_list.object
        );

    }
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            var_a.object
        );

    }
    if ((var_l.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_l,
            var_l.object
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
    if ((var_v.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_v,
            var_v.object
        );

    }
    if ((var_v1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_v1,
            var_v1.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
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
static PyObject *fparse_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "finalize_options() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "finalize_options() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "run() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_self == key )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "run() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_self == NULL ))
    {
        PyObject *values[] = { _python_par_self };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler,
        dparse_function_1_initialize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler,
        const_str_plain_initialize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3baadc374aebf5d8826cb998932a3c65,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config_compiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler,
        dparse_function_1_initialize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler,
        const_str_plain_initialize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9090ab7dfdbe98e382173caf7006eda4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config_compiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler,
        dparse_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler,
        const_str_plain_show_fortran_compilers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e1a131d262349b8d415967cdcb75b45,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config_compiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler,
        dparse_function_2_finalize_options_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler,
        const_str_plain_finalize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_296dceb2bc412d7285927381e8cb838c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config_compiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler,
        dparse_function_2_finalize_options_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler,
        const_str_plain_finalize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b574103f25a6150a74bbf589ad7c0839,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config_compiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler,
        dparse_function_3_run_of_class_2_config_fc_of_module_numpy$distutils$command$config_compiler,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1917f413e8af00bf504b7882647afc3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config_compiler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler,
        dparse_function_3_run_of_class_3_config_cc_of_module_numpy$distutils$command$config_compiler,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f9781b28b5d1385dab71e89a94237b6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$distutils$command$config_compiler,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$distutils$command$config_compiler =
{
    PyModuleDef_HEAD_INIT,
    "numpy.distutils.command.config_compiler",   /* m_name */
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

MOD_INIT_DECL( numpy$distutils$command$config_compiler )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$distutils$command$config_compiler );
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

    // puts( "in initnumpy$distutils$command$config_compiler" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$distutils$command$config_compiler = Py_InitModule4(
        "numpy.distutils.command.config_compiler",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$distutils$command$config_compiler = PyModule_Create( &mdef_numpy$distutils$command$config_compiler );
#endif

    moduledict_numpy$distutils$command$config_compiler = (PyDictObject *)((PyModuleObject *)module_numpy$distutils$command$config_compiler)->md_dict;

    assertObject( module_numpy$distutils$command$config_compiler );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2b4a68262e2530d19ed27f39d54ab744, module_numpy$distutils$command$config_compiler );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$distutils$command$config_compiler );

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
    PyObjectTempVariable tmp_class_creation_1__bases;
    PyObjectTempVariable tmp_class_creation_1__class_dict;
    PyObjectTempVariable tmp_class_creation_1__metaclass;
    PyObjectTempVariable tmp_class_creation_1__class;
    PyObjectTempVariable tmp_class_creation_2__bases;
    PyObjectTempVariable tmp_class_creation_2__class_dict;
    PyObjectTempVariable tmp_class_creation_2__metaclass;
    PyObjectTempVariable tmp_class_creation_2__class;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
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
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_340d9e7bd013be0d394bc87100ac1ae7;
    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_79ecc75e69d2994d7ee91de945fe9558, module_numpy$distutils$command$config_compiler );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$distutils$command$config_compiler)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$distutils$command$config_compiler)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$distutils$command$config_compiler)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$distutils$command$config_compiler)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_c07776b8cc05a1d77cee3bcbe831bd84, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_Command_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Command );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_Command, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$distutils$command$config_compiler)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_c0fff8163aabf90b654f2f3ba03fe760, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_log_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_7 );
    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_8 = MAKE_FUNCTION_function_1_show_fortran_compilers_of_module_numpy$distutils$command$config_compiler( tmp_defaults_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_show_fortran_compilers, tmp_assign_source_8 );
    // Tried code
    tmp_assign_source_9 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_Command );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Command );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93067 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_9;

    tmp_assign_source_10 = impl_class_2_config_fc_of_module_numpy$distutils$command$config_compiler(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_10;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dget_dict_1 = tmp_class_creation_1__class_dict.object;

    tmp_dget_key_1 = const_str_plain___metaclass__;
    tmp_assign_source_11 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_11 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_11;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_config_fc;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 17;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_12;

    tmp_assign_source_13 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_config_fc, tmp_assign_source_13 );
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
    Py_XDECREF( tmp_class_creation_1__class.object );
    tmp_class_creation_1__class.object = NULL;

    Py_XDECREF( tmp_class_creation_1__bases.object );
    tmp_class_creation_1__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict.object );
    tmp_class_creation_1__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass.object );
    tmp_class_creation_1__metaclass.object = NULL;

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
    // Tried code
    tmp_assign_source_14 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_Command );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Command );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 93067 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 85;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_14;

    tmp_assign_source_15 = impl_class_3_config_cc_of_module_numpy$distutils$command$config_compiler(  );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_15;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto try_finally_handler_2;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dget_dict_2 = tmp_class_creation_2__class_dict.object;

    tmp_dget_key_2 = const_str_plain___metaclass__;
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_16 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_16;

    tmp_called_2 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain_config_cc;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 85;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_17;

    tmp_assign_source_18 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_numpy$distutils$command$config_compiler, (Nuitka_StringObject *)const_str_plain_config_cc, tmp_assign_source_18 );
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
    Py_XDECREF( tmp_class_creation_2__class.object );
    tmp_class_creation_2__class.object = NULL;

    Py_XDECREF( tmp_class_creation_2__bases.object );
    tmp_class_creation_2__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict.object );
    tmp_class_creation_2__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass.object );
    tmp_class_creation_2__metaclass.object = NULL;

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

    return MOD_RETURN_VALUE( module_numpy$distutils$command$config_compiler );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
