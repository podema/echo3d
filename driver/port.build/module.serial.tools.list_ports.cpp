// Generated code for Python source for module 'serial.tools.list_ports'
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

// The _module_serial$tools$list_ports is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_serial$tools$list_ports;
PyDictObject *moduledict_serial$tools$list_ports;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_I;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_desc;
extern PyObject *const_str_plain_dest;
static PyObject *const_str_plain_grep;
extern PyObject *const_str_plain_help;
static PyObject *const_str_plain_hits;
static PyObject *const_str_plain_hwid;
extern PyObject *const_str_plain_main;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_const;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_posix;
static PyObject *const_str_plain_usage;
extern PyObject *const_str_plain_action;
extern PyObject *const_str_plain_parser;
extern PyObject *const_str_plain_regexp;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_comports;
static PyObject *const_str_plain_iterator;
extern PyObject *const_str_plain_optparse;
extern PyObject *const_str_plain_add_option;
extern PyObject *const_str_plain_list_ports;
extern PyObject *const_str_plain_parse_args;
extern PyObject *const_str_plain_store_true;
extern PyObject *const_str_plain_description;
static PyObject *const_str_plain_store_const;
extern PyObject *const_str_plain_OptionParser;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_tuple_str_plain_regexp_tuple;
static PyObject *const_dict_15a102f3c20e11aa3e80b44dff6ed707;
static PyObject *const_dict_272a95e9eb6a6717bd3791fbac8e397c;
static PyObject *const_dict_36f53f43cdaf66de4d1f7c1a9fb47998;
static PyObject *const_dict_ee8858f2c2867e76963951c910ee0c6d;
extern PyObject *const_str_digest_0bc0dbb9fc36ef0d7fdc91d727d52512;
extern PyObject *const_str_digest_0df3489f1b16927cc9a8cf4fbd6899d5;
extern PyObject *const_str_digest_2ee0d246673b8d449626194600353e2f;
static PyObject *const_str_digest_31558222cc219f631f7070201bb70e51;
static PyObject *const_str_digest_32b72d7a36d8cf41f34b2db00c872386;
static PyObject *const_str_digest_4619f48f3f625f8a4cdeec7ab6ecb112;
static PyObject *const_str_digest_4760c50c9619556bf25212a6c00ce184;
extern PyObject *const_str_digest_47fa03ef5536c5573b137cec5adc2d39;
static PyObject *const_str_digest_4e942a69271234a0880fea6bbd4fdfb4;
static PyObject *const_str_digest_51995a7f9de2ba6d1d3ac47804e84e67;
static PyObject *const_str_digest_51a95cdb2ae4305b6d82f33f119c2dc5;
static PyObject *const_str_digest_57ad79dd386e20c2ea7c974f0620d36c;
static PyObject *const_str_digest_6b82cae3ef237880d1b15fb209124fea;
static PyObject *const_str_digest_6e04927423aabe4b4c4fd7836fb02562;
static PyObject *const_str_digest_79c594e439fac5598d0b60aa0705e353;
extern PyObject *const_str_digest_9baf1aa941aff86d6ae068e24720a889;
static PyObject *const_str_digest_b47e5fb843a641159b90a001a614119c;
static PyObject *const_str_digest_ba7537abe72eae41cc7ef205dfb07ecd;
extern PyObject *const_str_digest_c9bdc6de2a2cc7f67be9d7de97f44930;
extern PyObject *const_str_digest_d85f9b7d2da9d405ffffc2aaf9deb17f;
static PyObject *const_str_digest_ebbef26a7734fe0028c2dc5352e17a95;
static PyObject *const_str_digest_ecba2630e8d0e2d141e2ef86cdf776a0;
static PyObject *const_str_digest_fe0aa013fe2cf729f7319934681b4a7a;
extern PyObject *const_str_digest_ff216eaf21244ea79ffa794370aa703e;
static PyObject *const_tuple_35c6b5d0c6746b2ff2f1aa5daa99abc1_tuple;
static PyObject *const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple;
extern PyObject *const_tuple_6e0ce2585290961afef9353bf934255f_tuple;
static PyObject *const_tuple_7738adb322f69e505949fa388c51e3a1_tuple;
static PyObject *const_tuple_str_digest_b47e5fb843a641159b90a001a614119c_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_grep = UNSTREAM_STRING( &constant_bin[ 297700 ], 4, 1 );
    const_str_plain_hits = UNSTREAM_STRING( &constant_bin[ 297736 ], 4, 1 );
    const_str_plain_hwid = UNSTREAM_STRING( &constant_bin[ 297653 ], 4, 1 );
    const_str_plain_usage = UNSTREAM_STRING( &constant_bin[ 146165 ], 5, 1 );
    const_str_plain_iterator = UNSTREAM_STRING( &constant_bin[ 8763 ], 8, 1 );
    const_str_plain_store_const = UNSTREAM_STRING( &constant_bin[ 2538557 ], 11, 1 );
    const_tuple_str_plain_regexp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_regexp_tuple, 0, const_str_plain_regexp ); Py_INCREF( const_str_plain_regexp );
    const_dict_15a102f3c20e11aa3e80b44dff6ed707 = _PyDict_NewPresized( 2 );
    const_str_digest_6e04927423aabe4b4c4fd7836fb02562 = UNSTREAM_STRING( &constant_bin[ 2538568 ], 26, 0 );
    PyDict_SetItem( const_dict_15a102f3c20e11aa3e80b44dff6ed707, const_str_plain_usage, const_str_digest_6e04927423aabe4b4c4fd7836fb02562 );
    const_str_digest_57ad79dd386e20c2ea7c974f0620d36c = UNSTREAM_STRING( &constant_bin[ 2538594 ], 57, 0 );
    PyDict_SetItem( const_dict_15a102f3c20e11aa3e80b44dff6ed707, const_str_plain_description, const_str_digest_57ad79dd386e20c2ea7c974f0620d36c );
    const_dict_272a95e9eb6a6717bd3791fbac8e397c = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_272a95e9eb6a6717bd3791fbac8e397c, const_str_plain_dest, const_str_plain_verbose );
    PyDict_SetItem( const_dict_272a95e9eb6a6717bd3791fbac8e397c, const_str_plain_action, const_str_plain_store_const );
    PyDict_SetItem( const_dict_272a95e9eb6a6717bd3791fbac8e397c, const_str_plain_const, const_int_0 );
    const_str_digest_ebbef26a7734fe0028c2dc5352e17a95 = UNSTREAM_STRING( &constant_bin[ 2538651 ], 21, 0 );
    PyDict_SetItem( const_dict_272a95e9eb6a6717bd3791fbac8e397c, const_str_plain_help, const_str_digest_ebbef26a7734fe0028c2dc5352e17a95 );
    const_dict_36f53f43cdaf66de4d1f7c1a9fb47998 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_36f53f43cdaf66de4d1f7c1a9fb47998, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_36f53f43cdaf66de4d1f7c1a9fb47998, const_str_plain_default, Py_False );
    PyDict_SetItem( const_dict_36f53f43cdaf66de4d1f7c1a9fb47998, const_str_plain_dest, const_str_plain_debug );
    const_str_digest_ba7537abe72eae41cc7ef205dfb07ecd = UNSTREAM_STRING( &constant_bin[ 2538672 ], 54, 0 );
    PyDict_SetItem( const_dict_36f53f43cdaf66de4d1f7c1a9fb47998, const_str_plain_help, const_str_digest_ba7537abe72eae41cc7ef205dfb07ecd );
    const_dict_ee8858f2c2867e76963951c910ee0c6d = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_ee8858f2c2867e76963951c910ee0c6d, const_str_plain_dest, const_str_plain_verbose );
    PyDict_SetItem( const_dict_ee8858f2c2867e76963951c910ee0c6d, const_str_plain_default, const_int_pos_1 );
    const_str_digest_32b72d7a36d8cf41f34b2db00c872386 = UNSTREAM_STRING( &constant_bin[ 2538726 ], 48, 0 );
    PyDict_SetItem( const_dict_ee8858f2c2867e76963951c910ee0c6d, const_str_plain_help, const_str_digest_32b72d7a36d8cf41f34b2db00c872386 );
    PyDict_SetItem( const_dict_ee8858f2c2867e76963951c910ee0c6d, const_str_plain_action, const_str_plain_count );
    const_str_digest_31558222cc219f631f7070201bb70e51 = UNSTREAM_STRING( &constant_bin[ 2538774 ], 12, 0 );
    const_str_digest_4619f48f3f625f8a4cdeec7ab6ecb112 = UNSTREAM_STRING( &constant_bin[ 2538786 ], 321, 0 );
    const_str_digest_4760c50c9619556bf25212a6c00ce184 = UNSTREAM_STRING( &constant_bin[ 2539107 ], 29, 0 );
    const_str_digest_4e942a69271234a0880fea6bbd4fdfb4 = UNSTREAM_STRING( &constant_bin[ 2539136 ], 199, 0 );
    const_str_digest_51995a7f9de2ba6d1d3ac47804e84e67 = UNSTREAM_STRING( &constant_bin[ 2539335 ], 14, 0 );
    const_str_digest_51a95cdb2ae4305b6d82f33f119c2dc5 = UNSTREAM_STRING( &constant_bin[ 2539349 ], 59, 0 );
    const_str_digest_6b82cae3ef237880d1b15fb209124fea = UNSTREAM_STRING( &constant_bin[ 2539408 ], 14, 0 );
    const_str_digest_79c594e439fac5598d0b60aa0705e353 = UNSTREAM_STRING( &constant_bin[ 2539422 ], 5, 0 );
    const_str_digest_b47e5fb843a641159b90a001a614119c = UNSTREAM_STRING( &constant_bin[ 1062294 ], 7, 0 );
    const_str_digest_ecba2630e8d0e2d141e2ef86cdf776a0 = UNSTREAM_STRING( &constant_bin[ 2539427 ], 34, 0 );
    const_str_digest_fe0aa013fe2cf729f7319934681b4a7a = UNSTREAM_STRING( &constant_bin[ 2539461 ], 12, 0 );
    const_tuple_35c6b5d0c6746b2ff2f1aa5daa99abc1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_35c6b5d0c6746b2ff2f1aa5daa99abc1_tuple, 0, const_str_plain_regexp ); Py_INCREF( const_str_plain_regexp );
    PyTuple_SET_ITEM( const_tuple_35c6b5d0c6746b2ff2f1aa5daa99abc1_tuple, 1, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_35c6b5d0c6746b2ff2f1aa5daa99abc1_tuple, 2, const_str_plain_desc ); Py_INCREF( const_str_plain_desc );
    PyTuple_SET_ITEM( const_tuple_35c6b5d0c6746b2ff2f1aa5daa99abc1_tuple, 3, const_str_plain_hwid ); Py_INCREF( const_str_plain_hwid );
    const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 0, const_str_plain_optparse ); Py_INCREF( const_str_plain_optparse );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 1, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 2, const_str_plain_options ); Py_INCREF( const_str_plain_options );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 4, const_str_plain_hits ); Py_INCREF( const_str_plain_hits );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 5, const_str_plain_iterator ); Py_INCREF( const_str_plain_iterator );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 6, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 7, const_str_plain_desc ); Py_INCREF( const_str_plain_desc );
    PyTuple_SET_ITEM( const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 8, const_str_plain_hwid ); Py_INCREF( const_str_plain_hwid );
    const_tuple_7738adb322f69e505949fa388c51e3a1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_7738adb322f69e505949fa388c51e3a1_tuple, 0, const_str_digest_c9bdc6de2a2cc7f67be9d7de97f44930 ); Py_INCREF( const_str_digest_c9bdc6de2a2cc7f67be9d7de97f44930 );
    PyTuple_SET_ITEM( const_tuple_7738adb322f69e505949fa388c51e3a1_tuple, 1, const_str_digest_0bc0dbb9fc36ef0d7fdc91d727d52512 ); Py_INCREF( const_str_digest_0bc0dbb9fc36ef0d7fdc91d727d52512 );
    const_tuple_str_digest_b47e5fb843a641159b90a001a614119c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b47e5fb843a641159b90a001a614119c_tuple, 0, const_str_digest_b47e5fb843a641159b90a001a614119c ); Py_INCREF( const_str_digest_b47e5fb843a641159b90a001a614119c );
}

