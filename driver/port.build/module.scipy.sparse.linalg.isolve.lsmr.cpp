// Generated code for Python source for module 'scipy.sparse.linalg.isolve.lsmr'
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

// The _module_scipy$sparse$linalg$isolve$lsmr is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$linalg$isolve$lsmr;
PyDictObject *moduledict_scipy$sparse$linalg$isolve$lsmr;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_0_0;
static PyObject *const_float_1_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_empty;
extern PyObject *const_str_space;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_20;
extern PyObject *const_int_pos_40;
extern PyObject *const_float_1e100;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_t1;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_itn;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_rho;
extern PyObject *const_str_plain_atol;
extern PyObject *const_str_plain_beta;
extern PyObject *const_str_plain_btol;
static PyObject *const_str_plain_cbar;
static PyObject *const_str_plain_chat;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_ctol;
extern PyObject *const_str_plain_damp;
static PyObject *const_str_plain_hbar;
static PyObject *const_str_plain_hdg1;
static PyObject *const_str_plain_hdg2;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_lsmr;
extern PyObject *const_str_plain_lsqr;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_rtol;
static PyObject *const_str_plain_sbar;
static PyObject *const_str_plain_shat;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_str1;
extern PyObject *const_str_plain_str2;
extern PyObject *const_str_plain_str3;
extern PyObject *const_str_plain_str4;
static PyObject *const_str_plain_taud;
extern PyObject *const_str_plain_zeta;
extern PyObject *const_str_plain_alpha;
static PyObject *const_str_plain_betad;
static PyObject *const_str_plain_condA;
extern PyObject *const_str_plain_infty;
extern PyObject *const_str_plain_istop;
static PyObject *const_str_plain_normA;
static PyObject *const_str_plain_normb;
static PyObject *const_str_plain_normr;
static PyObject *const_str_plain_normx;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_pfreq;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_test1;
extern PyObject *const_str_plain_test2;
extern PyObject *const_str_plain_test3;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_betadd;
extern PyObject *const_str_plain_conlim;
extern PyObject *const_str_plain_matvec;
static PyObject *const_str_plain_minDim;
static PyObject *const_str_plain_normA2;
static PyObject *const_str_plain_normar;
static PyObject *const_str_plain_pcount;
extern PyObject *const_str_plain_rhobar;
static PyObject *const_str_plain_rhoold;
extern PyObject *const_float_100000000_0;
extern PyObject *const_float_1e_minus_06;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_betahat;
extern PyObject *const_str_plain_maxiter;
static PyObject *const_str_plain_maxrbar;
static PyObject *const_str_plain_minrbar;
static PyObject *const_str_plain_rhodold;
static PyObject *const_str_plain_rhotemp;
extern PyObject *const_str_plain_rmatvec;
extern PyObject *const_str_plain_squeeze;
static PyObject *const_str_plain_zetabar;
static PyObject *const_str_plain_zetaold;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_alphabar;
static PyObject *const_str_plain_alphahat;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_thetabar;
static PyObject *const_str_plain_thetanew;
static PyObject *const_str_plain_betaacute;
static PyObject *const_str_plain_betacheck;
static PyObject *const_str_plain_ctildeold;
static PyObject *const_str_plain_rhobarold;
static PyObject *const_str_plain_stildeold;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain__sym_ortho;
static PyObject *const_str_plain_thetatilde;
static PyObject *const_str_plain_rhotildeold;
static PyObject *const_str_plain_tautildeold;
static PyObject *const_str_plain_thetatildeold;
static PyObject *const_list_str_plain_lsmr_list;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_aslinearoperator;
extern PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_tuple_str_plain_sqrt_tuple;
static PyObject *const_tuple_str_plain__sym_ortho_tuple;
extern PyObject *const_tuple_str_plain_aslinearoperator_tuple;
extern PyObject *const_str_digest_01520dad0ad7695222227316352e852e;
static PyObject *const_str_digest_03dae8e70a48e591416432d426f15a50;
extern PyObject *const_str_digest_04e2a2d4ea0392d9893c9de4cb8e167d;
extern PyObject *const_str_digest_0a7fbb1df44ca7cb2126d00ba6030e60;
extern PyObject *const_str_digest_0e476d3fb6e7a11ef66372c6b0e22f04;
static PyObject *const_str_digest_195e0acf11f65bc92d14c849bb9af303;
extern PyObject *const_str_digest_1d20d9f4233ad3896104d20289f2168f;
extern PyObject *const_str_digest_268f22a0a903f31d469e5d4e59615f7d;
extern PyObject *const_str_digest_2fbcbe1ff2b6eb9a2fc5d60fa1620218;
extern PyObject *const_str_digest_31c135a8754779dc25b4674933b86e04;
extern PyObject *const_str_digest_36264d55af3d1e10fded3478d4a06318;
static PyObject *const_str_digest_36c7c87d8f946f885844293f2d62d01e;
static PyObject *const_str_digest_3d0cc522188c28c1ec93f12a0fca6f76;
static PyObject *const_str_digest_3f9336d66e0a5b0ce29010d4cddea306;
static PyObject *const_str_digest_45d3be98a0007c28536bda6626a3fddf;
static PyObject *const_str_digest_63b6dc8cb344101289d7af55f82a7575;
static PyObject *const_str_digest_6532c1b1b0d829a13a631b361f3cc40f;
extern PyObject *const_str_digest_6c397e5435d06204d5f5c55ee949d8b0;
static PyObject *const_str_digest_97e1b2373ad79ead2bfe5a6526a358b7;
extern PyObject *const_str_digest_a0b0a87ef6c463e754402651f411389d;
extern PyObject *const_str_digest_a2f55418001086f0a2b88016550eb712;
static PyObject *const_str_digest_a5428b425e0647407fef63b58e2a9343;
static PyObject *const_str_digest_a7a3f3bec52bdb671bc4ac27171e29dc;
static PyObject *const_str_digest_aaf18aefdd43ecf13a95c97163b34c40;
static PyObject *const_str_digest_b4e46e9eec58211a7703b7890c7a6a5b;
extern PyObject *const_str_digest_c9041d67772e452ddd374579d2005354;
static PyObject *const_str_digest_cf8372bc6a0bc9eee30e8480386f00d5;
static PyObject *const_str_digest_d1b1266b99b8f1d8e8449fbe04c4f482;
extern PyObject *const_str_digest_dbc520cad128ed7325b829da03348c70;
extern PyObject *const_str_digest_fa530a0e8d3f64457f23afa7eab2a445;
static PyObject *const_tuple_str_plain_zeros_str_plain_infty_tuple;
static PyObject *const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple;
static PyObject *const_tuple_2644b873d0ea7179050f7427fdcd5ffb_tuple;
extern PyObject *const_tuple_50d94261cf4a817af05dc80b3b17dda4_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple;

static void _initModuleConstants(void)
{
    const_float_1_1 = UNSTREAM_FLOAT( &constant_bin[ 2446421 ] );
    const_str_plain_cbar = UNSTREAM_STRING( &constant_bin[ 282373 ], 4, 1 );
    const_str_plain_chat = UNSTREAM_STRING( &constant_bin[ 282741 ], 4, 1 );
    const_str_plain_hbar = UNSTREAM_STRING( &constant_bin[ 282637 ], 4, 1 );
    const_str_plain_hdg1 = UNSTREAM_STRING( &constant_bin[ 281876 ], 4, 1 );
    const_str_plain_hdg2 = UNSTREAM_STRING( &constant_bin[ 281926 ], 4, 1 );
    const_str_plain_sbar = UNSTREAM_STRING( &constant_bin[ 282323 ], 4, 1 );
    const_str_plain_shat = UNSTREAM_STRING( &constant_bin[ 282843 ], 4, 1 );
    const_str_plain_taud = UNSTREAM_STRING( &constant_bin[ 2446429 ], 4, 1 );
    const_str_plain_betad = UNSTREAM_STRING( &constant_bin[ 282791 ], 5, 1 );
    const_str_plain_condA = UNSTREAM_STRING( &constant_bin[ 284202 ], 5, 1 );
    const_str_plain_normA = UNSTREAM_STRING( &constant_bin[ 283497 ], 5, 1 );
    const_str_plain_normb = UNSTREAM_STRING( &constant_bin[ 283708 ], 5, 1 );
    const_str_plain_normr = UNSTREAM_STRING( &constant_bin[ 283946 ], 5, 1 );
    const_str_plain_normx = UNSTREAM_STRING( &constant_bin[ 284253 ], 5, 1 );
    const_str_plain_pfreq = UNSTREAM_STRING( &constant_bin[ 283895 ], 5, 1 );
    const_str_plain_betadd = UNSTREAM_STRING( &constant_bin[ 282791 ], 6, 1 );
    const_str_plain_minDim = UNSTREAM_STRING( &constant_bin[ 2446433 ], 6, 1 );
    const_str_plain_normA2 = UNSTREAM_STRING( &constant_bin[ 283497 ], 6, 1 );
    const_str_plain_normar = UNSTREAM_STRING( &constant_bin[ 283997 ], 6, 1 );
    const_str_plain_pcount = UNSTREAM_STRING( &constant_bin[ 131762 ], 6, 1 );
    const_str_plain_rhoold = UNSTREAM_STRING( &constant_bin[ 282530 ], 6, 1 );
    const_str_plain_betahat = UNSTREAM_STRING( &constant_bin[ 283163 ], 7, 1 );
    const_str_plain_maxrbar = UNSTREAM_STRING( &constant_bin[ 283549 ], 7, 1 );
    const_str_plain_minrbar = UNSTREAM_STRING( &constant_bin[ 283602 ], 7, 1 );
    const_str_plain_rhodold = UNSTREAM_STRING( &constant_bin[ 282949 ], 7, 1 );
    const_str_plain_rhotemp = UNSTREAM_STRING( &constant_bin[ 283655 ], 7, 1 );
    const_str_plain_zetabar = UNSTREAM_STRING( &constant_bin[ 282423 ], 7, 1 );
    const_str_plain_zetaold = UNSTREAM_STRING( &constant_bin[ 283216 ], 7, 1 );
    const_str_plain_alphabar = UNSTREAM_STRING( &constant_bin[ 282064 ], 8, 1 );
    const_str_plain_alphahat = UNSTREAM_STRING( &constant_bin[ 282167 ], 8, 1 );
    const_str_plain_thetabar = UNSTREAM_STRING( &constant_bin[ 282476 ], 8, 1 );
    const_str_plain_thetanew = UNSTREAM_STRING( &constant_bin[ 282687 ], 8, 1 );
    const_str_plain_betaacute = UNSTREAM_STRING( &constant_bin[ 2446439 ], 9, 1 );
    const_str_plain_betacheck = UNSTREAM_STRING( &constant_bin[ 283442 ], 9, 1 );
    const_str_plain_ctildeold = UNSTREAM_STRING( &constant_bin[ 283057 ], 9, 1 );
    const_str_plain_rhobarold = UNSTREAM_STRING( &constant_bin[ 282582 ], 9, 1 );
    const_str_plain_stildeold = UNSTREAM_STRING( &constant_bin[ 283002 ], 9, 1 );
    const_str_plain_thetatilde = UNSTREAM_STRING( &constant_bin[ 282893 ], 10, 1 );
    const_str_plain_rhotildeold = UNSTREAM_STRING( &constant_bin[ 283385 ], 11, 1 );
    const_str_plain_tautildeold = UNSTREAM_STRING( &constant_bin[ 283328 ], 11, 1 );
    const_str_plain_thetatildeold = UNSTREAM_STRING( &constant_bin[ 283269 ], 13, 1 );
    const_list_str_plain_lsmr_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_lsmr_list, 0, const_str_plain_lsmr ); Py_INCREF( const_str_plain_lsmr );
    const_tuple_str_plain__sym_ortho_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__sym_ortho_tuple, 0, const_str_plain__sym_ortho ); Py_INCREF( const_str_plain__sym_ortho );
    const_str_digest_03dae8e70a48e591416432d426f15a50 = UNSTREAM_STRING( &constant_bin[ 2446448 ], 39, 0 );
    const_str_digest_195e0acf11f65bc92d14c849bb9af303 = UNSTREAM_STRING( &constant_bin[ 2446487 ], 26, 0 );
    const_str_digest_36c7c87d8f946f885844293f2d62d01e = UNSTREAM_STRING( &constant_bin[ 2446513 ], 13, 0 );
    const_str_digest_3d0cc522188c28c1ec93f12a0fca6f76 = UNSTREAM_STRING( &constant_bin[ 2446526 ], 50, 0 );
    const_str_digest_3f9336d66e0a5b0ce29010d4cddea306 = UNSTREAM_STRING( &constant_bin[ 2446576 ], 31, 0 );
    const_str_digest_45d3be98a0007c28536bda6626a3fddf = UNSTREAM_STRING( &constant_bin[ 2446607 ], 26, 0 );
    const_str_digest_63b6dc8cb344101289d7af55f82a7575 = UNSTREAM_STRING( &constant_bin[ 2446633 ], 33, 0 );
    const_str_digest_6532c1b1b0d829a13a631b361f3cc40f = UNSTREAM_STRING( &constant_bin[ 2446666 ], 418, 0 );
    const_str_digest_97e1b2373ad79ead2bfe5a6526a358b7 = UNSTREAM_STRING( &constant_bin[ 2447084 ], 16, 0 );
    const_str_digest_a5428b425e0647407fef63b58e2a9343 = UNSTREAM_STRING( &constant_bin[ 2447100 ], 40, 0 );
    const_str_digest_a7a3f3bec52bdb671bc4ac27171e29dc = UNSTREAM_STRING( &constant_bin[ 2447140 ], 44, 0 );
    const_str_digest_aaf18aefdd43ecf13a95c97163b34c40 = UNSTREAM_STRING( &constant_bin[ 2447184 ], 37, 0 );
    const_str_digest_b4e46e9eec58211a7703b7890c7a6a5b = UNSTREAM_STRING( &constant_bin[ 2447221 ], 15, 0 );
    const_str_digest_cf8372bc6a0bc9eee30e8480386f00d5 = UNSTREAM_STRING( &constant_bin[ 2447236 ], 4254, 0 );
    const_str_digest_d1b1266b99b8f1d8e8449fbe04c4f482 = UNSTREAM_STRING( &constant_bin[ 2451490 ], 67, 0 );
    const_tuple_str_plain_zeros_str_plain_infty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_zeros_str_plain_infty_tuple, 0, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_str_plain_zeros_str_plain_infty_tuple, 1, const_str_plain_infty ); Py_INCREF( const_str_plain_infty );
    const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple, 0, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple, 1, const_float_1e_minus_06 ); Py_INCREF( const_float_1e_minus_06 );
    PyTuple_SET_ITEM( const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple, 2, const_float_1e_minus_06 ); Py_INCREF( const_float_1e_minus_06 );
    PyTuple_SET_ITEM( const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple, 3, const_float_100000000_0 ); Py_INCREF( const_float_100000000_0 );
    PyTuple_SET_ITEM( const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple, 5, Py_False ); Py_INCREF( Py_False );
    const_tuple_2644b873d0ea7179050f7427fdcd5ffb_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2451557 ], 773 );
    const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 2, const_str_plain_damp ); Py_INCREF( const_str_plain_damp );
    PyTuple_SET_ITEM( const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 3, const_str_plain_atol ); Py_INCREF( const_str_plain_atol );
    PyTuple_SET_ITEM( const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 4, const_str_plain_btol ); Py_INCREF( const_str_plain_btol );
    PyTuple_SET_ITEM( const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 5, const_str_plain_conlim ); Py_INCREF( const_str_plain_conlim );
    PyTuple_SET_ITEM( const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 6, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    PyTuple_SET_ITEM( const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 7, const_str_plain_show ); Py_INCREF( const_str_plain_show );
}

// The module code objects.
static PyCodeObject *codeobj_1b2b19f3c9905a75796c0a143c61f049;
static PyCodeObject *codeobj_a9847a4f10734903c1269a46de4f7d87;
static PyCodeObject *codeobj_6fa76b41598113b09fae99f50cb9e4b7;

