// Generated code for Python source for module 'numpy.fft.helper'
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

// The _module_numpy$fft$helper is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$fft$helper;
PyDictObject *moduledict_numpy$fft$helper;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_1_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_p1;
extern PyObject *const_str_plain_p2;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_helper;
static PyObject *const_str_plain_mylist;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain_fftfreq;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_results;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_fftshift;
static PyObject *const_str_plain_rfftfreq;
static PyObject *const_str_plain_ifftshift;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_tuple_float_1_0_tuple;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_integer_types_tuple;
static PyObject *const_tuple_str_plain_n_str_plain_d_tuple;
static PyObject *const_tuple_str_plain_x_str_plain_axes_tuple;
static PyObject *const_list_d3376bb1f7f4aa67004298e8d81c0177_list;
static PyObject *const_str_digest_0605a46b07302d4c84fa69dc1bf97878;
static PyObject *const_str_digest_1fcdb72930d4d905387d4924a04c4a1b;
static PyObject *const_str_digest_200ebf5725d8b46cde3a1ea7923c6d8e;
static PyObject *const_str_digest_22fda9cac65f238bd8b928a236b9dcab;
extern PyObject *const_str_digest_3e8d4c5fbc78426f466387c576765620;
static PyObject *const_str_digest_58c3aead1773233a462d3c215f3a9bd7;
extern PyObject *const_str_digest_9718270fe5d2c916ce2b6f64e75a37af;
static PyObject *const_str_digest_dbbf905bc20f1e3074317e690d188d91;
static PyObject *const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa;
static PyObject *const_str_digest_ef955afe46cb96a265bb5006d188103e;
static PyObject *const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple;
static PyObject *const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple;
static PyObject *const_tuple_1952086625b3b75894ff16424526eb36_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_mylist = UNSTREAM_STRING( &constant_bin[ 1127554 ], 6, 1 );
    const_str_plain_fftfreq = UNSTREAM_STRING( &constant_bin[ 973310 ], 7, 1 );
    const_str_plain_fftshift = UNSTREAM_STRING( &constant_bin[ 1096722 ], 8, 1 );
    const_str_plain_rfftfreq = UNSTREAM_STRING( &constant_bin[ 1127560 ], 8, 1 );
    const_str_plain_ifftshift = UNSTREAM_STRING( &constant_bin[ 1124801 ], 9, 1 );
    const_tuple_float_1_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_tuple, 0, const_float_1_0 ); Py_INCREF( const_float_1_0 );
    const_tuple_str_plain_integer_types_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_integer_types_tuple, 0, const_str_plain_integer_types ); Py_INCREF( const_str_plain_integer_types );
    const_tuple_str_plain_n_str_plain_d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_d_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_str_plain_x_str_plain_axes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_axes_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_axes_tuple, 1, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    const_list_d3376bb1f7f4aa67004298e8d81c0177_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 0, const_str_plain_fftshift ); Py_INCREF( const_str_plain_fftshift );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 1, const_str_plain_ifftshift ); Py_INCREF( const_str_plain_ifftshift );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 2, const_str_plain_fftfreq ); Py_INCREF( const_str_plain_fftfreq );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 3, const_str_plain_rfftfreq ); Py_INCREF( const_str_plain_rfftfreq );
    const_str_digest_0605a46b07302d4c84fa69dc1bf97878 = UNSTREAM_STRING( &constant_bin[ 1127568 ], 714, 0 );
    const_str_digest_1fcdb72930d4d905387d4924a04c4a1b = UNSTREAM_STRING( &constant_bin[ 1128282 ], 42, 0 );
    const_str_digest_200ebf5725d8b46cde3a1ea7923c6d8e = UNSTREAM_STRING( &constant_bin[ 1128324 ], 1362, 0 );
    const_str_digest_22fda9cac65f238bd8b928a236b9dcab = UNSTREAM_STRING( &constant_bin[ 1129686 ], 1078, 0 );
    const_str_digest_58c3aead1773233a462d3c215f3a9bd7 = UNSTREAM_STRING( &constant_bin[ 1130764 ], 16, 0 );
    const_str_digest_dbbf905bc20f1e3074317e690d188d91 = UNSTREAM_STRING( &constant_bin[ 1130780 ], 1139, 0 );
    const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa = UNSTREAM_STRING( &constant_bin[ 1131919 ], 52, 0 );
    const_str_digest_ef955afe46cb96a265bb5006d188103e = UNSTREAM_STRING( &constant_bin[ 1131971 ], 22, 0 );
    const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 3, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 5, const_str_plain_p1 ); Py_INCREF( const_str_plain_p1 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 6, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 1, const_str_plain_concatenate ); Py_INCREF( const_str_plain_concatenate );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 2, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 3, const_str_plain_take ); Py_INCREF( const_str_plain_take );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 4, const_str_plain_integer ); Py_INCREF( const_str_plain_integer );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 5, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    const_tuple_1952086625b3b75894ff16424526eb36_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 4, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 1, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 3, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 5, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 7, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 8, const_str_plain_mylist ); Py_INCREF( const_str_plain_mylist );
}