// The module code objects.
static PyCodeObject *codeobj_b03efdb544eb6002516891f2be949682;
static PyCodeObject *codeobj_32d6421e1464cca50d6c1d955508826b;
static PyCodeObject *codeobj_6510e8400723c9725339bea0ddcd5f66;
static PyCodeObject *codeobj_bf8704be63250c3cf1ae387b048132b0;
static PyCodeObject *codeobj_a0463c39ebfcda2a36345305a1723d7a;

static void _initModuleCodeObjects(void)
{
    codeobj_b03efdb544eb6002516891f2be949682 = MAKE_CODEOBJ( const_str_digest_51a95cdb2ae4305b6d82f33f119c2dc5, const_str_plain_grep, 35, const_tuple_str_plain_regexp_tuple, 1, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_32d6421e1464cca50d6c1d955508826b = MAKE_CODEOBJ( const_str_digest_51a95cdb2ae4305b6d82f33f119c2dc5, const_str_plain_grep, 35, const_tuple_35c6b5d0c6746b2ff2f1aa5daa99abc1_tuple, 1, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6510e8400723c9725339bea0ddcd5f66 = MAKE_CODEOBJ( const_str_digest_51a95cdb2ae4305b6d82f33f119c2dc5, const_str_plain_list_ports, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_bf8704be63250c3cf1ae387b048132b0 = MAKE_CODEOBJ( const_str_digest_51a95cdb2ae4305b6d82f33f119c2dc5, const_str_plain_main, 46, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a0463c39ebfcda2a36345305a1723d7a = MAKE_CODEOBJ( const_str_digest_51a95cdb2ae4305b6d82f33f119c2dc5, const_str_plain_main, 46, const_tuple_53c00a57fc95effab16d4f8b98ae6183_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_grep_of_module_serial$tools$list_ports(  );


static PyObject *MAKE_FUNCTION_function_2_main_of_module_serial$tools$list_ports(  );


// The module function definitions.

struct _context_generator_function_1_grep_of_module_serial$tools$list_ports_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure_regexp;
    PyObjectLocalVariable closure_port;
    PyObjectLocalVariable closure_desc;
    PyObjectLocalVariable closure_hwid;
    PyObjectTempVariable closure_for_loop_1__for_iterator;
    PyObjectTempVariable closure_for_loop_1__iter_value;
    PyObjectTempVariable closure_tuple_unpack_1__source_iter;
    PyObjectTempVariable closure_tuple_unpack_1__element_1;
    PyObjectTempVariable closure_tuple_unpack_1__element_2;
    PyObjectTempVariable closure_tuple_unpack_1__element_3;
    PyObjectTempVariable closure_or_1__value_1;
    PyObjectTempVariable closure_or_1__value_2;
};

static void _context_generator_function_1_grep_of_module_serial$tools$list_ports_destructor( void *context_voidptr )
{
    _context_generator_function_1_grep_of_module_serial$tools$list_ports_t *_python_context = (struct _context_generator_function_1_grep_of_module_serial$tools$list_ports_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void function_1_grep_of_module_serial$tools$list_ports_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void function_1_grep_of_module_serial$tools$list_ports_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_function_1_grep_of_module_serial$tools$list_ports_t *_python_context = (_context_generator_function_1_grep_of_module_serial$tools$list_ports_t *)generator->m_context;


    // Local variable inits
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_b03efdb544eb6002516891f2be949682, module_serial$tools$list_ports );

    Py_INCREF( frame_function );
    generator->m_frame = frame_function;
#if PYTHON_VERSION >= 340
    frame_function->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    // Throwing into unstarted generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_comports );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comports );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297600 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 41;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    assert( _python_context->closure_for_loop_1__for_iterator.object == NULL );
    _python_context->closure_for_loop_1__for_iterator.object = tmp_assign_source_1;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = _python_context->closure_for_loop_1__for_iterator.object;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_2 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 41;
            goto try_finally_handler_1;
        }
    }

    if (_python_context->closure_for_loop_1__iter_value.object == NULL)
    {
        _python_context->closure_for_loop_1__iter_value.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = _python_context->closure_for_loop_1__iter_value.object;
        _python_context->closure_for_loop_1__iter_value.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_2 = _python_context->closure_for_loop_1__iter_value.object;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    if (_python_context->closure_tuple_unpack_1__source_iter.object == NULL)
    {
        _python_context->closure_tuple_unpack_1__source_iter.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = _python_context->closure_tuple_unpack_1__source_iter.object;
        _python_context->closure_tuple_unpack_1__source_iter.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_unpack_1 = _python_context->closure_tuple_unpack_1__source_iter.object;

    tmp_assign_source_4 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_4 == NULL )
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


        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    if (_python_context->closure_tuple_unpack_1__element_1.object == NULL)
    {
        _python_context->closure_tuple_unpack_1__element_1.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = _python_context->closure_tuple_unpack_1__element_1.object;
        _python_context->closure_tuple_unpack_1__element_1.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_unpack_2 = _python_context->closure_tuple_unpack_1__source_iter.object;

    tmp_assign_source_5 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_5 == NULL )
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


        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    if (_python_context->closure_tuple_unpack_1__element_2.object == NULL)
    {
        _python_context->closure_tuple_unpack_1__element_2.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = _python_context->closure_tuple_unpack_1__element_2.object;
        _python_context->closure_tuple_unpack_1__element_2.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_unpack_3 = _python_context->closure_tuple_unpack_1__source_iter.object;

    tmp_assign_source_6 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_6 == NULL )
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


        frame_function->f_lineno = 41;
        goto try_finally_handler_2;
    }
    if (_python_context->closure_tuple_unpack_1__element_3.object == NULL)
    {
        _python_context->closure_tuple_unpack_1__element_3.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = _python_context->closure_tuple_unpack_1__element_3.object;
        _python_context->closure_tuple_unpack_1__element_3.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_iterator_name_1 = _python_context->closure_tuple_unpack_1__source_iter.object;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_7 = _python_context->closure_tuple_unpack_1__element_1.object;

    if (_python_context->closure_port.object == NULL)
    {
        _python_context->closure_port.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = _python_context->closure_port.object;
        _python_context->closure_port.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_assign_source_8 = _python_context->closure_tuple_unpack_1__element_2.object;

    if (_python_context->closure_desc.object == NULL)
    {
        _python_context->closure_desc.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = _python_context->closure_desc.object;
        _python_context->closure_desc.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_assign_source_9 = _python_context->closure_tuple_unpack_1__element_3.object;

    if (_python_context->closure_hwid.object == NULL)
    {
        _python_context->closure_hwid.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = _python_context->closure_hwid.object;
        _python_context->closure_hwid.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
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
    Py_XDECREF( _python_context->closure_tuple_unpack_1__source_iter.object );
    _python_context->closure_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( _python_context->closure_tuple_unpack_1__element_1.object );
    _python_context->closure_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( _python_context->closure_tuple_unpack_1__element_2.object );
    _python_context->closure_tuple_unpack_1__element_2.object = NULL;

    Py_XDECREF( _python_context->closure_tuple_unpack_1__element_3.object );
    _python_context->closure_tuple_unpack_1__element_3.object = NULL;

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
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_4;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_search );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_1 = _python_context->closure_regexp.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 171752 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_2 = _python_context->closure_port.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_4;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_I );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 42;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 42;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_4;
    }
    if (_python_context->closure_or_1__value_2.object == NULL)
    {
        _python_context->closure_or_1__value_2.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = _python_context->closure_or_1__value_2.object;
        _python_context->closure_or_1__value_2.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = _python_context->closure_or_1__value_2.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_4;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_1 = _python_context->closure_or_1__value_2.object;

    Py_INCREF( tmp_cond_value_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = _python_context->closure_or_1__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( _python_context->closure_or_1__value_2.object );
        _python_context->closure_or_1__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_7;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_search );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_4 = _python_context->closure_regexp.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 171752 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_5 = _python_context->closure_desc.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 103951 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_7;
    }

    frame_function->f_lineno = 42;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_7;
    }
    if (_python_context->closure_or_1__value_1.object == NULL)
    {
        _python_context->closure_or_1__value_1.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = _python_context->closure_or_1__value_1.object;
        _python_context->closure_or_1__value_1.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_cond_value_3 = _python_context->closure_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_7;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_cond_value_1 = _python_context->closure_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = _python_context->closure_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( _python_context->closure_or_1__value_1.object );
        _python_context->closure_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_8;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_search );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_8;
    }
    tmp_call_arg_element_6 = _python_context->closure_regexp.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 171752 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_8;
    }

    tmp_call_arg_element_7 = _python_context->closure_hwid.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297637 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_8;
    }

    frame_function->f_lineno = 42;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_8;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
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

        goto try_finally_handler_7;
    }

    goto finally_end_2;
    finally_end_2:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_6;
    }

    goto finally_end_3;
    finally_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_5;
    }

    goto finally_end_4;
    finally_end_4:;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( _python_context->closure_or_1__value_1.object );
    _python_context->closure_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_4;
    }

    goto finally_end_5;
    finally_end_5:;
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_3;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 42;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_yield_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = _python_context->closure_port.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_yield_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_yield_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = _python_context->closure_desc.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_yield_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 103951 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_yield_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = _python_context->closure_hwid.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_yield_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297637 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_yield_1, 2, tmp_tuple_element_1 );
    tmp_unused = YIELD( generator, tmp_yield_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto try_finally_handler_3;
    }
    branch_no_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( _python_context->closure_or_1__value_2.object );
    _python_context->closure_or_1__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_1;
    }

    goto finally_end_7;
    finally_end_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
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
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( _python_context->closure_for_loop_1__iter_value.object );
    _python_context->closure_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( _python_context->closure_for_loop_1__for_iterator.object );
    _python_context->closure_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
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

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif

    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;

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
    if ((_python_context->closure_port.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_port,
            _python_context->closure_port.object
        );

    }
    if ((_python_context->closure_desc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_desc,
            _python_context->closure_desc.object
        );

    }
    if ((_python_context->closure_hwid.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hwid,
            _python_context->closure_hwid.object
        );

    }
    if ((_python_context->closure_regexp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_regexp,
            _python_context->closure_regexp.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


#if PYTHON_VERSION > 300
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    Py_DECREF( frame_function );
    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    PyErr_Restore( INCREASE_REFCOUNT( PyExc_StopIteration ), NULL, NULL );

    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return;
function_exception_exit:
    assert( exception_type );
    assert( exception_tb );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

}
static PyObject *impl_function_1_grep_of_module_serial$tools$list_ports( Nuitka_FunctionObject *self, PyObject *_python_par_regexp )
{
    // Create context if any
    struct _context_generator_function_1_grep_of_module_serial$tools$list_ports_t *_python_context = new _context_generator_function_1_grep_of_module_serial$tools$list_ports_t;

        PyObject *result = Nuitka_Generator_New(
            function_1_grep_of_module_serial$tools$list_ports_context,
            const_str_plain_grep,
            codeobj_b03efdb544eb6002516891f2be949682,
            _python_context,
            _context_generator_function_1_grep_of_module_serial$tools$list_ports_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function grep" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.
    _python_context->closure_regexp.object = _python_par_regexp;

    return result;
}
static PyObject *fparse_function_1_grep_of_module_serial$tools$list_ports( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_regexp = NULL;
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
                PyErr_Format( PyExc_TypeError, "grep() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_regexp == key )
            {
                assert( _python_par_regexp == NULL );
                _python_par_regexp = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_regexp, key ) == 1 )
            {
                assert( _python_par_regexp == NULL );
                _python_par_regexp = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "grep() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_regexp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_regexp = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_regexp == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_regexp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_regexp == NULL ))
    {
        PyObject *values[] = { _python_par_regexp };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_grep_of_module_serial$tools$list_ports( self, _python_par_regexp );

error_exit:;

    Py_XDECREF( _python_par_regexp );

    return NULL;
}

static PyObject *dparse_function_1_grep_of_module_serial$tools$list_ports( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_grep_of_module_serial$tools$list_ports( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_grep_of_module_serial$tools$list_ports( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_main_of_module_serial$tools$list_ports( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_optparse;
    PyObjectLocalVariable var_parser;
    PyObjectLocalVariable var_options;
    PyObjectLocalVariable var_args;
    PyObjectLocalVariable var_hits;
    PyObjectLocalVariable var_iterator;
    PyObjectLocalVariable var_port;
    PyObjectLocalVariable var_desc;
    PyObjectLocalVariable var_hwid;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__element_3;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
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
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_print_value;
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
    PyObject *tmp_str_arg_1;
    PyObject *tmp_str_arg_2;
    PyObject *tmp_str_arg_3;
    PyObject *tmp_str_arg_4;
    PyObject *tmp_str_arg_5;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bf8704be63250c3cf1ae387b048132b0, module_serial$tools$list_ports );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$tools$list_ports)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_optparse.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_optparse,
            var_optparse.object
        );

    }
    if ((var_parser.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_parser,
            var_parser.object
        );

    }
    if ((var_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_options,
            var_options.object
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
    if ((var_hits.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_hits,
            var_hits.object
        );

    }
    if ((var_iterator.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_iterator,
            var_iterator.object
        );

    }
    if ((var_port.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_port,
            var_port.object
        );

    }
    if ((var_desc.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_desc,
            var_desc.object
        );

    }
    if ((var_hwid.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_hwid,
            var_hwid.object
        );

    }
    frame_function->f_lineno = 47;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_optparse, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    assert( var_optparse.object == NULL );
    var_optparse.object = tmp_assign_source_1;

    tmp_source_name_1 = var_optparse.object;

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_OptionParser );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_call_kw_1 = PyDict_Copy( const_dict_15a102f3c20e11aa3e80b44dff6ed707 );
    frame_function->f_lineno = 51;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    assert( var_parser.object == NULL );
    var_parser.object = tmp_assign_source_2;

    tmp_source_name_2 = var_parser.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_option );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = const_tuple_str_digest_b47e5fb843a641159b90a001a614119c_tuple;
    tmp_call_kw_2 = PyDict_Copy( const_dict_36f53f43cdaf66de4d1f7c1a9fb47998 );
    frame_function->f_lineno = 58;
    tmp_unused = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_parser.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add_option );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = const_tuple_6e0ce2585290961afef9353bf934255f_tuple;
    tmp_call_kw_3 = PyDict_Copy( const_dict_ee8858f2c2867e76963951c910ee0c6d );
    frame_function->f_lineno = 64;
    tmp_unused = CALL_FUNCTION( tmp_called_3, tmp_call_pos_2, tmp_call_kw_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_parser.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_add_option );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_3 = const_tuple_7738adb322f69e505949fa388c51e3a1_tuple;
    tmp_call_kw_4 = PyDict_Copy( const_dict_272a95e9eb6a6717bd3791fbac8e397c );
    frame_function->f_lineno = 70;
    tmp_unused = CALL_FUNCTION( tmp_called_4, tmp_call_pos_3, tmp_call_kw_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code
    tmp_source_name_5 = var_parser.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_parse_args );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 72;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_3;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_4 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_4 == NULL )
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


        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_5 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_5 == NULL )
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


        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_5;

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

            goto try_finally_handler_1;
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

        goto try_finally_handler_1;
    }
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1.object;

    assert( var_options.object == NULL );
    var_options.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2.object;

    assert( var_args.object == NULL );
    var_args.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

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

        goto frame_exception_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_assign_source_8 = const_int_0;
    assert( var_hits.object == NULL );
    var_hits.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    tmp_cond_value_1 = var_args.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
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
    tmp_len_arg_1 = var_args.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_6 = var_parser.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 211952 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_error );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_ecba2630e8d0e2d141e2ef86cdf776a0;
    frame_function->f_lineno = 79;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_binop_left_1 = const_str_digest_4760c50c9619556bf25212a6c00ce184;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_subscr_target_1 = var_args.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_str_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_print_value = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_print_value );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_sorted );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_grep );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_grep );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297687 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = var_args.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_call_arg_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 81;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 81;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    assert( var_iterator.object == NULL );
    var_iterator.object = tmp_assign_source_9;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_sorted );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_comports );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_comports );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297600 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 83;
    tmp_call_arg_element_4 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 83;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    assert( var_iterator.object == NULL );
    var_iterator.object = tmp_assign_source_10;

    branch_end_1:;
    tmp_iter_arg_2 = var_iterator.object;

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_11;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_12 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 85;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_3 = tmp_for_loop_1__iter_value.object;

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_14 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_14 == NULL )
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


        frame_function->f_lineno = 85;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_15 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_15 == NULL )
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


        frame_function->f_lineno = 85;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_16 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 2 );
    if ( tmp_assign_source_16 == NULL )
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


        frame_function->f_lineno = 85;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_2__element_3.object == NULL)
    {
        tmp_tuple_unpack_2__element_3.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_3.object;
        tmp_tuple_unpack_2__element_3.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_2 ); assert( PyIter_Check( tmp_iterator_name_2 ) );

    tmp_iterator_attempt_2 = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt_2 == NULL ))
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

            goto try_finally_handler_3;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_2 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_3;
    }
    tmp_assign_source_17 = tmp_tuple_unpack_2__element_1.object;

    if (var_port.object == NULL)
    {
        var_port.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
    }
    else
    {
        PyObject *old = var_port.object;
        var_port.object = INCREASE_REFCOUNT( tmp_assign_source_17 );
        Py_DECREF( old );
    }
    tmp_assign_source_18 = tmp_tuple_unpack_2__element_2.object;

    if (var_desc.object == NULL)
    {
        var_desc.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
    }
    else
    {
        PyObject *old = var_desc.object;
        var_desc.object = INCREASE_REFCOUNT( tmp_assign_source_18 );
        Py_DECREF( old );
    }
    tmp_assign_source_19 = tmp_tuple_unpack_2__element_3.object;

    if (var_hwid.object == NULL)
    {
        var_hwid.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_hwid.object;
        var_hwid.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
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
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3.object );
    tmp_tuple_unpack_2__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_2;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_binop_left_2 = const_str_digest_79c594e439fac5598d0b60aa0705e353;
    tmp_binop_right_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_port.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_str_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_str_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto try_finally_handler_2;
    }
    tmp_print_value = PyObject_Str( tmp_str_arg_2 );
    Py_DECREF( tmp_str_arg_2 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto try_finally_handler_2;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_print_value );

        frame_function->f_lineno = 86;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto try_finally_handler_2;
    }
    tmp_source_name_7 = var_options.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_verbose );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Gt_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_binop_left_3 = const_str_digest_31558222cc219f631f7070201bb70e51;
    tmp_binop_right_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_desc.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 103951 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_3 );
    tmp_str_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_str_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto try_finally_handler_2;
    }
    tmp_print_value = PyObject_Str( tmp_str_arg_3 );
    Py_DECREF( tmp_str_arg_3 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto try_finally_handler_2;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_print_value );

        frame_function->f_lineno = 88;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto try_finally_handler_2;
    }
    tmp_binop_left_4 = const_str_digest_fe0aa013fe2cf729f7319934681b4a7a;
    tmp_binop_right_4 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_hwid.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297637 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_4 );
    tmp_str_arg_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_str_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }
    tmp_print_value = PyObject_Str( tmp_str_arg_4 );
    Py_DECREF( tmp_str_arg_4 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_print_value );

        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }
    branch_no_3:;
    tmp_assign_source_20 = var_hits.object;

    if ( tmp_assign_source_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297720 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto try_finally_handler_2;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_20 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_5 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_5 = const_int_pos_1;
    tmp_assign_source_21 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto try_finally_handler_4;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_compare_left_3 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_22 = tmp_inplace_assign_1__inplace_end.object;

    if (var_hits.object == NULL)
    {
        var_hits.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = var_hits.object;
        var_hits.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_2;
    }

    goto finally_end_3;
    finally_end_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
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
    tmp_source_name_8 = var_options.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_verbose );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_cond_value_3 = var_hits.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297720 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_binop_left_6 = const_str_digest_51995a7f9de2ba6d1d3ac47804e84e67;
    tmp_binop_right_6 = PyTuple_New( 1 );
    tmp_tuple_element_5 = var_hits.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297720 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_6, 0, tmp_tuple_element_5 );
    tmp_str_arg_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_str_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_print_value = PyObject_Str( tmp_str_arg_5 );
    Py_DECREF( tmp_str_arg_5 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_print_value );

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_print_value = const_str_digest_6b82cae3ef237880d1b15fb209124fea;
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    branch_end_6:;
    branch_no_5:;

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
    if ((var_optparse.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_optparse,
            var_optparse.object
        );

    }
    if ((var_parser.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_parser,
            var_parser.object
        );

    }
    if ((var_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_options,
            var_options.object
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
    if ((var_hits.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hits,
            var_hits.object
        );

    }
    if ((var_iterator.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_iterator,
            var_iterator.object
        );

    }
    if ((var_port.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_port,
            var_port.object
        );

    }
    if ((var_desc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_desc,
            var_desc.object
        );

    }
    if ((var_hwid.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hwid,
            var_hwid.object
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
static PyObject *fparse_function_2_main_of_module_serial$tools$list_ports( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2_main_of_module_serial$tools$list_ports( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2_main_of_module_serial$tools$list_ports( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_2_main_of_module_serial$tools$list_ports( self );
    }
    else
    {
        PyObject *result = fparse_function_2_main_of_module_serial$tools$list_ports( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_grep_of_module_serial$tools$list_ports(  )
{
    return Nuitka_Function_New(
        fparse_function_1_grep_of_module_serial$tools$list_ports,
        dparse_function_1_grep_of_module_serial$tools$list_ports,
        const_str_plain_grep,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_32d6421e1464cca50d6c1d955508826b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports,
        const_str_digest_4e942a69271234a0880fea6bbd4fdfb4
    );
}



static PyObject *MAKE_FUNCTION_function_2_main_of_module_serial$tools$list_ports(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_main_of_module_serial$tools$list_ports,
        dparse_function_2_main_of_module_serial$tools$list_ports,
        const_str_plain_main,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a0463c39ebfcda2a36345305a1723d7a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$tools$list_ports =
{
    PyModuleDef_HEAD_INIT,
    "serial.tools.list_ports",   /* m_name */
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

MOD_INIT_DECL( serial$tools$list_ports )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$tools$list_ports );
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

    // puts( "in initserial$tools$list_ports" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$tools$list_ports = Py_InitModule4(
        "serial.tools.list_ports",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$tools$list_ports = PyModule_Create( &mdef_serial$tools$list_ports );
#endif

    moduledict_serial$tools$list_ports = (PyDictObject *)((PyModuleObject *)module_serial$tools$list_ports)->md_dict;

    assertObject( module_serial$tools$list_ports );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0df3489f1b16927cc9a8cf4fbd6899d5, module_serial$tools$list_ports );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$tools$list_ports );

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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
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
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_4619f48f3f625f8a4cdeec7ab6ecb112;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_51a95cdb2ae4305b6d82f33f119c2dc5;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_6510e8400723c9725339bea0ddcd5f66, module_serial$tools$list_ports );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$tools$list_ports)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_serial$tools$list_ports)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_serial$tools$list_ports)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_serial$tools$list_ports)->md_dict;
    frame_module->f_lineno = 24;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_nt;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_module->f_lineno = 26;
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
    tmp_import_globals_5 = ((PyModuleObject *)module_serial$tools$list_ports)->md_dict;
    frame_module->f_lineno = 27;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_d85f9b7d2da9d405ffffc2aaf9deb17f, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial$tools$list_ports, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_posix;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_module->f_lineno = 28;
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
    tmp_import_globals_6 = ((PyModuleObject *)module_serial$tools$list_ports)->md_dict;
    frame_module->f_lineno = 29;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_digest_9baf1aa941aff86d6ae068e24720a889, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial$tools$list_ports, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    goto branch_end_2;
    branch_no_2:;
    tmp_binop_left_1 = const_str_digest_ff216eaf21244ea79ffa794370aa703e;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_name );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 32;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_module->f_lineno = 32;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;
    tmp_assign_source_7 = MAKE_FUNCTION_function_1_grep_of_module_serial$tools$list_ports(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_grep, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_function_2_main_of_module_serial$tools$list_ports(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_8 );

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

    return MOD_RETURN_VALUE( module_serial$tools$list_ports );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
