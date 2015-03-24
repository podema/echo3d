// Generated code for Python source for module 'scipy.sparse.linalg.isolve.lsqr'
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

// The _module_scipy$sparse$linalg$isolve$lsqr is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$linalg$isolve$lsqr;
PyDictObject *moduledict_scipy$sparse$linalg$isolve$lsqr;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_0_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_space;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_40;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_z;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_cs;
static PyObject *const_str_plain_dk;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_sn;
extern PyObject *const_str_plain_t1;
extern PyObject *const_str_plain_t2;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_plain_cs1;
static PyObject *const_str_plain_cs2;
extern PyObject *const_str_plain_itn;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_phi;
extern PyObject *const_str_plain_psi;
extern PyObject *const_str_plain_rho;
extern PyObject *const_str_plain_rhs;
static PyObject *const_str_plain_sn1;
static PyObject *const_str_plain_sn2;
extern PyObject *const_str_plain_tau;
extern PyObject *const_str_plain_var;
static PyObject *const_str_plain___xm;
static PyObject *const_str_plain___xn;
extern PyObject *const_str_plain_alfa;
extern PyObject *const_str_plain_atol;
extern PyObject *const_str_plain_beta;
extern PyObject *const_str_plain_btol;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_ctol;
extern PyObject *const_str_plain_damp;
extern PyObject *const_str_plain_lsqr;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_prnt;
static PyObject *const_str_plain_r1sq;
static PyObject *const_str_plain_res1;
static PyObject *const_str_plain_res2;
extern PyObject *const_str_plain_rtol;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain_sign;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_str1;
extern PyObject *const_str_plain_str2;
extern PyObject *const_str_plain_str3;
extern PyObject *const_str_plain_str4;
static PyObject *const_str_plain_zbar;
static PyObject *const_str_plain_acond;
static PyObject *const_str_plain_anorm;
static PyObject *const_str_plain_bnorm;
extern PyObject *const_str_plain_delta;
extern PyObject *const_str_plain_gamma;
static PyObject *const_str_plain_head1;
static PyObject *const_str_plain_head2;
extern PyObject *const_str_plain_istop;
static PyObject *const_str_plain_nstop;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_rnorm;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_test1;
extern PyObject *const_str_plain_test2;
extern PyObject *const_str_plain_test3;
extern PyObject *const_str_plain_theta;
static PyObject *const_str_plain_xnorm;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain_arnorm;
extern PyObject *const_str_plain_conlim;
static PyObject *const_str_plain_dampsq;
static PyObject *const_str_plain_ddnorm;
static PyObject *const_str_plain_gambar;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_matvec;
extern PyObject *const_str_plain_phibar;
static PyObject *const_str_plain_r1norm;
static PyObject *const_str_plain_r2norm;
extern PyObject *const_str_plain_rhobar;
static PyObject *const_str_plain_xxnorm;
extern PyObject *const_float_100000000_0;
extern PyObject *const_float_1e_minus_08;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_rhobar1;
extern PyObject *const_str_plain_rmatvec;
extern PyObject *const_str_plain_squeeze;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_calc_var;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_iter_lim;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain__sym_ortho;
static PyObject *const_list_str_plain_lsqr_list;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_aslinearoperator;
extern PyObject *const_tuple_str_plain_sqrt_tuple;
extern PyObject *const_tuple_str_plain_a_str_plain_b_tuple;
extern PyObject *const_tuple_str_plain_aslinearoperator_tuple;
extern PyObject *const_str_digest_01520dad0ad7695222227316352e852e;
extern PyObject *const_str_digest_04e2a2d4ea0392d9893c9de4cb8e167d;
extern PyObject *const_str_digest_0a7fbb1df44ca7cb2126d00ba6030e60;
extern PyObject *const_str_digest_0e476d3fb6e7a11ef66372c6b0e22f04;
extern PyObject *const_str_digest_1d20d9f4233ad3896104d20289f2168f;
static PyObject *const_str_digest_227f9aa642ee969c850027d660df439a;
static PyObject *const_str_digest_2473b589a4895ca32ef0820d178f51f7;
static PyObject *const_str_digest_251a0dead275aea63e7d91a6e1b27007;
extern PyObject *const_str_digest_268f22a0a903f31d469e5d4e59615f7d;
static PyObject *const_str_digest_27e4199d7e0148265de0f7b48ca2c42b;
extern PyObject *const_str_digest_2fbcbe1ff2b6eb9a2fc5d60fa1620218;
static PyObject *const_str_digest_314db1cf6323d3df13fd12d423a2c146;
extern PyObject *const_str_digest_36264d55af3d1e10fded3478d4a06318;
static PyObject *const_str_digest_36ecfd0338c69327bff3e8ca8b897e58;
static PyObject *const_str_digest_4292e2104f75ed4e746676430945aeac;
static PyObject *const_str_digest_45bdf2e39f8aab7dc2288d33d2550780;
static PyObject *const_str_digest_4b89a809c15b2de7f586827513e8041a;
static PyObject *const_str_digest_628631f07321b22d8c176c200c855e1b;
extern PyObject *const_str_digest_6c397e5435d06204d5f5c55ee949d8b0;
static PyObject *const_str_digest_7830e9e751d5555d82695e38ef0d2830;
static PyObject *const_str_digest_8bca5ec3a83c0eadf7e97d7865bb3586;
static PyObject *const_str_digest_92aa1c125edb3fa32c5e375bb06fa21c;
static PyObject *const_str_digest_95b793657bca8d03c6548a1e4016e3bf;
extern PyObject *const_str_digest_a0b0a87ef6c463e754402651f411389d;
extern PyObject *const_str_digest_a2f55418001086f0a2b88016550eb712;
static PyObject *const_str_digest_a7e5b9382fca583ebaf2c2056b692831;
extern PyObject *const_str_digest_c9041d67772e452ddd374579d2005354;
static PyObject *const_str_digest_d324add691505bbfdf88358b8964f639;
extern PyObject *const_str_digest_dbc520cad128ed7325b829da03348c70;
extern PyObject *const_str_digest_fa530a0e8d3f64457f23afa7eab2a445;
static PyObject *const_str_digest_fc57bf312bacb435f48561e469b0d002;
extern PyObject *const_tuple_50d94261cf4a817af05dc80b3b17dda4_tuple;
static PyObject *const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple;
static PyObject *const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple;
static PyObject *const_tuple_ea7411feb160ba55d31dfdc3d2fd4f92_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_dk = UNSTREAM_STRING( &constant_bin[ 118400 ], 2, 1 );
    const_str_plain_cs1 = UNSTREAM_STRING( &constant_bin[ 2452330 ], 3, 1 );
    const_str_plain_cs2 = UNSTREAM_STRING( &constant_bin[ 284962 ], 3, 1 );
    const_str_plain_sn1 = UNSTREAM_STRING( &constant_bin[ 2452333 ], 3, 1 );
    const_str_plain_sn2 = UNSTREAM_STRING( &constant_bin[ 284913 ], 3, 1 );
    const_str_plain___xm = UNSTREAM_STRING( &constant_bin[ 2452336 ], 4, 1 );
    const_str_plain___xn = UNSTREAM_STRING( &constant_bin[ 2452340 ], 4, 1 );
    const_str_plain_r1sq = UNSTREAM_STRING( &constant_bin[ 2452344 ], 4, 1 );
    const_str_plain_res1 = UNSTREAM_STRING( &constant_bin[ 879764 ], 4, 1 );
    const_str_plain_res2 = UNSTREAM_STRING( &constant_bin[ 285063 ], 4, 1 );
    const_str_plain_zbar = UNSTREAM_STRING( &constant_bin[ 2452348 ], 4, 1 );
    const_str_plain_acond = UNSTREAM_STRING( &constant_bin[ 2452352 ], 5, 1 );
    const_str_plain_anorm = UNSTREAM_STRING( &constant_bin[ 284662 ], 5, 1 );
    const_str_plain_bnorm = UNSTREAM_STRING( &constant_bin[ 285214 ], 5, 1 );
    const_str_plain_head1 = UNSTREAM_STRING( &constant_bin[ 2452357 ], 5, 1 );
    const_str_plain_head2 = UNSTREAM_STRING( &constant_bin[ 2452362 ], 5, 1 );
    const_str_plain_nstop = UNSTREAM_STRING( &constant_bin[ 2452367 ], 5, 1 );
    const_str_plain_xnorm = UNSTREAM_STRING( &constant_bin[ 285012 ], 5, 1 );
    const_str_plain_arnorm = UNSTREAM_STRING( &constant_bin[ 2452372 ], 6, 1 );
    const_str_plain_dampsq = UNSTREAM_STRING( &constant_bin[ 285162 ], 6, 1 );
    const_str_plain_ddnorm = UNSTREAM_STRING( &constant_bin[ 284861 ], 6, 1 );
    const_str_plain_gambar = UNSTREAM_STRING( &constant_bin[ 2452378 ], 6, 1 );
    const_str_plain_r1norm = UNSTREAM_STRING( &constant_bin[ 2452384 ], 6, 1 );
    const_str_plain_r2norm = UNSTREAM_STRING( &constant_bin[ 2452390 ], 6, 1 );
    const_str_plain_xxnorm = UNSTREAM_STRING( &constant_bin[ 285011 ], 6, 1 );
    const_str_plain_rhobar1 = UNSTREAM_STRING( &constant_bin[ 2452396 ], 7, 1 );
    const_str_plain_calc_var = UNSTREAM_STRING( &constant_bin[ 284558 ], 8, 1 );
    const_str_plain_iter_lim = UNSTREAM_STRING( &constant_bin[ 284504 ], 8, 1 );
    const_list_str_plain_lsqr_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_lsqr_list, 0, const_str_plain_lsqr ); Py_INCREF( const_str_plain_lsqr );
    const_str_digest_227f9aa642ee969c850027d660df439a = UNSTREAM_STRING( &constant_bin[ 2447140 ], 43, 0 );
    const_str_digest_2473b589a4895ca32ef0820d178f51f7 = UNSTREAM_STRING( &constant_bin[ 2452403 ], 26, 0 );
    const_str_digest_251a0dead275aea63e7d91a6e1b27007 = UNSTREAM_STRING( &constant_bin[ 2452429 ], 38, 0 );
    const_str_digest_27e4199d7e0148265de0f7b48ca2c42b = UNSTREAM_STRING( &constant_bin[ 2452467 ], 31, 0 );
    const_str_digest_314db1cf6323d3df13fd12d423a2c146 = UNSTREAM_STRING( &constant_bin[ 2452498 ], 41, 0 );
    const_str_digest_36ecfd0338c69327bff3e8ca8b897e58 = UNSTREAM_STRING( &constant_bin[ 2452539 ], 592, 0 );
    const_str_digest_4292e2104f75ed4e746676430945aeac = UNSTREAM_STRING( &constant_bin[ 2453131 ], 41, 0 );
    const_str_digest_45bdf2e39f8aab7dc2288d33d2550780 = UNSTREAM_STRING( &constant_bin[ 2453172 ], 6523, 0 );
    const_str_digest_4b89a809c15b2de7f586827513e8041a = UNSTREAM_STRING( &constant_bin[ 2459695 ], 2163, 0 );
    const_str_digest_628631f07321b22d8c176c200c855e1b = UNSTREAM_STRING( &constant_bin[ 331287 ], 3, 0 );
    const_str_digest_7830e9e751d5555d82695e38ef0d2830 = UNSTREAM_STRING( &constant_bin[ 2461858 ], 28, 0 );
    const_str_digest_8bca5ec3a83c0eadf7e97d7865bb3586 = UNSTREAM_STRING( &constant_bin[ 2461886 ], 13, 0 );
    const_str_digest_92aa1c125edb3fa32c5e375bb06fa21c = UNSTREAM_STRING( &constant_bin[ 2461899 ], 26, 0 );
    const_str_digest_95b793657bca8d03c6548a1e4016e3bf = UNSTREAM_STRING( &constant_bin[ 2461925 ], 67, 0 );
    const_str_digest_a7e5b9382fca583ebaf2c2056b692831 = UNSTREAM_STRING( &constant_bin[ 2461992 ], 28, 0 );
    const_str_digest_d324add691505bbfdf88358b8964f639 = UNSTREAM_STRING( &constant_bin[ 2462020 ], 31, 0 );
    const_str_digest_fc57bf312bacb435f48561e469b0d002 = UNSTREAM_STRING( &constant_bin[ 2462051 ], 49, 0 );
    const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple, 0, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple, 1, const_float_1e_minus_08 ); Py_INCREF( const_float_1e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple, 2, const_float_1e_minus_08 ); Py_INCREF( const_float_1e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple, 3, const_float_100000000_0 ); Py_INCREF( const_float_100000000_0 );
    PyTuple_SET_ITEM( const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple, 5, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple, 6, Py_False ); Py_INCREF( Py_False );
    const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 2, const_str_plain_damp ); Py_INCREF( const_str_plain_damp );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 3, const_str_plain_atol ); Py_INCREF( const_str_plain_atol );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 4, const_str_plain_btol ); Py_INCREF( const_str_plain_btol );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 5, const_str_plain_conlim ); Py_INCREF( const_str_plain_conlim );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 6, const_str_plain_iter_lim ); Py_INCREF( const_str_plain_iter_lim );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 7, const_str_plain_show ); Py_INCREF( const_str_plain_show );
    PyTuple_SET_ITEM( const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 8, const_str_plain_calc_var ); Py_INCREF( const_str_plain_calc_var );
    const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple, 2, const_str_plain_tau ); Py_INCREF( const_str_plain_tau );
    PyTuple_SET_ITEM( const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple, 3, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple, 5, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_tuple_ea7411feb160ba55d31dfdc3d2fd4f92_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2462100 ], 659 );
}