// The module code objects.
static PyCodeObject *codeobj_3470f5b27bdb44c95ee75bd68cbede3b;
static PyCodeObject *codeobj_b7f4c27f2f6fc7a844724d6b64227fd6;
static PyCodeObject *codeobj_3e309c88c3a1c83e9be76a67634c56de;
static PyCodeObject *codeobj_3c8bd8d008c041943288847044687a16;
static PyCodeObject *codeobj_1a0654c82e3448678513d5bfd101f9f0;
static PyCodeObject *codeobj_25be26632abe4219782b286aa37d6491;
static PyCodeObject *codeobj_0ee444a0e5b6949c384cadea9f8ede92;
static PyCodeObject *codeobj_fb1eee520c2656ebfc66620965667347;
static PyCodeObject *codeobj_1e857d63e49681df4026db35fd1d7c69;

static void _initModuleCodeObjects(void)
{
    codeobj_3470f5b27bdb44c95ee75bd68cbede3b = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_fftfreq, 126, const_tuple_str_plain_n_str_plain_d_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b7f4c27f2f6fc7a844724d6b64227fd6 = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_fftfreq, 126, const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3e309c88c3a1c83e9be76a67634c56de = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_fftshift, 19, const_tuple_str_plain_x_str_plain_axes_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3c8bd8d008c041943288847044687a16 = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_fftshift, 19, const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1a0654c82e3448678513d5bfd101f9f0 = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_helper, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_25be26632abe4219782b286aa37d6491 = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_ifftshift, 78, const_tuple_str_plain_x_str_plain_axes_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ee444a0e5b6949c384cadea9f8ede92 = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_ifftshift, 78, const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fb1eee520c2656ebfc66620965667347 = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_rfftfreq, 175, const_tuple_str_plain_n_str_plain_d_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1e857d63e49681df4026db35fd1d7c69 = MAKE_CODEOBJ( const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa, const_str_plain_rfftfreq, 175, const_tuple_1952086625b3b75894ff16424526eb36_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_fftshift_of_module_numpy$fft$helper( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_ifftshift_of_module_numpy$fft$helper( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_fftfreq_of_module_numpy$fft$helper( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_rfftfreq_of_module_numpy$fft$helper( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_fftshift_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_axes )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_axes; par_axes.object = _python_par_axes;
    PyObjectLocalVariable var_tmp;
    PyObjectLocalVariable var_ndim;
    PyObjectLocalVariable var_y;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_p2;
    PyObjectLocalVariable var_mylist;
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
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3e309c88c3a1c83e9be76a67634c56de, module_numpy$fft$helper );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 63;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    assert( var_tmp.object == NULL );
    var_tmp.object = tmp_assign_source_1;

    tmp_source_name_1 = var_tmp.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    assert( var_ndim.object == NULL );
    var_ndim.object = tmp_assign_source_2;

    tmp_compare_left_1 = par_axes.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
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
    tmp_range_arg_1 = var_ndim.object;

    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    if (par_axes.object == NULL)
    {
        par_axes.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_axes.object;
        par_axes.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_axes.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 153957 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_axes.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    if (par_axes.object == NULL)
    {
        par_axes.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_axes.object;
        par_axes.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    branch_no_2:;
    branch_end_1:;
    tmp_assign_source_5 = var_tmp.object;

    assert( var_y.object == NULL );
    var_y.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_iter_arg_1 = par_axes.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
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
        frame_function->f_lineno = 70;
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

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_source_name_2 = var_tmp.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_1 = var_k.object;

    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_finally_handler_1;
    }
    if (var_n.object == NULL)
    {
        var_n.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_n.object;
        var_n.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_binop_left_2 = var_n.object;

    tmp_binop_right_2 = const_int_pos_1;
    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }
    tmp_binop_right_1 = const_int_pos_2;
    tmp_assign_source_10 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_finally_handler_1;
    }
    if (var_p2.object == NULL)
    {
        var_p2.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_p2.object;
        var_p2.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64224 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = var_p2.object;

    tmp_call_arg_element_4 = var_n.object;

    frame_function->f_lineno = 73;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 73;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_2 );
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_5 = var_p2.object;

    frame_function->f_lineno = 73;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_5 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 73;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 73;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto try_finally_handler_1;
    }
    if (var_mylist.object == NULL)
    {
        var_mylist.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_mylist.object;
        var_mylist.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 153621 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = var_y.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_7 = var_mylist.object;

    tmp_call_arg_element_8 = var_k.object;

    frame_function->f_lineno = 74;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto try_finally_handler_1;
    }
    if (var_y.object == NULL)
    {
        var_y.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_y.object;
        var_y.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
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
    tmp_return_value = var_y.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
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
    if ((var_tmp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tmp,
            var_tmp.object
        );

    }
    if ((var_ndim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ndim,
            var_ndim.object
        );

    }
    if ((var_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            var_y.object
        );

    }
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.object
        );

    }
    if ((var_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            var_n.object
        );

    }
    if ((var_p2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_p2,
            var_p2.object
        );

    }
    if ((var_mylist.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mylist,
            var_mylist.object
        );

    }
    if ((par_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            par_x.object
        );

    }
    if ((par_axes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_axes,
            par_axes.object
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
static PyObject *fparse_function_1_fftshift_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_axes = NULL;
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
                PyErr_Format( PyExc_TypeError, "fftshift() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_axes == key )
            {
                assert( _python_par_axes == NULL );
                _python_par_axes = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_axes, key ) == 1 )
            {
                assert( _python_par_axes == NULL );
                _python_par_axes = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fftshift() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_axes != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_axes = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_axes == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_axes = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_x == NULL || _python_par_axes == NULL ))
    {
        PyObject *values[] = { _python_par_x, _python_par_axes };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_fftshift_of_module_numpy$fft$helper( self, _python_par_x, _python_par_axes );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_axes );

    return NULL;
}

static PyObject *dparse_function_1_fftshift_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_fftshift_of_module_numpy$fft$helper( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_fftshift_of_module_numpy$fft$helper( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_ifftshift_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_axes )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_axes; par_axes.object = _python_par_axes;
    PyObjectLocalVariable var_tmp;
    PyObjectLocalVariable var_ndim;
    PyObjectLocalVariable var_y;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_p2;
    PyObjectLocalVariable var_mylist;
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
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_25be26632abe4219782b286aa37d6491, module_numpy$fft$helper );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 111;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    assert( var_tmp.object == NULL );
    var_tmp.object = tmp_assign_source_1;

    tmp_source_name_1 = var_tmp.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    assert( var_ndim.object == NULL );
    var_ndim.object = tmp_assign_source_2;

    tmp_compare_left_1 = par_axes.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
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
    tmp_range_arg_1 = var_ndim.object;

    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    if (par_axes.object == NULL)
    {
        par_axes.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_axes.object;
        par_axes.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_axes.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 153957 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_axes.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    if (par_axes.object == NULL)
    {
        par_axes.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_axes.object;
        par_axes.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    branch_no_2:;
    branch_end_1:;
    tmp_assign_source_5 = var_tmp.object;

    assert( var_y.object == NULL );
    var_y.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_iter_arg_1 = par_axes.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63698 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
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
        frame_function->f_lineno = 118;
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

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_source_name_2 = var_tmp.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94742 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_1 = var_k.object;

    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto try_finally_handler_1;
    }
    if (var_n.object == NULL)
    {
        var_n.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = var_n.object;
        var_n.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_binop_left_1 = var_n.object;

    tmp_binop_left_3 = var_n.object;

    tmp_binop_right_3 = const_int_pos_1;
    tmp_binop_left_2 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_1;
    }
    tmp_binop_right_2 = const_int_pos_2;
    tmp_binop_right_1 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_1;
    }
    tmp_assign_source_10 = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto try_finally_handler_1;
    }
    if (var_p2.object == NULL)
    {
        var_p2.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_p2.object;
        var_p2.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 64224 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = var_p2.object;

    tmp_call_arg_element_4 = var_n.object;

    frame_function->f_lineno = 121;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 121;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_2 );
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_5 = var_p2.object;

    frame_function->f_lineno = 121;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_5 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 121;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 121;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto try_finally_handler_1;
    }
    if (var_mylist.object == NULL)
    {
        var_mylist.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_mylist.object;
        var_mylist.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 153621 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = var_y.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_7 = var_mylist.object;

    tmp_call_arg_element_8 = var_k.object;

    frame_function->f_lineno = 122;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto try_finally_handler_1;
    }
    if (var_y.object == NULL)
    {
        var_y.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_y.object;
        var_y.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
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
    tmp_return_value = var_y.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
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
    if ((var_tmp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tmp,
            var_tmp.object
        );

    }
    if ((var_ndim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ndim,
            var_ndim.object
        );

    }
    if ((var_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            var_y.object
        );

    }
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.object
        );

    }
    if ((var_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            var_n.object
        );

    }
    if ((var_p2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_p2,
            var_p2.object
        );

    }
    if ((var_mylist.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mylist,
            var_mylist.object
        );

    }
    if ((par_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            par_x.object
        );

    }
    if ((par_axes.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_axes,
            par_axes.object
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
static PyObject *fparse_function_2_ifftshift_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_axes = NULL;
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
                PyErr_Format( PyExc_TypeError, "ifftshift() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_axes == key )
            {
                assert( _python_par_axes == NULL );
                _python_par_axes = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_axes, key ) == 1 )
            {
                assert( _python_par_axes == NULL );
                _python_par_axes = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ifftshift() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_axes != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_axes = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_axes == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_axes = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_x == NULL || _python_par_axes == NULL ))
    {
        PyObject *values[] = { _python_par_x, _python_par_axes };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_ifftshift_of_module_numpy$fft$helper( self, _python_par_x, _python_par_axes );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_axes );

    return NULL;
}