static void _initModuleCodeObjects(void)
{
    codeobj_1b2b19f3c9905a75796c0a143c61f049 = MAKE_CODEOBJ( const_str_digest_d1b1266b99b8f1d8e8449fbe04c4f482, const_str_plain_lsmr, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a9847a4f10734903c1269a46de4f7d87 = MAKE_CODEOBJ( const_str_digest_d1b1266b99b8f1d8e8449fbe04c4f482, const_str_plain_lsmr, 31, const_tuple_bfe1639fab0e9a7e6a1d48429bab5477_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6fa76b41598113b09fae99f50cb9e4b7 = MAKE_CODEOBJ( const_str_digest_d1b1266b99b8f1d8e8449fbe04c4f482, const_str_plain_lsmr, 31, const_tuple_2644b873d0ea7179050f7427fdcd5ffb_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_b, PyObject *_python_par_damp, PyObject *_python_par_atol, PyObject *_python_par_btol, PyObject *_python_par_conlim, PyObject *_python_par_maxiter, PyObject *_python_par_show )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_damp; par_damp.object = _python_par_damp;
    PyObjectLocalVariable par_atol; par_atol.object = _python_par_atol;
    PyObjectLocalVariable par_btol; par_btol.object = _python_par_btol;
    PyObjectLocalVariable par_conlim; par_conlim.object = _python_par_conlim;
    PyObjectLocalVariable par_maxiter; par_maxiter.object = _python_par_maxiter;
    PyObjectLocalVariable par_show; par_show.object = _python_par_show;
    PyObjectLocalVariable var_msg;
    PyObjectLocalVariable var_hdg1;
    PyObjectLocalVariable var_hdg2;
    PyObjectLocalVariable var_pfreq;
    PyObjectLocalVariable var_pcount;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_minDim;
    PyObjectLocalVariable var_u;
    PyObjectLocalVariable var_beta;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_alpha;
    PyObjectLocalVariable var_itn;
    PyObjectLocalVariable var_zetabar;
    PyObjectLocalVariable var_alphabar;
    PyObjectLocalVariable var_rho;
    PyObjectLocalVariable var_rhobar;
    PyObjectLocalVariable var_cbar;
    PyObjectLocalVariable var_sbar;
    PyObjectLocalVariable var_h;
    PyObjectLocalVariable var_hbar;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_betadd;
    PyObjectLocalVariable var_betad;
    PyObjectLocalVariable var_rhodold;
    PyObjectLocalVariable var_tautildeold;
    PyObjectLocalVariable var_thetatilde;
    PyObjectLocalVariable var_zeta;
    PyObjectLocalVariable var_d;
    PyObjectLocalVariable var_normA2;
    PyObjectLocalVariable var_maxrbar;
    PyObjectLocalVariable var_minrbar;
    PyObjectLocalVariable var_normA;
    PyObjectLocalVariable var_condA;
    PyObjectLocalVariable var_normx;
    PyObjectLocalVariable var_normb;
    PyObjectLocalVariable var_istop;
    PyObjectLocalVariable var_ctol;
    PyObjectLocalVariable var_normr;
    PyObjectLocalVariable var_normar;
    PyObjectLocalVariable var_test1;
    PyObjectLocalVariable var_test2;
    PyObjectLocalVariable var_str1;
    PyObjectLocalVariable var_str2;
    PyObjectLocalVariable var_str3;
    PyObjectLocalVariable var_chat;
    PyObjectLocalVariable var_shat;
    PyObjectLocalVariable var_alphahat;
    PyObjectLocalVariable var_rhoold;
    PyObjectLocalVariable var_c;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_thetanew;
    PyObjectLocalVariable var_rhobarold;
    PyObjectLocalVariable var_zetaold;
    PyObjectLocalVariable var_thetabar;
    PyObjectLocalVariable var_rhotemp;
    PyObjectLocalVariable var_betaacute;
    PyObjectLocalVariable var_betacheck;
    PyObjectLocalVariable var_betahat;
    PyObjectLocalVariable var_thetatildeold;
    PyObjectLocalVariable var_ctildeold;
    PyObjectLocalVariable var_stildeold;
    PyObjectLocalVariable var_rhotildeold;
    PyObjectLocalVariable var_taud;
    PyObjectLocalVariable var_test3;
    PyObjectLocalVariable var_t1;
    PyObjectLocalVariable var_rtol;
    PyObjectLocalVariable var_str4;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__element_3;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__element_3;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_tuple_unpack_4__element_2;
    PyObjectTempVariable tmp_tuple_unpack_4__element_3;
    PyObjectTempVariable tmp_tuple_unpack_5__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_5__element_1;
    PyObjectTempVariable tmp_tuple_unpack_5__element_2;
    PyObjectTempVariable tmp_tuple_unpack_5__element_3;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_1__value_2;
    PyObjectTempVariable tmp_or_1__value_3;
    PyObjectTempVariable tmp_or_1__value_4;
    PyObjectTempVariable tmp_or_1__value_5;
    PyObjectTempVariable tmp_or_1__value_6;
    PyObjectTempVariable tmp_or_1__value_7;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
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
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_left_8;
    PyObject *tmp_binop_left_9;
    PyObject *tmp_binop_left_10;
    PyObject *tmp_binop_left_11;
    PyObject *tmp_binop_left_12;
    PyObject *tmp_binop_left_13;
    PyObject *tmp_binop_left_14;
    PyObject *tmp_binop_left_15;
    PyObject *tmp_binop_left_16;
    PyObject *tmp_binop_left_17;
    PyObject *tmp_binop_left_18;
    PyObject *tmp_binop_left_19;
    PyObject *tmp_binop_left_20;
    PyObject *tmp_binop_left_21;
    PyObject *tmp_binop_left_22;
    PyObject *tmp_binop_left_23;
    PyObject *tmp_binop_left_24;
    PyObject *tmp_binop_left_25;
    PyObject *tmp_binop_left_26;
    PyObject *tmp_binop_left_27;
    PyObject *tmp_binop_left_28;
    PyObject *tmp_binop_left_29;
    PyObject *tmp_binop_left_30;
    PyObject *tmp_binop_left_31;
    PyObject *tmp_binop_left_32;
    PyObject *tmp_binop_left_33;
    PyObject *tmp_binop_left_34;
    PyObject *tmp_binop_left_35;
    PyObject *tmp_binop_left_36;
    PyObject *tmp_binop_left_37;
    PyObject *tmp_binop_left_38;
    PyObject *tmp_binop_left_39;
    PyObject *tmp_binop_left_40;
    PyObject *tmp_binop_left_41;
    PyObject *tmp_binop_left_42;
    PyObject *tmp_binop_left_43;
    PyObject *tmp_binop_left_44;
    PyObject *tmp_binop_left_45;
    PyObject *tmp_binop_left_46;
    PyObject *tmp_binop_left_47;
    PyObject *tmp_binop_left_48;
    PyObject *tmp_binop_left_49;
    PyObject *tmp_binop_left_50;
    PyObject *tmp_binop_left_51;
    PyObject *tmp_binop_left_52;
    PyObject *tmp_binop_left_53;
    PyObject *tmp_binop_left_54;
    PyObject *tmp_binop_left_55;
    PyObject *tmp_binop_left_56;
    PyObject *tmp_binop_left_57;
    PyObject *tmp_binop_left_58;
    PyObject *tmp_binop_left_59;
    PyObject *tmp_binop_left_60;
    PyObject *tmp_binop_left_61;
    PyObject *tmp_binop_left_62;
    PyObject *tmp_binop_left_63;
    PyObject *tmp_binop_left_64;
    PyObject *tmp_binop_left_65;
    PyObject *tmp_binop_left_66;
    PyObject *tmp_binop_left_67;
    PyObject *tmp_binop_left_68;
    PyObject *tmp_binop_left_69;
    PyObject *tmp_binop_left_70;
    PyObject *tmp_binop_left_71;
    PyObject *tmp_binop_left_72;
    PyObject *tmp_binop_left_73;
    PyObject *tmp_binop_left_74;
    PyObject *tmp_binop_left_75;
    PyObject *tmp_binop_left_76;
    PyObject *tmp_binop_left_77;
    PyObject *tmp_binop_left_78;
    PyObject *tmp_binop_left_79;
    PyObject *tmp_binop_left_80;
    PyObject *tmp_binop_left_81;
    PyObject *tmp_binop_left_82;
    PyObject *tmp_binop_left_83;
    PyObject *tmp_binop_left_84;
    PyObject *tmp_binop_left_85;
    PyObject *tmp_binop_left_86;
    PyObject *tmp_binop_left_87;
    PyObject *tmp_binop_left_88;
    PyObject *tmp_binop_left_89;
    PyObject *tmp_binop_left_90;
    PyObject *tmp_binop_left_91;
    PyObject *tmp_binop_left_92;
    PyObject *tmp_binop_left_93;
    PyObject *tmp_binop_left_94;
    PyObject *tmp_binop_left_95;
    PyObject *tmp_binop_left_96;
    PyObject *tmp_binop_left_97;
    PyObject *tmp_binop_left_98;
    PyObject *tmp_binop_left_99;
    PyObject *tmp_binop_left_100;
    PyObject *tmp_binop_left_101;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
    PyObject *tmp_binop_right_9;
    PyObject *tmp_binop_right_10;
    PyObject *tmp_binop_right_11;
    PyObject *tmp_binop_right_12;
    PyObject *tmp_binop_right_13;
    PyObject *tmp_binop_right_14;
    PyObject *tmp_binop_right_15;
    PyObject *tmp_binop_right_16;
    PyObject *tmp_binop_right_17;
    PyObject *tmp_binop_right_18;
    PyObject *tmp_binop_right_19;
    PyObject *tmp_binop_right_20;
    PyObject *tmp_binop_right_21;
    PyObject *tmp_binop_right_22;
    PyObject *tmp_binop_right_23;
    PyObject *tmp_binop_right_24;
    PyObject *tmp_binop_right_25;
    PyObject *tmp_binop_right_26;
    PyObject *tmp_binop_right_27;
    PyObject *tmp_binop_right_28;
    PyObject *tmp_binop_right_29;
    PyObject *tmp_binop_right_30;
    PyObject *tmp_binop_right_31;
    PyObject *tmp_binop_right_32;
    PyObject *tmp_binop_right_33;
    PyObject *tmp_binop_right_34;
    PyObject *tmp_binop_right_35;
    PyObject *tmp_binop_right_36;
    PyObject *tmp_binop_right_37;
    PyObject *tmp_binop_right_38;
    PyObject *tmp_binop_right_39;
    PyObject *tmp_binop_right_40;
    PyObject *tmp_binop_right_41;
    PyObject *tmp_binop_right_42;
    PyObject *tmp_binop_right_43;
    PyObject *tmp_binop_right_44;
    PyObject *tmp_binop_right_45;
    PyObject *tmp_binop_right_46;
    PyObject *tmp_binop_right_47;
    PyObject *tmp_binop_right_48;
    PyObject *tmp_binop_right_49;
    PyObject *tmp_binop_right_50;
    PyObject *tmp_binop_right_51;
    PyObject *tmp_binop_right_52;
    PyObject *tmp_binop_right_53;
    PyObject *tmp_binop_right_54;
    PyObject *tmp_binop_right_55;
    PyObject *tmp_binop_right_56;
    PyObject *tmp_binop_right_57;
    PyObject *tmp_binop_right_58;
    PyObject *tmp_binop_right_59;
    PyObject *tmp_binop_right_60;
    PyObject *tmp_binop_right_61;
    PyObject *tmp_binop_right_62;
    PyObject *tmp_binop_right_63;
    PyObject *tmp_binop_right_64;
    PyObject *tmp_binop_right_65;
    PyObject *tmp_binop_right_66;
    PyObject *tmp_binop_right_67;
    PyObject *tmp_binop_right_68;
    PyObject *tmp_binop_right_69;
    PyObject *tmp_binop_right_70;
    PyObject *tmp_binop_right_71;
    PyObject *tmp_binop_right_72;
    PyObject *tmp_binop_right_73;
    PyObject *tmp_binop_right_74;
    PyObject *tmp_binop_right_75;
    PyObject *tmp_binop_right_76;
    PyObject *tmp_binop_right_77;
    PyObject *tmp_binop_right_78;
    PyObject *tmp_binop_right_79;
    PyObject *tmp_binop_right_80;
    PyObject *tmp_binop_right_81;
    PyObject *tmp_binop_right_82;
    PyObject *tmp_binop_right_83;
    PyObject *tmp_binop_right_84;
    PyObject *tmp_binop_right_85;
    PyObject *tmp_binop_right_86;
    PyObject *tmp_binop_right_87;
    PyObject *tmp_binop_right_88;
    PyObject *tmp_binop_right_89;
    PyObject *tmp_binop_right_90;
    PyObject *tmp_binop_right_91;
    PyObject *tmp_binop_right_92;
    PyObject *tmp_binop_right_93;
    PyObject *tmp_binop_right_94;
    PyObject *tmp_binop_right_95;
    PyObject *tmp_binop_right_96;
    PyObject *tmp_binop_right_97;
    PyObject *tmp_binop_right_98;
    PyObject *tmp_binop_right_99;
    PyObject *tmp_binop_right_100;
    PyObject *tmp_binop_right_101;
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
    PyObject *tmp_call_arg_element_13;
    PyObject *tmp_call_arg_element_14;
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_call_arg_element_16;
    PyObject *tmp_call_arg_element_17;
    PyObject *tmp_call_arg_element_18;
    PyObject *tmp_call_arg_element_19;
    PyObject *tmp_call_arg_element_20;
    PyObject *tmp_call_arg_element_21;
    PyObject *tmp_call_arg_element_22;
    PyObject *tmp_call_arg_element_23;
    PyObject *tmp_call_arg_element_24;
    PyObject *tmp_call_arg_element_25;
    PyObject *tmp_call_arg_element_26;
    PyObject *tmp_call_arg_element_27;
    PyObject *tmp_call_arg_element_28;
    PyObject *tmp_call_arg_element_29;
    PyObject *tmp_call_arg_element_30;
    PyObject *tmp_call_arg_element_31;
    PyObject *tmp_call_arg_element_32;
    PyObject *tmp_call_arg_element_33;
    PyObject *tmp_call_arg_element_34;
    PyObject *tmp_call_arg_element_35;
    PyObject *tmp_call_arg_element_36;
    PyObject *tmp_call_arg_element_37;
    PyObject *tmp_call_arg_element_38;
    PyObject *tmp_call_arg_element_39;
    PyObject *tmp_call_arg_element_40;
    PyObject *tmp_call_arg_element_41;
    PyObject *tmp_call_arg_element_42;
    PyObject *tmp_call_arg_element_43;
    PyObject *tmp_call_arg_element_44;
    PyObject *tmp_call_arg_element_45;
    PyObject *tmp_call_arg_element_46;
    PyObject *tmp_call_arg_element_47;
    PyObject *tmp_call_arg_element_48;
    PyObject *tmp_call_arg_element_49;
    PyObject *tmp_call_arg_element_50;
    PyObject *tmp_call_arg_element_51;
    PyObject *tmp_call_arg_element_52;
    PyObject *tmp_call_arg_element_53;
    PyObject *tmp_call_arg_element_54;
    PyObject *tmp_call_arg_element_55;
    PyObject *tmp_call_arg_element_56;
    PyObject *tmp_call_arg_element_57;
    PyObject *tmp_call_arg_element_58;
    PyObject *tmp_call_arg_element_59;
    PyObject *tmp_call_arg_element_60;
    PyObject *tmp_call_arg_element_61;
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
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_called_13;
    PyObject *tmp_called_14;
    PyObject *tmp_called_15;
    PyObject *tmp_called_16;
    PyObject *tmp_called_17;
    PyObject *tmp_called_18;
    PyObject *tmp_called_19;
    PyObject *tmp_called_20;
    PyObject *tmp_called_21;
    PyObject *tmp_called_22;
    PyObject *tmp_called_23;
    PyObject *tmp_called_24;
    PyObject *tmp_called_25;
    PyObject *tmp_called_26;
    PyObject *tmp_called_27;
    PyObject *tmp_called_28;
    PyObject *tmp_called_29;
    PyObject *tmp_called_30;
    PyObject *tmp_called_31;
    PyObject *tmp_called_32;
    PyObject *tmp_called_33;
    PyObject *tmp_called_34;
    PyObject *tmp_called_35;
    PyObject *tmp_called_36;
    PyObject *tmp_called_37;
    PyObject *tmp_called_38;
    PyObject *tmp_called_39;
    PyObject *tmp_called_40;
    PyObject *tmp_called_41;
    PyObject *tmp_called_42;
    PyObject *tmp_called_43;
    PyObject *tmp_called_44;
    PyObject *tmp_called_45;
    PyObject *tmp_called_46;
    PyObject *tmp_called_47;
    PyObject *tmp_called_48;
    PyObject *tmp_called_49;
    PyObject *tmp_called_50;
    PyObject *tmp_called_51;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_Gt_3;
    int tmp_cmp_Gt_4;
    int tmp_cmp_Gt_5;
    int tmp_cmp_Gt_6;
    int tmp_cmp_Gt_7;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_Lt_1;
    int tmp_cmp_LtE_1;
    int tmp_cmp_LtE_2;
    int tmp_cmp_LtE_3;
    int tmp_cmp_LtE_4;
    int tmp_cmp_LtE_5;
    int tmp_cmp_LtE_6;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_attempt_5;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
    int tmp_tried_lineno_9;
    int tmp_tried_lineno_10;
    int tmp_tried_lineno_11;
    int tmp_tried_lineno_12;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unary_arg_3;
    PyObject *tmp_unary_arg_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    PyObject *tmp_unpack_9;
    PyObject *tmp_unpack_10;
    PyObject *tmp_unpack_11;
    PyObject *tmp_unpack_12;
    PyObject *tmp_unpack_13;
    PyObject *tmp_unpack_14;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a9847a4f10734903c1269a46de4f7d87, module_scipy$sparse$linalg$isolve$lsmr );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 269843 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 135;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_b.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_squeeze );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 136;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    if (par_b.object == NULL)
    {
        par_b.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_b.object;
        par_b.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_assign_source_3 = const_tuple_50d94261cf4a817af05dc80b3b17dda4_tuple;
    assert( var_msg.object == NULL );
    var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_assign_source_4 = const_str_digest_a5428b425e0647407fef63b58e2a9343;
    assert( var_hdg1.object == NULL );
    var_hdg1.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = const_str_digest_aaf18aefdd43ecf13a95c97163b34c40;
    assert( var_hdg2.object == NULL );
    var_hdg2.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = const_int_pos_20;
    assert( var_pfreq.object == NULL );
    var_pfreq.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_assign_source_7 = const_int_0;
    assert( var_pcount.object == NULL );
    var_pcount.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    // Tried code
    tmp_source_name_2 = par_A.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_8;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_9 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 152;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_9;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_10 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 152;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_10;

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
    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1.object;

    assert( var_m.object == NULL );
    var_m.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2.object;

    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

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
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = PyList_New( 2 );
    tmp_list_element_1 = var_m.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_n.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_2, 1, tmp_list_element_1 );
    frame_function->f_lineno = 155;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    assert( var_minDim.object == NULL );
    var_minDim.object = tmp_assign_source_13;

    tmp_compare_left_1 = par_maxiter.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
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
    tmp_assign_source_14 = var_minDim.object;

    if (par_maxiter.object == NULL)
    {
        par_maxiter.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = par_maxiter.object;
        par_maxiter.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_cond_value_1 = par_show.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_space;
    frame_function->f_lineno = 161;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_digest_3d0cc522188c28c1ec93f12a0fca6f76;
    frame_function->f_lineno = 162;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_0e476d3fb6e7a11ef66372c6b0e22f04;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_m.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_n.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 163;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_str_digest_b4e46e9eec58211a7703b7890c7a6a5b;
    tmp_binop_right_2 = par_damp.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281708 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 164;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = const_str_digest_a7a3f3bec52bdb671bc4ac27171e29dc;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_atol.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71913 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_conlim.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281758 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_2 );
    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 165;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = const_str_digest_03dae8e70a48e591416432d426f15a50;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_btol.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281810 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_maxiter.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_3 );
    tmp_call_arg_element_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 166;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_assign_source_15 = par_b.object;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    assert( var_u.object == NULL );
    var_u.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_norm );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185595 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = var_u.object;

    frame_function->f_lineno = 169;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    assert( var_beta.object == NULL );
    var_beta.object = tmp_assign_source_16;

    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71424 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = var_n.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 171;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    assert( var_v.object == NULL );
    var_v.object = tmp_assign_source_17;

    tmp_assign_source_18 = const_int_0;
    assert( var_alpha.object == NULL );
    var_alpha.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    tmp_compare_left_2 = var_beta.object;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_binop_left_6 = const_int_pos_1;
    tmp_binop_right_6 = var_beta.object;

    tmp_binop_left_5 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_5 = var_u.object;

    tmp_assign_source_19 = BINARY_OPERATION_MUL( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    assert( var_u.object != NULL );
    {
        PyObject *old = var_u.object;
        var_u.object = tmp_assign_source_19;
        Py_DECREF( old );
    }

    tmp_source_name_3 = par_A.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rmatvec );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = var_u.object;

    frame_function->f_lineno = 176;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_20;
        Py_DECREF( old );
    }

    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_norm );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185595 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = var_v.object;

    frame_function->f_lineno = 177;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_12 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    assert( var_alpha.object != NULL );
    {
        PyObject *old = var_alpha.object;
        var_alpha.object = tmp_assign_source_21;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_compare_left_3 = var_alpha.object;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_binop_left_8 = const_int_pos_1;
    tmp_binop_right_8 = var_alpha.object;

    tmp_binop_left_7 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_7 = var_v.object;

    tmp_assign_source_22 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_22;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_assign_source_23 = const_int_0;
    assert( var_itn.object == NULL );
    var_itn.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

    tmp_binop_left_9 = var_alpha.object;

    tmp_binop_right_9 = var_beta.object;

    tmp_assign_source_24 = BINARY_OPERATION_MUL( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    assert( var_zetabar.object == NULL );
    var_zetabar.object = tmp_assign_source_24;

    tmp_assign_source_25 = var_alpha.object;

    assert( var_alphabar.object == NULL );
    var_alphabar.object = INCREASE_REFCOUNT( tmp_assign_source_25 );

    tmp_assign_source_26 = const_int_pos_1;
    assert( var_rho.object == NULL );
    var_rho.object = INCREASE_REFCOUNT( tmp_assign_source_26 );

    tmp_assign_source_27 = const_int_pos_1;
    assert( var_rhobar.object == NULL );
    var_rhobar.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    tmp_assign_source_28 = const_int_pos_1;
    assert( var_cbar.object == NULL );
    var_cbar.object = INCREASE_REFCOUNT( tmp_assign_source_28 );

    tmp_assign_source_29 = const_int_0;
    assert( var_sbar.object == NULL );
    var_sbar.object = INCREASE_REFCOUNT( tmp_assign_source_29 );

    tmp_source_name_4 = var_v.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_copy );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 192;
    tmp_assign_source_30 = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    assert( var_h.object == NULL );
    var_h.object = tmp_assign_source_30;

    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71424 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = var_n.object;

    if ( tmp_call_arg_element_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 193;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_13 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    assert( var_hbar.object == NULL );
    var_hbar.object = tmp_assign_source_31;

    tmp_called_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_16 == NULL ))
    {
        tmp_called_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71424 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = var_n.object;

    if ( tmp_call_arg_element_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 194;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_14 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    assert( var_x.object == NULL );
    var_x.object = tmp_assign_source_32;

    tmp_assign_source_33 = var_beta.object;

    assert( var_betadd.object == NULL );
    var_betadd.object = INCREASE_REFCOUNT( tmp_assign_source_33 );

    tmp_assign_source_34 = const_int_0;
    assert( var_betad.object == NULL );
    var_betad.object = INCREASE_REFCOUNT( tmp_assign_source_34 );

    tmp_assign_source_35 = const_int_pos_1;
    assert( var_rhodold.object == NULL );
    var_rhodold.object = INCREASE_REFCOUNT( tmp_assign_source_35 );

    tmp_assign_source_36 = const_int_0;
    assert( var_tautildeold.object == NULL );
    var_tautildeold.object = INCREASE_REFCOUNT( tmp_assign_source_36 );

    tmp_assign_source_37 = const_int_0;
    assert( var_thetatilde.object == NULL );
    var_thetatilde.object = INCREASE_REFCOUNT( tmp_assign_source_37 );

    tmp_assign_source_38 = const_int_0;
    assert( var_zeta.object == NULL );
    var_zeta.object = INCREASE_REFCOUNT( tmp_assign_source_38 );

    tmp_assign_source_39 = const_int_0;
    assert( var_d.object == NULL );
    var_d.object = INCREASE_REFCOUNT( tmp_assign_source_39 );

    tmp_binop_left_10 = var_alpha.object;

    tmp_binop_right_10 = var_alpha.object;

    tmp_assign_source_40 = BINARY_OPERATION_MUL( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    assert( var_normA2.object == NULL );
    var_normA2.object = tmp_assign_source_40;

    tmp_assign_source_41 = const_int_0;
    assert( var_maxrbar.object == NULL );
    var_maxrbar.object = INCREASE_REFCOUNT( tmp_assign_source_41 );

    tmp_assign_source_42 = const_float_1e100;
    assert( var_minrbar.object == NULL );
    var_minrbar.object = INCREASE_REFCOUNT( tmp_assign_source_42 );

    tmp_called_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_17 == NULL ))
    {
        tmp_called_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = var_normA2.object;

    frame_function->f_lineno = 211;
    tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_17, tmp_call_arg_element_15 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }
    assert( var_normA.object == NULL );
    var_normA.object = tmp_assign_source_43;

    tmp_assign_source_44 = const_int_pos_1;
    assert( var_condA.object == NULL );
    var_condA.object = INCREASE_REFCOUNT( tmp_assign_source_44 );

    tmp_assign_source_45 = const_int_0;
    assert( var_normx.object == NULL );
    var_normx.object = INCREASE_REFCOUNT( tmp_assign_source_45 );

    tmp_assign_source_46 = var_beta.object;

    assert( var_normb.object == NULL );
    var_normb.object = INCREASE_REFCOUNT( tmp_assign_source_46 );

    tmp_assign_source_47 = const_int_0;
    assert( var_istop.object == NULL );
    var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_47 );

    tmp_assign_source_48 = const_int_0;
    assert( var_ctol.object == NULL );
    var_ctol.object = INCREASE_REFCOUNT( tmp_assign_source_48 );

    tmp_compare_left_4 = par_conlim.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281758 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Gt_3 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_3 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_binop_left_11 = const_int_pos_1;
    tmp_binop_right_11 = par_conlim.object;

    if ( tmp_binop_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281758 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_49 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto frame_exception_exit_1;
    }
    assert( var_ctol.object != NULL );
    {
        PyObject *old = var_ctol.object;
        var_ctol.object = tmp_assign_source_49;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_assign_source_50 = var_beta.object;

    assert( var_normr.object == NULL );
    var_normr.object = INCREASE_REFCOUNT( tmp_assign_source_50 );

    tmp_binop_left_12 = var_alpha.object;

    tmp_binop_right_12 = var_beta.object;

    tmp_assign_source_51 = BINARY_OPERATION_MUL( tmp_binop_left_12, tmp_binop_right_12 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    assert( var_normar.object == NULL );
    var_normar.object = tmp_assign_source_51;

    tmp_compare_left_5 = var_normar.object;

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_cond_value_2 = par_show.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_18 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_1 = var_msg.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_call_arg_element_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 228;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    tmp_return_value = PyTuple_New( 8 );
    tmp_tuple_element_4 = var_x.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_istop.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_itn.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_normr.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_normar.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_normA.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_condA.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 6, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_normx.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 7, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_cond_value_3 = par_show.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_19 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = const_str_space;
    frame_function->f_lineno = 232;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_20 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_18 = var_hdg1.object;

    if ( tmp_call_arg_element_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281860 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = var_hdg2.object;

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281910 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 233;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_20, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_52 = const_int_pos_1;
    assert( var_test1.object == NULL );
    var_test1.object = INCREASE_REFCOUNT( tmp_assign_source_52 );

    tmp_binop_left_13 = var_alpha.object;

    tmp_binop_right_13 = var_beta.object;

    tmp_assign_source_53 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }
    assert( var_test2.object == NULL );
    var_test2.object = tmp_assign_source_53;

    tmp_binop_left_14 = const_str_digest_6c397e5435d06204d5f5c55ee949d8b0;
    tmp_binop_right_14 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_itn.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_14, 0, tmp_tuple_element_5 );
    tmp_subscr_target_2 = var_x.object;

    tmp_subscr_subscript_2 = const_int_0;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_14 );

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_14, 1, tmp_tuple_element_5 );
    tmp_assign_source_54 = BINARY_OPERATION_REMAINDER( tmp_binop_left_14, tmp_binop_right_14 );
    Py_DECREF( tmp_binop_right_14 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    assert( var_str1.object == NULL );
    var_str1.object = tmp_assign_source_54;

    tmp_binop_left_15 = const_str_digest_fa530a0e8d3f64457f23afa7eab2a445;
    tmp_binop_right_15 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_normr.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_binop_right_15, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_normar.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_binop_right_15, 1, tmp_tuple_element_6 );
    tmp_assign_source_55 = BINARY_OPERATION_REMAINDER( tmp_binop_left_15, tmp_binop_right_15 );
    Py_DECREF( tmp_binop_right_15 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    assert( var_str2.object == NULL );
    var_str2.object = tmp_assign_source_55;

    tmp_binop_left_16 = const_str_digest_2fbcbe1ff2b6eb9a2fc5d60fa1620218;
    tmp_binop_right_16 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_test1.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_16, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_test2.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_16, 1, tmp_tuple_element_7 );
    tmp_assign_source_56 = BINARY_OPERATION_REMAINDER( tmp_binop_left_16, tmp_binop_right_16 );
    Py_DECREF( tmp_binop_right_16 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    assert( var_str3.object == NULL );
    var_str3.object = tmp_assign_source_56;

    tmp_called_21 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = const_str_empty;
    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = PyList_New( 3 );
    tmp_list_element_2 = var_str1.object;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_call_arg_element_21, 0, tmp_list_element_2 );
    tmp_list_element_2 = var_str2.object;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_call_arg_element_21, 1, tmp_list_element_2 );
    tmp_list_element_2 = var_str3.object;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_call_arg_element_21, 2, tmp_list_element_2 );
    frame_function->f_lineno = 239;
    tmp_call_arg_element_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_22 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 239;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_20 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    loop_start_1:;
    tmp_compare_left_6 = var_itn.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = par_maxiter.object;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    goto loop_end_1;
    branch_no_9:;
    tmp_binop_left_17 = var_itn.object;

    if ( tmp_binop_left_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_17 = const_int_pos_1;
    tmp_assign_source_57 = BINARY_OPERATION_ADD( tmp_binop_left_17, tmp_binop_right_17 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    if (var_itn.object == NULL)
    {
        var_itn.object = tmp_assign_source_57;
    }
    else
    {
        PyObject *old = var_itn.object;
        var_itn.object = tmp_assign_source_57;
        Py_DECREF( old );
    }
    tmp_source_name_6 = par_A.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_matvec );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = var_v.object;

    if ( tmp_call_arg_element_22 == NULL )
    {
        Py_DECREF( tmp_called_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 250;
    tmp_binop_left_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_binop_left_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_19 = var_alpha.object;

    if ( tmp_binop_left_19 == NULL )
    {
        Py_DECREF( tmp_binop_left_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8662 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_19 = var_u.object;

    if ( tmp_binop_right_19 == NULL )
    {
        Py_DECREF( tmp_binop_left_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_18 = BINARY_OPERATION_MUL( tmp_binop_left_19, tmp_binop_right_19 );
    if ( tmp_binop_right_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_58 = BINARY_OPERATION_SUB( tmp_binop_left_18, tmp_binop_right_18 );
    Py_DECREF( tmp_binop_left_18 );
    Py_DECREF( tmp_binop_right_18 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    if (var_u.object == NULL)
    {
        var_u.object = tmp_assign_source_58;
    }
    else
    {
        PyObject *old = var_u.object;
        var_u.object = tmp_assign_source_58;
        Py_DECREF( old );
    }
    tmp_called_24 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_norm );

    if (unlikely( tmp_called_24 == NULL ))
    {
        tmp_called_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
    }

    if ( tmp_called_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185595 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_23 = var_u.object;

    frame_function->f_lineno = 251;
    tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_23 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    if (var_beta.object == NULL)
    {
        var_beta.object = tmp_assign_source_59;
    }
    else
    {
        PyObject *old = var_beta.object;
        var_beta.object = tmp_assign_source_59;
        Py_DECREF( old );
    }
    tmp_compare_left_7 = var_beta.object;

    tmp_compare_right_7 = const_int_0;
    tmp_cmp_Gt_4 = RICH_COMPARE_BOOL_GT( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Gt_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_4 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_binop_left_21 = const_int_pos_1;
    tmp_binop_right_21 = var_beta.object;

    tmp_binop_left_20 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_21, tmp_binop_right_21 );
    if ( tmp_binop_left_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_20 = var_u.object;

    tmp_assign_source_60 = BINARY_OPERATION_MUL( tmp_binop_left_20, tmp_binop_right_20 );
    Py_DECREF( tmp_binop_left_20 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    assert( var_u.object != NULL );
    {
        PyObject *old = var_u.object;
        var_u.object = tmp_assign_source_60;
        Py_DECREF( old );
    }

    tmp_source_name_7 = par_A.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_rmatvec );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_24 = var_u.object;

    frame_function->f_lineno = 255;
    tmp_binop_left_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_25, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_binop_left_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_23 = var_beta.object;

    tmp_binop_right_23 = var_v.object;

    if ( tmp_binop_right_23 == NULL )
    {
        Py_DECREF( tmp_binop_left_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_22 = BINARY_OPERATION_MUL( tmp_binop_left_23, tmp_binop_right_23 );
    if ( tmp_binop_right_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_22 );

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_61 = BINARY_OPERATION_SUB( tmp_binop_left_22, tmp_binop_right_22 );
    Py_DECREF( tmp_binop_left_22 );
    Py_DECREF( tmp_binop_right_22 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    if (var_v.object == NULL)
    {
        var_v.object = tmp_assign_source_61;
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_61;
        Py_DECREF( old );
    }
    tmp_called_26 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_norm );

    if (unlikely( tmp_called_26 == NULL ))
    {
        tmp_called_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
    }

    if ( tmp_called_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185595 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_25 = var_v.object;

    frame_function->f_lineno = 256;
    tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_25 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    if (var_alpha.object == NULL)
    {
        var_alpha.object = tmp_assign_source_62;
    }
    else
    {
        PyObject *old = var_alpha.object;
        var_alpha.object = tmp_assign_source_62;
        Py_DECREF( old );
    }
    tmp_compare_left_8 = var_alpha.object;

    tmp_compare_right_8 = const_int_0;
    tmp_cmp_Gt_5 = RICH_COMPARE_BOOL_GT( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Gt_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_5 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_binop_left_25 = const_int_pos_1;
    tmp_binop_right_25 = var_alpha.object;

    tmp_binop_left_24 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_25, tmp_binop_right_25 );
    if ( tmp_binop_left_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_24 = var_v.object;

    tmp_assign_source_63 = BINARY_OPERATION_MUL( tmp_binop_left_24, tmp_binop_right_24 );
    Py_DECREF( tmp_binop_left_24 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_63;
        Py_DECREF( old );
    }

    branch_no_11:;
    branch_no_10:;
    // Tried code
    tmp_called_27 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain__sym_ortho );

    if (unlikely( tmp_called_27 == NULL ))
    {
        tmp_called_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sym_ortho );
    }

    if ( tmp_called_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282009 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_26 = var_alphabar.object;

    if ( tmp_call_arg_element_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282048 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_27 = par_damp.object;

    if ( tmp_call_arg_element_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281708 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 264;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_27, tmp_call_arg_element_26, tmp_call_arg_element_27 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }
    tmp_assign_source_64 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_64;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_64;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_65 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_65 == NULL )
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


        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_65;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_65;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_66 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_66 == NULL )
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


        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_66;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_66;
        Py_DECREF( old );
    }
    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_67 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 2 );
    if ( tmp_assign_source_67 == NULL )
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


        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_2__element_3.object == NULL)
    {
        tmp_tuple_unpack_2__element_3.object = tmp_assign_source_67;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_3.object;
        tmp_tuple_unpack_2__element_3.object = tmp_assign_source_67;
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

            goto try_finally_handler_2;
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

        goto try_finally_handler_2;
    }
    tmp_assign_source_68 = tmp_tuple_unpack_2__element_1.object;

    if (var_chat.object == NULL)
    {
        var_chat.object = INCREASE_REFCOUNT( tmp_assign_source_68 );
    }
    else
    {
        PyObject *old = var_chat.object;
        var_chat.object = INCREASE_REFCOUNT( tmp_assign_source_68 );
        Py_DECREF( old );
    }
    tmp_assign_source_69 = tmp_tuple_unpack_2__element_2.object;

    if (var_shat.object == NULL)
    {
        var_shat.object = INCREASE_REFCOUNT( tmp_assign_source_69 );
    }
    else
    {
        PyObject *old = var_shat.object;
        var_shat.object = INCREASE_REFCOUNT( tmp_assign_source_69 );
        Py_DECREF( old );
    }
    tmp_assign_source_70 = tmp_tuple_unpack_2__element_3.object;

    if (var_alphahat.object == NULL)
    {
        var_alphahat.object = INCREASE_REFCOUNT( tmp_assign_source_70 );
    }
    else
    {
        PyObject *old = var_alphahat.object;
        var_alphahat.object = INCREASE_REFCOUNT( tmp_assign_source_70 );
        Py_DECREF( old );
    }
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

        goto frame_exception_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_assign_source_71 = var_rho.object;

    if ( tmp_assign_source_71 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    if (var_rhoold.object == NULL)
    {
        var_rhoold.object = INCREASE_REFCOUNT( tmp_assign_source_71 );
    }
    else
    {
        PyObject *old = var_rhoold.object;
        var_rhoold.object = INCREASE_REFCOUNT( tmp_assign_source_71 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_28 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain__sym_ortho );

    if (unlikely( tmp_called_28 == NULL ))
    {
        tmp_called_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sym_ortho );
    }

    if ( tmp_called_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282009 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_28 = var_alphahat.object;

    if ( tmp_call_arg_element_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282151 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_29 = var_beta.object;

    if ( tmp_call_arg_element_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 269;
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_28, tmp_call_arg_element_28, tmp_call_arg_element_29 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto try_finally_handler_3;
    }
    tmp_assign_source_72 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_3__source_iter.object == NULL)
    {
        tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_72;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_3__source_iter.object;
        tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_72;
        Py_DECREF( old );
    }
    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_73 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 0 );
    if ( tmp_assign_source_73 == NULL )
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


        frame_function->f_lineno = 269;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_3__element_1.object == NULL)
    {
        tmp_tuple_unpack_3__element_1.object = tmp_assign_source_73;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_3__element_1.object;
        tmp_tuple_unpack_3__element_1.object = tmp_assign_source_73;
        Py_DECREF( old );
    }
    tmp_unpack_7 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_74 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 1 );
    if ( tmp_assign_source_74 == NULL )
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


        frame_function->f_lineno = 269;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_3__element_2.object == NULL)
    {
        tmp_tuple_unpack_3__element_2.object = tmp_assign_source_74;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_3__element_2.object;
        tmp_tuple_unpack_3__element_2.object = tmp_assign_source_74;
        Py_DECREF( old );
    }
    tmp_unpack_8 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_75 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 2 );
    if ( tmp_assign_source_75 == NULL )
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


        frame_function->f_lineno = 269;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_3__element_3.object == NULL)
    {
        tmp_tuple_unpack_3__element_3.object = tmp_assign_source_75;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_3__element_3.object;
        tmp_tuple_unpack_3__element_3.object = tmp_assign_source_75;
        Py_DECREF( old );
    }
    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_3 ); assert( PyIter_Check( tmp_iterator_name_3 ) );

    tmp_iterator_attempt_3 = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

    if (likely( tmp_iterator_attempt_3 == NULL ))
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
        Py_DECREF( tmp_iterator_attempt_3 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_3;
    }
    tmp_assign_source_76 = tmp_tuple_unpack_3__element_1.object;

    if (var_c.object == NULL)
    {
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_76 );
    }
    else
    {
        PyObject *old = var_c.object;
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_76 );
        Py_DECREF( old );
    }
    tmp_assign_source_77 = tmp_tuple_unpack_3__element_2.object;

    if (var_s.object == NULL)
    {
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_77 );
    }
    else
    {
        PyObject *old = var_s.object;
        var_s.object = INCREASE_REFCOUNT( tmp_assign_source_77 );
        Py_DECREF( old );
    }
    tmp_assign_source_78 = tmp_tuple_unpack_3__element_3.object;

    if (var_rho.object == NULL)
    {
        var_rho.object = INCREASE_REFCOUNT( tmp_assign_source_78 );
    }
    else
    {
        PyObject *old = var_rho.object;
        var_rho.object = INCREASE_REFCOUNT( tmp_assign_source_78 );
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_3__source_iter.object );
    tmp_tuple_unpack_3__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1.object );
    tmp_tuple_unpack_3__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2.object );
    tmp_tuple_unpack_3__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3.object );
    tmp_tuple_unpack_3__element_3.object = NULL;

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
    tmp_binop_left_26 = var_s.object;

    if ( tmp_binop_left_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_26 = var_alpha.object;

    if ( tmp_binop_right_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8662 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_79 = BINARY_OPERATION_MUL( tmp_binop_left_26, tmp_binop_right_26 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    if (var_thetanew.object == NULL)
    {
        var_thetanew.object = tmp_assign_source_79;
    }
    else
    {
        PyObject *old = var_thetanew.object;
        var_thetanew.object = tmp_assign_source_79;
        Py_DECREF( old );
    }
    tmp_binop_left_27 = var_c.object;

    if ( tmp_binop_left_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_27 = var_alpha.object;

    if ( tmp_binop_right_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8662 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_80 = BINARY_OPERATION_MUL( tmp_binop_left_27, tmp_binop_right_27 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    if (var_alphabar.object == NULL)
    {
        var_alphabar.object = tmp_assign_source_80;
    }
    else
    {
        PyObject *old = var_alphabar.object;
        var_alphabar.object = tmp_assign_source_80;
        Py_DECREF( old );
    }
    tmp_assign_source_81 = var_rhobar.object;

    if ( tmp_assign_source_81 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282205 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    if (var_rhobarold.object == NULL)
    {
        var_rhobarold.object = INCREASE_REFCOUNT( tmp_assign_source_81 );
    }
    else
    {
        PyObject *old = var_rhobarold.object;
        var_rhobarold.object = INCREASE_REFCOUNT( tmp_assign_source_81 );
        Py_DECREF( old );
    }
    tmp_assign_source_82 = var_zeta.object;

    if ( tmp_assign_source_82 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    if (var_zetaold.object == NULL)
    {
        var_zetaold.object = INCREASE_REFCOUNT( tmp_assign_source_82 );
    }
    else
    {
        PyObject *old = var_zetaold.object;
        var_zetaold.object = INCREASE_REFCOUNT( tmp_assign_source_82 );
        Py_DECREF( old );
    }
    tmp_binop_left_28 = var_sbar.object;

    if ( tmp_binop_left_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282307 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_28 = var_rho.object;

    if ( tmp_binop_right_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_83 = BINARY_OPERATION_MUL( tmp_binop_left_28, tmp_binop_right_28 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    if (var_thetabar.object == NULL)
    {
        var_thetabar.object = tmp_assign_source_83;
    }
    else
    {
        PyObject *old = var_thetabar.object;
        var_thetabar.object = tmp_assign_source_83;
        Py_DECREF( old );
    }
    tmp_binop_left_29 = var_cbar.object;

    if ( tmp_binop_left_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282357 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_29 = var_rho.object;

    if ( tmp_binop_right_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_84 = BINARY_OPERATION_MUL( tmp_binop_left_29, tmp_binop_right_29 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }
    if (var_rhotemp.object == NULL)
    {
        var_rhotemp.object = tmp_assign_source_84;
    }
    else
    {
        PyObject *old = var_rhotemp.object;
        var_rhotemp.object = tmp_assign_source_84;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_29 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain__sym_ortho );

    if (unlikely( tmp_called_29 == NULL ))
    {
        tmp_called_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sym_ortho );
    }

    if ( tmp_called_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282009 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }

    tmp_binop_left_30 = var_cbar.object;

    if ( tmp_binop_left_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282357 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }

    tmp_binop_right_30 = var_rho.object;

    if ( tmp_binop_right_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_30 = BINARY_OPERATION_MUL( tmp_binop_left_30, tmp_binop_right_30 );
    if ( tmp_call_arg_element_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_31 = var_thetanew.object;

    frame_function->f_lineno = 279;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_29, tmp_call_arg_element_30, tmp_call_arg_element_31 );
    Py_DECREF( tmp_call_arg_element_30 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }
    tmp_assign_source_85 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }
    if (tmp_tuple_unpack_4__source_iter.object == NULL)
    {
        tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_85;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_4__source_iter.object;
        tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_85;
        Py_DECREF( old );
    }
    tmp_unpack_9 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_86 = UNPACK_PARAMETER_NEXT( tmp_unpack_9, 0 );
    if ( tmp_assign_source_86 == NULL )
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


        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }
    if (tmp_tuple_unpack_4__element_1.object == NULL)
    {
        tmp_tuple_unpack_4__element_1.object = tmp_assign_source_86;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_4__element_1.object;
        tmp_tuple_unpack_4__element_1.object = tmp_assign_source_86;
        Py_DECREF( old );
    }
    tmp_unpack_10 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_87 = UNPACK_PARAMETER_NEXT( tmp_unpack_10, 1 );
    if ( tmp_assign_source_87 == NULL )
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


        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }
    if (tmp_tuple_unpack_4__element_2.object == NULL)
    {
        tmp_tuple_unpack_4__element_2.object = tmp_assign_source_87;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_4__element_2.object;
        tmp_tuple_unpack_4__element_2.object = tmp_assign_source_87;
        Py_DECREF( old );
    }
    tmp_unpack_11 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_88 = UNPACK_PARAMETER_NEXT( tmp_unpack_11, 2 );
    if ( tmp_assign_source_88 == NULL )
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


        frame_function->f_lineno = 279;
        goto try_finally_handler_4;
    }
    if (tmp_tuple_unpack_4__element_3.object == NULL)
    {
        tmp_tuple_unpack_4__element_3.object = tmp_assign_source_88;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_4__element_3.object;
        tmp_tuple_unpack_4__element_3.object = tmp_assign_source_88;
        Py_DECREF( old );
    }
    tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_4 ); assert( PyIter_Check( tmp_iterator_name_4 ) );

    tmp_iterator_attempt_4 = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

    if (likely( tmp_iterator_attempt_4 == NULL ))
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

            goto try_finally_handler_4;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_4 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_4;
    }
    tmp_assign_source_89 = tmp_tuple_unpack_4__element_1.object;

    if (var_cbar.object == NULL)
    {
        var_cbar.object = INCREASE_REFCOUNT( tmp_assign_source_89 );
    }
    else
    {
        PyObject *old = var_cbar.object;
        var_cbar.object = INCREASE_REFCOUNT( tmp_assign_source_89 );
        Py_DECREF( old );
    }
    tmp_assign_source_90 = tmp_tuple_unpack_4__element_2.object;

    if (var_sbar.object == NULL)
    {
        var_sbar.object = INCREASE_REFCOUNT( tmp_assign_source_90 );
    }
    else
    {
        PyObject *old = var_sbar.object;
        var_sbar.object = INCREASE_REFCOUNT( tmp_assign_source_90 );
        Py_DECREF( old );
    }
    tmp_assign_source_91 = tmp_tuple_unpack_4__element_3.object;

    if (var_rhobar.object == NULL)
    {
        var_rhobar.object = INCREASE_REFCOUNT( tmp_assign_source_91 );
    }
    else
    {
        PyObject *old = var_rhobar.object;
        var_rhobar.object = INCREASE_REFCOUNT( tmp_assign_source_91 );
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2.object );
    tmp_tuple_unpack_4__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3.object );
    tmp_tuple_unpack_4__element_3.object = NULL;

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
    tmp_binop_left_31 = var_cbar.object;

    if ( tmp_binop_left_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282357 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_31 = var_zetabar.object;

    if ( tmp_binop_right_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282407 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_92 = BINARY_OPERATION_MUL( tmp_binop_left_31, tmp_binop_right_31 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    if (var_zeta.object == NULL)
    {
        var_zeta.object = tmp_assign_source_92;
    }
    else
    {
        PyObject *old = var_zeta.object;
        var_zeta.object = tmp_assign_source_92;
        Py_DECREF( old );
    }
    tmp_unary_arg_1 = var_sbar.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282307 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_32 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_left_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_32 = var_zetabar.object;

    if ( tmp_binop_right_32 == NULL )
    {
        Py_DECREF( tmp_binop_left_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282407 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_93 = BINARY_OPERATION_MUL( tmp_binop_left_32, tmp_binop_right_32 );
    Py_DECREF( tmp_binop_left_32 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    if (var_zetabar.object == NULL)
    {
        var_zetabar.object = tmp_assign_source_93;
    }
    else
    {
        PyObject *old = var_zetabar.object;
        var_zetabar.object = tmp_assign_source_93;
        Py_DECREF( old );
    }
    tmp_binop_left_33 = var_h.object;

    if ( tmp_binop_left_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7936 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_36 = var_thetabar.object;

    if ( tmp_binop_left_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282460 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_36 = var_rho.object;

    if ( tmp_binop_right_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_35 = BINARY_OPERATION_MUL( tmp_binop_left_36, tmp_binop_right_36 );
    if ( tmp_binop_left_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_37 = var_rhoold.object;

    if ( tmp_binop_left_37 == NULL )
    {
        Py_DECREF( tmp_binop_left_35 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282514 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_37 = var_rhobarold.object;

    if ( tmp_binop_right_37 == NULL )
    {
        Py_DECREF( tmp_binop_left_35 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282566 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_35 = BINARY_OPERATION_MUL( tmp_binop_left_37, tmp_binop_right_37 );
    if ( tmp_binop_right_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_35 );

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_34 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_35, tmp_binop_right_35 );
    Py_DECREF( tmp_binop_left_35 );
    Py_DECREF( tmp_binop_right_35 );
    if ( tmp_binop_left_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_34 = var_hbar.object;

    if ( tmp_binop_right_34 == NULL )
    {
        Py_DECREF( tmp_binop_left_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282621 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_33 = BINARY_OPERATION_MUL( tmp_binop_left_34, tmp_binop_right_34 );
    Py_DECREF( tmp_binop_left_34 );
    if ( tmp_binop_right_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_94 = BINARY_OPERATION_SUB( tmp_binop_left_33, tmp_binop_right_33 );
    Py_DECREF( tmp_binop_right_33 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    if (var_hbar.object == NULL)
    {
        var_hbar.object = tmp_assign_source_94;
    }
    else
    {
        PyObject *old = var_hbar.object;
        var_hbar.object = tmp_assign_source_94;
        Py_DECREF( old );
    }
    tmp_binop_left_38 = var_x.object;

    if ( tmp_binop_left_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_40 = var_zeta.object;

    tmp_binop_left_41 = var_rho.object;

    if ( tmp_binop_left_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_41 = var_rhobar.object;

    if ( tmp_binop_right_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282205 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_40 = BINARY_OPERATION_MUL( tmp_binop_left_41, tmp_binop_right_41 );
    if ( tmp_binop_right_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_39 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_40, tmp_binop_right_40 );
    Py_DECREF( tmp_binop_right_40 );
    if ( tmp_binop_left_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_39 = var_hbar.object;

    tmp_binop_right_38 = BINARY_OPERATION_MUL( tmp_binop_left_39, tmp_binop_right_39 );
    Py_DECREF( tmp_binop_left_39 );
    if ( tmp_binop_right_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_95 = BINARY_OPERATION_ADD( tmp_binop_left_38, tmp_binop_right_38 );
    Py_DECREF( tmp_binop_right_38 );
    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    if (var_x.object == NULL)
    {
        var_x.object = tmp_assign_source_95;
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = tmp_assign_source_95;
        Py_DECREF( old );
    }
    tmp_binop_left_42 = var_v.object;

    if ( tmp_binop_left_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_44 = var_thetanew.object;

    if ( tmp_binop_left_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282671 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_44 = var_rho.object;

    if ( tmp_binop_right_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_43 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_44, tmp_binop_right_44 );
    if ( tmp_binop_left_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_43 = var_h.object;

    if ( tmp_binop_right_43 == NULL )
    {
        Py_DECREF( tmp_binop_left_43 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7936 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_42 = BINARY_OPERATION_MUL( tmp_binop_left_43, tmp_binop_right_43 );
    Py_DECREF( tmp_binop_left_43 );
    if ( tmp_binop_right_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_96 = BINARY_OPERATION_SUB( tmp_binop_left_42, tmp_binop_right_42 );
    Py_DECREF( tmp_binop_right_42 );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    if (var_h.object == NULL)
    {
        var_h.object = tmp_assign_source_96;
    }
    else
    {
        PyObject *old = var_h.object;
        var_h.object = tmp_assign_source_96;
        Py_DECREF( old );
    }
    tmp_binop_left_45 = var_chat.object;

    if ( tmp_binop_left_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282725 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_45 = var_betadd.object;

    if ( tmp_binop_right_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282775 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_97 = BINARY_OPERATION_MUL( tmp_binop_left_45, tmp_binop_right_45 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    if (var_betaacute.object == NULL)
    {
        var_betaacute.object = tmp_assign_source_97;
    }
    else
    {
        PyObject *old = var_betaacute.object;
        var_betaacute.object = tmp_assign_source_97;
        Py_DECREF( old );
    }
    tmp_unary_arg_2 = var_shat.object;

    if ( tmp_unary_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282827 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_46 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_2 );
    if ( tmp_binop_left_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_46 = var_betadd.object;

    if ( tmp_binop_right_46 == NULL )
    {
        Py_DECREF( tmp_binop_left_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282775 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_98 = BINARY_OPERATION_MUL( tmp_binop_left_46, tmp_binop_right_46 );
    Py_DECREF( tmp_binop_left_46 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    if (var_betacheck.object == NULL)
    {
        var_betacheck.object = tmp_assign_source_98;
    }
    else
    {
        PyObject *old = var_betacheck.object;
        var_betacheck.object = tmp_assign_source_98;
        Py_DECREF( old );
    }
    tmp_binop_left_47 = var_c.object;

    if ( tmp_binop_left_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_47 = var_betaacute.object;

    tmp_assign_source_99 = BINARY_OPERATION_MUL( tmp_binop_left_47, tmp_binop_right_47 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    if (var_betahat.object == NULL)
    {
        var_betahat.object = tmp_assign_source_99;
    }
    else
    {
        PyObject *old = var_betahat.object;
        var_betahat.object = tmp_assign_source_99;
        Py_DECREF( old );
    }
    tmp_unary_arg_3 = var_s.object;

    if ( tmp_unary_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_48 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_3 );
    if ( tmp_binop_left_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_48 = var_betaacute.object;

    tmp_assign_source_100 = BINARY_OPERATION_MUL( tmp_binop_left_48, tmp_binop_right_48 );
    Py_DECREF( tmp_binop_left_48 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }
    if (var_betadd.object == NULL)
    {
        var_betadd.object = tmp_assign_source_100;
    }
    else
    {
        PyObject *old = var_betadd.object;
        var_betadd.object = tmp_assign_source_100;
        Py_DECREF( old );
    }
    tmp_assign_source_101 = var_thetatilde.object;

    if ( tmp_assign_source_101 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282877 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    if (var_thetatildeold.object == NULL)
    {
        var_thetatildeold.object = INCREASE_REFCOUNT( tmp_assign_source_101 );
    }
    else
    {
        PyObject *old = var_thetatildeold.object;
        var_thetatildeold.object = INCREASE_REFCOUNT( tmp_assign_source_101 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain__sym_ortho );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sym_ortho );
    }

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282009 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_32 = var_rhodold.object;

    if ( tmp_call_arg_element_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282933 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_33 = var_thetabar.object;

    if ( tmp_call_arg_element_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282460 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto try_finally_handler_5;
    }

    frame_function->f_lineno = 303;
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_30, tmp_call_arg_element_32, tmp_call_arg_element_33 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto try_finally_handler_5;
    }
    tmp_assign_source_102 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_5__source_iter.object == NULL)
    {
        tmp_tuple_unpack_5__source_iter.object = tmp_assign_source_102;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_5__source_iter.object;
        tmp_tuple_unpack_5__source_iter.object = tmp_assign_source_102;
        Py_DECREF( old );
    }
    tmp_unpack_12 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_103 = UNPACK_PARAMETER_NEXT( tmp_unpack_12, 0 );
    if ( tmp_assign_source_103 == NULL )
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


        frame_function->f_lineno = 303;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_5__element_1.object == NULL)
    {
        tmp_tuple_unpack_5__element_1.object = tmp_assign_source_103;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_5__element_1.object;
        tmp_tuple_unpack_5__element_1.object = tmp_assign_source_103;
        Py_DECREF( old );
    }
    tmp_unpack_13 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_104 = UNPACK_PARAMETER_NEXT( tmp_unpack_13, 1 );
    if ( tmp_assign_source_104 == NULL )
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


        frame_function->f_lineno = 303;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_5__element_2.object == NULL)
    {
        tmp_tuple_unpack_5__element_2.object = tmp_assign_source_104;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_5__element_2.object;
        tmp_tuple_unpack_5__element_2.object = tmp_assign_source_104;
        Py_DECREF( old );
    }
    tmp_unpack_14 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_105 = UNPACK_PARAMETER_NEXT( tmp_unpack_14, 2 );
    if ( tmp_assign_source_105 == NULL )
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


        frame_function->f_lineno = 303;
        goto try_finally_handler_5;
    }
    if (tmp_tuple_unpack_5__element_3.object == NULL)
    {
        tmp_tuple_unpack_5__element_3.object = tmp_assign_source_105;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_5__element_3.object;
        tmp_tuple_unpack_5__element_3.object = tmp_assign_source_105;
        Py_DECREF( old );
    }
    tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_5 ); assert( PyIter_Check( tmp_iterator_name_5 ) );

    tmp_iterator_attempt_5 = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

    if (likely( tmp_iterator_attempt_5 == NULL ))
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

            goto try_finally_handler_5;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_5 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_5;
    }
    tmp_assign_source_106 = tmp_tuple_unpack_5__element_1.object;

    if (var_ctildeold.object == NULL)
    {
        var_ctildeold.object = INCREASE_REFCOUNT( tmp_assign_source_106 );
    }
    else
    {
        PyObject *old = var_ctildeold.object;
        var_ctildeold.object = INCREASE_REFCOUNT( tmp_assign_source_106 );
        Py_DECREF( old );
    }
    tmp_assign_source_107 = tmp_tuple_unpack_5__element_2.object;

    if (var_stildeold.object == NULL)
    {
        var_stildeold.object = INCREASE_REFCOUNT( tmp_assign_source_107 );
    }
    else
    {
        PyObject *old = var_stildeold.object;
        var_stildeold.object = INCREASE_REFCOUNT( tmp_assign_source_107 );
        Py_DECREF( old );
    }
    tmp_assign_source_108 = tmp_tuple_unpack_5__element_3.object;

    if (var_rhotildeold.object == NULL)
    {
        var_rhotildeold.object = INCREASE_REFCOUNT( tmp_assign_source_108 );
    }
    else
    {
        PyObject *old = var_rhotildeold.object;
        var_rhotildeold.object = INCREASE_REFCOUNT( tmp_assign_source_108 );
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_5__source_iter.object );
    tmp_tuple_unpack_5__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_1.object );
    tmp_tuple_unpack_5__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2.object );
    tmp_tuple_unpack_5__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_3.object );
    tmp_tuple_unpack_5__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
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
    tmp_binop_left_49 = var_stildeold.object;

    if ( tmp_binop_left_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282986 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_49 = var_rhobar.object;

    if ( tmp_binop_right_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282205 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_109 = BINARY_OPERATION_MUL( tmp_binop_left_49, tmp_binop_right_49 );
    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    if (var_thetatilde.object == NULL)
    {
        var_thetatilde.object = tmp_assign_source_109;
    }
    else
    {
        PyObject *old = var_thetatilde.object;
        var_thetatilde.object = tmp_assign_source_109;
        Py_DECREF( old );
    }
    tmp_binop_left_50 = var_ctildeold.object;

    if ( tmp_binop_left_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283041 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_50 = var_rhobar.object;

    if ( tmp_binop_right_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282205 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_110 = BINARY_OPERATION_MUL( tmp_binop_left_50, tmp_binop_right_50 );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    if (var_rhodold.object == NULL)
    {
        var_rhodold.object = tmp_assign_source_110;
    }
    else
    {
        PyObject *old = var_rhodold.object;
        var_rhodold.object = tmp_assign_source_110;
        Py_DECREF( old );
    }
    tmp_unary_arg_4 = var_stildeold.object;

    if ( tmp_unary_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282986 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_52 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_4 );
    if ( tmp_binop_left_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_52 = var_betad.object;

    if ( tmp_binop_right_52 == NULL )
    {
        Py_DECREF( tmp_binop_left_52 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283096 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_51 = BINARY_OPERATION_MUL( tmp_binop_left_52, tmp_binop_right_52 );
    Py_DECREF( tmp_binop_left_52 );
    if ( tmp_binop_left_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_53 = var_ctildeold.object;

    if ( tmp_binop_left_53 == NULL )
    {
        Py_DECREF( tmp_binop_left_51 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283041 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_53 = var_betahat.object;

    if ( tmp_binop_right_53 == NULL )
    {
        Py_DECREF( tmp_binop_left_51 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283147 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_51 = BINARY_OPERATION_MUL( tmp_binop_left_53, tmp_binop_right_53 );
    if ( tmp_binop_right_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_51 );

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_111 = BINARY_OPERATION_ADD( tmp_binop_left_51, tmp_binop_right_51 );
    Py_DECREF( tmp_binop_left_51 );
    Py_DECREF( tmp_binop_right_51 );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    if (var_betad.object == NULL)
    {
        var_betad.object = tmp_assign_source_111;
    }
    else
    {
        PyObject *old = var_betad.object;
        var_betad.object = tmp_assign_source_111;
        Py_DECREF( old );
    }
    tmp_binop_left_55 = var_zetaold.object;

    if ( tmp_binop_left_55 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283200 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_56 = var_thetatildeold.object;

    if ( tmp_binop_left_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283253 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_56 = var_tautildeold.object;

    if ( tmp_binop_right_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283312 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_55 = BINARY_OPERATION_MUL( tmp_binop_left_56, tmp_binop_right_56 );
    if ( tmp_binop_right_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_54 = BINARY_OPERATION_SUB( tmp_binop_left_55, tmp_binop_right_55 );
    Py_DECREF( tmp_binop_right_55 );
    if ( tmp_binop_left_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_54 = var_rhotildeold.object;

    if ( tmp_binop_right_54 == NULL )
    {
        Py_DECREF( tmp_binop_left_54 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283369 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_112 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_54, tmp_binop_right_54 );
    Py_DECREF( tmp_binop_left_54 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    if (var_tautildeold.object == NULL)
    {
        var_tautildeold.object = tmp_assign_source_112;
    }
    else
    {
        PyObject *old = var_tautildeold.object;
        var_tautildeold.object = tmp_assign_source_112;
        Py_DECREF( old );
    }
    tmp_binop_left_58 = var_zeta.object;

    if ( tmp_binop_left_58 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_59 = var_thetatilde.object;

    tmp_binop_right_59 = var_tautildeold.object;

    tmp_binop_right_58 = BINARY_OPERATION_MUL( tmp_binop_left_59, tmp_binop_right_59 );
    if ( tmp_binop_right_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_57 = BINARY_OPERATION_SUB( tmp_binop_left_58, tmp_binop_right_58 );
    Py_DECREF( tmp_binop_right_58 );
    if ( tmp_binop_left_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_57 = var_rhodold.object;

    tmp_assign_source_113 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_57, tmp_binop_right_57 );
    Py_DECREF( tmp_binop_left_57 );
    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    if (var_taud.object == NULL)
    {
        var_taud.object = tmp_assign_source_113;
    }
    else
    {
        PyObject *old = var_taud.object;
        var_taud.object = tmp_assign_source_113;
        Py_DECREF( old );
    }
    tmp_binop_left_60 = var_d.object;

    if ( tmp_binop_left_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_61 = var_betacheck.object;

    if ( tmp_binop_left_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283426 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_61 = var_betacheck.object;

    if ( tmp_binop_right_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283426 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_60 = BINARY_OPERATION_MUL( tmp_binop_left_61, tmp_binop_right_61 );
    if ( tmp_binop_right_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_114 = BINARY_OPERATION_ADD( tmp_binop_left_60, tmp_binop_right_60 );
    Py_DECREF( tmp_binop_right_60 );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    if (var_d.object == NULL)
    {
        var_d.object = tmp_assign_source_114;
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = tmp_assign_source_114;
        Py_DECREF( old );
    }
    tmp_called_31 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_31 == NULL ))
    {
        tmp_called_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_63 = var_d.object;

    tmp_binop_left_65 = var_betad.object;

    tmp_binop_right_65 = var_taud.object;

    tmp_binop_left_64 = BINARY_OPERATION_SUB( tmp_binop_left_65, tmp_binop_right_65 );
    if ( tmp_binop_left_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_64 = const_int_pos_2;
    tmp_binop_right_63 = POWER_OPERATION( tmp_binop_left_64, tmp_binop_right_64 );
    Py_DECREF( tmp_binop_left_64 );
    if ( tmp_binop_right_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_62 = BINARY_OPERATION_ADD( tmp_binop_left_63, tmp_binop_right_63 );
    Py_DECREF( tmp_binop_right_63 );
    if ( tmp_binop_left_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_66 = var_betadd.object;

    if ( tmp_binop_left_66 == NULL )
    {
        Py_DECREF( tmp_binop_left_62 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282775 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_66 = var_betadd.object;

    if ( tmp_binop_right_66 == NULL )
    {
        Py_DECREF( tmp_binop_left_62 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282775 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_62 = BINARY_OPERATION_MUL( tmp_binop_left_66, tmp_binop_right_66 );
    if ( tmp_binop_right_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_62 );

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = BINARY_OPERATION_ADD( tmp_binop_left_62, tmp_binop_right_62 );
    Py_DECREF( tmp_binop_left_62 );
    Py_DECREF( tmp_binop_right_62 );
    if ( tmp_call_arg_element_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 314;
    tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_34 );
    Py_DECREF( tmp_call_arg_element_34 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    if (var_normr.object == NULL)
    {
        var_normr.object = tmp_assign_source_115;
    }
    else
    {
        PyObject *old = var_normr.object;
        var_normr.object = tmp_assign_source_115;
        Py_DECREF( old );
    }
    tmp_binop_left_67 = var_normA2.object;

    if ( tmp_binop_left_67 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283481 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_68 = var_beta.object;

    if ( tmp_binop_left_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_68 = var_beta.object;

    if ( tmp_binop_right_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66513 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_67 = BINARY_OPERATION_MUL( tmp_binop_left_68, tmp_binop_right_68 );
    if ( tmp_binop_right_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_116 = BINARY_OPERATION_ADD( tmp_binop_left_67, tmp_binop_right_67 );
    Py_DECREF( tmp_binop_right_67 );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }
    if (var_normA2.object == NULL)
    {
        var_normA2.object = tmp_assign_source_116;
    }
    else
    {
        PyObject *old = var_normA2.object;
        var_normA2.object = tmp_assign_source_116;
        Py_DECREF( old );
    }
    tmp_called_32 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_32 == NULL ))
    {
        tmp_called_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_35 = var_normA2.object;

    frame_function->f_lineno = 318;
    tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS1( tmp_called_32, tmp_call_arg_element_35 );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    if (var_normA.object == NULL)
    {
        var_normA.object = tmp_assign_source_117;
    }
    else
    {
        PyObject *old = var_normA.object;
        var_normA.object = tmp_assign_source_117;
        Py_DECREF( old );
    }
    tmp_binop_left_69 = var_normA2.object;

    tmp_binop_left_70 = var_alpha.object;

    if ( tmp_binop_left_70 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8662 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_70 = var_alpha.object;

    if ( tmp_binop_right_70 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8662 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_69 = BINARY_OPERATION_MUL( tmp_binop_left_70, tmp_binop_right_70 );
    if ( tmp_binop_right_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_118 = BINARY_OPERATION_ADD( tmp_binop_left_69, tmp_binop_right_69 );
    Py_DECREF( tmp_binop_right_69 );
    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto frame_exception_exit_1;
    }
    assert( var_normA2.object != NULL );
    {
        PyObject *old = var_normA2.object;
        var_normA2.object = tmp_assign_source_118;
        Py_DECREF( old );
    }

    tmp_called_33 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_36 = var_maxrbar.object;

    if ( tmp_call_arg_element_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283533 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_37 = var_rhobarold.object;

    if ( tmp_call_arg_element_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282566 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 322;
    tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS2( tmp_called_33, tmp_call_arg_element_36, tmp_call_arg_element_37 );
    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    if (var_maxrbar.object == NULL)
    {
        var_maxrbar.object = tmp_assign_source_119;
    }
    else
    {
        PyObject *old = var_maxrbar.object;
        var_maxrbar.object = tmp_assign_source_119;
        Py_DECREF( old );
    }
    tmp_compare_left_9 = var_itn.object;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 323;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = const_int_pos_1;
    tmp_cmp_Gt_6 = RICH_COMPARE_BOOL_GT( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Gt_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 323;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_6 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_34 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_38 = var_minrbar.object;

    if ( tmp_call_arg_element_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283586 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_39 = var_rhobarold.object;

    if ( tmp_call_arg_element_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282566 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 324;
    tmp_assign_source_120 = CALL_FUNCTION_WITH_ARGS2( tmp_called_34, tmp_call_arg_element_38, tmp_call_arg_element_39 );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    if (var_minrbar.object == NULL)
    {
        var_minrbar.object = tmp_assign_source_120;
    }
    else
    {
        PyObject *old = var_minrbar.object;
        var_minrbar.object = tmp_assign_source_120;
        Py_DECREF( old );
    }
    branch_no_12:;
    tmp_called_35 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_40 = var_maxrbar.object;

    tmp_call_arg_element_41 = var_rhotemp.object;

    if ( tmp_call_arg_element_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 325;
    tmp_binop_left_71 = CALL_FUNCTION_WITH_ARGS2( tmp_called_35, tmp_call_arg_element_40, tmp_call_arg_element_41 );
    if ( tmp_binop_left_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_called_36 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_71 );

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_42 = var_minrbar.object;

    if ( tmp_call_arg_element_42 == NULL )
    {
        Py_DECREF( tmp_binop_left_71 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283586 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_43 = var_rhotemp.object;

    if ( tmp_call_arg_element_43 == NULL )
    {
        Py_DECREF( tmp_binop_left_71 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283639 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 325;
    tmp_binop_right_71 = CALL_FUNCTION_WITH_ARGS2( tmp_called_36, tmp_call_arg_element_42, tmp_call_arg_element_43 );
    if ( tmp_binop_right_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_71 );

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_121 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_71, tmp_binop_right_71 );
    Py_DECREF( tmp_binop_left_71 );
    Py_DECREF( tmp_binop_right_71 );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    if (var_condA.object == NULL)
    {
        var_condA.object = tmp_assign_source_121;
    }
    else
    {
        PyObject *old = var_condA.object;
        var_condA.object = tmp_assign_source_121;
        Py_DECREF( old );
    }
    tmp_called_37 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_44 = var_zetabar.object;

    if ( tmp_call_arg_element_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282407 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 330;
    tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_44 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    if (var_normar.object == NULL)
    {
        var_normar.object = tmp_assign_source_122;
    }
    else
    {
        PyObject *old = var_normar.object;
        var_normar.object = tmp_assign_source_122;
        Py_DECREF( old );
    }
    tmp_called_38 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_norm );

    if (unlikely( tmp_called_38 == NULL ))
    {
        tmp_called_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_norm );
    }

    if ( tmp_called_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185595 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_45 = var_x.object;

    if ( tmp_call_arg_element_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 331;
    tmp_assign_source_123 = CALL_FUNCTION_WITH_ARGS1( tmp_called_38, tmp_call_arg_element_45 );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }
    if (var_normx.object == NULL)
    {
        var_normx.object = tmp_assign_source_123;
    }
    else
    {
        PyObject *old = var_normx.object;
        var_normx.object = tmp_assign_source_123;
        Py_DECREF( old );
    }
    tmp_binop_left_72 = var_normr.object;

    tmp_binop_right_72 = var_normb.object;

    if ( tmp_binop_right_72 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283692 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_124 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_72, tmp_binop_right_72 );
    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }
    if (var_test1.object == NULL)
    {
        var_test1.object = tmp_assign_source_124;
    }
    else
    {
        PyObject *old = var_test1.object;
        var_test1.object = tmp_assign_source_124;
        Py_DECREF( old );
    }
    tmp_binop_left_73 = var_normA.object;

    tmp_binop_right_73 = var_normr.object;

    tmp_compare_left_10 = BINARY_OPERATION_MUL( tmp_binop_left_73, tmp_binop_right_73 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        frame_function->f_lineno = 337;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_binop_left_74 = var_normar.object;

    tmp_binop_left_75 = var_normA.object;

    tmp_binop_right_75 = var_normr.object;

    tmp_binop_right_74 = BINARY_OPERATION_MUL( tmp_binop_left_75, tmp_binop_right_75 );
    if ( tmp_binop_right_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 338;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_125 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_74, tmp_binop_right_74 );
    Py_DECREF( tmp_binop_right_74 );
    if ( tmp_assign_source_125 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 338;
        goto frame_exception_exit_1;
    }
    if (var_test2.object == NULL)
    {
        var_test2.object = tmp_assign_source_125;
    }
    else
    {
        PyObject *old = var_test2.object;
        var_test2.object = tmp_assign_source_125;
        Py_DECREF( old );
    }
    goto branch_end_13;
    branch_no_13:;
    tmp_assign_source_126 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_infty );

    if (unlikely( tmp_assign_source_126 == NULL ))
    {
        tmp_assign_source_126 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_infty );
    }

    if ( tmp_assign_source_126 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283743 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }

    if (var_test2.object == NULL)
    {
        var_test2.object = INCREASE_REFCOUNT( tmp_assign_source_126 );
    }
    else
    {
        PyObject *old = var_test2.object;
        var_test2.object = INCREASE_REFCOUNT( tmp_assign_source_126 );
        Py_DECREF( old );
    }
    branch_end_13:;
    tmp_binop_left_76 = const_int_pos_1;
    tmp_binop_right_76 = var_condA.object;

    tmp_assign_source_127 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_76, tmp_binop_right_76 );
    if ( tmp_assign_source_127 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    if (var_test3.object == NULL)
    {
        var_test3.object = tmp_assign_source_127;
    }
    else
    {
        PyObject *old = var_test3.object;
        var_test3.object = tmp_assign_source_127;
        Py_DECREF( old );
    }
    tmp_binop_left_77 = var_test1.object;

    tmp_binop_left_78 = const_int_pos_1;
    tmp_binop_left_80 = var_normA.object;

    tmp_binop_right_80 = var_normx.object;

    tmp_binop_left_79 = BINARY_OPERATION_MUL( tmp_binop_left_80, tmp_binop_right_80 );
    if ( tmp_binop_left_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_79 = var_normb.object;

    if ( tmp_binop_right_79 == NULL )
    {
        Py_DECREF( tmp_binop_left_79 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283692 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_78 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_79, tmp_binop_right_79 );
    Py_DECREF( tmp_binop_left_79 );
    if ( tmp_binop_right_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_77 = BINARY_OPERATION_ADD( tmp_binop_left_78, tmp_binop_right_78 );
    Py_DECREF( tmp_binop_right_78 );
    if ( tmp_binop_right_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_128 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_77, tmp_binop_right_77 );
    Py_DECREF( tmp_binop_right_77 );
    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    if (var_t1.object == NULL)
    {
        var_t1.object = tmp_assign_source_128;
    }
    else
    {
        PyObject *old = var_t1.object;
        var_t1.object = tmp_assign_source_128;
        Py_DECREF( old );
    }
    tmp_binop_left_81 = par_btol.object;

    if ( tmp_binop_left_81 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281810 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_84 = par_atol.object;

    if ( tmp_binop_left_84 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71913 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_84 = var_normA.object;

    tmp_binop_left_83 = BINARY_OPERATION_MUL( tmp_binop_left_84, tmp_binop_right_84 );
    if ( tmp_binop_left_83 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_83 = var_normx.object;

    tmp_binop_left_82 = BINARY_OPERATION_MUL( tmp_binop_left_83, tmp_binop_right_83 );
    Py_DECREF( tmp_binop_left_83 );
    if ( tmp_binop_left_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_82 = var_normb.object;

    if ( tmp_binop_right_82 == NULL )
    {
        Py_DECREF( tmp_binop_left_82 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283692 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_81 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_82, tmp_binop_right_82 );
    Py_DECREF( tmp_binop_left_82 );
    if ( tmp_binop_right_81 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_129 = BINARY_OPERATION_ADD( tmp_binop_left_81, tmp_binop_right_81 );
    Py_DECREF( tmp_binop_right_81 );
    if ( tmp_assign_source_129 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    if (var_rtol.object == NULL)
    {
        var_rtol.object = tmp_assign_source_129;
    }
    else
    {
        PyObject *old = var_rtol.object;
        var_rtol.object = tmp_assign_source_129;
        Py_DECREF( old );
    }
    tmp_compare_left_11 = var_itn.object;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = par_maxiter.object;

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 351;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assign_source_130 = const_int_pos_7;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_130 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_130 );
        Py_DECREF( old );
    }
    branch_no_14:;
    tmp_binop_left_85 = const_int_pos_1;
    tmp_binop_right_85 = var_test3.object;

    tmp_compare_left_12 = BINARY_OPERATION_ADD( tmp_binop_left_85, tmp_binop_right_85 );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_12 = const_int_pos_1;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_12 );
    if (tmp_cmp_LtE_1 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_assign_source_131 = const_int_pos_6;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_131 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_131 );
        Py_DECREF( old );
    }
    branch_no_15:;
    tmp_binop_left_86 = const_int_pos_1;
    tmp_binop_right_86 = var_test2.object;

    tmp_compare_left_13 = BINARY_OPERATION_ADD( tmp_binop_left_86, tmp_binop_right_86 );
    if ( tmp_compare_left_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_13 = const_int_pos_1;
    tmp_cmp_LtE_2 = RICH_COMPARE_BOOL_LE( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_LtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_13 );

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_13 );
    if (tmp_cmp_LtE_2 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assign_source_132 = const_int_pos_5;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_132 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_132 );
        Py_DECREF( old );
    }
    branch_no_16:;
    tmp_binop_left_87 = const_int_pos_1;
    tmp_binop_right_87 = var_t1.object;

    tmp_compare_left_14 = BINARY_OPERATION_ADD( tmp_binop_left_87, tmp_binop_right_87 );
    if ( tmp_compare_left_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_14 = const_int_pos_1;
    tmp_cmp_LtE_3 = RICH_COMPARE_BOOL_LE( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_LtE_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_14 );

        frame_function->f_lineno = 357;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_14 );
    if (tmp_cmp_LtE_3 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_133 = const_int_pos_4;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_133 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_133 );
        Py_DECREF( old );
    }
    branch_no_17:;
    tmp_compare_left_15 = var_test3.object;

    tmp_compare_right_15 = var_ctol.object;

    if ( tmp_compare_right_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283777 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_cmp_LtE_4 = RICH_COMPARE_BOOL_LE( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_LtE_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_4 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_134 = const_int_pos_3;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_134 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_134 );
        Py_DECREF( old );
    }
    branch_no_18:;
    tmp_compare_left_16 = var_test2.object;

    tmp_compare_right_16 = par_atol.object;

    if ( tmp_compare_right_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71913 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 364;
        goto frame_exception_exit_1;
    }

    tmp_cmp_LtE_5 = RICH_COMPARE_BOOL_LE( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_LtE_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_5 == 1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_assign_source_135 = const_int_pos_2;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_135 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_135 );
        Py_DECREF( old );
    }
    branch_no_19:;
    tmp_compare_left_17 = var_test1.object;

    tmp_compare_right_17 = var_rtol.object;

    tmp_cmp_LtE_6 = RICH_COMPARE_BOOL_LE( tmp_compare_left_17, tmp_compare_right_17 );
    if ( tmp_cmp_LtE_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_6 == 1)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_assign_source_136 = const_int_pos_1;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_136 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_136 );
        Py_DECREF( old );
    }
    branch_no_20:;
    tmp_cond_value_4 = par_show.object;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_n.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_7;
    }

    tmp_compexpr_right_1 = const_int_pos_40;
    tmp_assign_source_137 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_137 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_7;
    }
    if (tmp_or_1__value_7.object == NULL)
    {
        tmp_or_1__value_7.object = tmp_assign_source_137;
    }
    else
    {
        PyObject *old = tmp_or_1__value_7.object;
        tmp_or_1__value_7.object = tmp_assign_source_137;
        Py_DECREF( old );
    }
    tmp_cond_value_6 = tmp_or_1__value_7.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_7;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_5 = tmp_or_1__value_7.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_7.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_7.object );
        tmp_or_1__value_7.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_2 = var_itn.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }

    tmp_compexpr_right_2 = const_int_pos_10;
    tmp_assign_source_138 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }
    if (tmp_or_1__value_6.object == NULL)
    {
        tmp_or_1__value_6.object = tmp_assign_source_138;
    }
    else
    {
        PyObject *old = tmp_or_1__value_6.object;
        tmp_or_1__value_6.object = tmp_assign_source_138;
        Py_DECREF( old );
    }
    tmp_cond_value_7 = tmp_or_1__value_6.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_10;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_cond_value_5 = tmp_or_1__value_6.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_6.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_6.object );
        tmp_or_1__value_6.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_3 = var_itn.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_13;
    }

    tmp_binop_left_88 = par_maxiter.object;

    if ( tmp_binop_left_88 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_13;
    }

    tmp_binop_right_88 = const_int_pos_10;
    tmp_compexpr_right_3 = BINARY_OPERATION_SUB( tmp_binop_left_88, tmp_binop_right_88 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_13;
    }
    tmp_assign_source_139 = RICH_COMPARE_GE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_13;
    }
    if (tmp_or_1__value_5.object == NULL)
    {
        tmp_or_1__value_5.object = tmp_assign_source_139;
    }
    else
    {
        PyObject *old = tmp_or_1__value_5.object;
        tmp_or_1__value_5.object = tmp_assign_source_139;
        Py_DECREF( old );
    }
    tmp_cond_value_8 = tmp_or_1__value_5.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_13;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_cond_value_5 = tmp_or_1__value_5.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_5.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_5.object );
        tmp_or_1__value_5.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_binop_left_89 = var_itn.object;

    if ( tmp_binop_left_89 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_16;
    }

    tmp_binop_right_89 = const_int_pos_10;
    tmp_compexpr_left_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_89, tmp_binop_right_89 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_16;
    }
    tmp_compexpr_right_4 = const_int_0;
    tmp_assign_source_140 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_16;
    }
    if (tmp_or_1__value_4.object == NULL)
    {
        tmp_or_1__value_4.object = tmp_assign_source_140;
    }
    else
    {
        PyObject *old = tmp_or_1__value_4.object;
        tmp_or_1__value_4.object = tmp_assign_source_140;
        Py_DECREF( old );
    }
    tmp_cond_value_9 = tmp_or_1__value_4.object;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_16;
    }
    if (tmp_cond_truth_9 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_cond_value_5 = tmp_or_1__value_4.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_4.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_4.object );
        tmp_or_1__value_4.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_5 = var_test3.object;

    tmp_binop_left_90 = const_float_1_1;
    tmp_binop_right_90 = var_ctol.object;

    if ( tmp_binop_right_90 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283777 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_19;
    }

    tmp_compexpr_right_5 = BINARY_OPERATION_MUL( tmp_binop_left_90, tmp_binop_right_90 );
    if ( tmp_compexpr_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_19;
    }
    tmp_assign_source_141 = RICH_COMPARE_LE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_assign_source_141 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_19;
    }
    if (tmp_or_1__value_3.object == NULL)
    {
        tmp_or_1__value_3.object = tmp_assign_source_141;
    }
    else
    {
        PyObject *old = tmp_or_1__value_3.object;
        tmp_or_1__value_3.object = tmp_assign_source_141;
        Py_DECREF( old );
    }
    tmp_cond_value_10 = tmp_or_1__value_3.object;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_19;
    }
    if (tmp_cond_truth_10 == 1)
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_cond_value_5 = tmp_or_1__value_3.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_3.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_3.object );
        tmp_or_1__value_3.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_6 = var_test2.object;

    tmp_binop_left_91 = const_float_1_1;
    tmp_binop_right_91 = par_atol.object;

    if ( tmp_binop_right_91 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71913 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto try_finally_handler_22;
    }

    tmp_compexpr_right_6 = BINARY_OPERATION_MUL( tmp_binop_left_91, tmp_binop_right_91 );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_22;
    }
    tmp_assign_source_142 = RICH_COMPARE_LE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_assign_source_142 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_22;
    }
    if (tmp_or_1__value_2.object == NULL)
    {
        tmp_or_1__value_2.object = tmp_assign_source_142;
    }
    else
    {
        PyObject *old = tmp_or_1__value_2.object;
        tmp_or_1__value_2.object = tmp_assign_source_142;
        Py_DECREF( old );
    }
    tmp_cond_value_11 = tmp_or_1__value_2.object;

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_22;
    }
    if (tmp_cond_truth_11 == 1)
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_cond_value_5 = tmp_or_1__value_2.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_2.object );
        tmp_or_1__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_7 = var_test1.object;

    tmp_binop_left_92 = const_float_1_1;
    tmp_binop_right_92 = var_rtol.object;

    tmp_compexpr_right_7 = BINARY_OPERATION_MUL( tmp_binop_left_92, tmp_binop_right_92 );
    if ( tmp_compexpr_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_25;
    }
    tmp_assign_source_143 = RICH_COMPARE_LE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_right_7 );
    if ( tmp_assign_source_143 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_25;
    }
    if (tmp_or_1__value_1.object == NULL)
    {
        tmp_or_1__value_1.object = tmp_assign_source_143;
    }
    else
    {
        PyObject *old = tmp_or_1__value_1.object;
        tmp_or_1__value_1.object = tmp_assign_source_143;
        Py_DECREF( old );
    }
    tmp_cond_value_12 = tmp_or_1__value_1.object;

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_25;
    }
    if (tmp_cond_truth_12 == 1)
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_cond_value_5 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_8 = var_istop.object;

    if ( tmp_compexpr_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto try_finally_handler_26;
    }

    tmp_compexpr_right_8 = const_int_0;
    tmp_cond_value_5 = RICH_COMPARE_NE( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_26;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_26:;
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

        goto try_finally_handler_25;
    }

    goto finally_end_6;
    finally_end_6:;
    condexpr_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_25:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_24;
    }

    goto finally_end_7;
    finally_end_7:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_24:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_23;
    }

    goto finally_end_8;
    finally_end_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_23:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_22;
    }

    goto finally_end_9;
    finally_end_9:;
    condexpr_end_6:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_22:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_21;
    }

    goto finally_end_10;
    finally_end_10:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_20;
    }

    goto finally_end_11;
    finally_end_11:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_2.object );
    tmp_or_1__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto try_finally_handler_19;
    }

    goto finally_end_12;
    finally_end_12:;
    condexpr_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto try_finally_handler_18;
    }

    goto finally_end_13;
    finally_end_13:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto try_finally_handler_17;
    }

    goto finally_end_14;
    finally_end_14:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_3.object );
    tmp_or_1__value_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto try_finally_handler_16;
    }

    goto finally_end_15;
    finally_end_15:;
    condexpr_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto try_finally_handler_15;
    }

    goto finally_end_16;
    finally_end_16:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_17 != NULL )
    {
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;

        goto try_finally_handler_14;
    }

    goto finally_end_17;
    finally_end_17:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_4.object );
    tmp_or_1__value_4.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto try_finally_handler_13;
    }

    goto finally_end_18;
    finally_end_18:;
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto try_finally_handler_12;
    }

    goto finally_end_19;
    finally_end_19:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_20 != NULL )
    {
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;

        goto try_finally_handler_11;
    }

    goto finally_end_20;
    finally_end_20:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_5.object );
    tmp_or_1__value_5.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_21 != NULL )
    {
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;

        goto try_finally_handler_10;
    }

    goto finally_end_21;
    finally_end_21:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_22 != NULL )
    {
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;

        goto try_finally_handler_9;
    }

    goto finally_end_22;
    finally_end_22:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_23 != NULL )
    {
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;

        goto try_finally_handler_8;
    }

    goto finally_end_23;
    finally_end_23:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_6.object );
    tmp_or_1__value_6.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_24 != NULL )
    {
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;

        goto try_finally_handler_7;
    }

    goto finally_end_24;
    finally_end_24:;
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_25 != NULL )
    {
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;

        goto try_finally_handler_6;
    }

    goto finally_end_25;
    finally_end_25:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 372;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_compare_left_18 = var_pcount.object;

    if ( tmp_compare_left_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283827 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_6;
    }

    tmp_compare_right_18 = var_pfreq.object;

    if ( tmp_compare_right_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283879 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_6;
    }

    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_18, tmp_compare_right_18 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_GtE_2 == 1)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_assign_source_144 = const_int_0;
    if (var_pcount.object == NULL)
    {
        var_pcount.object = INCREASE_REFCOUNT( tmp_assign_source_144 );
    }
    else
    {
        PyObject *old = var_pcount.object;
        var_pcount.object = INCREASE_REFCOUNT( tmp_assign_source_144 );
        Py_DECREF( old );
    }
    tmp_called_39 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_46 = const_str_space;
    frame_function->f_lineno = 379;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_39, tmp_call_arg_element_46 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_called_40 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_47 = var_hdg1.object;

    if ( tmp_call_arg_element_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281860 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto try_finally_handler_6;
    }

    tmp_call_arg_element_48 = var_hdg2.object;

    if ( tmp_call_arg_element_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281910 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto try_finally_handler_6;
    }

    frame_function->f_lineno = 380;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_40, tmp_call_arg_element_47, tmp_call_arg_element_48 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_23:;
    tmp_binop_left_93 = var_pcount.object;

    if ( tmp_binop_left_93 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283827 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto try_finally_handler_6;
    }

    tmp_binop_right_93 = const_int_pos_1;
    tmp_assign_source_145 = BINARY_OPERATION_ADD( tmp_binop_left_93, tmp_binop_right_93 );
    if ( tmp_assign_source_145 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto try_finally_handler_6;
    }
    if (var_pcount.object == NULL)
    {
        var_pcount.object = tmp_assign_source_145;
    }
    else
    {
        PyObject *old = var_pcount.object;
        var_pcount.object = tmp_assign_source_145;
        Py_DECREF( old );
    }
    tmp_binop_left_94 = const_str_digest_6c397e5435d06204d5f5c55ee949d8b0;
    tmp_binop_right_94 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_itn.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_binop_right_94 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_binop_right_94, 0, tmp_tuple_element_8 );
    tmp_subscr_target_3 = var_x.object;

    if ( tmp_subscr_target_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_94 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_3 = const_int_0;
    tmp_tuple_element_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_94 );

        frame_function->f_lineno = 382;
        goto try_finally_handler_6;
    }
    PyTuple_SET_ITEM( tmp_binop_right_94, 1, tmp_tuple_element_8 );
    tmp_assign_source_146 = BINARY_OPERATION_REMAINDER( tmp_binop_left_94, tmp_binop_right_94 );
    Py_DECREF( tmp_binop_right_94 );
    if ( tmp_assign_source_146 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto try_finally_handler_6;
    }
    if (var_str1.object == NULL)
    {
        var_str1.object = tmp_assign_source_146;
    }
    else
    {
        PyObject *old = var_str1.object;
        var_str1.object = tmp_assign_source_146;
        Py_DECREF( old );
    }
    tmp_binop_left_95 = const_str_digest_fa530a0e8d3f64457f23afa7eab2a445;
    tmp_binop_right_95 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_normr.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_binop_right_95 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283930 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 383;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_binop_right_95, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_normar.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_binop_right_95 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283981 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 383;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_binop_right_95, 1, tmp_tuple_element_9 );
    tmp_assign_source_147 = BINARY_OPERATION_REMAINDER( tmp_binop_left_95, tmp_binop_right_95 );
    Py_DECREF( tmp_binop_right_95 );
    if ( tmp_assign_source_147 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 383;
        goto try_finally_handler_6;
    }
    if (var_str2.object == NULL)
    {
        var_str2.object = tmp_assign_source_147;
    }
    else
    {
        PyObject *old = var_str2.object;
        var_str2.object = tmp_assign_source_147;
        Py_DECREF( old );
    }
    tmp_binop_left_96 = const_str_digest_2fbcbe1ff2b6eb9a2fc5d60fa1620218;
    tmp_binop_right_96 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_test1.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_binop_right_96 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284033 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_binop_right_96, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_test2.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_binop_right_96 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284084 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_binop_right_96, 1, tmp_tuple_element_10 );
    tmp_assign_source_148 = BINARY_OPERATION_REMAINDER( tmp_binop_left_96, tmp_binop_right_96 );
    Py_DECREF( tmp_binop_right_96 );
    if ( tmp_assign_source_148 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto try_finally_handler_6;
    }
    if (var_str3.object == NULL)
    {
        var_str3.object = tmp_assign_source_148;
    }
    else
    {
        PyObject *old = var_str3.object;
        var_str3.object = tmp_assign_source_148;
        Py_DECREF( old );
    }
    tmp_binop_left_97 = const_str_digest_36264d55af3d1e10fded3478d4a06318;
    tmp_binop_right_97 = PyTuple_New( 2 );
    tmp_tuple_element_11 = var_normA.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_right_97 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284135 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_97, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_condA.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_right_97 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284186 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_97, 1, tmp_tuple_element_11 );
    tmp_assign_source_149 = BINARY_OPERATION_REMAINDER( tmp_binop_left_97, tmp_binop_right_97 );
    Py_DECREF( tmp_binop_right_97 );
    if ( tmp_assign_source_149 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto try_finally_handler_6;
    }
    if (var_str4.object == NULL)
    {
        var_str4.object = tmp_assign_source_149;
    }
    else
    {
        PyObject *old = var_str4.object;
        var_str4.object = tmp_assign_source_149;
        Py_DECREF( old );
    }
    tmp_called_41 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto try_finally_handler_6;
    }
    tmp_source_name_8 = const_str_empty;
    tmp_called_42 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    if ( tmp_called_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_50 = PyList_New( 4 );
    tmp_list_element_3 = var_str1.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_call_arg_element_50, 0, tmp_list_element_3 );
    tmp_list_element_3 = var_str2.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_call_arg_element_50, 1, tmp_list_element_3 );
    tmp_list_element_3 = var_str3.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_call_arg_element_50, 2, tmp_list_element_3 );
    tmp_list_element_3 = var_str4.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_call_arg_element_50, 3, tmp_list_element_3 );
    frame_function->f_lineno = 386;
    tmp_call_arg_element_49 = CALL_FUNCTION_WITH_ARGS1( tmp_called_42, tmp_call_arg_element_50 );
    Py_DECREF( tmp_called_42 );
    Py_DECREF( tmp_call_arg_element_50 );
    if ( tmp_call_arg_element_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 386;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_41, tmp_call_arg_element_49 );
    Py_DECREF( tmp_call_arg_element_49 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_22:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_7.object );
    tmp_or_1__value_7.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_26 != NULL )
    {
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;

        goto frame_exception_exit_1;
    }

    goto finally_end_26;
    finally_end_26:;
    branch_no_21:;
    tmp_compare_left_19 = var_istop.object;

    if ( tmp_compare_left_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_19 = const_int_0;
    tmp_cmp_Gt_7 = RICH_COMPARE_BOOL_GT( tmp_compare_left_19, tmp_compare_right_19 );
    if ( tmp_cmp_Gt_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_7 == 1)
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    goto loop_end_1;
    branch_no_24:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_cond_value_13 = par_show.object;

    if ( tmp_cond_value_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_13 == 1)
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_called_43 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_51 = const_str_space;
    frame_function->f_lineno = 394;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_43, tmp_call_arg_element_51 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_44 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_52 = const_str_digest_36c7c87d8f946f885844293f2d62d01e;
    frame_function->f_lineno = 395;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_44, tmp_call_arg_element_52 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_45 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_4 = var_msg.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = var_istop.object;

    if ( tmp_subscr_subscript_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_53 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_call_arg_element_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 396;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_45, tmp_call_arg_element_53 );
    Py_DECREF( tmp_call_arg_element_53 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_46 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_98 = const_str_digest_195e0acf11f65bc92d14c849bb9af303;
    tmp_binop_right_98 = PyTuple_New( 2 );
    tmp_tuple_element_12 = var_istop.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_binop_right_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_98, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = var_normr.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_binop_right_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283930 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_98, 1, tmp_tuple_element_12 );
    tmp_call_arg_element_54 = BINARY_OPERATION_REMAINDER( tmp_binop_left_98, tmp_binop_right_98 );
    Py_DECREF( tmp_binop_right_98 );
    if ( tmp_call_arg_element_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 397;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_46, tmp_call_arg_element_54 );
    Py_DECREF( tmp_call_arg_element_54 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_47 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_99 = const_str_digest_63b6dc8cb344101289d7af55f82a7575;
    tmp_binop_right_99 = PyTuple_New( 2 );
    tmp_tuple_element_13 = var_normA.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_binop_right_99 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284135 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_binop_right_99, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = var_normar.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_binop_right_99 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283981 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_binop_right_99, 1, tmp_tuple_element_13 );
    tmp_call_arg_element_55 = BINARY_OPERATION_REMAINDER( tmp_binop_left_99, tmp_binop_right_99 );
    Py_DECREF( tmp_binop_right_99 );
    if ( tmp_call_arg_element_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 398;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_47, tmp_call_arg_element_55 );
    Py_DECREF( tmp_call_arg_element_55 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_48 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_100 = const_str_digest_45d3be98a0007c28536bda6626a3fddf;
    tmp_binop_right_100 = PyTuple_New( 2 );
    tmp_tuple_element_14 = var_itn.object;

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_binop_right_100 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_binop_right_100, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = var_condA.object;

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_binop_right_100 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284186 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_binop_right_100, 1, tmp_tuple_element_14 );
    tmp_call_arg_element_56 = BINARY_OPERATION_REMAINDER( tmp_binop_left_100, tmp_binop_right_100 );
    Py_DECREF( tmp_binop_right_100 );
    if ( tmp_call_arg_element_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 399;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_48, tmp_call_arg_element_56 );
    Py_DECREF( tmp_call_arg_element_56 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_49 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_101 = const_str_digest_97e1b2373ad79ead2bfe5a6526a358b7;
    tmp_binop_right_101 = var_normx.object;

    if ( tmp_binop_right_101 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284237 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_57 = BINARY_OPERATION_REMAINDER( tmp_binop_left_101, tmp_binop_right_101 );
    if ( tmp_call_arg_element_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 400;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_49, tmp_call_arg_element_57 );
    Py_DECREF( tmp_call_arg_element_57 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_50 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_58 = var_str1.object;

    if ( tmp_call_arg_element_58 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284288 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_59 = var_str2.object;

    if ( tmp_call_arg_element_59 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284338 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 401;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_50, tmp_call_arg_element_58, tmp_call_arg_element_59 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_51 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_60 = var_str3.object;

    if ( tmp_call_arg_element_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284388 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_61 = var_str4.object;

    if ( tmp_call_arg_element_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284438 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 402;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_51, tmp_call_arg_element_60, tmp_call_arg_element_61 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_25:;
    tmp_return_value = PyTuple_New( 8 );
    tmp_tuple_element_15 = var_x.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_istop.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_itn.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_normr.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283930 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_normar.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283981 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_normA.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284135 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_condA.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284186 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_return_value, 6, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_normx.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284237 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_return_value, 7, tmp_tuple_element_15 );
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
    if ((var_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msg,
            var_msg.object
        );

    }
    if ((var_hdg1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hdg1,
            var_hdg1.object
        );

    }
    if ((var_hdg2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hdg2,
            var_hdg2.object
        );

    }
    if ((var_pfreq.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pfreq,
            var_pfreq.object
        );

    }
    if ((var_pcount.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pcount,
            var_pcount.object
        );

    }
    if ((var_m.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_m,
            var_m.object
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
    if ((var_minDim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_minDim,
            var_minDim.object
        );

    }
    if ((var_u.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_u,
            var_u.object
        );

    }
    if ((var_beta.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_beta,
            var_beta.object
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
    if ((var_alpha.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_alpha,
            var_alpha.object
        );

    }
    if ((var_itn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_itn,
            var_itn.object
        );

    }
    if ((var_zetabar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_zetabar,
            var_zetabar.object
        );

    }
    if ((var_alphabar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_alphabar,
            var_alphabar.object
        );

    }
    if ((var_rho.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rho,
            var_rho.object
        );

    }
    if ((var_rhobar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhobar,
            var_rhobar.object
        );

    }
    if ((var_cbar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cbar,
            var_cbar.object
        );

    }
    if ((var_sbar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sbar,
            var_sbar.object
        );

    }
    if ((var_h.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_h,
            var_h.object
        );

    }
    if ((var_hbar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hbar,
            var_hbar.object
        );

    }
    if ((var_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            var_x.object
        );

    }
    if ((var_betadd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_betadd,
            var_betadd.object
        );

    }
    if ((var_betad.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_betad,
            var_betad.object
        );

    }
    if ((var_rhodold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhodold,
            var_rhodold.object
        );

    }
    if ((var_tautildeold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tautildeold,
            var_tautildeold.object
        );

    }
    if ((var_thetatilde.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_thetatilde,
            var_thetatilde.object
        );

    }
    if ((var_zeta.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_zeta,
            var_zeta.object
        );

    }
    if ((var_d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_d,
            var_d.object
        );

    }
    if ((var_normA2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normA2,
            var_normA2.object
        );

    }
    if ((var_maxrbar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxrbar,
            var_maxrbar.object
        );

    }
    if ((var_minrbar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_minrbar,
            var_minrbar.object
        );

    }
    if ((var_normA.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normA,
            var_normA.object
        );

    }
    if ((var_condA.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_condA,
            var_condA.object
        );

    }
    if ((var_normx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normx,
            var_normx.object
        );

    }
    if ((var_normb.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normb,
            var_normb.object
        );

    }
    if ((var_istop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_istop,
            var_istop.object
        );

    }
    if ((var_ctol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ctol,
            var_ctol.object
        );

    }
    if ((var_normr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normr,
            var_normr.object
        );

    }
    if ((var_normar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_normar,
            var_normar.object
        );

    }
    if ((var_test1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_test1,
            var_test1.object
        );

    }
    if ((var_test2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_test2,
            var_test2.object
        );

    }
    if ((var_str1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_str1,
            var_str1.object
        );

    }
    if ((var_str2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_str2,
            var_str2.object
        );

    }
    if ((var_str3.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_str3,
            var_str3.object
        );

    }
    if ((var_chat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_chat,
            var_chat.object
        );

    }
    if ((var_shat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shat,
            var_shat.object
        );

    }
    if ((var_alphahat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_alphahat,
            var_alphahat.object
        );

    }
    if ((var_rhoold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhoold,
            var_rhoold.object
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
    if ((var_thetanew.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_thetanew,
            var_thetanew.object
        );

    }
    if ((var_rhobarold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhobarold,
            var_rhobarold.object
        );

    }
    if ((var_zetaold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_zetaold,
            var_zetaold.object
        );

    }
    if ((var_thetabar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_thetabar,
            var_thetabar.object
        );

    }
    if ((var_rhotemp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhotemp,
            var_rhotemp.object
        );

    }
    if ((var_betaacute.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_betaacute,
            var_betaacute.object
        );

    }
    if ((var_betacheck.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_betacheck,
            var_betacheck.object
        );

    }
    if ((var_betahat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_betahat,
            var_betahat.object
        );

    }
    if ((var_thetatildeold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_thetatildeold,
            var_thetatildeold.object
        );

    }
    if ((var_ctildeold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ctildeold,
            var_ctildeold.object
        );

    }
    if ((var_stildeold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stildeold,
            var_stildeold.object
        );

    }
    if ((var_rhotildeold.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhotildeold,
            var_rhotildeold.object
        );

    }
    if ((var_taud.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_taud,
            var_taud.object
        );

    }
    if ((var_test3.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_test3,
            var_test3.object
        );

    }
    if ((var_t1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t1,
            var_t1.object
        );

    }
    if ((var_rtol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rtol,
            var_rtol.object
        );

    }
    if ((var_str4.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_str4,
            var_str4.object
        );

    }
    if ((par_A.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A,
            par_A.object
        );

    }
    if ((par_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b,
            par_b.object
        );

    }
    if ((par_damp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_damp,
            par_damp.object
        );

    }
    if ((par_atol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_atol,
            par_atol.object
        );

    }
    if ((par_btol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_btol,
            par_btol.object
        );

    }
    if ((par_conlim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_conlim,
            par_conlim.object
        );

    }
    if ((par_maxiter.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxiter,
            par_maxiter.object
        );

    }
    if ((par_show.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_show,
            par_show.object
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
static PyObject *fparse_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_damp = NULL;
    PyObject *_python_par_atol = NULL;
    PyObject *_python_par_btol = NULL;
    PyObject *_python_par_conlim = NULL;
    PyObject *_python_par_maxiter = NULL;
    PyObject *_python_par_show = NULL;
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
                PyErr_Format( PyExc_TypeError, "lsmr() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_A == key )
            {
                assert( _python_par_A == NULL );
                _python_par_A = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_b == key )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_damp == key )
            {
                assert( _python_par_damp == NULL );
                _python_par_damp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_atol == key )
            {
                assert( _python_par_atol == NULL );
                _python_par_atol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_btol == key )
            {
                assert( _python_par_btol == NULL );
                _python_par_btol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_conlim == key )
            {
                assert( _python_par_conlim == NULL );
                _python_par_conlim = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxiter == key )
            {
                assert( _python_par_maxiter == NULL );
                _python_par_maxiter = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_show == key )
            {
                assert( _python_par_show == NULL );
                _python_par_show = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_A, key ) == 1 )
            {
                assert( _python_par_A == NULL );
                _python_par_A = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_b, key ) == 1 )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_damp, key ) == 1 )
            {
                assert( _python_par_damp == NULL );
                _python_par_damp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_atol, key ) == 1 )
            {
                assert( _python_par_atol == NULL );
                _python_par_atol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_btol, key ) == 1 )
            {
                assert( _python_par_btol == NULL );
                _python_par_btol = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_conlim, key ) == 1 )
            {
                assert( _python_par_conlim == NULL );
                _python_par_conlim = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxiter, key ) == 1 )
            {
                assert( _python_par_maxiter == NULL );
                _python_par_maxiter = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_show, key ) == 1 )
            {
                assert( _python_par_show == NULL );
                _python_par_show = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "lsmr() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 8 ))
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
         if (unlikely( _python_par_A != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_A = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_A == NULL )
    {
        if ( 0 + self->m_defaults_given >= 8  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 8 ) );
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_b = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 1 + self->m_defaults_given >= 8  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 8 ) );
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
         if (unlikely( _python_par_damp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_damp = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_damp == NULL )
    {
        if ( 2 + self->m_defaults_given >= 8  )
        {
            _python_par_damp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 8 ) );
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
         if (unlikely( _python_par_atol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_atol = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_atol == NULL )
    {
        if ( 3 + self->m_defaults_given >= 8  )
        {
            _python_par_atol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 8 ) );
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
         if (unlikely( _python_par_btol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_btol = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_btol == NULL )
    {
        if ( 4 + self->m_defaults_given >= 8  )
        {
            _python_par_btol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 8 ) );
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
    if (likely( 5 < args_given ))
    {
         if (unlikely( _python_par_conlim != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_conlim = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_conlim == NULL )
    {
        if ( 5 + self->m_defaults_given >= 8  )
        {
            _python_par_conlim = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 8 ) );
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
    if (likely( 6 < args_given ))
    {
         if (unlikely( _python_par_maxiter != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_maxiter = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_maxiter == NULL )
    {
        if ( 6 + self->m_defaults_given >= 8  )
        {
            _python_par_maxiter = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 8 ) );
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
    if (likely( 7 < args_given ))
    {
         if (unlikely( _python_par_show != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_show = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_show == NULL )
    {
        if ( 7 + self->m_defaults_given >= 8  )
        {
            _python_par_show = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 8 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_b == NULL || _python_par_damp == NULL || _python_par_atol == NULL || _python_par_btol == NULL || _python_par_conlim == NULL || _python_par_maxiter == NULL || _python_par_show == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_b, _python_par_damp, _python_par_atol, _python_par_btol, _python_par_conlim, _python_par_maxiter, _python_par_show };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( self, _python_par_A, _python_par_b, _python_par_damp, _python_par_atol, _python_par_btol, _python_par_conlim, _python_par_maxiter, _python_par_show );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_damp );
    Py_XDECREF( _python_par_atol );
    Py_XDECREF( _python_par_btol );
    Py_XDECREF( _python_par_conlim );
    Py_XDECREF( _python_par_maxiter );
    Py_XDECREF( _python_par_show );

    return NULL;
}

static PyObject *dparse_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr,
        dparse_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr,
        const_str_plain_lsmr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6fa76b41598113b09fae99f50cb9e4b7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$isolve$lsmr,
        const_str_digest_cf8372bc6a0bc9eee30e8480386f00d5
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$isolve$lsmr =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.isolve.lsmr",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$linalg$isolve$lsmr )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$lsmr );
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

    // puts( "in initscipy$sparse$linalg$isolve$lsmr" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$isolve$lsmr = Py_InitModule4(
        "scipy.sparse.linalg.isolve.lsmr",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$linalg$isolve$lsmr = PyModule_Create( &mdef_scipy$sparse$linalg$isolve$lsmr );
#endif

    moduledict_scipy$sparse$linalg$isolve$lsmr = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;

    assertObject( module_scipy$sparse$linalg$isolve$lsmr );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3f9336d66e0a5b0ce29010d4cddea306, module_scipy$sparse$linalg$isolve$lsmr );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$linalg$isolve$lsmr );

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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;

    // Module code.
    tmp_assign_source_1 = const_str_digest_6532c1b1b0d829a13a631b361f3cc40f;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d1b1266b99b8f1d8e8449fbe04c4f482;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_1b2b19f3c9905a75796c0a143c61f049, module_scipy$sparse$linalg$isolve$lsmr );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_lsmr_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_zeros_str_plain_infty_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_zeros );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_zeros_str_plain_infty_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_infty );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_infty, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_31c135a8754779dc25b4674933b86e04, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_norm_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_norm );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_math, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_sqrt_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_sqrt );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 26;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_1d20d9f4233ad3896104d20289f2168f, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_aslinearoperator_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_aslinearoperator );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_aslinearoperator, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsmr)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_lsqr, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain__sym_ortho_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__sym_ortho );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain__sym_ortho, tmp_assign_source_12 );
    tmp_defaults_1 = const_tuple_18c03fa7f03bff0465f97a9ca8ef8177_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_function_1_lsmr_of_module_scipy$sparse$linalg$isolve$lsmr( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsmr, (Nuitka_StringObject *)const_str_plain_lsmr, tmp_assign_source_13 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$lsmr );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