// The module code objects.
static PyCodeObject *codeobj_3ea637aebc35757644ab1cfc0efd8e82;
static PyCodeObject *codeobj_7185805b434191093faddeaa12eb17f0;
static PyCodeObject *codeobj_becbcf7faf5ff88488b6e580e3d745fd;
static PyCodeObject *codeobj_4f8c35f0b2a04cc29bee0c7e3466b8e5;
static PyCodeObject *codeobj_15d69d24e5e3e205808aa9839ff25aad;

static void _initModuleCodeObjects(void)
{
    codeobj_3ea637aebc35757644ab1cfc0efd8e82 = MAKE_CODEOBJ( const_str_digest_95b793657bca8d03c6548a1e4016e3bf, const_str_plain__sym_ortho, 61, const_tuple_str_plain_a_str_plain_b_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7185805b434191093faddeaa12eb17f0 = MAKE_CODEOBJ( const_str_digest_95b793657bca8d03c6548a1e4016e3bf, const_str_plain__sym_ortho, 61, const_tuple_e1b490d1bc04c03cae9a06694a0dd984_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_becbcf7faf5ff88488b6e580e3d745fd = MAKE_CODEOBJ( const_str_digest_95b793657bca8d03c6548a1e4016e3bf, const_str_plain_lsqr, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4f8c35f0b2a04cc29bee0c7e3466b8e5 = MAKE_CODEOBJ( const_str_digest_95b793657bca8d03c6548a1e4016e3bf, const_str_plain_lsqr, 96, const_tuple_e10b4ba8da4457a2f0621d165fc3a9a1_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_15d69d24e5e3e205808aa9839ff25aad = MAKE_CODEOBJ( const_str_digest_95b793657bca8d03c6548a1e4016e3bf, const_str_plain_lsqr, 96, const_tuple_ea7411feb160ba55d31dfdc3d2fd4f92_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr(  );


static PyObject *MAKE_FUNCTION_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr( Nuitka_FunctionObject *self, PyObject *_python_par_a, PyObject *_python_par_b )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable var_tau;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_c;
    PyObjectLocalVariable var_r;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3ea637aebc35757644ab1cfc0efd8e82, module_scipy$sparse$linalg$isolve$lsqr );
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
    tmp_compare_left_1 = par_b.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sign );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 80;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 80;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_a.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sign );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_b.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 82;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_b.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 82;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_b.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 83;
    tmp_compare_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = par_a.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 83;
    tmp_compare_right_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_binop_left_1 = par_a.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = par_b.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    assert( var_tau.object == NULL );
    var_tau.object = tmp_assign_source_1;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sign );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = par_b.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 85;
    tmp_binop_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_3 = const_int_pos_1;
    tmp_binop_left_4 = var_tau.object;

    tmp_binop_right_4 = var_tau.object;

    tmp_binop_right_3 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 85;
    tmp_binop_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    assert( var_s.object == NULL );
    var_s.object = tmp_assign_source_2;

    tmp_binop_left_5 = var_s.object;

    tmp_binop_right_5 = var_tau.object;

    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    assert( var_c.object == NULL );
    var_c.object = tmp_assign_source_3;

    tmp_binop_left_6 = par_b.object;

    if ( tmp_binop_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_6 = var_s.object;

    tmp_assign_source_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    assert( var_r.object == NULL );
    var_r.object = tmp_assign_source_4;

    goto branch_end_3;
    branch_no_3:;
    tmp_binop_left_7 = par_b.object;

    if ( tmp_binop_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = par_a.object;

    if ( tmp_binop_right_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    assert( var_tau.object == NULL );
    var_tau.object = tmp_assign_source_5;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sign );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = par_a.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 90;
    tmp_binop_left_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_10 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_9 = const_int_pos_1;
    tmp_binop_left_10 = var_tau.object;

    tmp_binop_right_10 = var_tau.object;

    tmp_binop_right_9 = BINARY_OPERATION_MUL( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = BINARY_OPERATION_ADD( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 90;
    tmp_binop_right_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    assert( var_c.object == NULL );
    var_c.object = tmp_assign_source_6;

    tmp_binop_left_11 = var_c.object;

    tmp_binop_right_11 = var_tau.object;

    tmp_assign_source_7 = BINARY_OPERATION_MUL( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    assert( var_s.object == NULL );
    var_s.object = tmp_assign_source_7;

    tmp_binop_left_12 = par_a.object;

    if ( tmp_binop_left_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_12 = var_c.object;

    tmp_assign_source_8 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_12, tmp_binop_right_12 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_r.object == NULL );
    var_r.object = tmp_assign_source_8;

    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_3 = var_c.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_s.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_r.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
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
    if ((var_tau.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tau,
            var_tau.object
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
    if ((var_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c,
            var_c.object
        );

    }
    if ((var_r.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r,
            var_r.object
        );

    }
    if ((par_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            par_a.object
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
static PyObject *fparse_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
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
                PyErr_Format( PyExc_TypeError, "_sym_ortho() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_a == key )
            {
                assert( _python_par_a == NULL );
                _python_par_a = value;

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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_a, key ) == 1 )
            {
                assert( _python_par_a == NULL );
                _python_par_a = value;

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


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_sym_ortho() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_a == NULL || _python_par_b == NULL ))
    {
        PyObject *values[] = { _python_par_a, _python_par_b };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr( self, _python_par_a, _python_par_b );

error_exit:;

    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );

    return NULL;
}

static PyObject *dparse_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_b, PyObject *_python_par_damp, PyObject *_python_par_atol, PyObject *_python_par_btol, PyObject *_python_par_conlim, PyObject *_python_par_iter_lim, PyObject *_python_par_show, PyObject *_python_par_calc_var )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_damp; par_damp.object = _python_par_damp;
    PyObjectLocalVariable par_atol; par_atol.object = _python_par_atol;
    PyObjectLocalVariable par_btol; par_btol.object = _python_par_btol;
    PyObjectLocalVariable par_conlim; par_conlim.object = _python_par_conlim;
    PyObjectLocalVariable par_iter_lim; par_iter_lim.object = _python_par_iter_lim;
    PyObjectLocalVariable par_show; par_show.object = _python_par_show;
    PyObjectLocalVariable par_calc_var; par_calc_var.object = _python_par_calc_var;
    PyObjectLocalVariable var_m;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_var;
    PyObjectLocalVariable var_msg;
    PyObjectLocalVariable var_str1;
    PyObjectLocalVariable var_str2;
    PyObjectLocalVariable var_str3;
    PyObjectLocalVariable var_str4;
    PyObjectLocalVariable var_itn;
    PyObjectLocalVariable var_istop;
    PyObjectLocalVariable var_nstop;
    PyObjectLocalVariable var_ctol;
    PyObjectLocalVariable var_anorm;
    PyObjectLocalVariable var_acond;
    PyObjectLocalVariable var_dampsq;
    PyObjectLocalVariable var_ddnorm;
    PyObjectLocalVariable var_res2;
    PyObjectLocalVariable var_xnorm;
    PyObjectLocalVariable var_xxnorm;
    PyObjectLocalVariable var_z;
    PyObjectLocalVariable var_cs2;
    PyObjectLocalVariable var_sn2;
    PyObjectLocalVariable var___xm;
    PyObjectLocalVariable var___xn;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_u;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_alfa;
    PyObjectLocalVariable var_beta;
    PyObjectLocalVariable var_w;
    PyObjectLocalVariable var_rhobar;
    PyObjectLocalVariable var_phibar;
    PyObjectLocalVariable var_bnorm;
    PyObjectLocalVariable var_rnorm;
    PyObjectLocalVariable var_r1norm;
    PyObjectLocalVariable var_r2norm;
    PyObjectLocalVariable var_arnorm;
    PyObjectLocalVariable var_head1;
    PyObjectLocalVariable var_head2;
    PyObjectLocalVariable var_test1;
    PyObjectLocalVariable var_test2;
    PyObjectLocalVariable var_rhobar1;
    PyObjectLocalVariable var_cs1;
    PyObjectLocalVariable var_sn1;
    PyObjectLocalVariable var_psi;
    PyObjectLocalVariable var_cs;
    PyObjectLocalVariable var_sn;
    PyObjectLocalVariable var_rho;
    PyObjectLocalVariable var_theta;
    PyObjectLocalVariable var_phi;
    PyObjectLocalVariable var_tau;
    PyObjectLocalVariable var_t1;
    PyObjectLocalVariable var_t2;
    PyObjectLocalVariable var_dk;
    PyObjectLocalVariable var_delta;
    PyObjectLocalVariable var_gambar;
    PyObjectLocalVariable var_rhs;
    PyObjectLocalVariable var_zbar;
    PyObjectLocalVariable var_gamma;
    PyObjectLocalVariable var_res1;
    PyObjectLocalVariable var_r1sq;
    PyObjectLocalVariable var_test3;
    PyObjectLocalVariable var_rtol;
    PyObjectLocalVariable var_prnt;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__element_3;
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
    PyObject *tmp_binop_left_102;
    PyObject *tmp_binop_left_103;
    PyObject *tmp_binop_left_104;
    PyObject *tmp_binop_left_105;
    PyObject *tmp_binop_left_106;
    PyObject *tmp_binop_left_107;
    PyObject *tmp_binop_left_108;
    PyObject *tmp_binop_left_109;
    PyObject *tmp_binop_left_110;
    PyObject *tmp_binop_left_111;
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
    PyObject *tmp_binop_right_102;
    PyObject *tmp_binop_right_103;
    PyObject *tmp_binop_right_104;
    PyObject *tmp_binop_right_105;
    PyObject *tmp_binop_right_106;
    PyObject *tmp_binop_right_107;
    PyObject *tmp_binop_right_108;
    PyObject *tmp_binop_right_109;
    PyObject *tmp_binop_right_110;
    PyObject *tmp_binop_right_111;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_Gt_3;
    int tmp_cmp_Gt_4;
    int tmp_cmp_Gt_5;
    int tmp_cmp_Gt_6;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_LtE_1;
    int tmp_cmp_LtE_2;
    int tmp_cmp_LtE_3;
    int tmp_cmp_LtE_4;
    int tmp_cmp_LtE_5;
    int tmp_cmp_LtE_6;
    int tmp_cmp_LtE_7;
    int tmp_cmp_LtE_8;
    int tmp_cmp_LtE_9;
    int tmp_cmp_LtE_10;
    int tmp_cmp_LtE_11;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
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
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_left_23;
    PyObject *tmp_compare_left_24;
    PyObject *tmp_compare_left_25;
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
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    PyObject *tmp_compare_right_23;
    PyObject *tmp_compare_right_24;
    PyObject *tmp_compare_right_25;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_len_arg_1;
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
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
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
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unary_arg_3;
    PyObject *tmp_unary_arg_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4f8c35f0b2a04cc29bee0c7e3466b8e5, module_scipy$sparse$linalg$isolve$lsqr );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 269843 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 250;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
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

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_b.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_squeeze );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 252;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
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
    branch_no_1:;
    // Tried code
    tmp_source_name_3 = par_A.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto try_finally_handler_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
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


        frame_function->f_lineno = 254;
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


        frame_function->f_lineno = 254;
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

    assert( var_m.object == NULL );
    var_m.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2.object;

    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

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
    tmp_compare_left_2 = par_iter_lim.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284488 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_binop_left_1 = const_int_pos_2;
    tmp_binop_right_1 = var_n.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    if (par_iter_lim.object == NULL)
    {
        par_iter_lim.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = par_iter_lim.object;
        par_iter_lim.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_zeros );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_n.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 257;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    assert( var_var.object == NULL );
    var_var.object = tmp_assign_source_9;

    tmp_assign_source_10 = const_tuple_50d94261cf4a817af05dc80b3b17dda4_tuple;
    assert( var_msg.object == NULL );
    var_msg.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_cond_value_1 = par_show.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_space;
    frame_function->f_lineno = 269;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_digest_fc57bf312bacb435f48561e469b0d002;
    frame_function->f_lineno = 270;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_2 = const_str_digest_0e476d3fb6e7a11ef66372c6b0e22f04;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_m.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_n.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_1 );
    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    assert( var_str1.object == NULL );
    var_str1.object = tmp_assign_source_11;

    tmp_binop_left_3 = const_str_digest_27e4199d7e0148265de0f7b48ca2c42b;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_damp.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281708 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_calc_var.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284542 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_2 );
    tmp_assign_source_12 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }
    assert( var_str2.object == NULL );
    var_str2.object = tmp_assign_source_12;

    tmp_binop_left_4 = const_str_digest_227f9aa642ee969c850027d660df439a;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_atol.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71913 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_conlim.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281758 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_3 );
    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    assert( var_str3.object == NULL );
    var_str3.object = tmp_assign_source_13;

    tmp_binop_left_5 = const_str_digest_314db1cf6323d3df13fd12d423a2c146;
    tmp_binop_right_5 = PyTuple_New( 2 );
    tmp_tuple_element_4 = par_btol.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281810 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_iter_lim.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284488 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 1, tmp_tuple_element_4 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    assert( var_str4.object == NULL );
    var_str4.object = tmp_assign_source_14;

    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_str1.object;

    frame_function->f_lineno = 275;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_str2.object;

    frame_function->f_lineno = 276;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = var_str3.object;

    frame_function->f_lineno = 277;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = var_str4.object;

    frame_function->f_lineno = 278;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_assign_source_15 = const_int_0;
    assert( var_itn.object == NULL );
    var_itn.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_assign_source_16 = const_int_0;
    assert( var_istop.object == NULL );
    var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    tmp_assign_source_17 = const_int_0;
    assert( var_nstop.object == NULL );
    var_nstop.object = INCREASE_REFCOUNT( tmp_assign_source_17 );

    tmp_assign_source_18 = const_int_0;
    assert( var_ctol.object == NULL );
    var_ctol.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    tmp_compare_left_3 = par_conlim.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281758 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
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
    tmp_binop_left_6 = const_int_pos_1;
    tmp_binop_right_6 = par_conlim.object;

    if ( tmp_binop_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281758 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_19 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    assert( var_ctol.object != NULL );
    {
        PyObject *old = var_ctol.object;
        var_ctol.object = tmp_assign_source_19;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_assign_source_20 = const_int_0;
    assert( var_anorm.object == NULL );
    var_anorm.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

    tmp_assign_source_21 = const_int_0;
    assert( var_acond.object == NULL );
    var_acond.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    tmp_binop_left_7 = par_damp.object;

    if ( tmp_binop_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281708 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = const_int_pos_2;
    tmp_assign_source_22 = POWER_OPERATION( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    assert( var_dampsq.object == NULL );
    var_dampsq.object = tmp_assign_source_22;

    tmp_assign_source_23 = const_int_0;
    assert( var_ddnorm.object == NULL );
    var_ddnorm.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

    tmp_assign_source_24 = const_int_0;
    assert( var_res2.object == NULL );
    var_res2.object = INCREASE_REFCOUNT( tmp_assign_source_24 );

    tmp_assign_source_25 = const_int_0;
    assert( var_xnorm.object == NULL );
    var_xnorm.object = INCREASE_REFCOUNT( tmp_assign_source_25 );

    tmp_assign_source_26 = const_int_0;
    assert( var_xxnorm.object == NULL );
    var_xxnorm.object = INCREASE_REFCOUNT( tmp_assign_source_26 );

    tmp_assign_source_27 = const_int_0;
    assert( var_z.object == NULL );
    var_z.object = INCREASE_REFCOUNT( tmp_assign_source_27 );

    tmp_assign_source_28 = const_int_neg_1;
    assert( var_cs2.object == NULL );
    var_cs2.object = INCREASE_REFCOUNT( tmp_assign_source_28 );

    tmp_assign_source_29 = const_int_0;
    assert( var_sn2.object == NULL );
    var_sn2.object = INCREASE_REFCOUNT( tmp_assign_source_29 );

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_zeros );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = var_m.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13535 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 301;
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    assert( var___xm.object == NULL );
    var___xm.object = tmp_assign_source_30;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_zeros );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = var_n.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 302;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    assert( var___xn.object == NULL );
    var___xn.object = tmp_assign_source_31;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_zeros );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = var_n.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 303;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    assert( var_v.object == NULL );
    var_v.object = tmp_assign_source_32;

    tmp_assign_source_33 = par_b.object;

    if ( tmp_assign_source_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    assert( var_u.object == NULL );
    var_u.object = INCREASE_REFCOUNT( tmp_assign_source_33 );

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zeros );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_n.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 305;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    assert( var_x.object == NULL );
    var_x.object = tmp_assign_source_34;

    tmp_assign_source_35 = const_int_0;
    assert( var_alfa.object == NULL );
    var_alfa.object = INCREASE_REFCOUNT( tmp_assign_source_35 );

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_linalg );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_norm );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = var_u.object;

    frame_function->f_lineno = 307;
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    assert( var_beta.object == NULL );
    var_beta.object = tmp_assign_source_36;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_zeros );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = var_n.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 308;
    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    assert( var_w.object == NULL );
    var_w.object = tmp_assign_source_37;

    tmp_compare_left_4 = var_beta.object;

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Gt_3 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
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
    tmp_binop_left_9 = const_int_pos_1;
    tmp_binop_right_9 = var_beta.object;

    tmp_binop_left_8 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = var_u.object;

    tmp_assign_source_38 = BINARY_OPERATION_MUL( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    assert( var_u.object != NULL );
    {
        PyObject *old = var_u.object;
        var_u.object = tmp_assign_source_38;
        Py_DECREF( old );
    }

    tmp_source_name_12 = par_A.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_rmatvec );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = var_u.object;

    frame_function->f_lineno = 312;
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_39;
        Py_DECREF( old );
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_linalg );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_norm );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = var_v.object;

    frame_function->f_lineno = 313;
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_17, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    assert( var_alfa.object != NULL );
    {
        PyObject *old = var_alfa.object;
        var_alfa.object = tmp_assign_source_40;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_compare_left_5 = var_alfa.object;

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Gt_4 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_4 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_binop_left_11 = const_int_pos_1;
    tmp_binop_right_11 = var_alfa.object;

    tmp_binop_left_10 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_binop_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_10 = var_v.object;

    tmp_assign_source_41 = BINARY_OPERATION_MUL( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_left_10 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto frame_exception_exit_1;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_41;
        Py_DECREF( old );
    }

    tmp_source_name_15 = var_v.object;

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_copy );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 317;
    tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS( tmp_called_18 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }
    assert( var_w.object != NULL );
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_42;
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_assign_source_43 = var_alfa.object;

    assert( var_rhobar.object == NULL );
    var_rhobar.object = INCREASE_REFCOUNT( tmp_assign_source_43 );

    tmp_assign_source_44 = var_beta.object;

    assert( var_phibar.object == NULL );
    var_phibar.object = INCREASE_REFCOUNT( tmp_assign_source_44 );

    tmp_assign_source_45 = var_beta.object;

    assert( var_bnorm.object == NULL );
    var_bnorm.object = INCREASE_REFCOUNT( tmp_assign_source_45 );

    tmp_assign_source_46 = var_beta.object;

    assert( var_rnorm.object == NULL );
    var_rnorm.object = INCREASE_REFCOUNT( tmp_assign_source_46 );

    tmp_assign_source_47 = var_rnorm.object;

    assert( var_r1norm.object == NULL );
    var_r1norm.object = INCREASE_REFCOUNT( tmp_assign_source_47 );

    tmp_assign_source_48 = var_rnorm.object;

    assert( var_r2norm.object == NULL );
    var_r2norm.object = INCREASE_REFCOUNT( tmp_assign_source_48 );

    tmp_binop_left_12 = var_alfa.object;

    tmp_binop_right_12 = var_beta.object;

    tmp_assign_source_49 = BINARY_OPERATION_MUL( tmp_binop_left_12, tmp_binop_right_12 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 328;
        goto frame_exception_exit_1;
    }
    assert( var_arnorm.object == NULL );
    var_arnorm.object = tmp_assign_source_49;

    tmp_compare_left_6 = var_arnorm.object;

    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_19 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_1 = var_msg.object;

    tmp_subscr_subscript_1 = const_int_0;
    tmp_call_arg_element_17 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 330;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = PyTuple_New( 10 );
    tmp_tuple_element_5 = var_x.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_istop.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_itn.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_r1norm.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_r2norm.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_anorm.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_acond.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 6, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_arnorm.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 7, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_xnorm.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 8, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_var.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 9, tmp_tuple_element_5 );
    goto frame_return_exit_1;
    branch_no_7:;
    tmp_assign_source_50 = const_str_digest_4292e2104f75ed4e746676430945aeac;
    assert( var_head1.object == NULL );
    var_head1.object = INCREASE_REFCOUNT( tmp_assign_source_50 );

    tmp_assign_source_51 = const_str_digest_251a0dead275aea63e7d91a6e1b27007;
    assert( var_head2.object == NULL );
    var_head2.object = INCREASE_REFCOUNT( tmp_assign_source_51 );

    tmp_cond_value_2 = par_show.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_20 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_18 = const_str_space;
    frame_function->f_lineno = 337;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_21 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 338;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = var_head1.object;

    tmp_call_arg_element_20 = var_head2.object;

    frame_function->f_lineno = 338;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_21, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 338;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_52 = const_int_pos_1;
    assert( var_test1.object == NULL );
    var_test1.object = INCREASE_REFCOUNT( tmp_assign_source_52 );

    tmp_binop_left_13 = var_alfa.object;

    tmp_binop_right_13 = var_beta.object;

    tmp_assign_source_53 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }
    assert( var_test2.object == NULL );
    var_test2.object = tmp_assign_source_53;

    tmp_binop_left_14 = const_str_digest_6c397e5435d06204d5f5c55ee949d8b0;
    tmp_binop_right_14 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_itn.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_binop_right_14, 0, tmp_tuple_element_6 );
    tmp_subscr_target_2 = var_x.object;

    tmp_subscr_subscript_2 = const_int_0;
    tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_14 );

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_14, 1, tmp_tuple_element_6 );
    tmp_assign_source_54 = BINARY_OPERATION_REMAINDER( tmp_binop_left_14, tmp_binop_right_14 );
    Py_DECREF( tmp_binop_right_14 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    if (var_str1.object == NULL)
    {
        var_str1.object = tmp_assign_source_54;
    }
    else
    {
        PyObject *old = var_str1.object;
        var_str1.object = tmp_assign_source_54;
        Py_DECREF( old );
    }
    tmp_binop_left_15 = const_str_digest_fa530a0e8d3f64457f23afa7eab2a445;
    tmp_binop_right_15 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_r1norm.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_15, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_r2norm.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_15, 1, tmp_tuple_element_7 );
    tmp_assign_source_55 = BINARY_OPERATION_REMAINDER( tmp_binop_left_15, tmp_binop_right_15 );
    Py_DECREF( tmp_binop_right_15 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    if (var_str2.object == NULL)
    {
        var_str2.object = tmp_assign_source_55;
    }
    else
    {
        PyObject *old = var_str2.object;
        var_str2.object = tmp_assign_source_55;
        Py_DECREF( old );
    }
    tmp_binop_left_16 = const_str_digest_2fbcbe1ff2b6eb9a2fc5d60fa1620218;
    tmp_binop_right_16 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_test1.object;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_binop_right_16, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_test2.object;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_binop_right_16, 1, tmp_tuple_element_8 );
    tmp_assign_source_56 = BINARY_OPERATION_REMAINDER( tmp_binop_left_16, tmp_binop_right_16 );
    Py_DECREF( tmp_binop_right_16 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    if (var_str3.object == NULL)
    {
        var_str3.object = tmp_assign_source_56;
    }
    else
    {
        PyObject *old = var_str3.object;
        var_str3.object = tmp_assign_source_56;
        Py_DECREF( old );
    }
    tmp_called_22 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = var_str1.object;

    tmp_call_arg_element_22 = var_str2.object;

    tmp_call_arg_element_23 = var_str3.object;

    frame_function->f_lineno = 344;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_22, tmp_call_arg_element_21, tmp_call_arg_element_22, tmp_call_arg_element_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    loop_start_1:;
    tmp_compare_left_7 = var_itn.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = par_iter_lim.object;

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284488 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
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

        frame_function->f_lineno = 348;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_17 = const_int_pos_1;
    tmp_assign_source_57 = BINARY_OPERATION_ADD( tmp_binop_left_17, tmp_binop_right_17 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 348;
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
    tmp_source_name_16 = par_A.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_matvec );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_24 = var_v.object;

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 355;
    tmp_binop_left_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_binop_left_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_19 = var_alfa.object;

    if ( tmp_binop_left_19 == NULL )
    {
        Py_DECREF( tmp_binop_left_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284596 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_19 = var_u.object;

    if ( tmp_binop_right_19 == NULL )
    {
        Py_DECREF( tmp_binop_left_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 129038 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_18 = BINARY_OPERATION_MUL( tmp_binop_left_19, tmp_binop_right_19 );
    if ( tmp_binop_right_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_58 = BINARY_OPERATION_SUB( tmp_binop_left_18, tmp_binop_right_18 );
    Py_DECREF( tmp_binop_left_18 );
    Py_DECREF( tmp_binop_right_18 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
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
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_linalg );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_norm );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_25 = var_u.object;

    frame_function->f_lineno = 356;
    tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_24 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
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
    tmp_compare_left_8 = var_beta.object;

    tmp_compare_right_8 = const_int_0;
    tmp_cmp_Gt_5 = RICH_COMPARE_BOOL_GT( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Gt_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_5 == 1)
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


        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_20 = var_u.object;

    tmp_assign_source_60 = BINARY_OPERATION_MUL( tmp_binop_left_20, tmp_binop_right_20 );
    Py_DECREF( tmp_binop_left_20 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 359;
        goto frame_exception_exit_1;
    }
    assert( var_u.object != NULL );
    {
        PyObject *old = var_u.object;
        var_u.object = tmp_assign_source_60;
        Py_DECREF( old );
    }

    tmp_called_25 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_25 == NULL ))
    {
        tmp_called_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_25 = var_anorm.object;

    if ( tmp_binop_left_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284646 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_25 = const_int_pos_2;
    tmp_binop_left_24 = POWER_OPERATION( tmp_binop_left_25, tmp_binop_right_25 );
    if ( tmp_binop_left_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_26 = var_alfa.object;

    if ( tmp_binop_left_26 == NULL )
    {
        Py_DECREF( tmp_binop_left_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284596 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_26 = const_int_pos_2;
    tmp_binop_right_24 = POWER_OPERATION( tmp_binop_left_26, tmp_binop_right_26 );
    if ( tmp_binop_right_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_24 );

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_23 = BINARY_OPERATION_ADD( tmp_binop_left_24, tmp_binop_right_24 );
    Py_DECREF( tmp_binop_left_24 );
    Py_DECREF( tmp_binop_right_24 );
    if ( tmp_binop_left_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_27 = var_beta.object;

    tmp_binop_right_27 = const_int_pos_2;
    tmp_binop_right_23 = POWER_OPERATION( tmp_binop_left_27, tmp_binop_right_27 );
    if ( tmp_binop_right_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_23 );

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_22 = BINARY_OPERATION_ADD( tmp_binop_left_23, tmp_binop_right_23 );
    Py_DECREF( tmp_binop_left_23 );
    Py_DECREF( tmp_binop_right_23 );
    if ( tmp_binop_left_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_28 = par_damp.object;

    if ( tmp_binop_left_28 == NULL )
    {
        Py_DECREF( tmp_binop_left_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281708 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_28 = const_int_pos_2;
    tmp_binop_right_22 = POWER_OPERATION( tmp_binop_left_28, tmp_binop_right_28 );
    if ( tmp_binop_right_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_22 );

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_26 = BINARY_OPERATION_ADD( tmp_binop_left_22, tmp_binop_right_22 );
    Py_DECREF( tmp_binop_left_22 );
    Py_DECREF( tmp_binop_right_22 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 360;
    tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS1( tmp_called_25, tmp_call_arg_element_26 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    if (var_anorm.object == NULL)
    {
        var_anorm.object = tmp_assign_source_61;
    }
    else
    {
        PyObject *old = var_anorm.object;
        var_anorm.object = tmp_assign_source_61;
        Py_DECREF( old );
    }
    tmp_source_name_19 = par_A.object;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_rmatvec );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_27 = var_u.object;

    frame_function->f_lineno = 361;
    tmp_binop_left_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_26 );
    if ( tmp_binop_left_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_30 = var_beta.object;

    tmp_binop_right_30 = var_v.object;

    if ( tmp_binop_right_30 == NULL )
    {
        Py_DECREF( tmp_binop_left_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_29 = BINARY_OPERATION_MUL( tmp_binop_left_30, tmp_binop_right_30 );
    if ( tmp_binop_right_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_29 );

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_62 = BINARY_OPERATION_SUB( tmp_binop_left_29, tmp_binop_right_29 );
    Py_DECREF( tmp_binop_left_29 );
    Py_DECREF( tmp_binop_right_29 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    if (var_v.object == NULL)
    {
        var_v.object = tmp_assign_source_62;
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_62;
        Py_DECREF( old );
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_linalg );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_norm );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_28 = var_v.object;

    frame_function->f_lineno = 362;
    tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_27, tmp_call_arg_element_28 );
    Py_DECREF( tmp_called_27 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    if (var_alfa.object == NULL)
    {
        var_alfa.object = tmp_assign_source_63;
    }
    else
    {
        PyObject *old = var_alfa.object;
        var_alfa.object = tmp_assign_source_63;
        Py_DECREF( old );
    }
    tmp_compare_left_9 = var_alfa.object;

    tmp_compare_right_9 = const_int_0;
    tmp_cmp_Gt_6 = RICH_COMPARE_BOOL_GT( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Gt_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_6 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_binop_left_32 = const_int_pos_1;
    tmp_binop_right_32 = var_alfa.object;

    tmp_binop_left_31 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_32, tmp_binop_right_32 );
    if ( tmp_binop_left_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_31 = var_v.object;

    tmp_assign_source_64 = BINARY_OPERATION_MUL( tmp_binop_left_31, tmp_binop_right_31 );
    Py_DECREF( tmp_binop_left_31 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto frame_exception_exit_1;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_64;
        Py_DECREF( old );
    }

    branch_no_11:;
    branch_no_10:;
    tmp_called_28 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_28 == NULL ))
    {
        tmp_called_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_34 = var_rhobar.object;

    if ( tmp_binop_left_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282205 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_34 = const_int_pos_2;
    tmp_binop_left_33 = POWER_OPERATION( tmp_binop_left_34, tmp_binop_right_34 );
    if ( tmp_binop_left_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_35 = par_damp.object;

    if ( tmp_binop_left_35 == NULL )
    {
        Py_DECREF( tmp_binop_left_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281708 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_35 = const_int_pos_2;
    tmp_binop_right_33 = POWER_OPERATION( tmp_binop_left_35, tmp_binop_right_35 );
    if ( tmp_binop_right_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_33 );

        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_29 = BINARY_OPERATION_ADD( tmp_binop_left_33, tmp_binop_right_33 );
    Py_DECREF( tmp_binop_left_33 );
    Py_DECREF( tmp_binop_right_33 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 368;
    tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_29 );
    Py_DECREF( tmp_call_arg_element_29 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    if (var_rhobar1.object == NULL)
    {
        var_rhobar1.object = tmp_assign_source_65;
    }
    else
    {
        PyObject *old = var_rhobar1.object;
        var_rhobar1.object = tmp_assign_source_65;
        Py_DECREF( old );
    }
    tmp_binop_left_36 = var_rhobar.object;

    if ( tmp_binop_left_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282205 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_36 = var_rhobar1.object;

    tmp_assign_source_66 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_36, tmp_binop_right_36 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto frame_exception_exit_1;
    }
    if (var_cs1.object == NULL)
    {
        var_cs1.object = tmp_assign_source_66;
    }
    else
    {
        PyObject *old = var_cs1.object;
        var_cs1.object = tmp_assign_source_66;
        Py_DECREF( old );
    }
    tmp_binop_left_37 = par_damp.object;

    if ( tmp_binop_left_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281708 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_37 = var_rhobar1.object;

    tmp_assign_source_67 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_37, tmp_binop_right_37 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }
    if (var_sn1.object == NULL)
    {
        var_sn1.object = tmp_assign_source_67;
    }
    else
    {
        PyObject *old = var_sn1.object;
        var_sn1.object = tmp_assign_source_67;
        Py_DECREF( old );
    }
    tmp_binop_left_38 = var_sn1.object;

    tmp_binop_right_38 = var_phibar.object;

    if ( tmp_binop_right_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284697 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_68 = BINARY_OPERATION_MUL( tmp_binop_left_38, tmp_binop_right_38 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto frame_exception_exit_1;
    }
    if (var_psi.object == NULL)
    {
        var_psi.object = tmp_assign_source_68;
    }
    else
    {
        PyObject *old = var_psi.object;
        var_psi.object = tmp_assign_source_68;
        Py_DECREF( old );
    }
    tmp_binop_left_39 = var_cs1.object;

    tmp_binop_right_39 = var_phibar.object;

    if ( tmp_binop_right_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284697 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_69 = BINARY_OPERATION_MUL( tmp_binop_left_39, tmp_binop_right_39 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    if (var_phibar.object == NULL)
    {
        var_phibar.object = tmp_assign_source_69;
    }
    else
    {
        PyObject *old = var_phibar.object;
        var_phibar.object = tmp_assign_source_69;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_29 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain__sym_ortho );

    if (unlikely( tmp_called_29 == NULL ))
    {
        tmp_called_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sym_ortho );
    }

    if ( tmp_called_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282009 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_30 = var_rhobar1.object;

    tmp_call_arg_element_31 = var_beta.object;

    frame_function->f_lineno = 376;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_29, tmp_call_arg_element_30, tmp_call_arg_element_31 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_2;
    }
    tmp_assign_source_70 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_2__source_iter.object == NULL)
    {
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_70;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter.object;
        tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_70;
        Py_DECREF( old );
    }
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_71 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_71 == NULL )
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


        frame_function->f_lineno = 376;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_2__element_1.object == NULL)
    {
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_71;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_1.object;
        tmp_tuple_unpack_2__element_1.object = tmp_assign_source_71;
        Py_DECREF( old );
    }
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_72 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_72 == NULL )
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


        frame_function->f_lineno = 376;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_2__element_2.object == NULL)
    {
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_72;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_2.object;
        tmp_tuple_unpack_2__element_2.object = tmp_assign_source_72;
        Py_DECREF( old );
    }
    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_73 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 2 );
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


        frame_function->f_lineno = 376;
        goto try_finally_handler_2;
    }
    if (tmp_tuple_unpack_2__element_3.object == NULL)
    {
        tmp_tuple_unpack_2__element_3.object = tmp_assign_source_73;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_2__element_3.object;
        tmp_tuple_unpack_2__element_3.object = tmp_assign_source_73;
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
    tmp_assign_source_74 = tmp_tuple_unpack_2__element_1.object;

    if (var_cs.object == NULL)
    {
        var_cs.object = INCREASE_REFCOUNT( tmp_assign_source_74 );
    }
    else
    {
        PyObject *old = var_cs.object;
        var_cs.object = INCREASE_REFCOUNT( tmp_assign_source_74 );
        Py_DECREF( old );
    }
    tmp_assign_source_75 = tmp_tuple_unpack_2__element_2.object;

    if (var_sn.object == NULL)
    {
        var_sn.object = INCREASE_REFCOUNT( tmp_assign_source_75 );
    }
    else
    {
        PyObject *old = var_sn.object;
        var_sn.object = INCREASE_REFCOUNT( tmp_assign_source_75 );
        Py_DECREF( old );
    }
    tmp_assign_source_76 = tmp_tuple_unpack_2__element_3.object;

    if (var_rho.object == NULL)
    {
        var_rho.object = INCREASE_REFCOUNT( tmp_assign_source_76 );
    }
    else
    {
        PyObject *old = var_rho.object;
        var_rho.object = INCREASE_REFCOUNT( tmp_assign_source_76 );
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
    tmp_binop_left_40 = var_sn.object;

    if ( tmp_binop_left_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284749 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 378;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_40 = var_alfa.object;

    if ( tmp_binop_right_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284596 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 378;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_77 = BINARY_OPERATION_MUL( tmp_binop_left_40, tmp_binop_right_40 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto frame_exception_exit_1;
    }
    if (var_theta.object == NULL)
    {
        var_theta.object = tmp_assign_source_77;
    }
    else
    {
        PyObject *old = var_theta.object;
        var_theta.object = tmp_assign_source_77;
        Py_DECREF( old );
    }
    tmp_unary_arg_1 = var_cs.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284797 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_41 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_binop_left_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_41 = var_alfa.object;

    if ( tmp_binop_right_41 == NULL )
    {
        Py_DECREF( tmp_binop_left_41 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284596 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 379;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_78 = BINARY_OPERATION_MUL( tmp_binop_left_41, tmp_binop_right_41 );
    Py_DECREF( tmp_binop_left_41 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 379;
        goto frame_exception_exit_1;
    }
    if (var_rhobar.object == NULL)
    {
        var_rhobar.object = tmp_assign_source_78;
    }
    else
    {
        PyObject *old = var_rhobar.object;
        var_rhobar.object = tmp_assign_source_78;
        Py_DECREF( old );
    }
    tmp_binop_left_42 = var_cs.object;

    if ( tmp_binop_left_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284797 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_42 = var_phibar.object;

    if ( tmp_binop_right_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284697 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_79 = BINARY_OPERATION_MUL( tmp_binop_left_42, tmp_binop_right_42 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    if (var_phi.object == NULL)
    {
        var_phi.object = tmp_assign_source_79;
    }
    else
    {
        PyObject *old = var_phi.object;
        var_phi.object = tmp_assign_source_79;
        Py_DECREF( old );
    }
    tmp_binop_left_43 = var_sn.object;

    if ( tmp_binop_left_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284749 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_43 = var_phibar.object;

    if ( tmp_binop_right_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284697 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_80 = BINARY_OPERATION_MUL( tmp_binop_left_43, tmp_binop_right_43 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    if (var_phibar.object == NULL)
    {
        var_phibar.object = tmp_assign_source_80;
    }
    else
    {
        PyObject *old = var_phibar.object;
        var_phibar.object = tmp_assign_source_80;
        Py_DECREF( old );
    }
    tmp_binop_left_44 = var_sn.object;

    if ( tmp_binop_left_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284749 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_44 = var_phi.object;

    tmp_assign_source_81 = BINARY_OPERATION_MUL( tmp_binop_left_44, tmp_binop_right_44 );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }
    if (var_tau.object == NULL)
    {
        var_tau.object = tmp_assign_source_81;
    }
    else
    {
        PyObject *old = var_tau.object;
        var_tau.object = tmp_assign_source_81;
        Py_DECREF( old );
    }
    tmp_binop_left_45 = var_phi.object;

    tmp_binop_right_45 = var_rho.object;

    if ( tmp_binop_right_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 385;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_82 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_45, tmp_binop_right_45 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto frame_exception_exit_1;
    }
    if (var_t1.object == NULL)
    {
        var_t1.object = tmp_assign_source_82;
    }
    else
    {
        PyObject *old = var_t1.object;
        var_t1.object = tmp_assign_source_82;
        Py_DECREF( old );
    }
    tmp_unary_arg_2 = var_theta.object;

    tmp_binop_left_46 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_2 );
    if ( tmp_binop_left_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_46 = var_rho.object;

    if ( tmp_binop_right_46 == NULL )
    {
        Py_DECREF( tmp_binop_left_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_83 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_46, tmp_binop_right_46 );
    Py_DECREF( tmp_binop_left_46 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    if (var_t2.object == NULL)
    {
        var_t2.object = tmp_assign_source_83;
    }
    else
    {
        PyObject *old = var_t2.object;
        var_t2.object = tmp_assign_source_83;
        Py_DECREF( old );
    }
    tmp_binop_left_48 = const_int_pos_1;
    tmp_binop_right_48 = var_rho.object;

    if ( tmp_binop_right_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_47 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_48, tmp_binop_right_48 );
    if ( tmp_binop_left_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_47 = var_w.object;

    if ( tmp_binop_right_47 == NULL )
    {
        Py_DECREF( tmp_binop_left_47 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_84 = BINARY_OPERATION_MUL( tmp_binop_left_47, tmp_binop_right_47 );
    Py_DECREF( tmp_binop_left_47 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    if (var_dk.object == NULL)
    {
        var_dk.object = tmp_assign_source_84;
    }
    else
    {
        PyObject *old = var_dk.object;
        var_dk.object = tmp_assign_source_84;
        Py_DECREF( old );
    }
    tmp_binop_left_49 = var_x.object;

    if ( tmp_binop_left_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_50 = var_t1.object;

    tmp_binop_right_50 = var_w.object;

    if ( tmp_binop_right_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_49 = BINARY_OPERATION_MUL( tmp_binop_left_50, tmp_binop_right_50 );
    if ( tmp_binop_right_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_85 = BINARY_OPERATION_ADD( tmp_binop_left_49, tmp_binop_right_49 );
    Py_DECREF( tmp_binop_right_49 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    if (var_x.object == NULL)
    {
        var_x.object = tmp_assign_source_85;
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = tmp_assign_source_85;
        Py_DECREF( old );
    }
    tmp_binop_left_51 = var_v.object;

    if ( tmp_binop_left_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_52 = var_t2.object;

    tmp_binop_right_52 = var_w.object;

    if ( tmp_binop_right_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_51 = BINARY_OPERATION_MUL( tmp_binop_left_52, tmp_binop_right_52 );
    if ( tmp_binop_right_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_86 = BINARY_OPERATION_ADD( tmp_binop_left_51, tmp_binop_right_51 );
    Py_DECREF( tmp_binop_right_51 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    if (var_w.object == NULL)
    {
        var_w.object = tmp_assign_source_86;
    }
    else
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_86;
        Py_DECREF( old );
    }
    tmp_binop_left_53 = var_ddnorm.object;

    if ( tmp_binop_left_53 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284845 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }

    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }

    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_linalg );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_called_30 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_norm );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_32 = var_dk.object;

    frame_function->f_lineno = 391;
    tmp_binop_left_54 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_32 );
    Py_DECREF( tmp_called_30 );
    if ( tmp_binop_left_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_54 = const_int_pos_2;
    tmp_binop_right_53 = POWER_OPERATION( tmp_binop_left_54, tmp_binop_right_54 );
    Py_DECREF( tmp_binop_left_54 );
    if ( tmp_binop_right_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_87 = BINARY_OPERATION_ADD( tmp_binop_left_53, tmp_binop_right_53 );
    Py_DECREF( tmp_binop_right_53 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    if (var_ddnorm.object == NULL)
    {
        var_ddnorm.object = tmp_assign_source_87;
    }
    else
    {
        PyObject *old = var_ddnorm.object;
        var_ddnorm.object = tmp_assign_source_87;
        Py_DECREF( old );
    }
    tmp_cond_value_3 = par_calc_var.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284542 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_binop_left_55 = var_var.object;

    if ( tmp_binop_left_55 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_56 = var_dk.object;

    tmp_binop_right_56 = const_int_pos_2;
    tmp_binop_right_55 = POWER_OPERATION( tmp_binop_left_56, tmp_binop_right_56 );
    if ( tmp_binop_right_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_88 = BINARY_OPERATION_ADD( tmp_binop_left_55, tmp_binop_right_55 );
    Py_DECREF( tmp_binop_right_55 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto frame_exception_exit_1;
    }
    if (var_var.object == NULL)
    {
        var_var.object = tmp_assign_source_88;
    }
    else
    {
        PyObject *old = var_var.object;
        var_var.object = tmp_assign_source_88;
        Py_DECREF( old );
    }
    branch_no_12:;
    tmp_binop_left_57 = var_sn2.object;

    if ( tmp_binop_left_57 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284897 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_57 = var_rho.object;

    if ( tmp_binop_right_57 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_89 = BINARY_OPERATION_MUL( tmp_binop_left_57, tmp_binop_right_57 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    if (var_delta.object == NULL)
    {
        var_delta.object = tmp_assign_source_89;
    }
    else
    {
        PyObject *old = var_delta.object;
        var_delta.object = tmp_assign_source_89;
        Py_DECREF( old );
    }
    tmp_unary_arg_3 = var_cs2.object;

    if ( tmp_unary_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284946 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_58 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_3 );
    if ( tmp_binop_left_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_58 = var_rho.object;

    if ( tmp_binop_right_58 == NULL )
    {
        Py_DECREF( tmp_binop_left_58 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 282102 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_90 = BINARY_OPERATION_MUL( tmp_binop_left_58, tmp_binop_right_58 );
    Py_DECREF( tmp_binop_left_58 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    if (var_gambar.object == NULL)
    {
        var_gambar.object = tmp_assign_source_90;
    }
    else
    {
        PyObject *old = var_gambar.object;
        var_gambar.object = tmp_assign_source_90;
        Py_DECREF( old );
    }
    tmp_binop_left_59 = var_phi.object;

    tmp_binop_left_60 = var_delta.object;

    tmp_binop_right_60 = var_z.object;

    if ( tmp_binop_right_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 66917 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_59 = BINARY_OPERATION_MUL( tmp_binop_left_60, tmp_binop_right_60 );
    if ( tmp_binop_right_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_91 = BINARY_OPERATION_SUB( tmp_binop_left_59, tmp_binop_right_59 );
    Py_DECREF( tmp_binop_right_59 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    if (var_rhs.object == NULL)
    {
        var_rhs.object = tmp_assign_source_91;
    }
    else
    {
        PyObject *old = var_rhs.object;
        var_rhs.object = tmp_assign_source_91;
        Py_DECREF( old );
    }
    tmp_binop_left_61 = var_rhs.object;

    tmp_binop_right_61 = var_gambar.object;

    tmp_assign_source_92 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_61, tmp_binop_right_61 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    if (var_zbar.object == NULL)
    {
        var_zbar.object = tmp_assign_source_92;
    }
    else
    {
        PyObject *old = var_zbar.object;
        var_zbar.object = tmp_assign_source_92;
        Py_DECREF( old );
    }
    tmp_called_31 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_31 == NULL ))
    {
        tmp_called_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_62 = var_xxnorm.object;

    if ( tmp_binop_left_62 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284995 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_63 = var_zbar.object;

    tmp_binop_right_63 = const_int_pos_2;
    tmp_binop_right_62 = POWER_OPERATION( tmp_binop_left_63, tmp_binop_right_63 );
    if ( tmp_binop_right_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_33 = BINARY_OPERATION_ADD( tmp_binop_left_62, tmp_binop_right_62 );
    Py_DECREF( tmp_binop_right_62 );
    if ( tmp_call_arg_element_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 403;
    tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_33 );
    Py_DECREF( tmp_call_arg_element_33 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }
    if (var_xnorm.object == NULL)
    {
        var_xnorm.object = tmp_assign_source_93;
    }
    else
    {
        PyObject *old = var_xnorm.object;
        var_xnorm.object = tmp_assign_source_93;
        Py_DECREF( old );
    }
    tmp_called_32 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_32 == NULL ))
    {
        tmp_called_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_65 = var_gambar.object;

    tmp_binop_right_65 = const_int_pos_2;
    tmp_binop_left_64 = POWER_OPERATION( tmp_binop_left_65, tmp_binop_right_65 );
    if ( tmp_binop_left_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_66 = var_theta.object;

    tmp_binop_right_66 = const_int_pos_2;
    tmp_binop_right_64 = POWER_OPERATION( tmp_binop_left_66, tmp_binop_right_66 );
    if ( tmp_binop_right_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_64 );

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = BINARY_OPERATION_ADD( tmp_binop_left_64, tmp_binop_right_64 );
    Py_DECREF( tmp_binop_left_64 );
    Py_DECREF( tmp_binop_right_64 );
    if ( tmp_call_arg_element_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 404;
    tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS1( tmp_called_32, tmp_call_arg_element_34 );
    Py_DECREF( tmp_call_arg_element_34 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    if (var_gamma.object == NULL)
    {
        var_gamma.object = tmp_assign_source_94;
    }
    else
    {
        PyObject *old = var_gamma.object;
        var_gamma.object = tmp_assign_source_94;
        Py_DECREF( old );
    }
    tmp_binop_left_67 = var_gambar.object;

    tmp_binop_right_67 = var_gamma.object;

    tmp_assign_source_95 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_67, tmp_binop_right_67 );
    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    if (var_cs2.object == NULL)
    {
        var_cs2.object = tmp_assign_source_95;
    }
    else
    {
        PyObject *old = var_cs2.object;
        var_cs2.object = tmp_assign_source_95;
        Py_DECREF( old );
    }
    tmp_binop_left_68 = var_theta.object;

    tmp_binop_right_68 = var_gamma.object;

    tmp_assign_source_96 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_68, tmp_binop_right_68 );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }
    if (var_sn2.object == NULL)
    {
        var_sn2.object = tmp_assign_source_96;
    }
    else
    {
        PyObject *old = var_sn2.object;
        var_sn2.object = tmp_assign_source_96;
        Py_DECREF( old );
    }
    tmp_binop_left_69 = var_rhs.object;

    tmp_binop_right_69 = var_gamma.object;

    tmp_assign_source_97 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_69, tmp_binop_right_69 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    if (var_z.object == NULL)
    {
        var_z.object = tmp_assign_source_97;
    }
    else
    {
        PyObject *old = var_z.object;
        var_z.object = tmp_assign_source_97;
        Py_DECREF( old );
    }
    tmp_binop_left_70 = var_xxnorm.object;

    if ( tmp_binop_left_70 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284995 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_71 = var_z.object;

    tmp_binop_right_71 = const_int_pos_2;
    tmp_binop_right_70 = POWER_OPERATION( tmp_binop_left_71, tmp_binop_right_71 );
    if ( tmp_binop_right_70 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_98 = BINARY_OPERATION_ADD( tmp_binop_left_70, tmp_binop_right_70 );
    Py_DECREF( tmp_binop_right_70 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    if (var_xxnorm.object == NULL)
    {
        var_xxnorm.object = tmp_assign_source_98;
    }
    else
    {
        PyObject *old = var_xxnorm.object;
        var_xxnorm.object = tmp_assign_source_98;
        Py_DECREF( old );
    }
    tmp_binop_left_72 = var_anorm.object;

    if ( tmp_binop_left_72 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284646 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_called_33 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_33 == NULL ))
    {
        tmp_called_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_35 = var_ddnorm.object;

    frame_function->f_lineno = 413;
    tmp_binop_right_72 = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_35 );
    if ( tmp_binop_right_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_99 = BINARY_OPERATION_MUL( tmp_binop_left_72, tmp_binop_right_72 );
    Py_DECREF( tmp_binop_right_72 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto frame_exception_exit_1;
    }
    if (var_acond.object == NULL)
    {
        var_acond.object = tmp_assign_source_99;
    }
    else
    {
        PyObject *old = var_acond.object;
        var_acond.object = tmp_assign_source_99;
        Py_DECREF( old );
    }
    tmp_binop_left_73 = var_phibar.object;

    tmp_binop_right_73 = const_int_pos_2;
    tmp_assign_source_100 = POWER_OPERATION( tmp_binop_left_73, tmp_binop_right_73 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto frame_exception_exit_1;
    }
    if (var_res1.object == NULL)
    {
        var_res1.object = tmp_assign_source_100;
    }
    else
    {
        PyObject *old = var_res1.object;
        var_res1.object = tmp_assign_source_100;
        Py_DECREF( old );
    }
    tmp_binop_left_74 = var_res2.object;

    if ( tmp_binop_left_74 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285047 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_75 = var_psi.object;

    if ( tmp_binop_left_75 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285097 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_75 = const_int_pos_2;
    tmp_binop_right_74 = POWER_OPERATION( tmp_binop_left_75, tmp_binop_right_75 );
    if ( tmp_binop_right_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_101 = BINARY_OPERATION_ADD( tmp_binop_left_74, tmp_binop_right_74 );
    Py_DECREF( tmp_binop_right_74 );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    if (var_res2.object == NULL)
    {
        var_res2.object = tmp_assign_source_101;
    }
    else
    {
        PyObject *old = var_res2.object;
        var_res2.object = tmp_assign_source_101;
        Py_DECREF( old );
    }
    tmp_called_34 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_34 == NULL ))
    {
        tmp_called_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_76 = var_res1.object;

    tmp_binop_right_76 = var_res2.object;

    tmp_call_arg_element_36 = BINARY_OPERATION_ADD( tmp_binop_left_76, tmp_binop_right_76 );
    if ( tmp_call_arg_element_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 416;
    tmp_assign_source_102 = CALL_FUNCTION_WITH_ARGS1( tmp_called_34, tmp_call_arg_element_36 );
    Py_DECREF( tmp_call_arg_element_36 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }
    if (var_rnorm.object == NULL)
    {
        var_rnorm.object = tmp_assign_source_102;
    }
    else
    {
        PyObject *old = var_rnorm.object;
        var_rnorm.object = tmp_assign_source_102;
        Py_DECREF( old );
    }
    tmp_binop_left_77 = var_alfa.object;

    if ( tmp_binop_left_77 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284596 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }

    tmp_called_35 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_37 = var_tau.object;

    frame_function->f_lineno = 417;
    tmp_binop_right_77 = CALL_FUNCTION_WITH_ARGS1( tmp_called_35, tmp_call_arg_element_37 );
    if ( tmp_binop_right_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_103 = BINARY_OPERATION_MUL( tmp_binop_left_77, tmp_binop_right_77 );
    Py_DECREF( tmp_binop_right_77 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    if (var_arnorm.object == NULL)
    {
        var_arnorm.object = tmp_assign_source_103;
    }
    else
    {
        PyObject *old = var_arnorm.object;
        var_arnorm.object = tmp_assign_source_103;
        Py_DECREF( old );
    }
    tmp_binop_left_79 = var_rnorm.object;

    tmp_binop_right_79 = const_int_pos_2;
    tmp_binop_left_78 = POWER_OPERATION( tmp_binop_left_79, tmp_binop_right_79 );
    if ( tmp_binop_left_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_80 = var_dampsq.object;

    if ( tmp_binop_left_80 == NULL )
    {
        Py_DECREF( tmp_binop_left_78 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285146 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_80 = var_xxnorm.object;

    tmp_binop_right_78 = BINARY_OPERATION_MUL( tmp_binop_left_80, tmp_binop_right_80 );
    if ( tmp_binop_right_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_78 );

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_104 = BINARY_OPERATION_SUB( tmp_binop_left_78, tmp_binop_right_78 );
    Py_DECREF( tmp_binop_left_78 );
    Py_DECREF( tmp_binop_right_78 );
    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    if (var_r1sq.object == NULL)
    {
        var_r1sq.object = tmp_assign_source_104;
    }
    else
    {
        PyObject *old = var_r1sq.object;
        var_r1sq.object = tmp_assign_source_104;
        Py_DECREF( old );
    }
    tmp_called_36 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_36 == NULL ))
    {
        tmp_called_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3977 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }

    tmp_called_37 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_39 = var_r1sq.object;

    frame_function->f_lineno = 427;
    tmp_call_arg_element_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_39 );
    if ( tmp_call_arg_element_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 427;
    tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS1( tmp_called_36, tmp_call_arg_element_38 );
    Py_DECREF( tmp_call_arg_element_38 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 427;
        goto frame_exception_exit_1;
    }
    if (var_r1norm.object == NULL)
    {
        var_r1norm.object = tmp_assign_source_105;
    }
    else
    {
        PyObject *old = var_r1norm.object;
        var_r1norm.object = tmp_assign_source_105;
        Py_DECREF( old );
    }
    tmp_compare_left_10 = var_r1sq.object;

    tmp_compare_right_10 = const_int_0;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_2 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_unary_arg_4 = var_r1norm.object;

    tmp_assign_source_106 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_4 );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 429;
        goto frame_exception_exit_1;
    }
    assert( var_r1norm.object != NULL );
    {
        PyObject *old = var_r1norm.object;
        var_r1norm.object = tmp_assign_source_106;
        Py_DECREF( old );
    }

    branch_no_13:;
    tmp_assign_source_107 = var_rnorm.object;

    if (var_r2norm.object == NULL)
    {
        var_r2norm.object = INCREASE_REFCOUNT( tmp_assign_source_107 );
    }
    else
    {
        PyObject *old = var_r2norm.object;
        var_r2norm.object = INCREASE_REFCOUNT( tmp_assign_source_107 );
        Py_DECREF( old );
    }
    tmp_binop_left_81 = var_rnorm.object;

    tmp_binop_right_81 = var_bnorm.object;

    if ( tmp_binop_right_81 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285198 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 434;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_108 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_81, tmp_binop_right_81 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 434;
        goto frame_exception_exit_1;
    }
    if (var_test1.object == NULL)
    {
        var_test1.object = tmp_assign_source_108;
    }
    else
    {
        PyObject *old = var_test1.object;
        var_test1.object = tmp_assign_source_108;
        Py_DECREF( old );
    }
    tmp_binop_left_82 = var_arnorm.object;

    tmp_binop_left_83 = var_anorm.object;

    if ( tmp_binop_left_83 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284646 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 435;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_83 = var_rnorm.object;

    tmp_binop_right_82 = BINARY_OPERATION_MUL( tmp_binop_left_83, tmp_binop_right_83 );
    if ( tmp_binop_right_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 435;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_109 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_82, tmp_binop_right_82 );
    Py_DECREF( tmp_binop_right_82 );
    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 435;
        goto frame_exception_exit_1;
    }
    if (var_test2.object == NULL)
    {
        var_test2.object = tmp_assign_source_109;
    }
    else
    {
        PyObject *old = var_test2.object;
        var_test2.object = tmp_assign_source_109;
        Py_DECREF( old );
    }
    tmp_binop_left_84 = const_int_pos_1;
    tmp_binop_right_84 = var_acond.object;

    tmp_assign_source_110 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_84, tmp_binop_right_84 );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 436;
        goto frame_exception_exit_1;
    }
    if (var_test3.object == NULL)
    {
        var_test3.object = tmp_assign_source_110;
    }
    else
    {
        PyObject *old = var_test3.object;
        var_test3.object = tmp_assign_source_110;
        Py_DECREF( old );
    }
    tmp_binop_left_85 = var_test1.object;

    tmp_binop_left_86 = const_int_pos_1;
    tmp_binop_left_88 = var_anorm.object;

    if ( tmp_binop_left_88 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284646 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_88 = var_xnorm.object;

    tmp_binop_left_87 = BINARY_OPERATION_MUL( tmp_binop_left_88, tmp_binop_right_88 );
    if ( tmp_binop_left_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_87 = var_bnorm.object;

    if ( tmp_binop_right_87 == NULL )
    {
        Py_DECREF( tmp_binop_left_87 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285198 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 437;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_86 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_87, tmp_binop_right_87 );
    Py_DECREF( tmp_binop_left_87 );
    if ( tmp_binop_right_86 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_85 = BINARY_OPERATION_ADD( tmp_binop_left_86, tmp_binop_right_86 );
    Py_DECREF( tmp_binop_right_86 );
    if ( tmp_binop_right_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_111 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_85, tmp_binop_right_85 );
    Py_DECREF( tmp_binop_right_85 );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto frame_exception_exit_1;
    }
    assert( var_t1.object != NULL );
    {
        PyObject *old = var_t1.object;
        var_t1.object = tmp_assign_source_111;
        Py_DECREF( old );
    }

    tmp_binop_left_89 = par_btol.object;

    if ( tmp_binop_left_89 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281810 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_92 = par_atol.object;

    if ( tmp_binop_left_92 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71913 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_92 = var_anorm.object;

    if ( tmp_binop_right_92 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284646 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_91 = BINARY_OPERATION_MUL( tmp_binop_left_92, tmp_binop_right_92 );
    if ( tmp_binop_left_91 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_91 = var_xnorm.object;

    tmp_binop_left_90 = BINARY_OPERATION_MUL( tmp_binop_left_91, tmp_binop_right_91 );
    Py_DECREF( tmp_binop_left_91 );
    if ( tmp_binop_left_90 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_90 = var_bnorm.object;

    if ( tmp_binop_right_90 == NULL )
    {
        Py_DECREF( tmp_binop_left_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285198 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_89 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_90, tmp_binop_right_90 );
    Py_DECREF( tmp_binop_left_90 );
    if ( tmp_binop_right_89 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_112 = BINARY_OPERATION_ADD( tmp_binop_left_89, tmp_binop_right_89 );
    Py_DECREF( tmp_binop_right_89 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 438;
        goto frame_exception_exit_1;
    }
    if (var_rtol.object == NULL)
    {
        var_rtol.object = tmp_assign_source_112;
    }
    else
    {
        PyObject *old = var_rtol.object;
        var_rtol.object = tmp_assign_source_112;
        Py_DECREF( old );
    }
    tmp_compare_left_11 = var_itn.object;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = par_iter_lim.object;

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284488 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto frame_exception_exit_1;
    }

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 445;
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
    tmp_assign_source_113 = const_int_pos_7;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_113 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_113 );
        Py_DECREF( old );
    }
    branch_no_14:;
    tmp_binop_left_93 = const_int_pos_1;
    tmp_binop_right_93 = var_test3.object;

    tmp_compare_left_12 = BINARY_OPERATION_ADD( tmp_binop_left_93, tmp_binop_right_93 );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 447;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_12 = const_int_pos_1;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        frame_function->f_lineno = 447;
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
    tmp_assign_source_114 = const_int_pos_6;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_114 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_114 );
        Py_DECREF( old );
    }
    branch_no_15:;
    tmp_binop_left_94 = const_int_pos_1;
    tmp_binop_right_94 = var_test2.object;

    tmp_compare_left_13 = BINARY_OPERATION_ADD( tmp_binop_left_94, tmp_binop_right_94 );
    if ( tmp_compare_left_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_13 = const_int_pos_1;
    tmp_cmp_LtE_2 = RICH_COMPARE_BOOL_LE( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_LtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_13 );

        frame_function->f_lineno = 449;
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
    tmp_assign_source_115 = const_int_pos_5;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_115 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_115 );
        Py_DECREF( old );
    }
    branch_no_16:;
    tmp_binop_left_95 = const_int_pos_1;
    tmp_binop_right_95 = var_t1.object;

    tmp_compare_left_14 = BINARY_OPERATION_ADD( tmp_binop_left_95, tmp_binop_right_95 );
    if ( tmp_compare_left_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_14 = const_int_pos_1;
    tmp_cmp_LtE_3 = RICH_COMPARE_BOOL_LE( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_LtE_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_14 );

        frame_function->f_lineno = 451;
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
    tmp_assign_source_116 = const_int_pos_4;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_116 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_116 );
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

        frame_function->f_lineno = 455;
        goto frame_exception_exit_1;
    }

    tmp_cmp_LtE_4 = RICH_COMPARE_BOOL_LE( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_LtE_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
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
    tmp_assign_source_117 = const_int_pos_3;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_117 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_117 );
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

        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }

    tmp_cmp_LtE_5 = RICH_COMPARE_BOOL_LE( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_LtE_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
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
    tmp_assign_source_118 = const_int_pos_2;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_118 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_118 );
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


        frame_function->f_lineno = 459;
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
    tmp_assign_source_119 = const_int_pos_1;
    if (var_istop.object == NULL)
    {
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_119 );
    }
    else
    {
        PyObject *old = var_istop.object;
        var_istop.object = INCREASE_REFCOUNT( tmp_assign_source_119 );
        Py_DECREF( old );
    }
    branch_no_20:;
    tmp_assign_source_120 = Py_False;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_120 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_120 );
        Py_DECREF( old );
    }
    tmp_compare_left_18 = var_n.object;

    if ( tmp_compare_left_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_18 = const_int_pos_40;
    tmp_cmp_LtE_7 = RICH_COMPARE_BOOL_LE( tmp_compare_left_18, tmp_compare_right_18 );
    if ( tmp_cmp_LtE_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_7 == 1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_assign_source_121 = Py_True;
    assert( var_prnt.object != NULL );
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_121 );
        Py_DECREF( old );
    }

    branch_no_21:;
    tmp_compare_left_19 = var_itn.object;

    if ( tmp_compare_left_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_19 = const_int_pos_10;
    tmp_cmp_LtE_8 = RICH_COMPARE_BOOL_LE( tmp_compare_left_19, tmp_compare_right_19 );
    if ( tmp_cmp_LtE_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_8 == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_assign_source_122 = Py_True;
    assert( var_prnt.object != NULL );
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_122 );
        Py_DECREF( old );
    }

    branch_no_22:;
    tmp_compare_left_20 = var_itn.object;

    if ( tmp_compare_left_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_96 = par_iter_lim.object;

    if ( tmp_binop_left_96 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284488 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_96 = const_int_pos_10;
    tmp_compare_right_20 = BINARY_OPERATION_SUB( tmp_binop_left_96, tmp_binop_right_96 );
    if ( tmp_compare_right_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_20, tmp_compare_right_20 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_20 );

        frame_function->f_lineno = 468;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_20 );
    if (tmp_cmp_GtE_2 == 1)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_assign_source_123 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_123 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_123 );
        Py_DECREF( old );
    }
    branch_no_23:;
    tmp_compare_left_21 = var_test3.object;

    tmp_binop_left_97 = const_int_pos_2;
    tmp_binop_right_97 = var_ctol.object;

    if ( tmp_binop_right_97 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 283777 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 471;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_21 = BINARY_OPERATION_MUL( tmp_binop_left_97, tmp_binop_right_97 );
    if ( tmp_compare_right_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 471;
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_9 = RICH_COMPARE_BOOL_LE( tmp_compare_left_21, tmp_compare_right_21 );
    if ( tmp_cmp_LtE_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_21 );

        frame_function->f_lineno = 471;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_21 );
    if (tmp_cmp_LtE_9 == 1)
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_assign_source_124 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_124 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_124 );
        Py_DECREF( old );
    }
    branch_no_24:;
    tmp_compare_left_22 = var_test2.object;

    tmp_binop_left_98 = const_int_pos_10;
    tmp_binop_right_98 = par_atol.object;

    if ( tmp_binop_right_98 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71913 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 473;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_22 = BINARY_OPERATION_MUL( tmp_binop_left_98, tmp_binop_right_98 );
    if ( tmp_compare_right_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 473;
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_10 = RICH_COMPARE_BOOL_LE( tmp_compare_left_22, tmp_compare_right_22 );
    if ( tmp_cmp_LtE_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_22 );

        frame_function->f_lineno = 473;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_22 );
    if (tmp_cmp_LtE_10 == 1)
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_assign_source_125 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_125 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_125 );
        Py_DECREF( old );
    }
    branch_no_25:;
    tmp_compare_left_23 = var_test1.object;

    tmp_binop_left_99 = const_int_pos_10;
    tmp_binop_right_99 = var_rtol.object;

    tmp_compare_right_23 = BINARY_OPERATION_MUL( tmp_binop_left_99, tmp_binop_right_99 );
    if ( tmp_compare_right_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_11 = RICH_COMPARE_BOOL_LE( tmp_compare_left_23, tmp_compare_right_23 );
    if ( tmp_cmp_LtE_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_23 );

        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_23 );
    if (tmp_cmp_LtE_11 == 1)
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_assign_source_126 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_126 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_126 );
        Py_DECREF( old );
    }
    branch_no_26:;
    tmp_compare_left_24 = var_istop.object;

    if ( tmp_compare_left_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_24 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_24, tmp_compare_right_24 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 477;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_assign_source_127 = Py_True;
    if (var_prnt.object == NULL)
    {
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_127 );
    }
    else
    {
        PyObject *old = var_prnt.object;
        var_prnt.object = INCREASE_REFCOUNT( tmp_assign_source_127 );
        Py_DECREF( old );
    }
    branch_no_27:;
    tmp_cond_value_4 = var_prnt.object;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 285249 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_cond_value_5 = par_show.object;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 481;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_binop_left_100 = const_str_digest_6c397e5435d06204d5f5c55ee949d8b0;
    tmp_binop_right_100 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_itn.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_binop_right_100 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_binop_right_100, 0, tmp_tuple_element_9 );
    tmp_subscr_target_3 = var_x.object;

    tmp_subscr_subscript_3 = const_int_0;
    tmp_tuple_element_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_100 );

        frame_function->f_lineno = 482;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_100, 1, tmp_tuple_element_9 );
    tmp_assign_source_128 = BINARY_OPERATION_REMAINDER( tmp_binop_left_100, tmp_binop_right_100 );
    Py_DECREF( tmp_binop_right_100 );
    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 482;
        goto frame_exception_exit_1;
    }
    if (var_str1.object == NULL)
    {
        var_str1.object = tmp_assign_source_128;
    }
    else
    {
        PyObject *old = var_str1.object;
        var_str1.object = tmp_assign_source_128;
        Py_DECREF( old );
    }
    tmp_binop_left_101 = const_str_digest_fa530a0e8d3f64457f23afa7eab2a445;
    tmp_binop_right_101 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_r1norm.object;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_binop_right_101, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_r2norm.object;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_binop_right_101, 1, tmp_tuple_element_10 );
    tmp_assign_source_129 = BINARY_OPERATION_REMAINDER( tmp_binop_left_101, tmp_binop_right_101 );
    Py_DECREF( tmp_binop_right_101 );
    if ( tmp_assign_source_129 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 483;
        goto frame_exception_exit_1;
    }
    if (var_str2.object == NULL)
    {
        var_str2.object = tmp_assign_source_129;
    }
    else
    {
        PyObject *old = var_str2.object;
        var_str2.object = tmp_assign_source_129;
        Py_DECREF( old );
    }
    tmp_binop_left_102 = const_str_digest_2fbcbe1ff2b6eb9a2fc5d60fa1620218;
    tmp_binop_right_102 = PyTuple_New( 2 );
    tmp_tuple_element_11 = var_test1.object;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_102, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_test2.object;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_102, 1, tmp_tuple_element_11 );
    tmp_assign_source_130 = BINARY_OPERATION_REMAINDER( tmp_binop_left_102, tmp_binop_right_102 );
    Py_DECREF( tmp_binop_right_102 );
    if ( tmp_assign_source_130 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 484;
        goto frame_exception_exit_1;
    }
    if (var_str3.object == NULL)
    {
        var_str3.object = tmp_assign_source_130;
    }
    else
    {
        PyObject *old = var_str3.object;
        var_str3.object = tmp_assign_source_130;
        Py_DECREF( old );
    }
    tmp_binop_left_103 = const_str_digest_36264d55af3d1e10fded3478d4a06318;
    tmp_binop_right_103 = PyTuple_New( 2 );
    tmp_tuple_element_12 = var_anorm.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_binop_right_103 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284646 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 485;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_103, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = var_acond.object;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_103, 1, tmp_tuple_element_12 );
    tmp_assign_source_131 = BINARY_OPERATION_REMAINDER( tmp_binop_left_103, tmp_binop_right_103 );
    Py_DECREF( tmp_binop_right_103 );
    if ( tmp_assign_source_131 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 485;
        goto frame_exception_exit_1;
    }
    if (var_str4.object == NULL)
    {
        var_str4.object = tmp_assign_source_131;
    }
    else
    {
        PyObject *old = var_str4.object;
        var_str4.object = tmp_assign_source_131;
        Py_DECREF( old );
    }
    tmp_called_38 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_40 = var_str1.object;

    tmp_call_arg_element_41 = var_str2.object;

    tmp_call_arg_element_42 = var_str3.object;

    tmp_call_arg_element_43 = var_str4.object;

    frame_function->f_lineno = 486;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_38, tmp_call_arg_element_40, tmp_call_arg_element_41, tmp_call_arg_element_42, tmp_call_arg_element_43 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 486;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_29:;
    branch_no_28:;
    tmp_compare_left_25 = var_istop.object;

    if ( tmp_compare_left_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_25 = const_int_0;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_25, tmp_compare_right_25 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    goto loop_end_1;
    branch_no_30:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_cond_value_6 = par_show.object;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 493;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 493;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    tmp_called_39 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_44 = const_str_space;
    frame_function->f_lineno = 494;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_39, tmp_call_arg_element_44 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 494;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_40 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 495;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_45 = const_str_digest_8bca5ec3a83c0eadf7e97d7865bb3586;
    frame_function->f_lineno = 495;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_40, tmp_call_arg_element_45 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 495;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_41 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 496;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_4 = var_msg.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 496;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = var_istop.object;

    if ( tmp_subscr_subscript_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 496;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_46 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_call_arg_element_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 496;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 496;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_41, tmp_call_arg_element_46 );
    Py_DECREF( tmp_call_arg_element_46 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 496;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_42 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_47 = const_str_space;
    frame_function->f_lineno = 497;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_42, tmp_call_arg_element_47 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 497;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_104 = const_str_digest_2473b589a4895ca32ef0820d178f51f7;
    tmp_binop_right_104 = PyTuple_New( 2 );
    tmp_tuple_element_13 = var_istop.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_binop_right_104 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 498;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_binop_right_104, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = var_r1norm.object;

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_binop_right_104, 1, tmp_tuple_element_13 );
    tmp_assign_source_132 = BINARY_OPERATION_REMAINDER( tmp_binop_left_104, tmp_binop_right_104 );
    Py_DECREF( tmp_binop_right_104 );
    if ( tmp_assign_source_132 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto frame_exception_exit_1;
    }
    if (var_str1.object == NULL)
    {
        var_str1.object = tmp_assign_source_132;
    }
    else
    {
        PyObject *old = var_str1.object;
        var_str1.object = tmp_assign_source_132;
        Py_DECREF( old );
    }
    tmp_binop_left_105 = const_str_digest_a7e5b9382fca583ebaf2c2056b692831;
    tmp_binop_right_105 = PyTuple_New( 2 );
    tmp_tuple_element_14 = var_anorm.object;

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_binop_right_105 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284646 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 499;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_binop_right_105, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = var_arnorm.object;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_binop_right_105, 1, tmp_tuple_element_14 );
    tmp_assign_source_133 = BINARY_OPERATION_REMAINDER( tmp_binop_left_105, tmp_binop_right_105 );
    Py_DECREF( tmp_binop_right_105 );
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 499;
        goto frame_exception_exit_1;
    }
    if (var_str2.object == NULL)
    {
        var_str2.object = tmp_assign_source_133;
    }
    else
    {
        PyObject *old = var_str2.object;
        var_str2.object = tmp_assign_source_133;
        Py_DECREF( old );
    }
    tmp_binop_left_106 = const_str_digest_92aa1c125edb3fa32c5e375bb06fa21c;
    tmp_binop_right_106 = PyTuple_New( 2 );
    tmp_tuple_element_15 = var_itn.object;

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_binop_right_106 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 500;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_binop_right_106, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = var_r2norm.object;

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_binop_right_106, 1, tmp_tuple_element_15 );
    tmp_assign_source_134 = BINARY_OPERATION_REMAINDER( tmp_binop_left_106, tmp_binop_right_106 );
    Py_DECREF( tmp_binop_right_106 );
    if ( tmp_assign_source_134 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 500;
        goto frame_exception_exit_1;
    }
    if (var_str3.object == NULL)
    {
        var_str3.object = tmp_assign_source_134;
    }
    else
    {
        PyObject *old = var_str3.object;
        var_str3.object = tmp_assign_source_134;
        Py_DECREF( old );
    }
    tmp_binop_left_107 = const_str_digest_7830e9e751d5555d82695e38ef0d2830;
    tmp_binop_right_107 = PyTuple_New( 2 );
    tmp_tuple_element_16 = var_acond.object;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_binop_right_107, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = var_xnorm.object;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_binop_right_107, 1, tmp_tuple_element_16 );
    tmp_assign_source_135 = BINARY_OPERATION_REMAINDER( tmp_binop_left_107, tmp_binop_right_107 );
    Py_DECREF( tmp_binop_right_107 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }
    if (var_str4.object == NULL)
    {
        var_str4.object = tmp_assign_source_135;
    }
    else
    {
        PyObject *old = var_str4.object;
        var_str4.object = tmp_assign_source_135;
        Py_DECREF( old );
    }
    tmp_called_43 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_109 = var_str1.object;

    tmp_binop_right_109 = const_str_digest_628631f07321b22d8c176c200c855e1b;
    tmp_binop_left_108 = BINARY_OPERATION_ADD( tmp_binop_left_109, tmp_binop_right_109 );
    if ( tmp_binop_left_108 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_108 = var_str2.object;

    tmp_call_arg_element_48 = BINARY_OPERATION_ADD( tmp_binop_left_108, tmp_binop_right_108 );
    Py_DECREF( tmp_binop_left_108 );
    if ( tmp_call_arg_element_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 502;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_43, tmp_call_arg_element_48 );
    Py_DECREF( tmp_call_arg_element_48 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_44 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_111 = var_str3.object;

    tmp_binop_right_111 = const_str_digest_628631f07321b22d8c176c200c855e1b;
    tmp_binop_left_110 = BINARY_OPERATION_ADD( tmp_binop_left_111, tmp_binop_right_111 );
    if ( tmp_binop_left_110 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_110 = var_str4.object;

    tmp_call_arg_element_49 = BINARY_OPERATION_ADD( tmp_binop_left_110, tmp_binop_right_110 );
    Py_DECREF( tmp_binop_left_110 );
    if ( tmp_call_arg_element_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 503;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_44, tmp_call_arg_element_49 );
    Py_DECREF( tmp_call_arg_element_49 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_45 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 504;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_50 = const_str_space;
    frame_function->f_lineno = 504;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_45, tmp_call_arg_element_50 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 504;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_31:;
    tmp_return_value = PyTuple_New( 10 );
    tmp_tuple_element_17 = var_x.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_istop.object;

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 132450 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_itn.object;

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 281960 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_r1norm.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_r2norm.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_anorm.object;

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 284646 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_acond.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 6, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_arnorm.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 7, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_xnorm.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 8, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_var.object;

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 88437 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 506;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_return_value, 9, tmp_tuple_element_17 );
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
    if ((var_var.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_var,
            var_var.object
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
    if ((var_str4.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_str4,
            var_str4.object
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
    if ((var_istop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_istop,
            var_istop.object
        );

    }
    if ((var_nstop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nstop,
            var_nstop.object
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
    if ((var_anorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_anorm,
            var_anorm.object
        );

    }
    if ((var_acond.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_acond,
            var_acond.object
        );

    }
    if ((var_dampsq.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dampsq,
            var_dampsq.object
        );

    }
    if ((var_ddnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ddnorm,
            var_ddnorm.object
        );

    }
    if ((var_res2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res2,
            var_res2.object
        );

    }
    if ((var_xnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_xnorm,
            var_xnorm.object
        );

    }
    if ((var_xxnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_xxnorm,
            var_xxnorm.object
        );

    }
    if ((var_z.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_z,
            var_z.object
        );

    }
    if ((var_cs2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cs2,
            var_cs2.object
        );

    }
    if ((var_sn2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sn2,
            var_sn2.object
        );

    }
    if ((var___xm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___xm,
            var___xm.object
        );

    }
    if ((var___xn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___xn,
            var___xn.object
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
    if ((var_u.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_u,
            var_u.object
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
    if ((var_alfa.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_alfa,
            var_alfa.object
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
    if ((var_w.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_w,
            var_w.object
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
    if ((var_phibar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_phibar,
            var_phibar.object
        );

    }
    if ((var_bnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bnorm,
            var_bnorm.object
        );

    }
    if ((var_rnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rnorm,
            var_rnorm.object
        );

    }
    if ((var_r1norm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r1norm,
            var_r1norm.object
        );

    }
    if ((var_r2norm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r2norm,
            var_r2norm.object
        );

    }
    if ((var_arnorm.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arnorm,
            var_arnorm.object
        );

    }
    if ((var_head1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_head1,
            var_head1.object
        );

    }
    if ((var_head2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_head2,
            var_head2.object
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
    if ((var_rhobar1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhobar1,
            var_rhobar1.object
        );

    }
    if ((var_cs1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cs1,
            var_cs1.object
        );

    }
    if ((var_sn1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sn1,
            var_sn1.object
        );

    }
    if ((var_psi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_psi,
            var_psi.object
        );

    }
    if ((var_cs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cs,
            var_cs.object
        );

    }
    if ((var_sn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sn,
            var_sn.object
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
    if ((var_theta.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_theta,
            var_theta.object
        );

    }
    if ((var_phi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_phi,
            var_phi.object
        );

    }
    if ((var_tau.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tau,
            var_tau.object
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
    if ((var_t2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t2,
            var_t2.object
        );

    }
    if ((var_dk.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dk,
            var_dk.object
        );

    }
    if ((var_delta.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_delta,
            var_delta.object
        );

    }
    if ((var_gambar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gambar,
            var_gambar.object
        );

    }
    if ((var_rhs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rhs,
            var_rhs.object
        );

    }
    if ((var_zbar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_zbar,
            var_zbar.object
        );

    }
    if ((var_gamma.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gamma,
            var_gamma.object
        );

    }
    if ((var_res1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res1,
            var_res1.object
        );

    }
    if ((var_r1sq.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r1sq,
            var_r1sq.object
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
    if ((var_rtol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rtol,
            var_rtol.object
        );

    }
    if ((var_prnt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_prnt,
            var_prnt.object
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
    if ((par_iter_lim.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_iter_lim,
            par_iter_lim.object
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
    if ((par_calc_var.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_calc_var,
            par_calc_var.object
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
static PyObject *fparse_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    PyObject *_python_par_iter_lim = NULL;
    PyObject *_python_par_show = NULL;
    PyObject *_python_par_calc_var = NULL;
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
                PyErr_Format( PyExc_TypeError, "lsqr() keywords must be strings" );
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
            if ( found == false && const_str_plain_iter_lim == key )
            {
                assert( _python_par_iter_lim == NULL );
                _python_par_iter_lim = value;

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
            if ( found == false && const_str_plain_calc_var == key )
            {
                assert( _python_par_calc_var == NULL );
                _python_par_calc_var = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_iter_lim, key ) == 1 )
            {
                assert( _python_par_iter_lim == NULL );
                _python_par_iter_lim = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_calc_var, key ) == 1 )
            {
                assert( _python_par_calc_var == NULL );
                _python_par_calc_var = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "lsqr() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 9 ))
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
        if ( 0 + self->m_defaults_given >= 9  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 9 ) );
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
        if ( 1 + self->m_defaults_given >= 9  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 9 ) );
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
        if ( 2 + self->m_defaults_given >= 9  )
        {
            _python_par_damp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 9 ) );
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
        if ( 3 + self->m_defaults_given >= 9  )
        {
            _python_par_atol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 9 ) );
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
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_btol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 ) );
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
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_conlim = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 ) );
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
         if (unlikely( _python_par_iter_lim != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_iter_lim = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_iter_lim == NULL )
    {
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_iter_lim = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 ) );
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
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_show = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 ) );
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
    if (likely( 8 < args_given ))
    {
         if (unlikely( _python_par_calc_var != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_calc_var = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_calc_var == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_calc_var = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_b == NULL || _python_par_damp == NULL || _python_par_atol == NULL || _python_par_btol == NULL || _python_par_conlim == NULL || _python_par_iter_lim == NULL || _python_par_show == NULL || _python_par_calc_var == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_b, _python_par_damp, _python_par_atol, _python_par_btol, _python_par_conlim, _python_par_iter_lim, _python_par_show, _python_par_calc_var };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( self, _python_par_A, _python_par_b, _python_par_damp, _python_par_atol, _python_par_btol, _python_par_conlim, _python_par_iter_lim, _python_par_show, _python_par_calc_var );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_damp );
    Py_XDECREF( _python_par_atol );
    Py_XDECREF( _python_par_btol );
    Py_XDECREF( _python_par_conlim );
    Py_XDECREF( _python_par_iter_lim );
    Py_XDECREF( _python_par_show );
    Py_XDECREF( _python_par_calc_var );

    return NULL;
}

static PyObject *dparse_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 9 )
    {
        return impl_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr,
        dparse_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr,
        const_str_plain__sym_ortho,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7185805b434191093faddeaa12eb17f0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$isolve$lsqr,
        const_str_digest_36ecfd0338c69327bff3e8ca8b897e58
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr,
        dparse_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr,
        const_str_plain_lsqr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_15d69d24e5e3e205808aa9839ff25aad,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$isolve$lsqr,
        const_str_digest_45bdf2e39f8aab7dc2288d33d2550780
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$isolve$lsqr =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.isolve.lsqr",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$linalg$isolve$lsqr )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$lsqr );
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

    // puts( "in initscipy$sparse$linalg$isolve$lsqr" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$isolve$lsqr = Py_InitModule4(
        "scipy.sparse.linalg.isolve.lsqr",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$linalg$isolve$lsqr = PyModule_Create( &mdef_scipy$sparse$linalg$isolve$lsqr );
#endif

    moduledict_scipy$sparse$linalg$isolve$lsqr = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsqr)->md_dict;

    assertObject( module_scipy$sparse$linalg$isolve$lsqr );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d324add691505bbfdf88358b8964f639, module_scipy$sparse$linalg$isolve$lsqr );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$linalg$isolve$lsqr );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;

    // Module code.
    tmp_assign_source_1 = const_str_digest_4b89a809c15b2de7f586827513e8041a;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_95b793657bca8d03c6548a1e4016e3bf;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_becbcf7faf5ff88488b6e580e3d745fd, module_scipy$sparse$linalg$isolve$lsqr );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsqr)->md_dict;
    frame_module->f_lineno = 52;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsqr)->md_dict;
    frame_module->f_lineno = 52;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsqr)->md_dict;
    frame_module->f_lineno = 52;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_lsqr_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsqr)->md_dict;
    frame_module->f_lineno = 56;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsqr)->md_dict;
    frame_module->f_lineno = 57;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_math, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_sqrt_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_sqrt );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$sparse$linalg$isolve$lsqr)->md_dict;
    frame_module->f_lineno = 58;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_1d20d9f4233ad3896104d20289f2168f, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_aslinearoperator_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_aslinearoperator );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_aslinearoperator, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_function_1__sym_ortho_of_module_scipy$sparse$linalg$isolve$lsqr(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain__sym_ortho, tmp_assign_source_10 );
    tmp_defaults_1 = const_tuple_95f9dbedea8e8f6039289043e1e7a1f2_tuple;
    tmp_assign_source_11 = MAKE_FUNCTION_function_2_lsqr_of_module_scipy$sparse$linalg$isolve$lsqr( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_module->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$isolve$lsqr, (Nuitka_StringObject *)const_str_plain_lsqr, tmp_assign_source_11 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$isolve$lsqr );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