static PyObject *dparse_function_2_ifftshift_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_ifftshift_of_module_numpy$fft$helper( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_ifftshift_of_module_numpy$fft$helper( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_fftfreq_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject *_python_par_n, PyObject *_python_par_d )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_n; par_n.object = _python_par_n;
    PyObjectLocalVariable par_d; par_d.object = _python_par_d;
    PyObjectLocalVariable var_val;
    PyObjectLocalVariable var_results;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_p1;
    PyObjectLocalVariable var_p2;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_sliceass_lower_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_target_2;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_sliceass_value_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unary_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3470f5b27bdb44c95ee75bd68cbede3b, module_numpy$fft$helper );
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
    tmp_isinstance_inst_1 = par_n.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 153957 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_ef955afe46cb96a265bb5006d188103e;
    frame_function->f_lineno = 163;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 163;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_binop_left_1 = const_float_1_0;
    tmp_binop_left_2 = par_n.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = par_d.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    assert( var_val.object == NULL );
    var_val.object = tmp_assign_source_1;

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_empty );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69177 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_n.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 165;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    assert( var_results.object == NULL );
    var_results.object = tmp_assign_source_2;

    tmp_binop_left_5 = par_n.object;

    if ( tmp_binop_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = const_int_pos_1;
    tmp_binop_left_4 = BINARY_OPERATION_SUB( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = const_int_pos_2;
    tmp_binop_left_3 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = const_int_pos_1;
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    assert( var_N.object == NULL );
    var_N.object = tmp_assign_source_3;

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_N.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 167;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    assert( var_p1.object == NULL );
    var_p1.object = tmp_assign_source_4;

    tmp_sliceass_value_1 = var_p1.object;

    tmp_sliceass_target_1 = var_results.object;

    tmp_sliceass_upper_1 = var_N.object;

    tmp_result = SET_SLICE( tmp_sliceass_target_1, Py_None, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 2 );
    tmp_binop_left_6 = par_n.object;

    if ( tmp_binop_left_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_6 = const_int_pos_2;
    tmp_unary_arg_1 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_2 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 169;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    assert( var_p2.object == NULL );
    var_p2.object = tmp_assign_source_5;

    tmp_sliceass_value_2 = var_p2.object;

    tmp_sliceass_target_2 = var_results.object;

    tmp_sliceass_lower_1 = var_N.object;

    tmp_result = SET_SLICE( tmp_sliceass_target_2, tmp_sliceass_lower_1, Py_None, tmp_sliceass_value_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = var_results.object;

    tmp_binop_right_7 = var_val.object;

    tmp_return_value = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
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
    if ((var_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            var_val.object
        );

    }
    if ((var_results.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_results,
            var_results.object
        );

    }
    if ((var_N.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_N,
            var_N.object
        );

    }
    if ((var_p1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_p1,
            var_p1.object
        );

    }
    if ((var_p2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_p2,
            var_p2.object
        );

    }
    if ((par_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            par_n.object
        );

    }
    if ((par_d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_d,
            par_d.object
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
static PyObject *fparse_function_3_fftfreq_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_n = NULL;
    PyObject *_python_par_d = NULL;
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
                PyErr_Format( PyExc_TypeError, "fftfreq() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_n == key )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_d == key )
            {
                assert( _python_par_d == NULL );
                _python_par_d = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_n, key ) == 1 )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_d, key ) == 1 )
            {
                assert( _python_par_d == NULL );
                _python_par_d = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fftfreq() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_n != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_n == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_d != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_d == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_d = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_n == NULL || _python_par_d == NULL ))
    {
        PyObject *values[] = { _python_par_n, _python_par_d };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_fftfreq_of_module_numpy$fft$helper( self, _python_par_n, _python_par_d );

error_exit:;

    Py_XDECREF( _python_par_n );
    Py_XDECREF( _python_par_d );

    return NULL;
}

static PyObject *dparse_function_3_fftfreq_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_3_fftfreq_of_module_numpy$fft$helper( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_fftfreq_of_module_numpy$fft$helper( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_rfftfreq_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject *_python_par_n, PyObject *_python_par_d )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_n; par_n.object = _python_par_n;
    PyObjectLocalVariable par_d; par_d.object = _python_par_d;
    PyObjectLocalVariable var_val;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_results;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fb1eee520c2656ebfc66620965667347, module_numpy$fft$helper );
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
    tmp_isinstance_inst_1 = par_n.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 153957 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_ef955afe46cb96a265bb5006d188103e;
    frame_function->f_lineno = 219;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 219;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_binop_left_1 = const_float_1_0;
    tmp_binop_left_2 = par_n.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = par_d.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }
    assert( var_val.object == NULL );
    var_val.object = tmp_assign_source_1;

    tmp_binop_left_4 = par_n.object;

    if ( tmp_binop_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_4 = const_int_pos_2;
    tmp_binop_left_3 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    assert( var_N.object == NULL );
    var_N.object = tmp_assign_source_2;

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_N.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 222;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    assert( var_results.object == NULL );
    var_results.object = tmp_assign_source_3;

    tmp_binop_left_5 = var_results.object;

    tmp_binop_right_5 = var_val.object;

    tmp_return_value = BINARY_OPERATION_MUL( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
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
    if ((var_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            var_val.object
        );

    }
    if ((var_N.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_N,
            var_N.object
        );

    }
    if ((var_results.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_results,
            var_results.object
        );

    }
    if ((par_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            par_n.object
        );

    }
    if ((par_d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_d,
            par_d.object
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
static PyObject *fparse_function_4_rfftfreq_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_n = NULL;
    PyObject *_python_par_d = NULL;
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
                PyErr_Format( PyExc_TypeError, "rfftfreq() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_n == key )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_d == key )
            {
                assert( _python_par_d == NULL );
                _python_par_d = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_n, key ) == 1 )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_d, key ) == 1 )
            {
                assert( _python_par_d == NULL );
                _python_par_d = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "rfftfreq() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_n != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_n == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_d != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_d == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_d = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_n == NULL || _python_par_d == NULL ))
    {
        PyObject *values[] = { _python_par_n, _python_par_d };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_rfftfreq_of_module_numpy$fft$helper( self, _python_par_n, _python_par_d );

error_exit:;

    Py_XDECREF( _python_par_n );
    Py_XDECREF( _python_par_d );

    return NULL;
}

static PyObject *dparse_function_4_rfftfreq_of_module_numpy$fft$helper( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_rfftfreq_of_module_numpy$fft$helper( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_rfftfreq_of_module_numpy$fft$helper( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_fftshift_of_module_numpy$fft$helper( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_fftshift_of_module_numpy$fft$helper,
        dparse_function_1_fftshift_of_module_numpy$fft$helper,
        const_str_plain_fftshift,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3c8bd8d008c041943288847044687a16,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_dbbf905bc20f1e3074317e690d188d91
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_ifftshift_of_module_numpy$fft$helper( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_ifftshift_of_module_numpy$fft$helper,
        dparse_function_2_ifftshift_of_module_numpy$fft$helper,
        const_str_plain_ifftshift,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0ee444a0e5b6949c384cadea9f8ede92,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_0605a46b07302d4c84fa69dc1bf97878
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_fftfreq_of_module_numpy$fft$helper( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_fftfreq_of_module_numpy$fft$helper,
        dparse_function_3_fftfreq_of_module_numpy$fft$helper,
        const_str_plain_fftfreq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b7f4c27f2f6fc7a844724d6b64227fd6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_22fda9cac65f238bd8b928a236b9dcab
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_rfftfreq_of_module_numpy$fft$helper( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_rfftfreq_of_module_numpy$fft$helper,
        dparse_function_4_rfftfreq_of_module_numpy$fft$helper,
        const_str_plain_rfftfreq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1e857d63e49681df4026db35fd1d7c69,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_200ebf5725d8b46cde3a1ea7923c6d8e
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft$helper =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft.helper",   /* m_name */
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

MOD_INIT_DECL( numpy$fft$helper )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft$helper );
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

    // puts( "in initnumpy$fft$helper" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft$helper = Py_InitModule4(
        "numpy.fft.helper",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$fft$helper = PyModule_Create( &mdef_numpy$fft$helper );
#endif

    moduledict_numpy$fft$helper = (PyDictObject *)((PyModuleObject *)module_numpy$fft$helper)->md_dict;

    assertObject( module_numpy$fft$helper );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_58c3aead1773233a462d3c215f3a9bd7, module_numpy$fft$helper );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$fft$helper );

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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
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
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_1fcdb72930d4d905387d4924a04c4a1b;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e6ee8d6a10c8bb502e06ae4651ff75fa;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_1a0654c82e3448678513d5bfd101f9f0, module_numpy$fft$helper );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_9718270fe5d2c916ce2b6f64e75a37af, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_integer_types_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_integer_types );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_3e8d4c5fbc78426f466387c576765620, tmp_import_globals_5, tmp_import_globals_5, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_3e8d4c5fbc78426f466387c576765620, tmp_import_globals_6, tmp_import_globals_6, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_concatenate );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_3e8d4c5fbc78426f466387c576765620, tmp_import_globals_7, tmp_import_globals_7, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_arange );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_3e8d4c5fbc78426f466387c576765620, tmp_import_globals_8, tmp_import_globals_8, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_take );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_3e8d4c5fbc78426f466387c576765620, tmp_import_globals_9, tmp_import_globals_9, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_integer );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_3e8d4c5fbc78426f466387c576765620, tmp_import_globals_10, tmp_import_globals_10, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_empty );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_empty, tmp_assign_source_12 );
    tmp_assign_source_13 = LIST_COPY( const_list_d3376bb1f7f4aa67004298e8d81c0177_list );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13 );
    tmp_binop_left_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_binop_left_1 == NULL ))
    {
        tmp_binop_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 153922 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59955 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_14 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_14 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_15 = MAKE_FUNCTION_function_1_fftshift_of_module_numpy$fft$helper( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_fftshift, tmp_assign_source_15 );
    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_function_2_ifftshift_of_module_numpy$fft$helper( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_ifftshift, tmp_assign_source_16 );
    tmp_defaults_3 = const_tuple_float_1_0_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_function_3_fftfreq_of_module_numpy$fft$helper( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_module->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_fftfreq, tmp_assign_source_17 );
    tmp_defaults_4 = const_tuple_float_1_0_tuple;
    tmp_assign_source_18 = MAKE_FUNCTION_function_4_rfftfreq_of_module_numpy$fft$helper( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_module->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_rfftfreq, tmp_assign_source_18 );

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

    return MOD_RETURN_VALUE( module_numpy$fft$helper );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
