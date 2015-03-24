// Generated code for Python source for module 'scipy.sparse.linalg.eigen.lobpcg.lobpcg'
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

// The _module_scipy$sparse$linalg$eigen$lobpcg$lobpcg is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$sparse$linalg$eigen$lobpcg$lobpcg;
PyDictObject *moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_8;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_M;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_Y;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ar;
extern PyObject *const_str_plain_ii;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_pp;
extern PyObject *const_str_plain_sp;
extern PyObject *const_str_plain_app;
extern PyObject *const_str_plain_aux;
static PyObject *const_str_plain_bpp;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_eig;
extern PyObject *const_str_plain_eye;
extern PyObject *const_str_plain_fun;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_out;
static PyObject *const_str_plain_pap;
static PyObject *const_str_plain_sla;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_tol;
static PyObject *const_str_plain_wap;
static PyObject *const_str_plain_waw;
static PyObject *const_str_plain_wbp;
static PyObject *const_str_plain_xap;
static PyObject *const_str_plain_xaw;
static PyObject *const_str_plain_xbp;
static PyObject *const_str_plain_xbw;
static PyObject *const_str_plain_as2d;
extern PyObject *const_str_plain_bmat;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_diag;
static PyObject *const_str_plain_heev;
static PyObject *const_str_plain_hegv;
static PyObject *const_str_plain_invR;
static PyObject *const_str_plain_lohi;
static PyObject *const_str_plain_mtxA;
static PyObject *const_str_plain_mtxB;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_save;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_sqrt;
static PyObject *const_str_plain_syev;
static PyObject *const_str_plain_sygv;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain_gramA;
static PyObject *const_str_plain_gramB;
extern PyObject *const_str_plain_ident;
extern PyObject *const_str_plain_input;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_pause;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_right;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_plain_sizeX;
static PyObject *const_str_plain_sizeY;
extern PyObject *const_str_plain_slice;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_arrays;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_plain_ident0;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_str_plain_lobpcg;
extern PyObject *const_str_plain_matmat;
extern PyObject *const_str_plain_select;
static PyObject *const_str_plain_symeig;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_float_1e_minus_15;
static PyObject *const_str_plain_A_dense;
static PyObject *const_str_plain_B_dense;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__lambda;
extern PyObject *const_str_plain_argsort;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain_factYBY;
extern PyObject *const_str_plain_float64;
static PyObject *const_str_plain_gramVBV;
static PyObject *const_str_plain_gramXAX;
static PyObject *const_str_plain_gramXBX;
static PyObject *const_str_plain_gramYBV;
static PyObject *const_str_plain_gramYBY;
static PyObject *const_str_plain_largest;
extern PyObject *const_str_plain_maxiter;
extern PyObject *const_str_plain_newaxis;
static PyObject *const_str_plain_retInvR;
extern PyObject *const_str_plain_savetxt;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_allclose;
extern PyObject *const_str_plain_cholesky;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_fileName;
extern PyObject *const_str_plain_operator;
extern PyObject *const_str_plain_standard;
extern PyObject *const_str_plain_cho_solve;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_precision;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_activeMask;
extern PyObject *const_str_plain_cho_factor;
static PyObject *const_str_plain_failureFlag;
static PyObject *const_str_plain_generalized;
extern PyObject *const_str_plain_overwrite_a;
static PyObject *const_str_plain_blockVectorP;
static PyObject *const_str_plain_blockVectorR;
static PyObject *const_str_plain_blockVectorV;
static PyObject *const_str_plain_blockVectorX;
static PyObject *const_str_plain_blockVectorY;
extern PyObject *const_str_plain_eigenvectors;
extern PyObject *const_str_plain_iscomplexobj;
static PyObject *const_str_plain_makeOperator;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_tuple_none_false_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_blockVectorAP;
static PyObject *const_str_plain_blockVectorAX;
static PyObject *const_str_plain_blockVectorBP;
static PyObject *const_str_plain_blockVectorBV;
static PyObject *const_str_plain_blockVectorBX;
static PyObject *const_str_plain_blockVectorBY;
static PyObject *const_str_plain_expectedShape;
static PyObject *const_str_plain_lambdaHistory;
static PyObject *const_str_plain_maxIterations;
static PyObject *const_str_plain_operatorInput;
static PyObject *const_str_plain_residualNorms;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_LinearOperator;
static PyObject *const_str_plain_eigBlockVector;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_verbosityLevel;
static PyObject *const_tuple_str_plain_ar_tuple;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_eigBlockVectorP;
static PyObject *const_str_plain_eigBlockVectorR;
static PyObject *const_str_plain_eigBlockVectorX;
static PyObject *const_str_plain_iterationNumber;
static PyObject *const_list_str_plain_lobpcg_list;
static PyObject *const_str_plain_applyConstraints;
extern PyObject *const_str_plain_aslinearoperator;
static PyObject *const_str_plain_b_orthonormalize;
static PyObject *const_str_plain_currentBlockSize;
extern PyObject *const_str_plain_get_lapack_funcs;
static PyObject *const_str_plain_retLambdaHistory;
static PyObject *const_tuple_none_true_none_tuple;
static PyObject *const_tuple_str_plain_heev_tuple;
static PyObject *const_tuple_str_plain_hegv_tuple;
static PyObject *const_tuple_str_plain_syev_tuple;
static PyObject *const_tuple_str_plain_sygv_tuple;
static PyObject *const_str_plain_previousBlockSize;
static PyObject *const_str_plain_residualTolerance;
static PyObject *const_str_plain_activeBlockVectorP;
static PyObject *const_str_plain_activeBlockVectorR;
extern PyObject *const_tuple_str_plain_xrange_tuple;
static PyObject *const_str_plain_activeBlockVectorAP;
static PyObject *const_str_plain_activeBlockVectorAR;
static PyObject *const_str_plain_activeBlockVectorBP;
static PyObject *const_str_plain_activeBlockVectorBR;
static PyObject *const_tuple_str_plain_savetxt_tuple;
static PyObject *const_str_plain_residualNormsHistory;
static PyObject *const_str_plain_CallableLinearOperator;
static PyObject *const_str_plain_retResidualNormsHistory;
static PyObject *const_dict_208766c7396b6949dabb1a9785932806;
static PyObject *const_dict_271ecee2bf28a811fa80fc8aafef4116;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_dict_ec6cc0116ef299a274b2baadbcdeac09;
static PyObject *const_tuple_str_plain_ar_str_plain_aux_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_x_tuple;
static PyObject *const_str_digest_06ad8683589d2b6f144b49408f1b7b98;
static PyObject *const_str_digest_088b7c9d115463d9e5852d27a551d1de;
static PyObject *const_str_digest_19591a1ad3c6e02cd1d09a17c055dd26;
static PyObject *const_str_digest_1f83378ea9dcf0a81bb226b9679fa37d;
static PyObject *const_str_digest_21a0a09629a887bb5cd9f6dfd2612a40;
static PyObject *const_str_digest_21bd31c7d55644e987c854a513340620;
static PyObject *const_str_digest_2c321f6e5584684eb9415cba068b0908;
static PyObject *const_str_digest_2c6912a0c91ff41479366224d686f1b1;
static PyObject *const_str_digest_2ebcbf83e0443b299084bc6f47d8e8c7;
static PyObject *const_str_digest_3065b0e1f607f0ee71aeda64fc832c85;
static PyObject *const_str_digest_33af2a100fb867426f3e6fdfe4d86449;
static PyObject *const_str_digest_3c693c2a5ddd0075806ef8625ce65d11;
static PyObject *const_str_digest_409c02f88f7710464f1d79f22dcb388b;
static PyObject *const_str_digest_41643b91a3912cdcf145ebabe5f44221;
static PyObject *const_str_digest_4527bfbd478f62f369ec9c51f868ec1a;
static PyObject *const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b;
static PyObject *const_str_digest_5d5d4fb16e4a9558db998b2c4e02a198;
extern PyObject *const_str_digest_61b740be5b509d29051d45cb59c060e0;
extern PyObject *const_str_digest_644880ce7dbf6c5f121ce247016ffe23;
static PyObject *const_str_digest_6da59f92cbc6ecc2b0ac130c35f402b1;
static PyObject *const_str_digest_872de85f88e3b31daa460c626bc92710;
static PyObject *const_str_digest_987f8660c1949312e62c57343f0d112f;
static PyObject *const_str_digest_9d605d32df087341ab71d45113922203;
extern PyObject *const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862;
static PyObject *const_str_digest_a61df4ef7ac9928ac6a49d618e1b136c;
static PyObject *const_str_digest_acdced9010978888e4aa59fc1221cabe;
static PyObject *const_str_digest_b2f1f7dbe81b6e2fe872b5f0e7718f72;
static PyObject *const_str_digest_bc2060764ecb3513f1436f892e2de7e1;
static PyObject *const_str_digest_d767e91ae430aa3b68903e81abeaea2c;
static PyObject *const_str_digest_e0de2f6edf3389d7277b91f59a9196ea;
static PyObject *const_str_digest_ed36b2d01c57b62b1031b8940f0438e0;
static PyObject *const_tuple_str_plain_ar_str_plain_fileName_tuple;
static PyObject *const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple;
static PyObject *const_tuple_19944591bd1cc437b5ff216256663dd7_tuple;
static PyObject *const_tuple_270c4bf1a03801543859292c13cbd15c_tuple;
static PyObject *const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple;
static PyObject *const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple;
static PyObject *const_tuple_599fcc4219565bcbeb5b7bd1b9d64dcf_tuple;
static PyObject *const_tuple_8e6a5fe1234f17aa4f1cc8cb8e91cd5b_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple;
static PyObject *const_tuple_fdba8eb06185d0591ca5eb9c9a2721c1_tuple;
static PyObject *const_tuple_str_plain_operatorInput_str_plain_expectedShape_tuple;
static PyObject *const_tuple_str_plain_ar_str_plain_fileName_str_plain_savetxt_tuple;
extern PyObject *const_tuple_str_plain_aslinearoperator_str_plain_LinearOperator_tuple;
static PyObject *const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_bpp = UNSTREAM_STRING( &constant_bin[ 278364 ], 3, 1 );
    const_str_plain_pap = UNSTREAM_STRING( &constant_bin[ 298679 ], 3, 1 );
    const_str_plain_sla = UNSTREAM_STRING( &constant_bin[ 34843 ], 3, 1 );
    const_str_plain_wap = UNSTREAM_STRING( &constant_bin[ 19051 ], 3, 1 );
    const_str_plain_waw = UNSTREAM_STRING( &constant_bin[ 2424656 ], 3, 1 );
    const_str_plain_wbp = UNSTREAM_STRING( &constant_bin[ 2424659 ], 3, 1 );
    const_str_plain_xap = UNSTREAM_STRING( &constant_bin[ 2424662 ], 3, 1 );
    const_str_plain_xaw = UNSTREAM_STRING( &constant_bin[ 2424665 ], 3, 1 );
    const_str_plain_xbp = UNSTREAM_STRING( &constant_bin[ 2424668 ], 3, 1 );
    const_str_plain_xbw = UNSTREAM_STRING( &constant_bin[ 2424671 ], 3, 1 );
    const_str_plain_as2d = UNSTREAM_STRING( &constant_bin[ 277092 ], 4, 1 );
    const_str_plain_heev = UNSTREAM_STRING( &constant_bin[ 987270 ], 4, 1 );
    const_str_plain_hegv = UNSTREAM_STRING( &constant_bin[ 987313 ], 4, 1 );
    const_str_plain_invR = UNSTREAM_STRING( &constant_bin[ 277623 ], 4, 1 );
    const_str_plain_lohi = UNSTREAM_STRING( &constant_bin[ 2424674 ], 4, 1 );
    const_str_plain_mtxA = UNSTREAM_STRING( &constant_bin[ 275273 ], 4, 1 );
    const_str_plain_mtxB = UNSTREAM_STRING( &constant_bin[ 275323 ], 4, 1 );
    const_str_plain_syev = UNSTREAM_STRING( &constant_bin[ 979202 ], 4, 1 );
    const_str_plain_sygv = UNSTREAM_STRING( &constant_bin[ 979237 ], 4, 1 );
    const_str_plain_gramA = UNSTREAM_STRING( &constant_bin[ 277855 ], 5, 1 );
    const_str_plain_gramB = UNSTREAM_STRING( &constant_bin[ 277906 ], 5, 1 );
    const_str_plain_pause = UNSTREAM_STRING( &constant_bin[ 278046 ], 5, 1 );
    const_str_plain_sizeX = UNSTREAM_STRING( &constant_bin[ 275967 ], 5, 1 );
    const_str_plain_sizeY = UNSTREAM_STRING( &constant_bin[ 276059 ], 5, 1 );
    const_str_plain_ident0 = UNSTREAM_STRING( &constant_bin[ 277803 ], 6, 1 );
    const_str_plain_symeig = UNSTREAM_STRING( &constant_bin[ 276160 ], 6, 1 );
    const_str_plain_A_dense = UNSTREAM_STRING( &constant_bin[ 2424678 ], 7, 1 );
    const_str_plain_B_dense = UNSTREAM_STRING( &constant_bin[ 2424685 ], 7, 1 );
    const_str_plain__lambda = UNSTREAM_STRING( &constant_bin[ 276198 ], 7, 1 );
    const_str_plain_factYBY = UNSTREAM_STRING( &constant_bin[ 275744 ], 7, 1 );
    const_str_plain_gramVBV = UNSTREAM_STRING( &constant_bin[ 2424692 ], 7, 1 );
    const_str_plain_gramXAX = UNSTREAM_STRING( &constant_bin[ 2424699 ], 7, 1 );
    const_str_plain_gramXBX = UNSTREAM_STRING( &constant_bin[ 2424706 ], 7, 1 );
    const_str_plain_gramYBV = UNSTREAM_STRING( &constant_bin[ 2424713 ], 7, 1 );
    const_str_plain_gramYBY = UNSTREAM_STRING( &constant_bin[ 276694 ], 7, 1 );
    const_str_plain_largest = UNSTREAM_STRING( &constant_bin[ 276110 ], 7, 1 );
    const_str_plain_retInvR = UNSTREAM_STRING( &constant_bin[ 275914 ], 7, 1 );
    const_str_plain_fileName = UNSTREAM_STRING( &constant_bin[ 275373 ], 8, 1 );
    const_str_plain_activeMask = UNSTREAM_STRING( &constant_bin[ 276976 ], 10, 1 );
    const_str_plain_failureFlag = UNSTREAM_STRING( &constant_bin[ 2424720 ], 11, 1 );
    const_str_plain_generalized = UNSTREAM_STRING( &constant_bin[ 463487 ], 11, 1 );
    const_str_plain_blockVectorP = UNSTREAM_STRING( &constant_bin[ 277128 ], 12, 1 );
    const_str_plain_blockVectorR = UNSTREAM_STRING( &constant_bin[ 2424731 ], 12, 1 );
    const_str_plain_blockVectorV = UNSTREAM_STRING( &constant_bin[ 275686 ], 12, 1 );
    const_str_plain_blockVectorX = UNSTREAM_STRING( &constant_bin[ 276636 ], 12, 1 );
    const_str_plain_blockVectorY = UNSTREAM_STRING( &constant_bin[ 275797 ], 12, 1 );
    const_str_plain_makeOperator = UNSTREAM_STRING( &constant_bin[ 276015 ], 12, 1 );
    const_str_plain_blockVectorAP = UNSTREAM_STRING( &constant_bin[ 277186 ], 13, 1 );
    const_str_plain_blockVectorAX = UNSTREAM_STRING( &constant_bin[ 276792 ], 13, 1 );
    const_str_plain_blockVectorBP = UNSTREAM_STRING( &constant_bin[ 277245 ], 13, 1 );
    const_str_plain_blockVectorBV = UNSTREAM_STRING( &constant_bin[ 275855 ], 13, 1 );
    const_str_plain_blockVectorBX = UNSTREAM_STRING( &constant_bin[ 276851 ], 13, 1 );
    const_str_plain_blockVectorBY = UNSTREAM_STRING( &constant_bin[ 275627 ], 13, 1 );
    const_str_plain_expectedShape = UNSTREAM_STRING( &constant_bin[ 275486 ], 13, 1 );
    const_str_plain_lambdaHistory = UNSTREAM_STRING( &constant_bin[ 277990 ], 13, 1 );
    const_str_plain_maxIterations = UNSTREAM_STRING( &constant_bin[ 276374 ], 13, 1 );
    const_str_plain_operatorInput = UNSTREAM_STRING( &constant_bin[ 275427 ], 13, 1 );
    const_str_plain_residualNorms = UNSTREAM_STRING( &constant_bin[ 276910 ], 13, 1 );
    const_str_plain_eigBlockVector = UNSTREAM_STRING( &constant_bin[ 276251 ], 14, 1 );
    const_str_plain_verbosityLevel = UNSTREAM_STRING( &constant_bin[ 276433 ], 14, 1 );
    const_tuple_str_plain_ar_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ar_tuple, 0, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    const_str_plain_eigBlockVectorP = UNSTREAM_STRING( &constant_bin[ 278206 ], 15, 1 );
    const_str_plain_eigBlockVectorR = UNSTREAM_STRING( &constant_bin[ 278145 ], 15, 1 );
    const_str_plain_eigBlockVectorX = UNSTREAM_STRING( &constant_bin[ 278413 ], 15, 1 );
    const_str_plain_iterationNumber = UNSTREAM_STRING( &constant_bin[ 277368 ], 15, 1 );
    const_list_str_plain_lobpcg_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_lobpcg_list, 0, const_str_plain_lobpcg ); Py_INCREF( const_str_plain_lobpcg );
    const_str_plain_applyConstraints = UNSTREAM_STRING( &constant_bin[ 276588 ], 16, 1 );
    const_str_plain_b_orthonormalize = UNSTREAM_STRING( &constant_bin[ 276744 ], 16, 1 );
    const_str_plain_currentBlockSize = UNSTREAM_STRING( &constant_bin[ 278083 ], 16, 1 );
    const_str_plain_retLambdaHistory = UNSTREAM_STRING( &constant_bin[ 278474 ], 16, 1 );
    const_tuple_none_true_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_true_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_true_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_true_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_heev_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_heev_tuple, 0, const_str_plain_heev ); Py_INCREF( const_str_plain_heev );
    const_tuple_str_plain_hegv_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_hegv_tuple, 0, const_str_plain_hegv ); Py_INCREF( const_str_plain_hegv );
    const_tuple_str_plain_syev_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_syev_tuple, 0, const_str_plain_syev ); Py_INCREF( const_str_plain_syev );
    const_tuple_str_plain_sygv_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sygv_tuple, 0, const_str_plain_sygv ); Py_INCREF( const_str_plain_sygv );
    const_str_plain_previousBlockSize = UNSTREAM_STRING( &constant_bin[ 277032 ], 17, 1 );
    const_str_plain_residualTolerance = UNSTREAM_STRING( &constant_bin[ 276311 ], 17, 1 );
    const_str_plain_activeBlockVectorP = UNSTREAM_STRING( &constant_bin[ 277429 ], 18, 1 );
    const_str_plain_activeBlockVectorR = UNSTREAM_STRING( &constant_bin[ 277304 ], 18, 1 );
    const_str_plain_activeBlockVectorAP = UNSTREAM_STRING( &constant_bin[ 277558 ], 19, 1 );
    const_str_plain_activeBlockVectorAR = UNSTREAM_STRING( &constant_bin[ 277673 ], 19, 1 );
    const_str_plain_activeBlockVectorBP = UNSTREAM_STRING( &constant_bin[ 277493 ], 19, 1 );
    const_str_plain_activeBlockVectorBR = UNSTREAM_STRING( &constant_bin[ 277738 ], 19, 1 );
    const_tuple_str_plain_savetxt_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_savetxt_tuple, 0, const_str_plain_savetxt ); Py_INCREF( const_str_plain_savetxt );
    const_str_plain_residualNormsHistory = UNSTREAM_STRING( &constant_bin[ 276910 ], 20, 1 );
    const_str_plain_CallableLinearOperator = UNSTREAM_STRING( &constant_bin[ 275542 ], 22, 1 );
    const_str_plain_retResidualNormsHistory = UNSTREAM_STRING( &constant_bin[ 278536 ], 23, 1 );
    const_dict_208766c7396b6949dabb1a9785932806 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_208766c7396b6949dabb1a9785932806, const_str_plain_retInvR, Py_True );
    const_dict_271ecee2bf28a811fa80fc8aafef4116 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_271ecee2bf28a811fa80fc8aafef4116, const_str_plain_precision, const_int_pos_8 );
    const_tuple_str_plain_ar_str_plain_aux_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ar_str_plain_aux_tuple, 0, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_str_plain_ar_str_plain_aux_tuple, 1, const_str_plain_aux ); Py_INCREF( const_str_plain_aux );
    const_str_digest_06ad8683589d2b6f144b49408f1b7b98 = UNSTREAM_STRING( &constant_bin[ 2424743 ], 9, 0 );
    const_str_digest_088b7c9d115463d9e5852d27a551d1de = UNSTREAM_STRING( &constant_bin[ 2424752 ], 12, 0 );
    const_str_digest_19591a1ad3c6e02cd1d09a17c055dd26 = UNSTREAM_STRING( &constant_bin[ 2424764 ], 11, 0 );
    const_str_digest_1f83378ea9dcf0a81bb226b9679fa37d = UNSTREAM_STRING( &constant_bin[ 2424775 ], 247, 0 );
    const_str_digest_21a0a09629a887bb5cd9f6dfd2612a40 = UNSTREAM_STRING( &constant_bin[ 2425022 ], 39, 0 );
    const_str_digest_21bd31c7d55644e987c854a513340620 = UNSTREAM_STRING( &constant_bin[ 2425061 ], 44, 0 );
    const_str_digest_2c321f6e5584684eb9415cba068b0908 = UNSTREAM_STRING( &constant_bin[ 2425105 ], 7, 0 );
    const_str_digest_2c6912a0c91ff41479366224d686f1b1 = UNSTREAM_STRING( &constant_bin[ 2367206 ], 18, 0 );
    const_str_digest_2ebcbf83e0443b299084bc6f47d8e8c7 = UNSTREAM_STRING( &constant_bin[ 2425112 ], 15, 0 );
    const_str_digest_3065b0e1f607f0ee71aeda64fc832c85 = UNSTREAM_STRING( &constant_bin[ 2425127 ], 2102, 0 );
    const_str_digest_33af2a100fb867426f3e6fdfe4d86449 = UNSTREAM_STRING( &constant_bin[ 2427229 ], 40, 0 );
    const_str_digest_3c693c2a5ddd0075806ef8625ce65d11 = UNSTREAM_STRING( &constant_bin[ 2427269 ], 15, 0 );
    const_str_digest_409c02f88f7710464f1d79f22dcb388b = UNSTREAM_STRING( &constant_bin[ 2427284 ], 26, 0 );
    const_str_digest_41643b91a3912cdcf145ebabe5f44221 = UNSTREAM_STRING( &constant_bin[ 2427310 ], 36, 0 );
    const_str_digest_4527bfbd478f62f369ec9c51f868ec1a = UNSTREAM_STRING( &constant_bin[ 2427346 ], 16, 0 );
    const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b = UNSTREAM_STRING( &constant_bin[ 2427362 ], 75, 0 );
    const_str_digest_5d5d4fb16e4a9558db998b2c4e02a198 = UNSTREAM_STRING( &constant_bin[ 2427437 ], 15, 0 );
    const_str_digest_6da59f92cbc6ecc2b0ac130c35f402b1 = UNSTREAM_STRING( &constant_bin[ 2427452 ], 109, 0 );
    const_str_digest_872de85f88e3b31daa460c626bc92710 = UNSTREAM_STRING( &constant_bin[ 2427561 ], 15, 0 );
    const_str_digest_987f8660c1949312e62c57343f0d112f = UNSTREAM_STRING( &constant_bin[ 2427576 ], 19, 0 );
    const_str_digest_9d605d32df087341ab71d45113922203 = UNSTREAM_STRING( &constant_bin[ 2102973 ], 8, 0 );
    const_str_digest_a61df4ef7ac9928ac6a49d618e1b136c = UNSTREAM_STRING( &constant_bin[ 2427595 ], 44, 0 );
    const_str_digest_acdced9010978888e4aa59fc1221cabe = UNSTREAM_STRING( &constant_bin[ 2427639 ], 17, 0 );
    const_str_digest_b2f1f7dbe81b6e2fe872b5f0e7718f72 = UNSTREAM_STRING( &constant_bin[ 2427656 ], 275, 0 );
    const_str_digest_bc2060764ecb3513f1436f892e2de7e1 = UNSTREAM_STRING( &constant_bin[ 2427931 ], 24, 0 );
    const_str_digest_d767e91ae430aa3b68903e81abeaea2c = UNSTREAM_STRING( &constant_bin[ 2427955 ], 21, 0 );
    const_str_digest_e0de2f6edf3389d7277b91f59a9196ea = UNSTREAM_STRING( &constant_bin[ 2427976 ], 16, 0 );
    const_str_digest_ed36b2d01c57b62b1031b8940f0438e0 = UNSTREAM_STRING( &constant_bin[ 2427992 ], 35, 0 );
    const_tuple_str_plain_ar_str_plain_fileName_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ar_str_plain_fileName_tuple, 0, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_str_plain_ar_str_plain_fileName_tuple, 1, const_str_plain_fileName ); Py_INCREF( const_str_plain_fileName );
    const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 0, const_str_plain_mtxA ); Py_INCREF( const_str_plain_mtxA );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 1, const_str_plain_mtxB ); Py_INCREF( const_str_plain_mtxB );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 2, const_str_plain_eigenvectors ); Py_INCREF( const_str_plain_eigenvectors );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 3, const_str_plain_select ); Py_INCREF( const_str_plain_select );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 4, const_str_plain_sla ); Py_INCREF( const_str_plain_sla );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 5, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 6, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 7, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 8, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    PyTuple_SET_ITEM( const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 9, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_tuple_19944591bd1cc437b5ff216256663dd7_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_19944591bd1cc437b5ff216256663dd7_tuple, 0, const_str_plain_operatorInput ); Py_INCREF( const_str_plain_operatorInput );
    PyTuple_SET_ITEM( const_tuple_19944591bd1cc437b5ff216256663dd7_tuple, 1, const_str_plain_expectedShape ); Py_INCREF( const_str_plain_expectedShape );
    PyTuple_SET_ITEM( const_tuple_19944591bd1cc437b5ff216256663dd7_tuple, 2, const_str_plain_ident ); Py_INCREF( const_str_plain_ident );
    PyTuple_SET_ITEM( const_tuple_19944591bd1cc437b5ff216256663dd7_tuple, 3, const_str_plain_operator ); Py_INCREF( const_str_plain_operator );
    const_tuple_270c4bf1a03801543859292c13cbd15c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_270c4bf1a03801543859292c13cbd15c_tuple, 0, const_str_plain_mtxA ); Py_INCREF( const_str_plain_mtxA );
    PyTuple_SET_ITEM( const_tuple_270c4bf1a03801543859292c13cbd15c_tuple, 1, const_str_plain_mtxB ); Py_INCREF( const_str_plain_mtxB );
    PyTuple_SET_ITEM( const_tuple_270c4bf1a03801543859292c13cbd15c_tuple, 2, const_str_plain_eigenvectors ); Py_INCREF( const_str_plain_eigenvectors );
    PyTuple_SET_ITEM( const_tuple_270c4bf1a03801543859292c13cbd15c_tuple, 3, const_str_plain_select ); Py_INCREF( const_str_plain_select );
    const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple, 0, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple, 1, const_str_plain_blockVectorV ); Py_INCREF( const_str_plain_blockVectorV );
    PyTuple_SET_ITEM( const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple, 2, const_str_plain_blockVectorBV ); Py_INCREF( const_str_plain_blockVectorBV );
    PyTuple_SET_ITEM( const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple, 3, const_str_plain_retInvR ); Py_INCREF( const_str_plain_retInvR );
    PyTuple_SET_ITEM( const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple, 4, const_str_plain_sla ); Py_INCREF( const_str_plain_sla );
    PyTuple_SET_ITEM( const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple, 5, const_str_plain_gramVBV ); Py_INCREF( const_str_plain_gramVBV );
    const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 0, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 1, const_str_plain_X ); Py_INCREF( const_str_plain_X );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 2, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 3, const_str_plain_M ); Py_INCREF( const_str_plain_M );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 4, const_str_plain_Y ); Py_INCREF( const_str_plain_Y );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 5, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 6, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 7, const_str_plain_largest ); Py_INCREF( const_str_plain_largest );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 8, const_str_plain_verbosityLevel ); Py_INCREF( const_str_plain_verbosityLevel );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 9, const_str_plain_retLambdaHistory ); Py_INCREF( const_str_plain_retLambdaHistory );
    PyTuple_SET_ITEM( const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 10, const_str_plain_retResidualNormsHistory ); Py_INCREF( const_str_plain_retResidualNormsHistory );
    const_tuple_599fcc4219565bcbeb5b7bd1b9d64dcf_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_599fcc4219565bcbeb5b7bd1b9d64dcf_tuple, 0, const_str_plain_blockVectorV ); Py_INCREF( const_str_plain_blockVectorV );
    PyTuple_SET_ITEM( const_tuple_599fcc4219565bcbeb5b7bd1b9d64dcf_tuple, 1, const_str_plain_factYBY ); Py_INCREF( const_str_plain_factYBY );
    PyTuple_SET_ITEM( const_tuple_599fcc4219565bcbeb5b7bd1b9d64dcf_tuple, 2, const_str_plain_blockVectorBY ); Py_INCREF( const_str_plain_blockVectorBY );
    PyTuple_SET_ITEM( const_tuple_599fcc4219565bcbeb5b7bd1b9d64dcf_tuple, 3, const_str_plain_blockVectorY ); Py_INCREF( const_str_plain_blockVectorY );
    const_tuple_8e6a5fe1234f17aa4f1cc8cb8e91cd5b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8e6a5fe1234f17aa4f1cc8cb8e91cd5b_tuple, 0, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    PyTuple_SET_ITEM( const_tuple_8e6a5fe1234f17aa4f1cc8cb8e91cd5b_tuple, 1, const_str_plain_blockVectorV ); Py_INCREF( const_str_plain_blockVectorV );
    PyTuple_SET_ITEM( const_tuple_8e6a5fe1234f17aa4f1cc8cb8e91cd5b_tuple, 2, const_str_plain_blockVectorBV ); Py_INCREF( const_str_plain_blockVectorBV );
    PyTuple_SET_ITEM( const_tuple_8e6a5fe1234f17aa4f1cc8cb8e91cd5b_tuple, 3, const_str_plain_retInvR ); Py_INCREF( const_str_plain_retInvR );
    const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple, 0, const_str_plain_blockVectorV ); Py_INCREF( const_str_plain_blockVectorV );
    PyTuple_SET_ITEM( const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple, 1, const_str_plain_factYBY ); Py_INCREF( const_str_plain_factYBY );
    PyTuple_SET_ITEM( const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple, 2, const_str_plain_blockVectorBY ); Py_INCREF( const_str_plain_blockVectorBY );
    PyTuple_SET_ITEM( const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple, 3, const_str_plain_blockVectorY ); Py_INCREF( const_str_plain_blockVectorY );
    PyTuple_SET_ITEM( const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple, 4, const_str_plain_gramYBV ); Py_INCREF( const_str_plain_gramYBV );
    PyTuple_SET_ITEM( const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple, 5, const_str_plain_sla ); Py_INCREF( const_str_plain_sla );
    PyTuple_SET_ITEM( const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple, 6, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    const_tuple_fdba8eb06185d0591ca5eb9c9a2721c1_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2428027 ], 976 );
    const_tuple_str_plain_operatorInput_str_plain_expectedShape_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_operatorInput_str_plain_expectedShape_tuple, 0, const_str_plain_operatorInput ); Py_INCREF( const_str_plain_operatorInput );
    PyTuple_SET_ITEM( const_tuple_str_plain_operatorInput_str_plain_expectedShape_tuple, 1, const_str_plain_expectedShape ); Py_INCREF( const_str_plain_expectedShape );
    const_tuple_str_plain_ar_str_plain_fileName_str_plain_savetxt_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ar_str_plain_fileName_str_plain_savetxt_tuple, 0, const_str_plain_ar ); Py_INCREF( const_str_plain_ar );
    PyTuple_SET_ITEM( const_tuple_str_plain_ar_str_plain_fileName_str_plain_savetxt_tuple, 1, const_str_plain_fileName ); Py_INCREF( const_str_plain_fileName );
    PyTuple_SET_ITEM( const_tuple_str_plain_ar_str_plain_fileName_str_plain_savetxt_tuple, 2, const_str_plain_savetxt ); Py_INCREF( const_str_plain_savetxt );
    const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 4, const_int_pos_20 ); Py_INCREF( const_int_pos_20 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 5, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 6, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 7, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple, 8, Py_False ); Py_INCREF( Py_False );
}

// The module code objects.
static PyCodeObject *codeobj_c6ab30ad14d3d57f844a99efc28babf5;
static PyCodeObject *codeobj_cce96516c7d03d6fa12f042be867f226;
static PyCodeObject *codeobj_3893b442e4ba9175a482840001331046;
static PyCodeObject *codeobj_00559fe9176866f402dd328d706fcc2c;
static PyCodeObject *codeobj_e54d871b0f7c30e82444ea11a69d9cc9;
static PyCodeObject *codeobj_7b9f89b67b0524e6c9fe4702c3db809a;
static PyCodeObject *codeobj_66c691fdc3d517f1db8b6902ac79ec89;
static PyCodeObject *codeobj_750794f07ac85a678ca4393a477627f0;
static PyCodeObject *codeobj_617d712187d531f52f64f81de386b599;
static PyCodeObject *codeobj_8fc071a71e2433fd796e62307c09fbbe;
static PyCodeObject *codeobj_100a581219b133ac10af79dcf60b707c;
static PyCodeObject *codeobj_9e85cef337e8948c06d556ad84ee22ee;
static PyCodeObject *codeobj_0f077a32e78ef89e12b66a2b780fc6da;
static PyCodeObject *codeobj_997ddfdd268f5225ee8273c7df8717ee;
static PyCodeObject *codeobj_bc68840c90d91356808df948e2a7df43;
static PyCodeObject *codeobj_32f84022510c9d2ea68b10ecdd8502e3;
static PyCodeObject *codeobj_b08cb0a4a7b34e3c98f208d26c008547;
static PyCodeObject *codeobj_e37b02476f5b320ca670d0a982549c61;
static PyCodeObject *codeobj_8e6873f0a5303fc159904738ff721011;

static void _initModuleCodeObjects(void)
{
    codeobj_c6ab30ad14d3d57f844a99efc28babf5 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_CallableLinearOperator, 95, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cce96516c7d03d6fa12f042be867f226 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain___call__, 96, const_tuple_str_plain_self_str_plain_x_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3893b442e4ba9175a482840001331046 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_applyConstraints, 130, const_tuple_599fcc4219565bcbeb5b7bd1b9d64dcf_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_00559fe9176866f402dd328d706fcc2c = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_applyConstraints, 130, const_tuple_c92030cf0807fe81e2f796a2f7c16604_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e54d871b0f7c30e82444ea11a69d9cc9 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_as2d, 82, const_tuple_str_plain_ar_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7b9f89b67b0524e6c9fe4702c3db809a = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_as2d, 82, const_tuple_str_plain_ar_str_plain_aux_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_66c691fdc3d517f1db8b6902ac79ec89 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_b_orthonormalize, 138, const_tuple_8e6a5fe1234f17aa4f1cc8cb8e91cd5b_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_750794f07ac85a678ca4393a477627f0 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_b_orthonormalize, 138, const_tuple_39995b56871d0e0dd6b8ec2578bb4275_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_617d712187d531f52f64f81de386b599 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_ident, 112, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8fc071a71e2433fd796e62307c09fbbe = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_lobpcg, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_100a581219b133ac10af79dcf60b707c = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_lobpcg, 161, const_tuple_4939d693c2ed3d470492ed7d58ef8ba7_tuple, 11, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9e85cef337e8948c06d556ad84ee22ee = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_lobpcg, 161, const_tuple_fdba8eb06185d0591ca5eb9c9a2721c1_tuple, 11, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0f077a32e78ef89e12b66a2b780fc6da = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_makeOperator, 100, const_tuple_str_plain_operatorInput_str_plain_expectedShape_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_997ddfdd268f5225ee8273c7df8717ee = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_makeOperator, 100, const_tuple_19944591bd1cc437b5ff216256663dd7_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bc68840c90d91356808df948e2a7df43 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_pause, 70, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_32f84022510c9d2ea68b10ecdd8502e3 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_save, 74, const_tuple_str_plain_ar_str_plain_fileName_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b08cb0a4a7b34e3c98f208d26c008547 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_save, 74, const_tuple_str_plain_ar_str_plain_fileName_str_plain_savetxt_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e37b02476f5b320ca670d0a982549c61 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_symeig, 31, const_tuple_270c4bf1a03801543859292c13cbd15c_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8e6873f0a5303fc159904738ff721011 = MAKE_CODEOBJ( const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b, const_str_plain_symeig, 31, const_tuple_05bf564a31906d2ac4842c7ac3f1906a_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list );


static PyObject *MAKE_FUNCTION_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );


static PyObject *MAKE_FUNCTION_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );


static PyObject *MAKE_FUNCTION_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );


static PyObject *MAKE_FUNCTION_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );


static PyObject *MAKE_FUNCTION_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );


static PyObject *MAKE_FUNCTION_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );


static PyObject *MAKE_FUNCTION_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );


static PyObject *MAKE_FUNCTION_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_mtxA, PyObject *_python_par_mtxB, PyObject *_python_par_eigenvectors, PyObject *_python_par_select )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_mtxA; par_mtxA.object = _python_par_mtxA;
    PyObjectLocalVariable par_mtxB; par_mtxB.object = _python_par_mtxB;
    PyObjectLocalVariable par_eigenvectors; par_eigenvectors.object = _python_par_eigenvectors;
    PyObjectLocalVariable par_select; par_select.object = _python_par_select;
    PyObjectLocalVariable var_sla;
    PyObjectLocalVariable var_fun;
    PyObjectLocalVariable var_out;
    PyObjectLocalVariable var_w;
    PyObjectLocalVariable var_ii;
    PyObjectLocalVariable var_v;
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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_call_pos_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_subscript_8;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    PyObject *tmp_subscr_target_7;
    PyObject *tmp_subscr_target_8;
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
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e37b02476f5b320ca670d0a982549c61, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_sla.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sla,
            var_sla.object
        );

    }
    if ((var_fun.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fun,
            var_fun.object
        );

    }
    if ((var_out.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_out,
            var_out.object
        );

    }
    if ((var_w.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_w,
            var_w.object
        );

    }
    if ((var_ii.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ii,
            var_ii.object
        );

    }
    if ((var_v.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_v,
            var_v.object
        );

    }
    if ((par_mtxA.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mtxA,
            par_mtxA.object
        );

    }
    if ((par_mtxB.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mtxB,
            par_mtxB.object
        );

    }
    if ((par_eigenvectors.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_eigenvectors,
            par_eigenvectors.object
        );

    }
    if ((par_select.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_select,
            par_select.object
        );

    }
    frame_function->f_lineno = 32;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_linalg );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    assert( var_sla.object == NULL );
    var_sla.object = tmp_assign_source_1;

    tmp_compare_left_1 = par_select.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 252328 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_iscomplexobj );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_mtxA.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 34;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_compare_left_2 = par_mtxB.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275307 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_2 = var_sla.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_lapack_funcs );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = const_tuple_str_plain_heev_tuple;
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_mtxA.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_arrays;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 36;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    assert( var_fun.object == NULL );
    var_fun.object = tmp_assign_source_2;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_3 = var_sla.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get_lapack_funcs );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = const_tuple_str_plain_hegv_tuple;
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_mtxA.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_kw_2 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dict_value_2, 0, tmp_tuple_element_2 );
    tmp_dict_key_2 = const_str_plain_arrays;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 38;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    assert( var_fun.object == NULL );
    var_fun.object = tmp_assign_source_3;

    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = par_mtxB.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275307 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_3)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_4 = var_sla.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get_lapack_funcs );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_3 = const_tuple_str_plain_syev_tuple;
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_mtxA.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_kw_3 );
        Py_DECREF( tmp_dict_value_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dict_value_3, 0, tmp_tuple_element_3 );
    tmp_dict_key_3 = const_str_plain_arrays;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 41;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    assert( var_fun.object == NULL );
    var_fun.object = tmp_assign_source_4;

    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_5 = var_sla.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get_lapack_funcs );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_4 = const_tuple_str_plain_sygv_tuple;
    tmp_call_kw_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = PyTuple_New( 1 );
    tmp_tuple_element_4 = par_mtxA.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_kw_4 );
        Py_DECREF( tmp_dict_value_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_dict_value_4, 0, tmp_tuple_element_4 );
    tmp_dict_key_4 = const_str_plain_arrays;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    frame_function->f_lineno = 43;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    assert( var_fun.object == NULL );
    var_fun.object = tmp_assign_source_5;

    branch_end_4:;
    branch_end_2:;
    tmp_compare_left_4 = par_mtxB.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275307 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_is_4 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_4)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_6 = var_fun.object;

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48223 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_mtxA.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 46;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    assert( var_out.object == NULL );
    var_out.object = tmp_assign_source_6;

    goto branch_end_5;
    branch_no_5:;
    tmp_called_7 = var_fun.object;

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 48223 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_mtxA.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_mtxB.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275307 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 48;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    assert( var_out.object == NULL );
    var_out.object = tmp_assign_source_7;

    tmp_assign_source_8 = PyTuple_New( 3 );
    tmp_subscr_target_1 = var_out.object;

    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_5 );
    tmp_subscr_target_2 = var_out.object;

    tmp_subscr_subscript_2 = const_int_0;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_8, 1, tmp_tuple_element_5 );
    tmp_subscr_target_3 = var_out.object;

    tmp_subscr_subscript_3 = const_int_pos_2;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_8, 2, tmp_tuple_element_5 );
    assert( var_out.object != NULL );
    {
        PyObject *old = var_out.object;
        var_out.object = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_end_5:;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_6 = var_sla.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_eig );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_5 = PyTuple_New( 2 );
    tmp_tuple_element_6 = par_mtxA.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275257 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = par_mtxB.object;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275307 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 1, tmp_tuple_element_6 );
    tmp_call_kw_5 = _PyDict_NewPresized( 1 );
    tmp_dict_value_5 = par_eigenvectors.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 272960 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_right;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 56;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    assert( var_out.object == NULL );
    var_out.object = tmp_assign_source_9;

    tmp_subscr_target_4 = var_out.object;

    tmp_subscr_subscript_4 = const_int_0;
    tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( var_w.object == NULL );
    var_w.object = tmp_assign_source_10;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_argsort );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_w.object;

    frame_function->f_lineno = 58;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    assert( var_ii.object == NULL );
    var_ii.object = tmp_assign_source_11;

    tmp_subscr_target_5 = var_w.object;

    tmp_dircall_arg1_1 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_select.object;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 252328 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), INCREASE_REFCOUNT( tmp_dircall_arg2_1 ) );
    if ( tmp_subscr_subscript_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_subscript_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    assert( var_w.object != NULL );
    {
        PyObject *old = var_w.object;
        var_w.object = tmp_assign_source_12;
        Py_DECREF( old );
    }

    tmp_cond_value_2 = par_eigenvectors.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 272960 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
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
    tmp_subscr_target_7 = var_out.object;

    tmp_subscr_subscript_7 = const_int_pos_1;
    tmp_subscr_target_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_6 = PyTuple_New( 2 );
    tmp_tuple_element_7 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_ii.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 1, tmp_tuple_element_7 );
    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    Py_DECREF( tmp_subscr_subscript_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    assert( var_v.object == NULL );
    var_v.object = tmp_assign_source_13;

    tmp_subscr_target_8 = var_v.object;

    tmp_subscr_subscript_8 = PyTuple_New( 2 );
    tmp_tuple_element_8 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_8, 0, tmp_tuple_element_8 );
    tmp_dircall_arg1_2 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_8 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = par_select.object;

    if ( tmp_dircall_arg2_2 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 252328 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_8 = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_2 ), INCREASE_REFCOUNT( tmp_dircall_arg2_2 ) );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_8 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_8, 1, tmp_tuple_element_8 );
    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_subscript_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( var_v.object != NULL );
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_14;
        Py_DECREF( old );
    }

    tmp_assign_source_15 = PyTuple_New( 3 );
    tmp_tuple_element_9 = var_w.object;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_v.object;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 1, tmp_tuple_element_9 );
    tmp_tuple_element_9 = const_int_0;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 2, tmp_tuple_element_9 );
    assert( var_out.object != NULL );
    {
        PyObject *old = var_out.object;
        var_out.object = tmp_assign_source_15;
        Py_DECREF( old );
    }

    goto branch_end_6;
    branch_no_6:;
    tmp_assign_source_16 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_w.object;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = const_int_0;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 1, tmp_tuple_element_10 );
    assert( var_out.object != NULL );
    {
        PyObject *old = var_out.object;
        var_out.object = tmp_assign_source_16;
        Py_DECREF( old );
    }

    branch_end_6:;
    branch_end_1:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_out.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7983 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
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
    if ((var_sla.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sla,
            var_sla.object
        );

    }
    if ((var_fun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fun,
            var_fun.object
        );

    }
    if ((var_out.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_out,
            var_out.object
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
    if ((var_ii.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ii,
            var_ii.object
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
    if ((par_mtxA.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mtxA,
            par_mtxA.object
        );

    }
    if ((par_mtxB.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mtxB,
            par_mtxB.object
        );

    }
    if ((par_eigenvectors.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_eigenvectors,
            par_eigenvectors.object
        );

    }
    if ((par_select.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_select,
            par_select.object
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
static PyObject *fparse_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_mtxA = NULL;
    PyObject *_python_par_mtxB = NULL;
    PyObject *_python_par_eigenvectors = NULL;
    PyObject *_python_par_select = NULL;
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
                PyErr_Format( PyExc_TypeError, "symeig() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_mtxA == key )
            {
                assert( _python_par_mtxA == NULL );
                _python_par_mtxA = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mtxB == key )
            {
                assert( _python_par_mtxB == NULL );
                _python_par_mtxB = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_eigenvectors == key )
            {
                assert( _python_par_eigenvectors == NULL );
                _python_par_eigenvectors = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_select == key )
            {
                assert( _python_par_select == NULL );
                _python_par_select = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mtxA, key ) == 1 )
            {
                assert( _python_par_mtxA == NULL );
                _python_par_mtxA = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mtxB, key ) == 1 )
            {
                assert( _python_par_mtxB == NULL );
                _python_par_mtxB = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_eigenvectors, key ) == 1 )
            {
                assert( _python_par_eigenvectors == NULL );
                _python_par_eigenvectors = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_select, key ) == 1 )
            {
                assert( _python_par_select == NULL );
                _python_par_select = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "symeig() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
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
         if (unlikely( _python_par_mtxA != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_mtxA = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_mtxA == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_mtxA = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_mtxB != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_mtxB = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_mtxB == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_mtxB = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_eigenvectors != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_eigenvectors = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_eigenvectors == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_eigenvectors = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_select != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_select = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_select == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_select = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_mtxA == NULL || _python_par_mtxB == NULL || _python_par_eigenvectors == NULL || _python_par_select == NULL ))
    {
        PyObject *values[] = { _python_par_mtxA, _python_par_mtxB, _python_par_eigenvectors, _python_par_select };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_mtxA, _python_par_mtxB, _python_par_eigenvectors, _python_par_select );

error_exit:;

    Py_XDECREF( _python_par_mtxA );
    Py_XDECREF( _python_par_mtxB );
    Py_XDECREF( _python_par_eigenvectors );
    Py_XDECREF( _python_par_select );

    return NULL;
}

static PyObject *dparse_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bc68840c90d91356808df948e2a7df43, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_input );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 71;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
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
static PyObject *fparse_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self );
    }
    else
    {
        PyObject *result = fparse_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_ar, PyObject *_python_par_fileName )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_ar; par_ar.object = _python_par_ar;
    PyObjectLocalVariable par_fileName; par_fileName.object = _python_par_fileName;
    PyObjectLocalVariable var_savetxt;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_32f84022510c9d2ea68b10ecdd8502e3, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_savetxt.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_savetxt,
            var_savetxt.object
        );

    }
    if ((par_ar.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ar,
            par_ar.object
        );

    }
    if ((par_fileName.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fileName,
            par_fileName.object
        );

    }
    frame_function->f_lineno = 75;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_savetxt_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_savetxt );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    assert( var_savetxt.object == NULL );
    var_savetxt.object = tmp_assign_source_1;

    tmp_called_1 = var_savetxt.object;

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_fileName.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275357 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_ar.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_271ecee2bf28a811fa80fc8aafef4116 );
    frame_function->f_lineno = 76;
    tmp_unused = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
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
    if ((var_savetxt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_savetxt,
            var_savetxt.object
        );

    }
    if ((par_ar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ar,
            par_ar.object
        );

    }
    if ((par_fileName.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fileName,
            par_fileName.object
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
static PyObject *fparse_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ar = NULL;
    PyObject *_python_par_fileName = NULL;
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
                PyErr_Format( PyExc_TypeError, "save() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_ar == key )
            {
                assert( _python_par_ar == NULL );
                _python_par_ar = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_fileName == key )
            {
                assert( _python_par_fileName == NULL );
                _python_par_fileName = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ar, key ) == 1 )
            {
                assert( _python_par_ar == NULL );
                _python_par_ar = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_fileName, key ) == 1 )
            {
                assert( _python_par_fileName == NULL );
                _python_par_fileName = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "save() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_ar != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_ar = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_ar == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_ar = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_fileName != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_fileName = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_fileName == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_fileName = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_ar == NULL || _python_par_fileName == NULL ))
    {
        PyObject *values[] = { _python_par_ar, _python_par_fileName };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_ar, _python_par_fileName );

error_exit:;

    Py_XDECREF( _python_par_ar );
    Py_XDECREF( _python_par_fileName );

    return NULL;
}

static PyObject *dparse_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_ar )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_ar; par_ar.object = _python_par_ar;
    PyObjectLocalVariable var_aux;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e54d871b0f7c30e82444ea11a69d9cc9, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_source_name_1 = par_ar.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 87;
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
    tmp_return_value = par_ar.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_ar.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 90;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    assert( var_aux.object == NULL );
    var_aux.object = tmp_assign_source_1;

    tmp_assattr_name_1 = PyTuple_New( 2 );
    tmp_source_name_3 = par_ar.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126885 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assattr_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assattr_name_1, 1, tmp_tuple_element_2 );
    tmp_assattr_target_1 = var_aux.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_shape, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_return_value = var_aux.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

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
    if ((var_aux.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_aux,
            var_aux.object
        );

    }
    if ((par_ar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ar,
            par_ar.object
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
static PyObject *fparse_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_ar = NULL;
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
                PyErr_Format( PyExc_TypeError, "as2d() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_ar == key )
            {
                assert( _python_par_ar == NULL );
                _python_par_ar = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ar, key ) == 1 )
            {
                assert( _python_par_ar == NULL );
                _python_par_ar = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "as2d() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_ar != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_ar = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_ar == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_ar = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_ar == NULL ))
    {
        PyObject *values[] = { _python_par_ar };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_ar );

error_exit:;

    Py_XDECREF( _python_par_ar );

    return NULL;
}

static PyObject *dparse_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___call__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_21a0a09629a887bb5cd9f6dfd2612a40;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c6ab30ad14d3d57f844a99efc28babf5, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    assert( var___call__.object == NULL );
    var___call__.object = tmp_assign_source_2;


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
    if ((var___call__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___call__,
            var___call__.object
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
    if ((var___call__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___call__,
            var___call__.object
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


static PyObject *impl_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cce96516c7d03d6fa12f042be867f226, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matmat );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 97;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
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
static PyObject *fparse_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_x = NULL;
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
                PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
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
            if ( found == false && const_str_plain_x == key )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__call__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_operatorInput, PyObject *_python_par_expectedShape )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_operatorInput; par_operatorInput.object = _python_par_operatorInput;
    PyObjectLocalVariable par_expectedShape; par_expectedShape.object = _python_par_expectedShape;
    PyObjectLocalVariable var_ident;
    PyObjectLocalVariable var_operator;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_GtE_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0f077a32e78ef89e12b66a2b780fc6da, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_compare_left_1 = par_operatorInput.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275411 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
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
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    assert( var_ident.object == NULL );
    var_ident.object = tmp_assign_source_1;

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_LinearOperator );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 274119 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_expectedShape.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275470 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_ident.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_ident.object;

    tmp_dict_key_1 = const_str_plain_matmat;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 114;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    assert( var_operator.object == NULL );
    var_operator.object = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_aslinearoperator );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aslinearoperator );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 269843 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_operatorInput.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275411 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 116;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    assert( var_operator.object == NULL );
    var_operator.object = tmp_assign_source_3;

    branch_end_1:;
    tmp_source_name_1 = var_operator.object;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = par_expectedShape.object;

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275470 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_409c02f88f7710464f1d79f22dcb388b;
    frame_function->f_lineno = 119;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 119;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5370 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_GtE_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_CallableLinearOperator );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CallableLinearOperator );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275529 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = var_operator.object;

    tmp_result = SET_ATTRIBUTE_CLASS_SLOT( tmp_assattr_target_1, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_3 = var_operator.object;

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_matmat );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = var_operator.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___call__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    branch_end_3:;

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
    if ((var_ident.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ident,
            var_ident.object
        );

    }
    if ((var_operator.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_operator,
            var_operator.object
        );

    }
    if ((par_operatorInput.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_operatorInput,
            par_operatorInput.object
        );

    }
    if ((par_expectedShape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_expectedShape,
            par_expectedShape.object
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
    tmp_return_value = var_operator.object;

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
static PyObject *fparse_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_operatorInput = NULL;
    PyObject *_python_par_expectedShape = NULL;
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
                PyErr_Format( PyExc_TypeError, "makeOperator() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_operatorInput == key )
            {
                assert( _python_par_operatorInput == NULL );
                _python_par_operatorInput = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_expectedShape == key )
            {
                assert( _python_par_expectedShape == NULL );
                _python_par_expectedShape = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_operatorInput, key ) == 1 )
            {
                assert( _python_par_operatorInput == NULL );
                _python_par_operatorInput = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_expectedShape, key ) == 1 )
            {
                assert( _python_par_expectedShape == NULL );
                _python_par_expectedShape = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "makeOperator() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_operatorInput != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_operatorInput = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_operatorInput == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_operatorInput = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_expectedShape != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_expectedShape = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_expectedShape == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_expectedShape = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_operatorInput == NULL || _python_par_expectedShape == NULL ))
    {
        PyObject *values[] = { _python_par_operatorInput, _python_par_expectedShape };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_operatorInput, _python_par_expectedShape );

error_exit:;

    Py_XDECREF( _python_par_operatorInput );
    Py_XDECREF( _python_par_expectedShape );

    return NULL;
}

static PyObject *dparse_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_617d712187d531f52f64f81de386b599, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_return_value = par_x.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
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
    if ((par_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            par_x.object
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
static PyObject *fparse_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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
                PyErr_Format( PyExc_TypeError, "ident() keywords must be strings" );
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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_x, key ) == 1 )
            {
                assert( _python_par_x == NULL );
                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ident() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_x == NULL ))
    {
        PyObject *values[] = { _python_par_x };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_blockVectorV, PyObject *_python_par_factYBY, PyObject *_python_par_blockVectorBY, PyObject *_python_par_blockVectorY )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_blockVectorV; par_blockVectorV.object = _python_par_blockVectorV;
    PyObjectLocalVariable par_factYBY; par_factYBY.object = _python_par_factYBY;
    PyObjectLocalVariable par_blockVectorBY; par_blockVectorBY.object = _python_par_blockVectorBY;
    PyObjectLocalVariable par_blockVectorY; par_blockVectorY.object = _python_par_blockVectorY;
    PyObjectLocalVariable var_gramYBV;
    PyObjectLocalVariable var_sla;
    PyObjectLocalVariable var_tmp;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3893b442e4ba9175a482840001331046, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_blockVectorBY.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275611 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_blockVectorV.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275670 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 132;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    assert( var_gramYBV.object == NULL );
    var_gramYBV.object = tmp_assign_source_1;

    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_gramYBV.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_gramYBV,
            var_gramYBV.object
        );

    }
    if ((var_sla.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sla,
            var_sla.object
        );

    }
    if ((var_tmp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_tmp,
            var_tmp.object
        );

    }
    if ((par_blockVectorV.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorV,
            par_blockVectorV.object
        );

    }
    if ((par_factYBY.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_factYBY,
            par_factYBY.object
        );

    }
    if ((par_blockVectorBY.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorBY,
            par_blockVectorBY.object
        );

    }
    if ((par_blockVectorY.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorY,
            par_blockVectorY.object
        );

    }
    frame_function->f_lineno = 133;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_linalg );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    assert( var_sla.object == NULL );
    var_sla.object = tmp_assign_source_2;

    tmp_source_name_3 = var_sla.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cho_solve );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_factYBY.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275728 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = var_gramYBV.object;

    frame_function->f_lineno = 134;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    assert( var_tmp.object == NULL );
    var_tmp.object = tmp_assign_source_3;

    tmp_assign_source_4 = par_blockVectorV.object;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275670 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    // Tried code
    tmp_binop_left_1 = tmp_inplace_assign_1__inplace_start.object;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dot );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = par_blockVectorY.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = var_tmp.object;

    frame_function->f_lineno = 135;
    tmp_binop_right_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_5;

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
    tmp_assign_source_6 = tmp_inplace_assign_1__inplace_end.object;

    if (par_blockVectorV.object == NULL)
    {
        par_blockVectorV.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = par_blockVectorV.object;
        par_blockVectorV.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
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

    tmp_tried_lineno_1 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

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
    if ((var_gramYBV.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gramYBV,
            var_gramYBV.object
        );

    }
    if ((var_sla.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sla,
            var_sla.object
        );

    }
    if ((var_tmp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tmp,
            var_tmp.object
        );

    }
    if ((par_blockVectorV.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorV,
            par_blockVectorV.object
        );

    }
    if ((par_factYBY.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_factYBY,
            par_factYBY.object
        );

    }
    if ((par_blockVectorBY.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorBY,
            par_blockVectorBY.object
        );

    }
    if ((par_blockVectorY.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorY,
            par_blockVectorY.object
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
static PyObject *fparse_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_blockVectorV = NULL;
    PyObject *_python_par_factYBY = NULL;
    PyObject *_python_par_blockVectorBY = NULL;
    PyObject *_python_par_blockVectorY = NULL;
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
                PyErr_Format( PyExc_TypeError, "applyConstraints() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_blockVectorV == key )
            {
                assert( _python_par_blockVectorV == NULL );
                _python_par_blockVectorV = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_factYBY == key )
            {
                assert( _python_par_factYBY == NULL );
                _python_par_factYBY = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_blockVectorBY == key )
            {
                assert( _python_par_blockVectorBY == NULL );
                _python_par_blockVectorBY = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_blockVectorY == key )
            {
                assert( _python_par_blockVectorY == NULL );
                _python_par_blockVectorY = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blockVectorV, key ) == 1 )
            {
                assert( _python_par_blockVectorV == NULL );
                _python_par_blockVectorV = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_factYBY, key ) == 1 )
            {
                assert( _python_par_factYBY == NULL );
                _python_par_factYBY = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blockVectorBY, key ) == 1 )
            {
                assert( _python_par_blockVectorBY == NULL );
                _python_par_blockVectorBY = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blockVectorY, key ) == 1 )
            {
                assert( _python_par_blockVectorY == NULL );
                _python_par_blockVectorY = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "applyConstraints() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
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
         if (unlikely( _python_par_blockVectorV != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_blockVectorV = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_blockVectorV == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_blockVectorV = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_factYBY != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_factYBY = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_factYBY == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_factYBY = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_blockVectorBY != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_blockVectorBY = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_blockVectorBY == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_blockVectorBY = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_blockVectorY != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_blockVectorY = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_blockVectorY == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_blockVectorY = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_blockVectorV == NULL || _python_par_factYBY == NULL || _python_par_blockVectorBY == NULL || _python_par_blockVectorY == NULL ))
    {
        PyObject *values[] = { _python_par_blockVectorV, _python_par_factYBY, _python_par_blockVectorBY, _python_par_blockVectorY };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_blockVectorV, _python_par_factYBY, _python_par_blockVectorBY, _python_par_blockVectorY );

error_exit:;

    Py_XDECREF( _python_par_blockVectorV );
    Py_XDECREF( _python_par_factYBY );
    Py_XDECREF( _python_par_blockVectorBY );
    Py_XDECREF( _python_par_blockVectorY );

    return NULL;
}

static PyObject *dparse_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_B, PyObject *_python_par_blockVectorV, PyObject *_python_par_blockVectorBV, PyObject *_python_par_retInvR )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_B; par_B.object = _python_par_B;
    PyObjectLocalVariable par_blockVectorV; par_blockVectorV.object = _python_par_blockVectorV;
    PyObjectLocalVariable par_blockVectorBV; par_blockVectorBV.object = _python_par_blockVectorBV;
    PyObjectLocalVariable par_retInvR; par_retInvR.object = _python_par_retInvR;
    PyObjectLocalVariable var_sla;
    PyObjectLocalVariable var_gramVBV;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_66c691fdc3d517f1db8b6902ac79ec89, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_sla.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sla,
            var_sla.object
        );

    }
    if ((var_gramVBV.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_gramVBV,
            var_gramVBV.object
        );

    }
    if ((par_B.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_B,
            par_B.object
        );

    }
    if ((par_blockVectorV.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorV,
            par_blockVectorV.object
        );

    }
    if ((par_blockVectorBV.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorBV,
            par_blockVectorBV.object
        );

    }
    if ((par_retInvR.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_retInvR,
            par_retInvR.object
        );

    }
    frame_function->f_lineno = 141;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_linalg );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    assert( var_sla.object == NULL );
    var_sla.object = tmp_assign_source_1;

    tmp_compare_left_1 = par_blockVectorBV.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275839 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
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
    tmp_compare_left_2 = par_B.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if (tmp_isnot_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_1 = par_B.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_blockVectorV.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275670 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 144;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    if (par_blockVectorBV.object == NULL)
    {
        par_blockVectorBV.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_blockVectorBV.object;
        par_blockVectorBV.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_3 = par_blockVectorV.object;

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275670 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    if (par_blockVectorBV.object == NULL)
    {
        par_blockVectorBV.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = par_blockVectorBV.object;
        par_blockVectorBV.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    branch_end_2:;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dot );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_blockVectorV.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275670 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_T );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_blockVectorBV.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275839 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 147;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    assert( var_gramVBV.object == NULL );
    var_gramVBV.object = tmp_assign_source_4;

    tmp_source_name_3 = var_sla.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cholesky );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_gramVBV.object;

    frame_function->f_lineno = 148;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    assert( var_gramVBV.object != NULL );
    {
        PyObject *old = var_gramVBV.object;
        var_gramVBV.object = tmp_assign_source_5;
        Py_DECREF( old );
    }

    tmp_source_name_4 = var_sla.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inv );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_gramVBV.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_ec6cc0116ef299a274b2baadbcdeac09 );
    frame_function->f_lineno = 149;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    assert( var_gramVBV.object != NULL );
    {
        PyObject *old = var_gramVBV.object;
        var_gramVBV.object = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dot );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_blockVectorV.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275670 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = var_gramVBV.object;

    frame_function->f_lineno = 151;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    if (par_blockVectorV.object == NULL)
    {
        par_blockVectorV.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = par_blockVectorV.object;
        par_blockVectorV.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_compare_left_3 = par_B.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if (tmp_isnot_2)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dot );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = par_blockVectorBV.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275839 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = var_gramVBV.object;

    frame_function->f_lineno = 153;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    if (par_blockVectorBV.object == NULL)
    {
        par_blockVectorBV.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = par_blockVectorBV.object;
        par_blockVectorBV.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    branch_no_3:;
    tmp_cond_value_1 = par_retInvR.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275898 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_2 = par_blockVectorV.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_blockVectorBV.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275839 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_gramVBV.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_blockVectorV.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_blockVectorBV.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275839 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    branch_end_4:;

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
    if ((var_sla.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sla,
            var_sla.object
        );

    }
    if ((var_gramVBV.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gramVBV,
            var_gramVBV.object
        );

    }
    if ((par_B.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_B,
            par_B.object
        );

    }
    if ((par_blockVectorV.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorV,
            par_blockVectorV.object
        );

    }
    if ((par_blockVectorBV.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorBV,
            par_blockVectorBV.object
        );

    }
    if ((par_retInvR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_retInvR,
            par_retInvR.object
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
static PyObject *fparse_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_B = NULL;
    PyObject *_python_par_blockVectorV = NULL;
    PyObject *_python_par_blockVectorBV = NULL;
    PyObject *_python_par_retInvR = NULL;
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
                PyErr_Format( PyExc_TypeError, "b_orthonormalize() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_B == key )
            {
                assert( _python_par_B == NULL );
                _python_par_B = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_blockVectorV == key )
            {
                assert( _python_par_blockVectorV == NULL );
                _python_par_blockVectorV = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_blockVectorBV == key )
            {
                assert( _python_par_blockVectorBV == NULL );
                _python_par_blockVectorBV = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_retInvR == key )
            {
                assert( _python_par_retInvR == NULL );
                _python_par_retInvR = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_B, key ) == 1 )
            {
                assert( _python_par_B == NULL );
                _python_par_B = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blockVectorV, key ) == 1 )
            {
                assert( _python_par_blockVectorV == NULL );
                _python_par_blockVectorV = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_blockVectorBV, key ) == 1 )
            {
                assert( _python_par_blockVectorBV == NULL );
                _python_par_blockVectorBV = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_retInvR, key ) == 1 )
            {
                assert( _python_par_retInvR == NULL );
                _python_par_retInvR = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "b_orthonormalize() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 4 ))
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
         if (unlikely( _python_par_B != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_B = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_B == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_B = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_blockVectorV != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_blockVectorV = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_blockVectorV == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_blockVectorV = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_blockVectorBV != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_blockVectorBV = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_blockVectorBV == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_blockVectorBV = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_retInvR != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_retInvR = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_retInvR == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_retInvR = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_B == NULL || _python_par_blockVectorV == NULL || _python_par_blockVectorBV == NULL || _python_par_retInvR == NULL ))
    {
        PyObject *values[] = { _python_par_B, _python_par_blockVectorV, _python_par_blockVectorBV, _python_par_retInvR };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_B, _python_par_blockVectorV, _python_par_blockVectorBV, _python_par_retInvR );

error_exit:;

    Py_XDECREF( _python_par_B );
    Py_XDECREF( _python_par_blockVectorV );
    Py_XDECREF( _python_par_blockVectorBV );
    Py_XDECREF( _python_par_retInvR );

    return NULL;
}

static PyObject *dparse_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject *_python_par_A, PyObject *_python_par_X, PyObject *_python_par_B, PyObject *_python_par_M, PyObject *_python_par_Y, PyObject *_python_par_tol, PyObject *_python_par_maxiter, PyObject *_python_par_largest, PyObject *_python_par_verbosityLevel, PyObject *_python_par_retLambdaHistory, PyObject *_python_par_retResidualNormsHistory )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_A; par_A.object = _python_par_A;
    PyObjectLocalVariable par_X; par_X.object = _python_par_X;
    PyObjectLocalVariable par_B; par_B.object = _python_par_B;
    PyObjectLocalVariable par_M; par_M.object = _python_par_M;
    PyObjectLocalVariable par_Y; par_Y.object = _python_par_Y;
    PyObjectLocalVariable par_tol; par_tol.object = _python_par_tol;
    PyObjectLocalVariable par_maxiter; par_maxiter.object = _python_par_maxiter;
    PyObjectLocalVariable par_largest; par_largest.object = _python_par_largest;
    PyObjectLocalVariable par_verbosityLevel; par_verbosityLevel.object = _python_par_verbosityLevel;
    PyObjectLocalVariable par_retLambdaHistory; par_retLambdaHistory.object = _python_par_retLambdaHistory;
    PyObjectLocalVariable par_retResidualNormsHistory; par_retResidualNormsHistory.object = _python_par_retResidualNormsHistory;
    PyObjectLocalVariable var_failureFlag;
    PyObjectLocalVariable var_sla;
    PyObjectLocalVariable var_blockVectorX;
    PyObjectLocalVariable var_blockVectorY;
    PyObjectLocalVariable var_residualTolerance;
    PyObjectLocalVariable var_maxIterations;
    PyObjectLocalVariable var_sizeY;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_sizeX;
    PyObjectLocalVariable var_lohi;
    PyObjectLocalVariable var_A_dense;
    PyObjectLocalVariable var_B_dense;
    PyObjectLocalVariable var__lambda;
    PyObjectLocalVariable var_eigBlockVector;
    PyObjectLocalVariable var_aux;
    PyObjectLocalVariable var_blockVectorBY;
    PyObjectLocalVariable var_gramYBY;
    PyObjectLocalVariable var_blockVectorBX;
    PyObjectLocalVariable var_blockVectorAX;
    PyObjectLocalVariable var_gramXAX;
    PyObjectLocalVariable var_gramXBX;
    PyObjectLocalVariable var_ii;
    PyObjectLocalVariable var_activeMask;
    PyObjectLocalVariable var_lambdaHistory;
    PyObjectLocalVariable var_residualNormsHistory;
    PyObjectLocalVariable var_previousBlockSize;
    PyObjectLocalVariable var_ident;
    PyObjectLocalVariable var_ident0;
    PyObjectLocalVariable var_blockVectorP;
    PyObjectLocalVariable var_blockVectorAP;
    PyObjectLocalVariable var_blockVectorBP;
    PyObjectLocalVariable var_iterationNumber;
    PyObjectLocalVariable var_blockVectorR;
    PyObjectLocalVariable var_residualNorms;
    PyObjectLocalVariable var_currentBlockSize;
    PyObjectLocalVariable var_activeBlockVectorR;
    PyObjectLocalVariable var_activeBlockVectorP;
    PyObjectLocalVariable var_activeBlockVectorAP;
    PyObjectLocalVariable var_activeBlockVectorBP;
    PyObjectLocalVariable var_activeBlockVectorBR;
    PyObjectLocalVariable var_activeBlockVectorAR;
    PyObjectLocalVariable var_invR;
    PyObjectLocalVariable var_xaw;
    PyObjectLocalVariable var_waw;
    PyObjectLocalVariable var_xbw;
    PyObjectLocalVariable var_xap;
    PyObjectLocalVariable var_wap;
    PyObjectLocalVariable var_pap;
    PyObjectLocalVariable var_xbp;
    PyObjectLocalVariable var_wbp;
    PyObjectLocalVariable var_gramA;
    PyObjectLocalVariable var_gramB;
    PyObjectLocalVariable var_eigBlockVectorX;
    PyObjectLocalVariable var_eigBlockVectorR;
    PyObjectLocalVariable var_eigBlockVectorP;
    PyObjectLocalVariable var_pp;
    PyObjectLocalVariable var_app;
    PyObjectLocalVariable var_bpp;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
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
    PyObjectTempVariable tmp_inplace_assign_9__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_9__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_10__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_10__inplace_end;
    PyObjectTempVariable tmp_tuple_unpack_4__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_4__element_1;
    PyObjectTempVariable tmp_tuple_unpack_4__element_2;
    PyObjectTempVariable tmp_tuple_unpack_5__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_5__element_1;
    PyObjectTempVariable tmp_tuple_unpack_5__element_2;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_6__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_6__element_1;
    PyObjectTempVariable tmp_tuple_unpack_6__element_2;
    PyObjectTempVariable tmp_tuple_unpack_7__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_7__element_1;
    PyObjectTempVariable tmp_tuple_unpack_7__element_2;
    PyObjectTempVariable tmp_tuple_unpack_7__element_3;
    PyObjectTempVariable tmp_tuple_unpack_8__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_8__element_1;
    PyObjectTempVariable tmp_tuple_unpack_8__element_2;
    PyObjectTempVariable tmp_inplace_assign_11__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_11__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_12__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_12__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_13__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_13__inplace_end;
    PyObjectTempVariable tmp_tuple_unpack_9__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_9__element_1;
    PyObjectTempVariable tmp_tuple_unpack_9__element_2;
    PyObjectTempVariable tmp_tuple_unpack_9__element_3;
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
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_assign_source_165;
    PyObject *tmp_assign_source_166;
    PyObject *tmp_assign_source_167;
    PyObject *tmp_assign_source_168;
    PyObject *tmp_assign_source_169;
    PyObject *tmp_assign_source_170;
    PyObject *tmp_assign_source_171;
    PyObject *tmp_assign_source_172;
    PyObject *tmp_assign_source_173;
    PyObject *tmp_assign_source_174;
    PyObject *tmp_assign_source_175;
    PyObject *tmp_assign_source_176;
    PyObject *tmp_assign_source_177;
    PyObject *tmp_assign_source_178;
    PyObject *tmp_assign_source_179;
    PyObject *tmp_assign_source_180;
    PyObject *tmp_assign_source_181;
    PyObject *tmp_assign_source_182;
    PyObject *tmp_assign_source_183;
    PyObject *tmp_assign_source_184;
    PyObject *tmp_assign_source_185;
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
    PyObject *tmp_call_arg_element_62;
    PyObject *tmp_call_arg_element_63;
    PyObject *tmp_call_arg_element_64;
    PyObject *tmp_call_arg_element_65;
    PyObject *tmp_call_arg_element_66;
    PyObject *tmp_call_arg_element_67;
    PyObject *tmp_call_arg_element_68;
    PyObject *tmp_call_arg_element_69;
    PyObject *tmp_call_arg_element_70;
    PyObject *tmp_call_arg_element_71;
    PyObject *tmp_call_arg_element_72;
    PyObject *tmp_call_arg_element_73;
    PyObject *tmp_call_arg_element_74;
    PyObject *tmp_call_arg_element_75;
    PyObject *tmp_call_arg_element_76;
    PyObject *tmp_call_arg_element_77;
    PyObject *tmp_call_arg_element_78;
    PyObject *tmp_call_arg_element_79;
    PyObject *tmp_call_arg_element_80;
    PyObject *tmp_call_arg_element_81;
    PyObject *tmp_call_arg_element_82;
    PyObject *tmp_call_arg_element_83;
    PyObject *tmp_call_arg_element_84;
    PyObject *tmp_call_arg_element_85;
    PyObject *tmp_call_arg_element_86;
    PyObject *tmp_call_arg_element_87;
    PyObject *tmp_call_arg_element_88;
    PyObject *tmp_call_arg_element_89;
    PyObject *tmp_call_arg_element_90;
    PyObject *tmp_call_arg_element_91;
    PyObject *tmp_call_arg_element_92;
    PyObject *tmp_call_arg_element_93;
    PyObject *tmp_call_arg_element_94;
    PyObject *tmp_call_arg_element_95;
    PyObject *tmp_call_arg_element_96;
    PyObject *tmp_call_arg_element_97;
    PyObject *tmp_call_arg_element_98;
    PyObject *tmp_call_arg_element_99;
    PyObject *tmp_call_arg_element_100;
    PyObject *tmp_call_arg_element_101;
    PyObject *tmp_call_arg_element_102;
    PyObject *tmp_call_arg_element_103;
    PyObject *tmp_call_arg_element_104;
    PyObject *tmp_call_arg_element_105;
    PyObject *tmp_call_arg_element_106;
    PyObject *tmp_call_arg_element_107;
    PyObject *tmp_call_arg_element_108;
    PyObject *tmp_call_arg_element_109;
    PyObject *tmp_call_arg_element_110;
    PyObject *tmp_call_arg_element_111;
    PyObject *tmp_call_arg_element_112;
    PyObject *tmp_call_arg_element_113;
    PyObject *tmp_call_arg_element_114;
    PyObject *tmp_call_arg_element_115;
    PyObject *tmp_call_arg_element_116;
    PyObject *tmp_call_arg_element_117;
    PyObject *tmp_call_arg_element_118;
    PyObject *tmp_call_arg_element_119;
    PyObject *tmp_call_arg_element_120;
    PyObject *tmp_call_arg_element_121;
    PyObject *tmp_call_arg_element_122;
    PyObject *tmp_call_arg_element_123;
    PyObject *tmp_call_arg_element_124;
    PyObject *tmp_call_arg_element_125;
    PyObject *tmp_call_arg_element_126;
    PyObject *tmp_call_arg_element_127;
    PyObject *tmp_call_arg_element_128;
    PyObject *tmp_call_arg_element_129;
    PyObject *tmp_call_arg_element_130;
    PyObject *tmp_call_arg_element_131;
    PyObject *tmp_call_arg_element_132;
    PyObject *tmp_call_arg_element_133;
    PyObject *tmp_call_arg_element_134;
    PyObject *tmp_call_arg_element_135;
    PyObject *tmp_call_arg_element_136;
    PyObject *tmp_call_arg_element_137;
    PyObject *tmp_call_arg_element_138;
    PyObject *tmp_call_arg_element_139;
    PyObject *tmp_call_arg_element_140;
    PyObject *tmp_call_arg_element_141;
    PyObject *tmp_call_arg_element_142;
    PyObject *tmp_call_arg_element_143;
    PyObject *tmp_call_arg_element_144;
    PyObject *tmp_call_arg_element_145;
    PyObject *tmp_call_arg_element_146;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_kw_6;
    PyObject *tmp_call_kw_7;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_call_pos_5;
    PyObject *tmp_call_pos_6;
    PyObject *tmp_call_pos_7;
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
    PyObject *tmp_called_52;
    PyObject *tmp_called_53;
    PyObject *tmp_called_54;
    PyObject *tmp_called_55;
    PyObject *tmp_called_56;
    PyObject *tmp_called_57;
    PyObject *tmp_called_58;
    PyObject *tmp_called_59;
    PyObject *tmp_called_60;
    PyObject *tmp_called_61;
    PyObject *tmp_called_62;
    PyObject *tmp_called_63;
    PyObject *tmp_called_64;
    PyObject *tmp_called_65;
    PyObject *tmp_called_66;
    PyObject *tmp_called_67;
    PyObject *tmp_called_68;
    PyObject *tmp_called_69;
    PyObject *tmp_called_70;
    PyObject *tmp_called_71;
    PyObject *tmp_called_72;
    PyObject *tmp_called_73;
    PyObject *tmp_called_74;
    PyObject *tmp_called_75;
    PyObject *tmp_called_76;
    PyObject *tmp_called_77;
    PyObject *tmp_called_78;
    PyObject *tmp_called_79;
    PyObject *tmp_called_80;
    PyObject *tmp_called_81;
    PyObject *tmp_called_82;
    PyObject *tmp_called_83;
    PyObject *tmp_called_84;
    PyObject *tmp_called_85;
    PyObject *tmp_called_86;
    PyObject *tmp_called_87;
    PyObject *tmp_called_88;
    PyObject *tmp_called_89;
    PyObject *tmp_called_90;
    PyObject *tmp_called_91;
    PyObject *tmp_called_92;
    PyObject *tmp_called_93;
    PyObject *tmp_called_94;
    PyObject *tmp_called_95;
    PyObject *tmp_called_96;
    PyObject *tmp_called_97;
    PyObject *tmp_called_98;
    PyObject *tmp_called_99;
    PyObject *tmp_called_100;
    PyObject *tmp_called_101;
    PyObject *tmp_called_102;
    PyObject *tmp_called_103;
    PyObject *tmp_called_104;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_Gt_3;
    int tmp_cmp_Gt_4;
    int tmp_cmp_Gt_5;
    int tmp_cmp_Gt_6;
    int tmp_cmp_Gt_7;
    int tmp_cmp_Gt_8;
    int tmp_cmp_Gt_9;
    int tmp_cmp_Gt_10;
    int tmp_cmp_Gt_11;
    int tmp_cmp_Gt_12;
    int tmp_cmp_Gt_13;
    int tmp_cmp_Gt_14;
    int tmp_cmp_Gt_15;
    int tmp_cmp_Gt_16;
    int tmp_cmp_Lt_1;
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
    PyObject *tmp_compare_left_26;
    PyObject *tmp_compare_left_27;
    PyObject *tmp_compare_left_28;
    PyObject *tmp_compare_left_29;
    PyObject *tmp_compare_left_30;
    PyObject *tmp_compare_left_31;
    PyObject *tmp_compare_left_32;
    PyObject *tmp_compare_left_33;
    PyObject *tmp_compare_left_34;
    PyObject *tmp_compare_left_35;
    PyObject *tmp_compare_left_36;
    PyObject *tmp_compare_left_37;
    PyObject *tmp_compare_left_38;
    PyObject *tmp_compare_left_39;
    PyObject *tmp_compare_left_40;
    PyObject *tmp_compare_left_41;
    PyObject *tmp_compare_left_42;
    PyObject *tmp_compare_left_43;
    PyObject *tmp_compare_left_44;
    PyObject *tmp_compare_left_45;
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
    PyObject *tmp_compare_right_26;
    PyObject *tmp_compare_right_27;
    PyObject *tmp_compare_right_28;
    PyObject *tmp_compare_right_29;
    PyObject *tmp_compare_right_30;
    PyObject *tmp_compare_right_31;
    PyObject *tmp_compare_right_32;
    PyObject *tmp_compare_right_33;
    PyObject *tmp_compare_right_34;
    PyObject *tmp_compare_right_35;
    PyObject *tmp_compare_right_36;
    PyObject *tmp_compare_right_37;
    PyObject *tmp_compare_right_38;
    PyObject *tmp_compare_right_39;
    PyObject *tmp_compare_right_40;
    PyObject *tmp_compare_right_41;
    PyObject *tmp_compare_right_42;
    PyObject *tmp_compare_right_43;
    PyObject *tmp_compare_right_44;
    PyObject *tmp_compare_right_45;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    bool tmp_isnot_7;
    bool tmp_isnot_8;
    bool tmp_isnot_9;
    bool tmp_isnot_10;
    bool tmp_isnot_11;
    bool tmp_isnot_12;
    bool tmp_isnot_13;
    bool tmp_isnot_14;
    bool tmp_isnot_15;
    bool tmp_isnot_16;
    bool tmp_isnot_17;
    bool tmp_isnot_18;
    bool tmp_isnot_19;
    bool tmp_isnot_20;
    bool tmp_isnot_21;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iter_arg_10;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_attempt_3;
    PyObject *tmp_iterator_attempt_4;
    PyObject *tmp_iterator_attempt_5;
    PyObject *tmp_iterator_attempt_6;
    PyObject *tmp_iterator_attempt_7;
    PyObject *tmp_iterator_attempt_8;
    PyObject *tmp_iterator_attempt_9;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_iterator_name_6;
    PyObject *tmp_iterator_name_7;
    PyObject *tmp_iterator_name_8;
    PyObject *tmp_iterator_name_9;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_list_element_6;
    PyObject *tmp_list_element_7;
    PyObject *tmp_list_element_8;
    PyObject *tmp_list_element_9;
    PyObject *tmp_list_element_10;
    PyObject *tmp_list_element_11;
    PyObject *tmp_list_element_12;
    PyObject *tmp_list_element_13;
    PyObject *tmp_list_element_14;
    PyObject *tmp_list_element_15;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_lower_3;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    PyObject *tmp_slice_source_6;
    PyObject *tmp_slice_source_7;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    PyObject *tmp_slice_upper_3;
    PyObject *tmp_slice_upper_4;
    PyObject *tmp_slice_upper_5;
    PyObject *tmp_sliceobj_step_1;
    PyObject *tmp_sliceobj_step_2;
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
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_subscript_8;
    PyObject *tmp_subscr_subscript_9;
    PyObject *tmp_subscr_subscript_10;
    PyObject *tmp_subscr_subscript_11;
    PyObject *tmp_subscr_subscript_12;
    PyObject *tmp_subscr_subscript_13;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    PyObject *tmp_subscr_target_7;
    PyObject *tmp_subscr_target_8;
    PyObject *tmp_subscr_target_9;
    PyObject *tmp_subscr_target_10;
    PyObject *tmp_subscr_target_11;
    PyObject *tmp_subscr_target_12;
    PyObject *tmp_subscr_target_13;
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
    int tmp_tried_lineno_13;
    int tmp_tried_lineno_14;
    int tmp_tried_lineno_15;
    int tmp_tried_lineno_16;
    int tmp_tried_lineno_17;
    int tmp_tried_lineno_18;
    int tmp_tried_lineno_19;
    int tmp_tried_lineno_20;
    int tmp_tried_lineno_21;
    int tmp_tried_lineno_22;
    int tmp_tried_lineno_23;
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
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
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
    PyObject *tmp_unpack_15;
    PyObject *tmp_unpack_16;
    PyObject *tmp_unpack_17;
    PyObject *tmp_unpack_18;
    PyObject *tmp_unpack_19;
    PyObject *tmp_unpack_20;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( var_failureFlag.object == NULL );
    var_failureFlag.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_100a581219b133ac10af79dcf60b707c, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_failureFlag.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_failureFlag,
            var_failureFlag.object
        );

    }
    if ((var_sla.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sla,
            var_sla.object
        );

    }
    if ((var_blockVectorX.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorX,
            var_blockVectorX.object
        );

    }
    if ((var_blockVectorY.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorY,
            var_blockVectorY.object
        );

    }
    if ((var_residualTolerance.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_residualTolerance,
            var_residualTolerance.object
        );

    }
    if ((var_maxIterations.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_maxIterations,
            var_maxIterations.object
        );

    }
    if ((var_sizeY.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sizeY,
            var_sizeY.object
        );

    }
    if ((var_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_n,
            var_n.object
        );

    }
    if ((var_sizeX.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sizeX,
            var_sizeX.object
        );

    }
    if ((var_lohi.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_lohi,
            var_lohi.object
        );

    }
    if ((var_A_dense.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_A_dense,
            var_A_dense.object
        );

    }
    if ((var_B_dense.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_B_dense,
            var_B_dense.object
        );

    }
    if ((var__lambda.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain__lambda,
            var__lambda.object
        );

    }
    if ((var_eigBlockVector.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_eigBlockVector,
            var_eigBlockVector.object
        );

    }
    if ((var_aux.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_aux,
            var_aux.object
        );

    }
    if ((var_blockVectorBY.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorBY,
            var_blockVectorBY.object
        );

    }
    if ((var_gramYBY.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_gramYBY,
            var_gramYBY.object
        );

    }
    if ((var_blockVectorBX.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorBX,
            var_blockVectorBX.object
        );

    }
    if ((var_blockVectorAX.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorAX,
            var_blockVectorAX.object
        );

    }
    if ((var_gramXAX.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_gramXAX,
            var_gramXAX.object
        );

    }
    if ((var_gramXBX.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_gramXBX,
            var_gramXBX.object
        );

    }
    if ((var_ii.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ii,
            var_ii.object
        );

    }
    if ((var_activeMask.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_activeMask,
            var_activeMask.object
        );

    }
    if ((var_lambdaHistory.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_lambdaHistory,
            var_lambdaHistory.object
        );

    }
    if ((var_residualNormsHistory.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_residualNormsHistory,
            var_residualNormsHistory.object
        );

    }
    if ((var_previousBlockSize.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_previousBlockSize,
            var_previousBlockSize.object
        );

    }
    if ((var_ident.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ident,
            var_ident.object
        );

    }
    if ((var_ident0.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ident0,
            var_ident0.object
        );

    }
    if ((var_blockVectorP.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorP,
            var_blockVectorP.object
        );

    }
    if ((var_blockVectorAP.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorAP,
            var_blockVectorAP.object
        );

    }
    if ((var_blockVectorBP.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorBP,
            var_blockVectorBP.object
        );

    }
    if ((var_iterationNumber.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_iterationNumber,
            var_iterationNumber.object
        );

    }
    if ((var_blockVectorR.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_blockVectorR,
            var_blockVectorR.object
        );

    }
    if ((var_residualNorms.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_residualNorms,
            var_residualNorms.object
        );

    }
    if ((var_currentBlockSize.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_currentBlockSize,
            var_currentBlockSize.object
        );

    }
    if ((var_activeBlockVectorR.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_activeBlockVectorR,
            var_activeBlockVectorR.object
        );

    }
    if ((var_activeBlockVectorP.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_activeBlockVectorP,
            var_activeBlockVectorP.object
        );

    }
    if ((var_activeBlockVectorAP.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_activeBlockVectorAP,
            var_activeBlockVectorAP.object
        );

    }
    if ((var_activeBlockVectorBP.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_activeBlockVectorBP,
            var_activeBlockVectorBP.object
        );

    }
    if ((var_activeBlockVectorBR.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_activeBlockVectorBR,
            var_activeBlockVectorBR.object
        );

    }
    if ((var_activeBlockVectorAR.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_activeBlockVectorAR,
            var_activeBlockVectorAR.object
        );

    }
    if ((var_invR.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_invR,
            var_invR.object
        );

    }
    if ((var_xaw.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_xaw,
            var_xaw.object
        );

    }
    if ((var_waw.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_waw,
            var_waw.object
        );

    }
    if ((var_xbw.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_xbw,
            var_xbw.object
        );

    }
    if ((var_xap.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_xap,
            var_xap.object
        );

    }
    if ((var_wap.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_wap,
            var_wap.object
        );

    }
    if ((var_pap.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_pap,
            var_pap.object
        );

    }
    if ((var_xbp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_xbp,
            var_xbp.object
        );

    }
    if ((var_wbp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_wbp,
            var_wbp.object
        );

    }
    if ((var_gramA.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_gramA,
            var_gramA.object
        );

    }
    if ((var_gramB.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_gramB,
            var_gramB.object
        );

    }
    if ((var_eigBlockVectorX.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_eigBlockVectorX,
            var_eigBlockVectorX.object
        );

    }
    if ((var_eigBlockVectorR.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_eigBlockVectorR,
            var_eigBlockVectorR.object
        );

    }
    if ((var_eigBlockVectorP.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_eigBlockVectorP,
            var_eigBlockVectorP.object
        );

    }
    if ((var_pp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_pp,
            var_pp.object
        );

    }
    if ((var_app.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_app,
            var_app.object
        );

    }
    if ((var_bpp.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_bpp,
            var_bpp.object
        );

    }
    if ((par_A.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_A,
            par_A.object
        );

    }
    if ((par_X.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_X,
            par_X.object
        );

    }
    if ((par_B.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_B,
            par_B.object
        );

    }
    if ((par_M.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_M,
            par_M.object
        );

    }
    if ((par_Y.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_Y,
            par_Y.object
        );

    }
    if ((par_tol.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_tol,
            par_tol.object
        );

    }
    if ((par_maxiter.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_maxiter,
            par_maxiter.object
        );

    }
    if ((par_largest.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_largest,
            par_largest.object
        );

    }
    if ((par_verbosityLevel.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_verbosityLevel,
            par_verbosityLevel.object
        );

    }
    if ((par_retLambdaHistory.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_retLambdaHistory,
            par_retLambdaHistory.object
        );

    }
    if ((par_retResidualNormsHistory.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_retResidualNormsHistory,
            par_retResidualNormsHistory.object
        );

    }
    frame_function->f_lineno = 224;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_9e37f9ab918a6f6404b8dec5a4bda862, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_linalg );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    assert( var_sla.object == NULL );
    var_sla.object = tmp_assign_source_2;

    tmp_assign_source_3 = par_X.object;

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166501 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    assert( var_blockVectorX.object == NULL );
    var_blockVectorX.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_assign_source_4 = par_Y.object;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 246925 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    assert( var_blockVectorY.object == NULL );
    var_blockVectorY.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = par_tol.object;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161861 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    assert( var_residualTolerance.object == NULL );
    var_residualTolerance.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = par_maxiter.object;

    if ( tmp_assign_source_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    assert( var_maxIterations.object == NULL );
    var_maxIterations.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_compare_left_1 = var_blockVectorY.object;

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
    tmp_source_name_1 = var_blockVectorY.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    assert( var_sizeY.object == NULL );
    var_sizeY.object = tmp_assign_source_7;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_8 = const_int_0;
    assert( var_sizeY.object == NULL );
    var_sizeY.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    branch_end_1:;
    tmp_source_name_2 = var_blockVectorX.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_41643b91a3912cdcf145ebabe5f44221;
    frame_function->f_lineno = 238;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 238;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    // Tried code
    tmp_source_name_3 = var_blockVectorX.object;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_9;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_10 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_10;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_11 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_11 == NULL )
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


        frame_function->f_lineno = 240;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_11;

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
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1.object;

    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2.object;

    assert( var_sizeX.object == NULL );
    var_sizeX.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

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
    tmp_compare_left_3 = var_sizeX.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = var_n.object;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
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
    tmp_make_exception_arg_2 = const_str_digest_21bd31c7d55644e987c854a513340620;
    frame_function->f_lineno = 242;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 242;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_makeOperator );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeOperator );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276002 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_A.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_n.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_n.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_2, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 244;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    if (par_A.object == NULL)
    {
        par_A.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = par_A.object;
        par_A.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_makeOperator );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeOperator );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276002 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_B.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_n.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_n.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 245;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    if (par_B.object == NULL)
    {
        par_B.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = par_B.object;
        par_B.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_makeOperator );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeOperator );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276002 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_M.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_n.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_n.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_arg_element_6, 1, tmp_tuple_element_3 );
    frame_function->f_lineno = 246;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    if (par_M.object == NULL)
    {
        par_M.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = par_M.object;
        par_M.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_binop_left_1 = var_n.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = var_sizeY.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276043 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_int_pos_5;
    tmp_binop_right_2 = var_sizeX.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_compare_left_5 = var_blockVectorY.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_2)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_3 = const_str_digest_ed36b2d01c57b62b1031b8940f0438e0;
    frame_function->f_lineno = 253;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 253;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_cond_value_1 = par_largest.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276094 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_17 = PyTuple_New( 2 );
    tmp_binop_left_3 = var_n.object;

    if ( tmp_binop_left_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = var_sizeX.object;

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = BINARY_OPERATION_SUB( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_n.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 1, tmp_tuple_element_4 );
    assert( var_lohi.object == NULL );
    var_lohi.object = tmp_assign_source_17;

    goto branch_end_6;
    branch_no_6:;
    tmp_assign_source_18 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_sizeX.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_18, 1, tmp_tuple_element_5 );
    assert( var_lohi.object == NULL );
    var_lohi.object = tmp_assign_source_18;

    branch_end_6:;
    tmp_called_4 = par_A.object;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_eye );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = var_n.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 260;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 260;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    assert( var_A_dense.object == NULL );
    var_A_dense.object = tmp_assign_source_19;

    tmp_compare_left_6 = par_B.object;

    tmp_compare_right_6 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if (tmp_isnot_3)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_6 = par_B.object;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_eye );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = var_n.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 263;
    tmp_call_arg_element_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 263;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    assert( var_B_dense.object == NULL );
    var_B_dense.object = tmp_assign_source_20;

    // Tried code
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_symeig );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_symeig );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276147 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_A_dense.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_B_dense.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_6 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_lohi.object;

    tmp_dict_key_1 = const_str_plain_select;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 264;
    tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }
    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_21;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_22 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_22 == NULL )
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
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_22;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_23 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_23 == NULL )
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
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_23;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_2;
    }
    tmp_assign_source_24 = tmp_tuple_unpack_2__element_1.object;

    assert( var__lambda.object == NULL );
    var__lambda.object = INCREASE_REFCOUNT( tmp_assign_source_24 );

    tmp_assign_source_25 = tmp_tuple_unpack_2__element_2.object;

    assert( var_eigBlockVector.object == NULL );
    var_eigBlockVector.object = INCREASE_REFCOUNT( tmp_assign_source_25 );

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
    goto branch_end_7;
    branch_no_7:;
    // Tried code
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_symeig );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_symeig );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276147 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto try_finally_handler_3;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_7 = var_A_dense.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_7 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_lohi.object;

    tmp_dict_key_2 = const_str_plain_select;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 266;
    tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_3;
    }
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__source_iter.object == NULL );
    tmp_tuple_unpack_3__source_iter.object = tmp_assign_source_26;

    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_27 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 0 );
    if ( tmp_assign_source_27 == NULL )
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


        frame_function->f_lineno = 266;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_1.object == NULL );
    tmp_tuple_unpack_3__element_1.object = tmp_assign_source_27;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter.object;

    tmp_assign_source_28 = UNPACK_PARAMETER_NEXT( tmp_unpack_6, 1 );
    if ( tmp_assign_source_28 == NULL )
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


        frame_function->f_lineno = 266;
        goto try_finally_handler_3;
    }
    assert( tmp_tuple_unpack_3__element_2.object == NULL );
    tmp_tuple_unpack_3__element_2.object = tmp_assign_source_28;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_3;
    }
    tmp_assign_source_29 = tmp_tuple_unpack_3__element_1.object;

    assert( var__lambda.object == NULL );
    var__lambda.object = INCREASE_REFCOUNT( tmp_assign_source_29 );

    tmp_assign_source_30 = tmp_tuple_unpack_3__element_2.object;

    assert( var_eigBlockVector.object == NULL );
    var_eigBlockVector.object = INCREASE_REFCOUNT( tmp_assign_source_30 );

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
    branch_end_7:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_8 = var__lambda.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_eigBlockVector.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276235 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_8 );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_compare_left_7 = var_residualTolerance.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276295 ], 63, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_is_1 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if (tmp_is_1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sqrt );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_float_1e_minus_15;
    frame_function->f_lineno = 271;
    tmp_binop_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = var_n.object;

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_31 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    if (var_residualTolerance.object == NULL)
    {
        var_residualTolerance.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = var_residualTolerance.object;
        var_residualTolerance.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    branch_no_8:;
    tmp_called_11 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_n.object;

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = var_maxIterations.object;

    if ( tmp_call_arg_element_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276358 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 273;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    if (var_maxIterations.object == NULL)
    {
        var_maxIterations.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = var_maxIterations.object;
        var_maxIterations.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = par_verbosityLevel.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
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
    tmp_assign_source_33 = const_str_digest_9d605d32df087341ab71d45113922203;
    assert( var_aux.object == NULL );
    var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_33 );

    tmp_compare_left_8 = par_B.object;

    tmp_compare_right_8 = Py_None;
    tmp_is_2 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    if (tmp_is_2)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_34 = var_aux.object;

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_34 );

    // Tried code
    tmp_binop_left_5 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_5 = const_str_plain_standard;
    tmp_assign_source_35 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto try_finally_handler_4;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_35;

    tmp_compare_left_9 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_9 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_4 = ( tmp_compare_left_9 != tmp_compare_right_9 );
    if (tmp_isnot_4)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_36 = tmp_inplace_assign_1__inplace_end.object;

    assert( var_aux.object != NULL );
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }

    branch_no_11:;
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
    tmp_result = tmp_inplace_assign_1__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_1__inplace_start.object );
        tmp_inplace_assign_1__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_1__inplace_end.object );
    tmp_inplace_assign_1__inplace_end.object = NULL;

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
    goto branch_end_10;
    branch_no_10:;
    tmp_assign_source_37 = var_aux.object;

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_37 );

    // Tried code
    tmp_binop_left_6 = tmp_inplace_assign_2__inplace_start.object;

    tmp_binop_right_6 = const_str_plain_generalized;
    tmp_assign_source_38 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 280;
        goto try_finally_handler_5;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_38;

    tmp_compare_left_10 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_10 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_5 = ( tmp_compare_left_10 != tmp_compare_right_10 );
    if (tmp_isnot_5)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_39 = tmp_inplace_assign_2__inplace_end.object;

    assert( var_aux.object != NULL );
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_39 );
        Py_DECREF( old );
    }

    branch_no_12:;
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
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

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
    branch_end_10:;
    tmp_assign_source_40 = var_aux.object;

    if ( tmp_assign_source_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_3__inplace_start.object == NULL );
    tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_40 );

    // Tried code
    tmp_binop_left_7 = tmp_inplace_assign_3__inplace_start.object;

    tmp_binop_right_7 = const_str_digest_bc2060764ecb3513f1436f892e2de7e1;
    tmp_assign_source_41 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto try_finally_handler_6;
    }
    assert( tmp_inplace_assign_3__inplace_end.object == NULL );
    tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_41;

    tmp_compare_left_11 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_11 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_6 = ( tmp_compare_left_11 != tmp_compare_right_11 );
    if (tmp_isnot_6)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assign_source_42 = tmp_inplace_assign_3__inplace_end.object;

    if (var_aux.object == NULL)
    {
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_42 );
        Py_DECREF( old );
    }
    branch_no_13:;
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

    tmp_tried_lineno_6 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
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
    tmp_compare_left_12 = par_M.object;

    if ( tmp_compare_left_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_12 = Py_None;
    tmp_is_3 = ( tmp_compare_left_12 == tmp_compare_right_12 );
    if (tmp_is_3)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assign_source_43 = var_aux.object;

    if ( tmp_assign_source_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_4__inplace_start.object == NULL );
    tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_43 );

    // Tried code
    tmp_binop_left_8 = tmp_inplace_assign_4__inplace_start.object;

    tmp_binop_right_8 = const_str_plain_out;
    tmp_assign_source_44 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto try_finally_handler_7;
    }
    assert( tmp_inplace_assign_4__inplace_end.object == NULL );
    tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_44;

    tmp_compare_left_13 = tmp_inplace_assign_4__inplace_start.object;

    tmp_compare_right_13 = tmp_inplace_assign_4__inplace_end.object;

    tmp_isnot_7 = ( tmp_compare_left_13 != tmp_compare_right_13 );
    if (tmp_isnot_7)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_assign_source_45 = tmp_inplace_assign_4__inplace_end.object;

    if (var_aux.object == NULL)
    {
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_45 );
        Py_DECREF( old );
    }
    branch_no_15:;
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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_4__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_4__inplace_start.object );
        tmp_inplace_assign_4__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_4__inplace_end.object );
    tmp_inplace_assign_4__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_7;
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
    branch_no_14:;
    tmp_assign_source_46 = var_aux.object;

    if ( tmp_assign_source_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_5__inplace_start.object == NULL );
    tmp_inplace_assign_5__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_46 );

    // Tried code
    tmp_binop_left_9 = tmp_inplace_assign_5__inplace_start.object;

    tmp_binop_right_9 = const_str_digest_2c6912a0c91ff41479366224d686f1b1;
    tmp_assign_source_47 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto try_finally_handler_8;
    }
    assert( tmp_inplace_assign_5__inplace_end.object == NULL );
    tmp_inplace_assign_5__inplace_end.object = tmp_assign_source_47;

    tmp_compare_left_14 = tmp_inplace_assign_5__inplace_start.object;

    tmp_compare_right_14 = tmp_inplace_assign_5__inplace_end.object;

    tmp_isnot_8 = ( tmp_compare_left_14 != tmp_compare_right_14 );
    if (tmp_isnot_8)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assign_source_48 = tmp_inplace_assign_5__inplace_end.object;

    if (var_aux.object == NULL)
    {
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_48 );
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_48 );
        Py_DECREF( old );
    }
    branch_no_16:;
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

    tmp_tried_lineno_8 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_5__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_5__inplace_start.object );
        tmp_inplace_assign_5__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_5__inplace_end.object );
    tmp_inplace_assign_5__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
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
    tmp_assign_source_49 = var_aux.object;

    if ( tmp_assign_source_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_6__inplace_start.object == NULL );
    tmp_inplace_assign_6__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_49 );

    // Tried code
    tmp_binop_left_10 = tmp_inplace_assign_6__inplace_start.object;

    tmp_binop_left_11 = const_str_digest_3c693c2a5ddd0075806ef8625ce65d11;
    tmp_binop_right_11 = var_n.object;

    if ( tmp_binop_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto try_finally_handler_9;
    }

    tmp_binop_right_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto try_finally_handler_9;
    }
    tmp_assign_source_50 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto try_finally_handler_9;
    }
    assert( tmp_inplace_assign_6__inplace_end.object == NULL );
    tmp_inplace_assign_6__inplace_end.object = tmp_assign_source_50;

    tmp_compare_left_15 = tmp_inplace_assign_6__inplace_start.object;

    tmp_compare_right_15 = tmp_inplace_assign_6__inplace_end.object;

    tmp_isnot_9 = ( tmp_compare_left_15 != tmp_compare_right_15 );
    if (tmp_isnot_9)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_51 = tmp_inplace_assign_6__inplace_end.object;

    if (var_aux.object == NULL)
    {
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_51 );
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_51 );
        Py_DECREF( old );
    }
    branch_no_17:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_6__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_6__inplace_start.object );
        tmp_inplace_assign_6__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_6__inplace_end.object );
    tmp_inplace_assign_6__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto frame_exception_exit_1;
    }

    goto finally_end_9;
    finally_end_9:;
    tmp_assign_source_52 = var_aux.object;

    if ( tmp_assign_source_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_7__inplace_start.object == NULL );
    tmp_inplace_assign_7__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_52 );

    // Tried code
    tmp_binop_left_12 = tmp_inplace_assign_7__inplace_start.object;

    tmp_binop_left_13 = const_str_digest_5d5d4fb16e4a9558db998b2c4e02a198;
    tmp_binop_right_13 = var_sizeX.object;

    if ( tmp_binop_right_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto try_finally_handler_10;
    }

    tmp_binop_right_12 = BINARY_OPERATION_REMAINDER( tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_binop_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto try_finally_handler_10;
    }
    tmp_assign_source_53 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto try_finally_handler_10;
    }
    assert( tmp_inplace_assign_7__inplace_end.object == NULL );
    tmp_inplace_assign_7__inplace_end.object = tmp_assign_source_53;

    tmp_compare_left_16 = tmp_inplace_assign_7__inplace_start.object;

    tmp_compare_right_16 = tmp_inplace_assign_7__inplace_end.object;

    tmp_isnot_10 = ( tmp_compare_left_16 != tmp_compare_right_16 );
    if (tmp_isnot_10)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_54 = tmp_inplace_assign_7__inplace_end.object;

    if (var_aux.object == NULL)
    {
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_54 );
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_54 );
        Py_DECREF( old );
    }
    branch_no_18:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_10 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_7__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_7__inplace_start.object );
        tmp_inplace_assign_7__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_7__inplace_end.object );
    tmp_inplace_assign_7__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_10;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto frame_exception_exit_1;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_compare_left_17 = var_blockVectorY.object;

    if ( tmp_compare_left_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_17 = Py_None;
    tmp_is_4 = ( tmp_compare_left_17 == tmp_compare_right_17 );
    if (tmp_is_4)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_assign_source_55 = var_aux.object;

    if ( tmp_assign_source_55 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_8__inplace_start.object == NULL );
    tmp_inplace_assign_8__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_55 );

    // Tried code
    tmp_binop_left_14 = tmp_inplace_assign_8__inplace_start.object;

    tmp_binop_right_14 = const_str_digest_e0de2f6edf3389d7277b91f59a9196ea;
    tmp_assign_source_56 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_14, tmp_binop_right_14 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto try_finally_handler_11;
    }
    assert( tmp_inplace_assign_8__inplace_end.object == NULL );
    tmp_inplace_assign_8__inplace_end.object = tmp_assign_source_56;

    tmp_compare_left_18 = tmp_inplace_assign_8__inplace_start.object;

    tmp_compare_right_18 = tmp_inplace_assign_8__inplace_end.object;

    tmp_isnot_11 = ( tmp_compare_left_18 != tmp_compare_right_18 );
    if (tmp_isnot_11)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_assign_source_57 = tmp_inplace_assign_8__inplace_end.object;

    if (var_aux.object == NULL)
    {
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_57 );
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_57 );
        Py_DECREF( old );
    }
    branch_no_20:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_11 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_8__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_8__inplace_start.object );
        tmp_inplace_assign_8__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_8__inplace_end.object );
    tmp_inplace_assign_8__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_11;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto frame_exception_exit_1;
    }

    goto finally_end_11;
    finally_end_11:;
    goto branch_end_19;
    branch_no_19:;
    tmp_compare_left_19 = var_sizeY.object;

    if ( tmp_compare_left_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276043 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_19 = const_int_pos_1;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_19, tmp_compare_right_19 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_2 == 1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_assign_source_58 = var_aux.object;

    if ( tmp_assign_source_58 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_9__inplace_start.object == NULL );
    tmp_inplace_assign_9__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_58 );

    // Tried code
    tmp_binop_left_15 = tmp_inplace_assign_9__inplace_start.object;

    tmp_binop_left_16 = const_str_digest_4527bfbd478f62f369ec9c51f868ec1a;
    tmp_binop_right_16 = var_sizeY.object;

    if ( tmp_binop_right_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276043 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto try_finally_handler_12;
    }

    tmp_binop_right_15 = BINARY_OPERATION_REMAINDER( tmp_binop_left_16, tmp_binop_right_16 );
    if ( tmp_binop_right_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_12;
    }
    tmp_assign_source_59 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_15, tmp_binop_right_15 );
    Py_DECREF( tmp_binop_right_15 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto try_finally_handler_12;
    }
    assert( tmp_inplace_assign_9__inplace_end.object == NULL );
    tmp_inplace_assign_9__inplace_end.object = tmp_assign_source_59;

    tmp_compare_left_20 = tmp_inplace_assign_9__inplace_start.object;

    tmp_compare_right_20 = tmp_inplace_assign_9__inplace_end.object;

    tmp_isnot_12 = ( tmp_compare_left_20 != tmp_compare_right_20 );
    if (tmp_isnot_12)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_assign_source_60 = tmp_inplace_assign_9__inplace_end.object;

    if (var_aux.object == NULL)
    {
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_60 );
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_60 );
        Py_DECREF( old );
    }
    branch_no_22:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_12 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_9__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_9__inplace_start.object );
        tmp_inplace_assign_9__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_9__inplace_end.object );
    tmp_inplace_assign_9__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_12;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto frame_exception_exit_1;
    }

    goto finally_end_12;
    finally_end_12:;
    goto branch_end_21;
    branch_no_21:;
    tmp_assign_source_61 = var_aux.object;

    if ( tmp_assign_source_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_10__inplace_start.object == NULL );
    tmp_inplace_assign_10__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_61 );

    // Tried code
    tmp_binop_left_17 = tmp_inplace_assign_10__inplace_start.object;

    tmp_binop_left_18 = const_str_digest_872de85f88e3b31daa460c626bc92710;
    tmp_binop_right_18 = var_sizeY.object;

    if ( tmp_binop_right_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276043 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto try_finally_handler_13;
    }

    tmp_binop_right_17 = BINARY_OPERATION_REMAINDER( tmp_binop_left_18, tmp_binop_right_18 );
    if ( tmp_binop_right_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto try_finally_handler_13;
    }
    tmp_assign_source_62 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_17, tmp_binop_right_17 );
    Py_DECREF( tmp_binop_right_17 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto try_finally_handler_13;
    }
    assert( tmp_inplace_assign_10__inplace_end.object == NULL );
    tmp_inplace_assign_10__inplace_end.object = tmp_assign_source_62;

    tmp_compare_left_21 = tmp_inplace_assign_10__inplace_start.object;

    tmp_compare_right_21 = tmp_inplace_assign_10__inplace_end.object;

    tmp_isnot_13 = ( tmp_compare_left_21 != tmp_compare_right_21 );
    if (tmp_isnot_13)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_assign_source_63 = tmp_inplace_assign_10__inplace_end.object;

    if (var_aux.object == NULL)
    {
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_63 );
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = INCREASE_REFCOUNT( tmp_assign_source_63 );
        Py_DECREF( old );
    }
    branch_no_23:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_13 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_10__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_10__inplace_start.object );
        tmp_inplace_assign_10__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_10__inplace_end.object );
    tmp_inplace_assign_10__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_13;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_13 != NULL )
    {
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;

        goto frame_exception_exit_1;
    }

    goto finally_end_13;
    finally_end_13:;
    branch_end_21:;
    branch_end_19:;
    tmp_called_12 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = var_aux.object;

    if ( tmp_call_arg_element_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276477 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 294;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;
    tmp_compare_left_22 = var_blockVectorY.object;

    if ( tmp_compare_left_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_22 = Py_None;
    tmp_isnot_14 = ( tmp_compare_left_22 != tmp_compare_right_22 );
    if (tmp_isnot_14)
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_compare_left_23 = par_B.object;

    if ( tmp_compare_left_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 300;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_23 = Py_None;
    tmp_isnot_15 = ( tmp_compare_left_23 != tmp_compare_right_23 );
    if (tmp_isnot_15)
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_called_13 = par_B.object;

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = var_blockVectorY.object;

    if ( tmp_call_arg_element_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 301;
    tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_15 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    assert( var_blockVectorBY.object == NULL );
    var_blockVectorBY.object = tmp_assign_source_64;

    goto branch_end_25;
    branch_no_25:;
    tmp_assign_source_65 = var_blockVectorY.object;

    if ( tmp_assign_source_65 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    assert( var_blockVectorBY.object == NULL );
    var_blockVectorBY.object = INCREASE_REFCOUNT( tmp_assign_source_65 );

    branch_end_25:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dot );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = var_blockVectorY.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_T );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = var_blockVectorBY.object;

    frame_function->f_lineno = 306;
    tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    assert( var_gramYBY.object == NULL );
    var_gramYBY.object = tmp_assign_source_66;

    // Tried block of try/except
    tmp_source_name_9 = var_sla.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276526 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto try_except_handler_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_cho_factor );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_18 = var_gramYBY.object;

    frame_function->f_lineno = 309;
    tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto try_except_handler_1;
    }
    assert( var_gramYBY.object != NULL );
    {
        PyObject *old = var_gramYBY.object;
        var_gramYBY.object = tmp_assign_source_67;
        Py_DECREF( old );
    }

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
    tmp_make_exception_arg_4 = const_str_digest_a61df4ef7ac9928ac6a49d618e1b136c;
    frame_function->f_lineno = 311;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 311;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    try_except_end_1:;
    tmp_called_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_applyConstraints );

    if (unlikely( tmp_called_16 == NULL ))
    {
        tmp_called_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_applyConstraints );
    }

    if ( tmp_called_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276575 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = var_blockVectorX.object;

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = var_gramYBY.object;

    if ( tmp_call_arg_element_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276678 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = var_blockVectorBY.object;

    if ( tmp_call_arg_element_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275611 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = var_blockVectorY.object;

    if ( tmp_call_arg_element_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 313;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_16, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21, tmp_call_arg_element_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_24:;
    // Tried code
    tmp_called_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_b_orthonormalize );

    if (unlikely( tmp_called_17 == NULL ))
    {
        tmp_called_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b_orthonormalize );
    }

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276731 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_23 = par_B.object;

    if ( tmp_call_arg_element_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_14;
    }

    tmp_call_arg_element_24 = var_blockVectorX.object;

    if ( tmp_call_arg_element_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_14;
    }

    frame_function->f_lineno = 317;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_14;
    }
    tmp_assign_source_68 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_4__source_iter.object == NULL );
    tmp_tuple_unpack_4__source_iter.object = tmp_assign_source_68;

    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_69 = UNPACK_PARAMETER_NEXT( tmp_unpack_7, 0 );
    if ( tmp_assign_source_69 == NULL )
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


        frame_function->f_lineno = 317;
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_4__element_1.object == NULL );
    tmp_tuple_unpack_4__element_1.object = tmp_assign_source_69;

    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter.object;

    tmp_assign_source_70 = UNPACK_PARAMETER_NEXT( tmp_unpack_8, 1 );
    if ( tmp_assign_source_70 == NULL )
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


        frame_function->f_lineno = 317;
        goto try_finally_handler_14;
    }
    assert( tmp_tuple_unpack_4__element_2.object == NULL );
    tmp_tuple_unpack_4__element_2.object = tmp_assign_source_70;

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

            goto try_finally_handler_14;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_4 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_14;
    }
    tmp_assign_source_71 = tmp_tuple_unpack_4__element_1.object;

    if (var_blockVectorX.object == NULL)
    {
        var_blockVectorX.object = INCREASE_REFCOUNT( tmp_assign_source_71 );
    }
    else
    {
        PyObject *old = var_blockVectorX.object;
        var_blockVectorX.object = INCREASE_REFCOUNT( tmp_assign_source_71 );
        Py_DECREF( old );
    }
    tmp_assign_source_72 = tmp_tuple_unpack_4__element_2.object;

    assert( var_blockVectorBX.object == NULL );
    var_blockVectorBX.object = INCREASE_REFCOUNT( tmp_assign_source_72 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_14 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_4__source_iter.object );
    tmp_tuple_unpack_4__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_1.object );
    tmp_tuple_unpack_4__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2.object );
    tmp_tuple_unpack_4__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_14;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_14 != NULL )
    {
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;

        goto frame_exception_exit_1;
    }

    goto finally_end_14;
    finally_end_14:;
    tmp_called_18 = par_A.object;

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_25 = var_blockVectorX.object;

    if ( tmp_call_arg_element_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 321;
    tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_25 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    assert( var_blockVectorAX.object == NULL );
    var_blockVectorAX.object = tmp_assign_source_73;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dot );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = var_blockVectorX.object;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_26 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_T );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_19 );

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_27 = var_blockVectorAX.object;

    frame_function->f_lineno = 322;
    tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS2( tmp_called_19, tmp_call_arg_element_26, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_19 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    assert( var_gramXAX.object == NULL );
    var_gramXAX.object = tmp_assign_source_74;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dot );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = var_blockVectorX.object;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_T );
    if ( tmp_call_arg_element_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_29 = var_blockVectorX.object;

    if ( tmp_call_arg_element_29 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 324;
    tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS2( tmp_called_20, tmp_call_arg_element_28, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_arg_element_28 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    assert( var_gramXBX.object == NULL );
    var_gramXBX.object = tmp_assign_source_75;

    // Tried code
    tmp_called_21 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_symeig );

    if (unlikely( tmp_called_21 == NULL ))
    {
        tmp_called_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_symeig );
    }

    if ( tmp_called_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276147 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 326;
        goto try_finally_handler_15;
    }

    tmp_call_arg_element_30 = var_gramXAX.object;

    frame_function->f_lineno = 326;
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_30 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto try_finally_handler_15;
    }
    tmp_assign_source_76 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_5__source_iter.object == NULL );
    tmp_tuple_unpack_5__source_iter.object = tmp_assign_source_76;

    tmp_unpack_9 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_77 = UNPACK_PARAMETER_NEXT( tmp_unpack_9, 0 );
    if ( tmp_assign_source_77 == NULL )
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


        frame_function->f_lineno = 326;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_5__element_1.object == NULL );
    tmp_tuple_unpack_5__element_1.object = tmp_assign_source_77;

    tmp_unpack_10 = tmp_tuple_unpack_5__source_iter.object;

    tmp_assign_source_78 = UNPACK_PARAMETER_NEXT( tmp_unpack_10, 1 );
    if ( tmp_assign_source_78 == NULL )
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


        frame_function->f_lineno = 326;
        goto try_finally_handler_15;
    }
    assert( tmp_tuple_unpack_5__element_2.object == NULL );
    tmp_tuple_unpack_5__element_2.object = tmp_assign_source_78;

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

            goto try_finally_handler_15;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_5 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_15;
    }
    tmp_assign_source_79 = tmp_tuple_unpack_5__element_1.object;

    if (var__lambda.object == NULL)
    {
        var__lambda.object = INCREASE_REFCOUNT( tmp_assign_source_79 );
    }
    else
    {
        PyObject *old = var__lambda.object;
        var__lambda.object = INCREASE_REFCOUNT( tmp_assign_source_79 );
        Py_DECREF( old );
    }
    tmp_assign_source_80 = tmp_tuple_unpack_5__element_2.object;

    if (var_eigBlockVector.object == NULL)
    {
        var_eigBlockVector.object = INCREASE_REFCOUNT( tmp_assign_source_80 );
    }
    else
    {
        PyObject *old = var_eigBlockVector.object;
        var_eigBlockVector.object = INCREASE_REFCOUNT( tmp_assign_source_80 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_15 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_5__source_iter.object );
    tmp_tuple_unpack_5__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_1.object );
    tmp_tuple_unpack_5__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2.object );
    tmp_tuple_unpack_5__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_15;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_15 != NULL )
    {
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;

        goto frame_exception_exit_1;
    }

    goto finally_end_15;
    finally_end_15:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_argsort );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_31 = var__lambda.object;

    if ( tmp_call_arg_element_31 == NULL )
    {
        Py_DECREF( tmp_called_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 327;
    tmp_slice_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_31 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_slice_upper_1 = var_sizeX.object;

    if ( tmp_slice_upper_1 == NULL )
    {
        Py_DECREF( tmp_slice_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_81 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    assert( var_ii.object == NULL );
    var_ii.object = tmp_assign_source_81;

    tmp_cond_value_3 = par_largest.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276094 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 328;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 328;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_subscr_target_2 = var_ii.object;

    tmp_sliceobj_step_1 = const_int_neg_1;
    tmp_subscr_subscript_2 = MAKE_SLICEOBJ( Py_None, Py_None, tmp_sliceobj_step_1 );
    tmp_assign_source_82 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_subscript_2 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
        goto frame_exception_exit_1;
    }
    assert( var_ii.object != NULL );
    {
        PyObject *old = var_ii.object;
        var_ii.object = tmp_assign_source_82;
        Py_DECREF( old );
    }

    branch_no_26:;
    tmp_subscr_target_3 = var__lambda.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = var_ii.object;

    tmp_assign_source_83 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    if (var__lambda.object == NULL)
    {
        var__lambda.object = tmp_assign_source_83;
    }
    else
    {
        PyObject *old = var__lambda.object;
        var__lambda.object = tmp_assign_source_83;
        Py_DECREF( old );
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_asarray );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 332;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_4 = var_eigBlockVector.object;

    if ( tmp_subscr_target_4 == NULL )
    {
        Py_DECREF( tmp_called_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276235 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 332;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = PyTuple_New( 2 );
    tmp_tuple_element_9 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_ii.object;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 1, tmp_tuple_element_9 );
    tmp_call_arg_element_32 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_23 );

        frame_function->f_lineno = 332;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 332;
    tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_32 );
    Py_DECREF( tmp_called_23 );
    Py_DECREF( tmp_call_arg_element_32 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 332;
        goto frame_exception_exit_1;
    }
    if (var_eigBlockVector.object == NULL)
    {
        var_eigBlockVector.object = tmp_assign_source_84;
    }
    else
    {
        PyObject *old = var_eigBlockVector.object;
        var_eigBlockVector.object = tmp_assign_source_84;
        Py_DECREF( old );
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_dot );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_33 = var_blockVectorX.object;

    if ( tmp_call_arg_element_33 == NULL )
    {
        Py_DECREF( tmp_called_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_34 = var_eigBlockVector.object;

    frame_function->f_lineno = 333;
    tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS2( tmp_called_24, tmp_call_arg_element_33, tmp_call_arg_element_34 );
    Py_DECREF( tmp_called_24 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }
    if (var_blockVectorX.object == NULL)
    {
        var_blockVectorX.object = tmp_assign_source_85;
    }
    else
    {
        PyObject *old = var_blockVectorX.object;
        var_blockVectorX.object = tmp_assign_source_85;
        Py_DECREF( old );
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dot );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_35 = var_blockVectorAX.object;

    if ( tmp_call_arg_element_35 == NULL )
    {
        Py_DECREF( tmp_called_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276776 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_36 = var_eigBlockVector.object;

    frame_function->f_lineno = 334;
    tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS2( tmp_called_25, tmp_call_arg_element_35, tmp_call_arg_element_36 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
        goto frame_exception_exit_1;
    }
    if (var_blockVectorAX.object == NULL)
    {
        var_blockVectorAX.object = tmp_assign_source_86;
    }
    else
    {
        PyObject *old = var_blockVectorAX.object;
        var_blockVectorAX.object = tmp_assign_source_86;
        Py_DECREF( old );
    }
    tmp_compare_left_24 = par_B.object;

    if ( tmp_compare_left_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 335;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_24 = Py_None;
    tmp_isnot_16 = ( tmp_compare_left_24 != tmp_compare_right_24 );
    if (tmp_isnot_16)
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }

    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_dot );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_37 = var_blockVectorBX.object;

    if ( tmp_call_arg_element_37 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276835 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_38 = var_eigBlockVector.object;

    frame_function->f_lineno = 336;
    tmp_assign_source_87 = CALL_FUNCTION_WITH_ARGS2( tmp_called_26, tmp_call_arg_element_37, tmp_call_arg_element_38 );
    Py_DECREF( tmp_called_26 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }
    if (var_blockVectorBX.object == NULL)
    {
        var_blockVectorBX.object = tmp_assign_source_87;
    }
    else
    {
        PyObject *old = var_blockVectorBX.object;
        var_blockVectorBX.object = tmp_assign_source_87;
        Py_DECREF( old );
    }
    branch_no_27:;
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }

    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ones );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_10 = PyTuple_New( 1 );
    tmp_tuple_element_11 = var_sizeX.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_tuple_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_tuple_element_10, 0, tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_10 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_bool );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    frame_function->f_lineno = 340;
    tmp_assign_source_88 = CALL_FUNCTION( tmp_called_27, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_called_27 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }
    assert( var_activeMask.object == NULL );
    var_activeMask.object = tmp_assign_source_88;

    tmp_assign_source_89 = PyList_New( 1 );
    tmp_list_element_1 = var__lambda.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_89, 0, tmp_list_element_1 );
    assert( var_lambdaHistory.object == NULL );
    var_lambdaHistory.object = tmp_assign_source_89;

    tmp_assign_source_90 = PyList_New( 0 );
    assert( var_residualNormsHistory.object == NULL );
    var_residualNormsHistory.object = tmp_assign_source_90;

    tmp_assign_source_91 = var_sizeX.object;

    if ( tmp_assign_source_91 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    assert( var_previousBlockSize.object == NULL );
    var_previousBlockSize.object = INCREASE_REFCOUNT( tmp_assign_source_91 );

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_eye );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_4 = PyTuple_New( 1 );
    tmp_tuple_element_12 = var_sizeX.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_12 );
    tmp_call_kw_4 = _PyDict_NewPresized( 1 );
    tmp_source_name_22 = par_A.object;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_dtype );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_call_kw_4 );

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    frame_function->f_lineno = 346;
    tmp_assign_source_92 = CALL_FUNCTION( tmp_called_28, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_called_28 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    assert( var_ident.object == NULL );
    var_ident.object = tmp_assign_source_92;

    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_eye );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_5 = PyTuple_New( 1 );
    tmp_tuple_element_13 = var_sizeX.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_pos_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_13 );
    tmp_call_kw_5 = _PyDict_NewPresized( 1 );
    tmp_source_name_24 = par_A.object;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_dtype );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_29 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    frame_function->f_lineno = 347;
    tmp_assign_source_93 = CALL_FUNCTION( tmp_called_29, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_called_29 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    assert( var_ident0.object == NULL );
    var_ident0.object = tmp_assign_source_93;

    tmp_assign_source_94 = Py_None;
    assert( var_blockVectorP.object == NULL );
    var_blockVectorP.object = INCREASE_REFCOUNT( tmp_assign_source_94 );

    tmp_assign_source_95 = Py_None;
    assert( var_blockVectorAP.object == NULL );
    var_blockVectorAP.object = INCREASE_REFCOUNT( tmp_assign_source_95 );

    tmp_assign_source_96 = Py_None;
    assert( var_blockVectorBP.object == NULL );
    var_blockVectorBP.object = INCREASE_REFCOUNT( tmp_assign_source_96 );

    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_xrange );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
    }

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241323 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_39 = var_maxIterations.object;

    if ( tmp_call_arg_element_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276358 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 356;
    tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_39 );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_97 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_97;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_98 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_98 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 356;
            goto try_finally_handler_16;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_98;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_98;
        Py_DECREF( old );
    }
    tmp_assign_source_99 = tmp_for_loop_1__iter_value.object;

    if (var_iterationNumber.object == NULL)
    {
        var_iterationNumber.object = INCREASE_REFCOUNT( tmp_assign_source_99 );
    }
    else
    {
        PyObject *old = var_iterationNumber.object;
        var_iterationNumber.object = INCREASE_REFCOUNT( tmp_assign_source_99 );
        Py_DECREF( old );
    }
    tmp_compare_left_25 = par_verbosityLevel.object;

    if ( tmp_compare_left_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 357;
        goto try_finally_handler_16;
    }

    tmp_compare_right_25 = const_int_0;
    tmp_cmp_Gt_3 = RICH_COMPARE_BOOL_GT( tmp_compare_left_25, tmp_compare_right_25 );
    if ( tmp_cmp_Gt_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 357;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_3 == 1)
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_called_31 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto try_finally_handler_16;
    }
    tmp_binop_left_19 = const_str_digest_088b7c9d115463d9e5852d27a551d1de;
    tmp_binop_right_19 = var_iterationNumber.object;

    tmp_call_arg_element_40 = BINARY_OPERATION_REMAINDER( tmp_binop_left_19, tmp_binop_right_19 );
    if ( tmp_call_arg_element_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 358;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_40 );
    Py_DECREF( tmp_call_arg_element_40 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 358;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_28:;
    tmp_binop_left_20 = var_blockVectorBX.object;

    if ( tmp_binop_left_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276835 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_16;
    }

    tmp_subscr_target_5 = var__lambda.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_16;
    }

    tmp_subscr_subscript_5 = PyTuple_New( 2 );
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto try_finally_handler_16;
    }

    tmp_tuple_element_14 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_newaxis );
    if ( tmp_tuple_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_5 );

        frame_function->f_lineno = 360;
        goto try_finally_handler_16;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_5, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_5, 1, tmp_tuple_element_14 );
    tmp_binop_right_20 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_subscript_5 );
    if ( tmp_binop_right_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto try_finally_handler_16;
    }
    tmp_assign_source_100 = BINARY_OPERATION_MUL( tmp_binop_left_20, tmp_binop_right_20 );
    Py_DECREF( tmp_binop_right_20 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto try_finally_handler_16;
    }
    if (var_aux.object == NULL)
    {
        var_aux.object = tmp_assign_source_100;
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = tmp_assign_source_100;
        Py_DECREF( old );
    }
    tmp_binop_left_21 = var_blockVectorAX.object;

    if ( tmp_binop_left_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276776 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto try_finally_handler_16;
    }

    tmp_binop_right_21 = var_aux.object;

    tmp_assign_source_101 = BINARY_OPERATION_SUB( tmp_binop_left_21, tmp_binop_right_21 );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto try_finally_handler_16;
    }
    if (var_blockVectorR.object == NULL)
    {
        var_blockVectorR.object = tmp_assign_source_101;
    }
    else
    {
        PyObject *old = var_blockVectorR.object;
        var_blockVectorR.object = tmp_assign_source_101;
        Py_DECREF( old );
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 363;
        goto try_finally_handler_16;
    }

    tmp_called_32 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_sum );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto try_finally_handler_16;
    }
    tmp_source_name_27 = var_blockVectorR.object;

    tmp_called_33 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_conjugate );
    if ( tmp_called_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );

        frame_function->f_lineno = 363;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 363;
    tmp_binop_left_22 = CALL_FUNCTION_NO_ARGS( tmp_called_33 );
    Py_DECREF( tmp_called_33 );
    if ( tmp_binop_left_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );

        frame_function->f_lineno = 363;
        goto try_finally_handler_16;
    }
    tmp_binop_right_22 = var_blockVectorR.object;

    tmp_call_arg_element_41 = BINARY_OPERATION_MUL( tmp_binop_left_22, tmp_binop_right_22 );
    Py_DECREF( tmp_binop_left_22 );
    if ( tmp_call_arg_element_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );

        frame_function->f_lineno = 363;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_42 = const_int_0;
    frame_function->f_lineno = 363;
    tmp_assign_source_102 = CALL_FUNCTION_WITH_ARGS2( tmp_called_32, tmp_call_arg_element_41, tmp_call_arg_element_42 );
    Py_DECREF( tmp_called_32 );
    Py_DECREF( tmp_call_arg_element_41 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto try_finally_handler_16;
    }
    assert( var_aux.object != NULL );
    {
        PyObject *old = var_aux.object;
        var_aux.object = tmp_assign_source_102;
        Py_DECREF( old );
    }

    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 364;
        goto try_finally_handler_16;
    }

    tmp_called_34 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_sqrt );
    if ( tmp_called_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_43 = var_aux.object;

    frame_function->f_lineno = 364;
    tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS1( tmp_called_34, tmp_call_arg_element_43 );
    Py_DECREF( tmp_called_34 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
        goto try_finally_handler_16;
    }
    if (var_residualNorms.object == NULL)
    {
        var_residualNorms.object = tmp_assign_source_103;
    }
    else
    {
        PyObject *old = var_residualNorms.object;
        var_residualNorms.object = tmp_assign_source_103;
        Py_DECREF( old );
    }
    tmp_source_name_29 = var_residualNormsHistory.object;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276894 ], 66, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 366;
        goto try_finally_handler_16;
    }

    tmp_called_35 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_append );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 366;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_44 = var_residualNorms.object;

    frame_function->f_lineno = 366;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_35, tmp_call_arg_element_44 );
    Py_DECREF( tmp_called_35 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 366;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto try_finally_handler_16;
    }

    tmp_called_36 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_where );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto try_finally_handler_16;
    }
    tmp_compexpr_left_1 = var_residualNorms.object;

    tmp_compexpr_right_1 = var_residualTolerance.object;

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_called_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276295 ], 63, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_45 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_call_arg_element_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_36 );

        frame_function->f_lineno = 368;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_46 = Py_True;
    tmp_call_arg_element_47 = Py_False;
    frame_function->f_lineno = 368;
    tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS3( tmp_called_36, tmp_call_arg_element_45, tmp_call_arg_element_46, tmp_call_arg_element_47 );
    Py_DECREF( tmp_called_36 );
    Py_DECREF( tmp_call_arg_element_45 );
    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto try_finally_handler_16;
    }
    if (var_ii.object == NULL)
    {
        var_ii.object = tmp_assign_source_104;
    }
    else
    {
        PyObject *old = var_ii.object;
        var_ii.object = tmp_assign_source_104;
        Py_DECREF( old );
    }
    tmp_binop_left_23 = var_activeMask.object;

    if ( tmp_binop_left_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276960 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_16;
    }

    tmp_binop_right_23 = var_ii.object;

    tmp_assign_source_105 = BINARY_OPERATION( PyNumber_And, tmp_binop_left_23, tmp_binop_right_23 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto try_finally_handler_16;
    }
    if (var_activeMask.object == NULL)
    {
        var_activeMask.object = tmp_assign_source_105;
    }
    else
    {
        PyObject *old = var_activeMask.object;
        var_activeMask.object = tmp_assign_source_105;
        Py_DECREF( old );
    }
    tmp_compare_left_26 = par_verbosityLevel.object;

    if ( tmp_compare_left_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto try_finally_handler_16;
    }

    tmp_compare_right_26 = const_int_pos_2;
    tmp_cmp_Gt_4 = RICH_COMPARE_BOOL_GT( tmp_compare_left_26, tmp_compare_right_26 );
    if ( tmp_cmp_Gt_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_4 == 1)
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_called_37 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_48 = var_activeMask.object;

    frame_function->f_lineno = 371;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_48 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_29:;
    tmp_source_name_31 = var_activeMask.object;

    tmp_called_38 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_sum );
    if ( tmp_called_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 373;
    tmp_assign_source_106 = CALL_FUNCTION_NO_ARGS( tmp_called_38 );
    Py_DECREF( tmp_called_38 );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_16;
    }
    if (var_currentBlockSize.object == NULL)
    {
        var_currentBlockSize.object = tmp_assign_source_106;
    }
    else
    {
        PyObject *old = var_currentBlockSize.object;
        var_currentBlockSize.object = tmp_assign_source_106;
        Py_DECREF( old );
    }
    tmp_compare_left_27 = var_currentBlockSize.object;

    tmp_compare_right_27 = var_previousBlockSize.object;

    if ( tmp_compare_right_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277016 ], 63, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto try_finally_handler_16;
    }

    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_27, tmp_compare_right_27 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_16;
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
    tmp_assign_source_107 = var_currentBlockSize.object;

    if (var_previousBlockSize.object == NULL)
    {
        var_previousBlockSize.object = INCREASE_REFCOUNT( tmp_assign_source_107 );
    }
    else
    {
        PyObject *old = var_previousBlockSize.object;
        var_previousBlockSize.object = INCREASE_REFCOUNT( tmp_assign_source_107 );
        Py_DECREF( old );
    }
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_16;
    }

    tmp_called_39 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_eye );
    if ( tmp_called_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_16;
    }
    tmp_call_pos_6 = PyTuple_New( 1 );
    tmp_tuple_element_15 = var_currentBlockSize.object;

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 0, tmp_tuple_element_15 );
    tmp_call_kw_6 = _PyDict_NewPresized( 1 );
    tmp_source_name_33 = par_A.object;

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_39 );
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_16;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_dtype );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_39 );
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );

        frame_function->f_lineno = 376;
        goto try_finally_handler_16;
    }
    tmp_dict_key_6 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    frame_function->f_lineno = 376;
    tmp_assign_source_108 = CALL_FUNCTION( tmp_called_39, tmp_call_pos_6, tmp_call_kw_6 );
    Py_DECREF( tmp_called_39 );
    Py_DECREF( tmp_call_pos_6 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_16;
    }
    if (var_ident.object == NULL)
    {
        var_ident.object = tmp_assign_source_108;
    }
    else
    {
        PyObject *old = var_ident.object;
        var_ident.object = tmp_assign_source_108;
        Py_DECREF( old );
    }
    branch_no_30:;
    tmp_compare_left_28 = var_currentBlockSize.object;

    tmp_compare_right_28 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_28, tmp_compare_right_28 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    tmp_assign_source_109 = Py_False;
    if (var_failureFlag.object == NULL)
    {
        var_failureFlag.object = INCREASE_REFCOUNT( tmp_assign_source_109 );
    }
    else
    {
        PyObject *old = var_failureFlag.object;
        var_failureFlag.object = INCREASE_REFCOUNT( tmp_assign_source_109 );
        Py_DECREF( old );
    }
    goto loop_end_1;
    branch_no_31:;
    tmp_compare_left_29 = par_verbosityLevel.object;

    if ( tmp_compare_left_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto try_finally_handler_16;
    }

    tmp_compare_right_29 = const_int_0;
    tmp_cmp_Gt_5 = RICH_COMPARE_BOOL_GT( tmp_compare_left_29, tmp_compare_right_29 );
    if ( tmp_cmp_Gt_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_5 == 1)
    {
        goto branch_yes_32;
    }
    else
    {
        goto branch_no_32;
    }
    branch_yes_32:;
    tmp_called_40 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 383;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_49 = const_str_digest_987f8660c1949312e62c57343f0d112f;
    tmp_call_arg_element_50 = var_currentBlockSize.object;

    frame_function->f_lineno = 383;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_40, tmp_call_arg_element_49, tmp_call_arg_element_50 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 383;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_called_41 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_51 = const_str_digest_19591a1ad3c6e02cd1d09a17c055dd26;
    tmp_call_arg_element_52 = var__lambda.object;

    if ( tmp_call_arg_element_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 384;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_41, tmp_call_arg_element_51, tmp_call_arg_element_52 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_called_42 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_53 = const_str_digest_2ebcbf83e0443b299084bc6f47d8e8c7;
    tmp_call_arg_element_54 = var_residualNorms.object;

    frame_function->f_lineno = 385;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_42, tmp_call_arg_element_53, tmp_call_arg_element_54 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_32:;
    tmp_compare_left_30 = par_verbosityLevel.object;

    if ( tmp_compare_left_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto try_finally_handler_16;
    }

    tmp_compare_right_30 = const_int_pos_10;
    tmp_cmp_Gt_6 = RICH_COMPARE_BOOL_GT( tmp_compare_left_30, tmp_compare_right_30 );
    if ( tmp_cmp_Gt_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_6 == 1)
    {
        goto branch_yes_33;
    }
    else
    {
        goto branch_no_33;
    }
    branch_yes_33:;
    tmp_called_43 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_55 = var_eigBlockVector.object;

    if ( tmp_call_arg_element_55 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276235 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 387;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 387;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_43, tmp_call_arg_element_55 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_33:;
    tmp_called_44 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_as2d );

    if (unlikely( tmp_called_44 == NULL ))
    {
        tmp_called_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as2d );
    }

    if ( tmp_called_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277079 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 389;
        goto try_finally_handler_16;
    }

    tmp_subscr_target_6 = var_blockVectorR.object;

    tmp_subscr_subscript_6 = PyTuple_New( 2 );
    tmp_tuple_element_16 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = var_activeMask.object;

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 1, tmp_tuple_element_16 );
    tmp_call_arg_element_56 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_subscript_6 );
    if ( tmp_call_arg_element_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 389;
    tmp_assign_source_110 = CALL_FUNCTION_WITH_ARGS1( tmp_called_44, tmp_call_arg_element_56 );
    Py_DECREF( tmp_call_arg_element_56 );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto try_finally_handler_16;
    }
    if (var_activeBlockVectorR.object == NULL)
    {
        var_activeBlockVectorR.object = tmp_assign_source_110;
    }
    else
    {
        PyObject *old = var_activeBlockVectorR.object;
        var_activeBlockVectorR.object = tmp_assign_source_110;
        Py_DECREF( old );
    }
    tmp_compare_left_31 = var_iterationNumber.object;

    tmp_compare_right_31 = const_int_0;
    tmp_cmp_Gt_7 = RICH_COMPARE_BOOL_GT( tmp_compare_left_31, tmp_compare_right_31 );
    if ( tmp_cmp_Gt_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_7 == 1)
    {
        goto branch_yes_34;
    }
    else
    {
        goto branch_no_34;
    }
    branch_yes_34:;
    tmp_called_45 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_as2d );

    if (unlikely( tmp_called_45 == NULL ))
    {
        tmp_called_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as2d );
    }

    if ( tmp_called_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277079 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 392;
        goto try_finally_handler_16;
    }

    tmp_subscr_target_7 = var_blockVectorP.object;

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277112 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 392;
        goto try_finally_handler_16;
    }

    tmp_subscr_subscript_7 = PyTuple_New( 2 );
    tmp_tuple_element_17 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_7, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = var_activeMask.object;

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_7, 1, tmp_tuple_element_17 );
    tmp_call_arg_element_57 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_subscript_7 );
    if ( tmp_call_arg_element_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 392;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 392;
    tmp_assign_source_111 = CALL_FUNCTION_WITH_ARGS1( tmp_called_45, tmp_call_arg_element_57 );
    Py_DECREF( tmp_call_arg_element_57 );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 392;
        goto try_finally_handler_16;
    }
    if (var_activeBlockVectorP.object == NULL)
    {
        var_activeBlockVectorP.object = tmp_assign_source_111;
    }
    else
    {
        PyObject *old = var_activeBlockVectorP.object;
        var_activeBlockVectorP.object = tmp_assign_source_111;
        Py_DECREF( old );
    }
    tmp_called_46 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_as2d );

    if (unlikely( tmp_called_46 == NULL ))
    {
        tmp_called_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as2d );
    }

    if ( tmp_called_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277079 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto try_finally_handler_16;
    }

    tmp_subscr_target_8 = var_blockVectorAP.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277170 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 393;
        goto try_finally_handler_16;
    }

    tmp_subscr_subscript_8 = PyTuple_New( 2 );
    tmp_tuple_element_18 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_8, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = var_activeMask.object;

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_8, 1, tmp_tuple_element_18 );
    tmp_call_arg_element_58 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_subscript_8 );
    if ( tmp_call_arg_element_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 393;
    tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS1( tmp_called_46, tmp_call_arg_element_58 );
    Py_DECREF( tmp_call_arg_element_58 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto try_finally_handler_16;
    }
    if (var_activeBlockVectorAP.object == NULL)
    {
        var_activeBlockVectorAP.object = tmp_assign_source_112;
    }
    else
    {
        PyObject *old = var_activeBlockVectorAP.object;
        var_activeBlockVectorAP.object = tmp_assign_source_112;
        Py_DECREF( old );
    }
    tmp_called_47 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_as2d );

    if (unlikely( tmp_called_47 == NULL ))
    {
        tmp_called_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as2d );
    }

    if ( tmp_called_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277079 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 394;
        goto try_finally_handler_16;
    }

    tmp_subscr_target_9 = var_blockVectorBP.object;

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277229 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 394;
        goto try_finally_handler_16;
    }

    tmp_subscr_subscript_9 = PyTuple_New( 2 );
    tmp_tuple_element_19 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_9, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = var_activeMask.object;

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_9, 1, tmp_tuple_element_19 );
    tmp_call_arg_element_59 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_subscript_9 );
    if ( tmp_call_arg_element_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 394;
    tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS1( tmp_called_47, tmp_call_arg_element_59 );
    Py_DECREF( tmp_call_arg_element_59 );
    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 394;
        goto try_finally_handler_16;
    }
    if (var_activeBlockVectorBP.object == NULL)
    {
        var_activeBlockVectorBP.object = tmp_assign_source_113;
    }
    else
    {
        PyObject *old = var_activeBlockVectorBP.object;
        var_activeBlockVectorBP.object = tmp_assign_source_113;
        Py_DECREF( old );
    }
    branch_no_34:;
    tmp_compare_left_32 = par_M.object;

    if ( tmp_compare_left_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto try_finally_handler_16;
    }

    tmp_compare_right_32 = Py_None;
    tmp_isnot_17 = ( tmp_compare_left_32 != tmp_compare_right_32 );
    if (tmp_isnot_17)
    {
        goto branch_yes_35;
    }
    else
    {
        goto branch_no_35;
    }
    branch_yes_35:;
    tmp_called_48 = par_M.object;

    if ( tmp_called_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 166663 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 398;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_60 = var_activeBlockVectorR.object;

    frame_function->f_lineno = 398;
    tmp_assign_source_114 = CALL_FUNCTION_WITH_ARGS1( tmp_called_48, tmp_call_arg_element_60 );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto try_finally_handler_16;
    }
    assert( var_activeBlockVectorR.object != NULL );
    {
        PyObject *old = var_activeBlockVectorR.object;
        var_activeBlockVectorR.object = tmp_assign_source_114;
        Py_DECREF( old );
    }

    branch_no_35:;
    tmp_compare_left_33 = var_blockVectorY.object;

    if ( tmp_compare_left_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto try_finally_handler_16;
    }

    tmp_compare_right_33 = Py_None;
    tmp_isnot_18 = ( tmp_compare_left_33 != tmp_compare_right_33 );
    if (tmp_isnot_18)
    {
        goto branch_yes_36;
    }
    else
    {
        goto branch_no_36;
    }
    branch_yes_36:;
    tmp_called_49 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_applyConstraints );

    if (unlikely( tmp_called_49 == NULL ))
    {
        tmp_called_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_applyConstraints );
    }

    if ( tmp_called_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276575 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 403;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_61 = var_activeBlockVectorR.object;

    tmp_call_arg_element_62 = var_gramYBY.object;

    if ( tmp_call_arg_element_62 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276678 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_63 = var_blockVectorBY.object;

    if ( tmp_call_arg_element_63 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275611 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_64 = var_blockVectorY.object;

    if ( tmp_call_arg_element_64 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275781 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 404;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_49, tmp_call_arg_element_61, tmp_call_arg_element_62, tmp_call_arg_element_63, tmp_call_arg_element_64 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 404;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_36:;
    tmp_called_50 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_b_orthonormalize );

    if (unlikely( tmp_called_50 == NULL ))
    {
        tmp_called_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b_orthonormalize );
    }

    if ( tmp_called_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276731 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_65 = par_B.object;

    if ( tmp_call_arg_element_65 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_66 = var_activeBlockVectorR.object;

    frame_function->f_lineno = 409;
    tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS2( tmp_called_50, tmp_call_arg_element_65, tmp_call_arg_element_66 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto try_finally_handler_16;
    }
    assert( var_aux.object != NULL );
    {
        PyObject *old = var_aux.object;
        var_aux.object = tmp_assign_source_115;
        Py_DECREF( old );
    }

    // Tried code
    tmp_iter_arg_7 = var_aux.object;

    tmp_assign_source_116 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto try_finally_handler_17;
    }
    if (tmp_tuple_unpack_6__source_iter.object == NULL)
    {
        tmp_tuple_unpack_6__source_iter.object = tmp_assign_source_116;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_6__source_iter.object;
        tmp_tuple_unpack_6__source_iter.object = tmp_assign_source_116;
        Py_DECREF( old );
    }
    tmp_unpack_11 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_117 = UNPACK_PARAMETER_NEXT( tmp_unpack_11, 0 );
    if ( tmp_assign_source_117 == NULL )
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


        frame_function->f_lineno = 410;
        goto try_finally_handler_17;
    }
    if (tmp_tuple_unpack_6__element_1.object == NULL)
    {
        tmp_tuple_unpack_6__element_1.object = tmp_assign_source_117;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_6__element_1.object;
        tmp_tuple_unpack_6__element_1.object = tmp_assign_source_117;
        Py_DECREF( old );
    }
    tmp_unpack_12 = tmp_tuple_unpack_6__source_iter.object;

    tmp_assign_source_118 = UNPACK_PARAMETER_NEXT( tmp_unpack_12, 1 );
    if ( tmp_assign_source_118 == NULL )
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


        frame_function->f_lineno = 410;
        goto try_finally_handler_17;
    }
    if (tmp_tuple_unpack_6__element_2.object == NULL)
    {
        tmp_tuple_unpack_6__element_2.object = tmp_assign_source_118;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_6__element_2.object;
        tmp_tuple_unpack_6__element_2.object = tmp_assign_source_118;
        Py_DECREF( old );
    }
    tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_6 ); assert( PyIter_Check( tmp_iterator_name_6 ) );

    tmp_iterator_attempt_6 = (*Py_TYPE( tmp_iterator_name_6 )->tp_iternext)( tmp_iterator_name_6 );

    if (likely( tmp_iterator_attempt_6 == NULL ))
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

            goto try_finally_handler_17;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_6 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_17;
    }
    tmp_assign_source_119 = tmp_tuple_unpack_6__element_1.object;

    assert( var_activeBlockVectorR.object != NULL );
    {
        PyObject *old = var_activeBlockVectorR.object;
        var_activeBlockVectorR.object = INCREASE_REFCOUNT( tmp_assign_source_119 );
        Py_DECREF( old );
    }

    tmp_assign_source_120 = tmp_tuple_unpack_6__element_2.object;

    if (var_activeBlockVectorBR.object == NULL)
    {
        var_activeBlockVectorBR.object = INCREASE_REFCOUNT( tmp_assign_source_120 );
    }
    else
    {
        PyObject *old = var_activeBlockVectorBR.object;
        var_activeBlockVectorBR.object = INCREASE_REFCOUNT( tmp_assign_source_120 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_17:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_16 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_6__source_iter.object );
    tmp_tuple_unpack_6__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_1.object );
    tmp_tuple_unpack_6__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_2.object );
    tmp_tuple_unpack_6__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_16;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto try_finally_handler_16;
    }

    goto finally_end_16;
    finally_end_16:;
    tmp_called_51 = par_A.object;

    if ( tmp_called_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 177724 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 412;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_67 = var_activeBlockVectorR.object;

    if ( tmp_call_arg_element_67 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277288 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 412;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 412;
    tmp_assign_source_121 = CALL_FUNCTION_WITH_ARGS1( tmp_called_51, tmp_call_arg_element_67 );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 412;
        goto try_finally_handler_16;
    }
    if (var_activeBlockVectorAR.object == NULL)
    {
        var_activeBlockVectorAR.object = tmp_assign_source_121;
    }
    else
    {
        PyObject *old = var_activeBlockVectorAR.object;
        var_activeBlockVectorAR.object = tmp_assign_source_121;
        Py_DECREF( old );
    }
    tmp_compare_left_34 = var_iterationNumber.object;

    if ( tmp_compare_left_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277352 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 414;
        goto try_finally_handler_16;
    }

    tmp_compare_right_34 = const_int_0;
    tmp_cmp_Gt_8 = RICH_COMPARE_BOOL_GT( tmp_compare_left_34, tmp_compare_right_34 );
    if ( tmp_cmp_Gt_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 414;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_8 == 1)
    {
        goto branch_yes_37;
    }
    else
    {
        goto branch_no_37;
    }
    branch_yes_37:;
    tmp_called_52 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_b_orthonormalize );

    if (unlikely( tmp_called_52 == NULL ))
    {
        tmp_called_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b_orthonormalize );
    }

    if ( tmp_called_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276731 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_16;
    }

    tmp_call_pos_7 = PyTuple_New( 3 );
    tmp_tuple_element_20 = par_B.object;

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_call_pos_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 243766 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_call_pos_7, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = var_activeBlockVectorP.object;

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_call_pos_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277413 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_call_pos_7, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = var_activeBlockVectorBP.object;

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_call_pos_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277477 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 416;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_call_pos_7, 2, tmp_tuple_element_20 );
    tmp_call_kw_7 = PyDict_Copy( const_dict_208766c7396b6949dabb1a9785932806 );
    frame_function->f_lineno = 416;
    tmp_assign_source_122 = CALL_FUNCTION( tmp_called_52, tmp_call_pos_7, tmp_call_kw_7 );
    Py_DECREF( tmp_call_pos_7 );
    Py_DECREF( tmp_call_kw_7 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 416;
        goto try_finally_handler_16;
    }
    if (var_aux.object == NULL)
    {
        var_aux.object = tmp_assign_source_122;
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = tmp_assign_source_122;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_8 = var_aux.object;

    tmp_assign_source_123 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto try_finally_handler_18;
    }
    if (tmp_tuple_unpack_7__source_iter.object == NULL)
    {
        tmp_tuple_unpack_7__source_iter.object = tmp_assign_source_123;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_7__source_iter.object;
        tmp_tuple_unpack_7__source_iter.object = tmp_assign_source_123;
        Py_DECREF( old );
    }
    tmp_unpack_13 = tmp_tuple_unpack_7__source_iter.object;

    tmp_assign_source_124 = UNPACK_PARAMETER_NEXT( tmp_unpack_13, 0 );
    if ( tmp_assign_source_124 == NULL )
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


        frame_function->f_lineno = 417;
        goto try_finally_handler_18;
    }
    if (tmp_tuple_unpack_7__element_1.object == NULL)
    {
        tmp_tuple_unpack_7__element_1.object = tmp_assign_source_124;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_7__element_1.object;
        tmp_tuple_unpack_7__element_1.object = tmp_assign_source_124;
        Py_DECREF( old );
    }
    tmp_unpack_14 = tmp_tuple_unpack_7__source_iter.object;

    tmp_assign_source_125 = UNPACK_PARAMETER_NEXT( tmp_unpack_14, 1 );
    if ( tmp_assign_source_125 == NULL )
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


        frame_function->f_lineno = 417;
        goto try_finally_handler_18;
    }
    if (tmp_tuple_unpack_7__element_2.object == NULL)
    {
        tmp_tuple_unpack_7__element_2.object = tmp_assign_source_125;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_7__element_2.object;
        tmp_tuple_unpack_7__element_2.object = tmp_assign_source_125;
        Py_DECREF( old );
    }
    tmp_unpack_15 = tmp_tuple_unpack_7__source_iter.object;

    tmp_assign_source_126 = UNPACK_PARAMETER_NEXT( tmp_unpack_15, 2 );
    if ( tmp_assign_source_126 == NULL )
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


        frame_function->f_lineno = 417;
        goto try_finally_handler_18;
    }
    if (tmp_tuple_unpack_7__element_3.object == NULL)
    {
        tmp_tuple_unpack_7__element_3.object = tmp_assign_source_126;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_7__element_3.object;
        tmp_tuple_unpack_7__element_3.object = tmp_assign_source_126;
        Py_DECREF( old );
    }
    tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_7 ); assert( PyIter_Check( tmp_iterator_name_7 ) );

    tmp_iterator_attempt_7 = (*Py_TYPE( tmp_iterator_name_7 )->tp_iternext)( tmp_iterator_name_7 );

    if (likely( tmp_iterator_attempt_7 == NULL ))
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

            goto try_finally_handler_18;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_7 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_18;
    }
    tmp_assign_source_127 = tmp_tuple_unpack_7__element_1.object;

    if (var_activeBlockVectorP.object == NULL)
    {
        var_activeBlockVectorP.object = INCREASE_REFCOUNT( tmp_assign_source_127 );
    }
    else
    {
        PyObject *old = var_activeBlockVectorP.object;
        var_activeBlockVectorP.object = INCREASE_REFCOUNT( tmp_assign_source_127 );
        Py_DECREF( old );
    }
    tmp_assign_source_128 = tmp_tuple_unpack_7__element_2.object;

    if (var_activeBlockVectorBP.object == NULL)
    {
        var_activeBlockVectorBP.object = INCREASE_REFCOUNT( tmp_assign_source_128 );
    }
    else
    {
        PyObject *old = var_activeBlockVectorBP.object;
        var_activeBlockVectorBP.object = INCREASE_REFCOUNT( tmp_assign_source_128 );
        Py_DECREF( old );
    }
    tmp_assign_source_129 = tmp_tuple_unpack_7__element_3.object;

    if (var_invR.object == NULL)
    {
        var_invR.object = INCREASE_REFCOUNT( tmp_assign_source_129 );
    }
    else
    {
        PyObject *old = var_invR.object;
        var_invR.object = INCREASE_REFCOUNT( tmp_assign_source_129 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_17 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_7__source_iter.object );
    tmp_tuple_unpack_7__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_1.object );
    tmp_tuple_unpack_7__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2.object );
    tmp_tuple_unpack_7__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_3.object );
    tmp_tuple_unpack_7__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_17;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_17 != NULL )
    {
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;

        goto try_finally_handler_16;
    }

    goto finally_end_17;
    finally_end_17:;
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 418;
        goto try_finally_handler_16;
    }

    tmp_called_53 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_dot );
    if ( tmp_called_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 418;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_68 = var_activeBlockVectorAP.object;

    if ( tmp_call_arg_element_68 == NULL )
    {
        Py_DECREF( tmp_called_53 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277542 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 418;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_69 = var_invR.object;

    if ( tmp_call_arg_element_69 == NULL )
    {
        Py_DECREF( tmp_called_53 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277607 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 418;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 418;
    tmp_assign_source_130 = CALL_FUNCTION_WITH_ARGS2( tmp_called_53, tmp_call_arg_element_68, tmp_call_arg_element_69 );
    Py_DECREF( tmp_called_53 );
    if ( tmp_assign_source_130 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 418;
        goto try_finally_handler_16;
    }
    if (var_activeBlockVectorAP.object == NULL)
    {
        var_activeBlockVectorAP.object = tmp_assign_source_130;
    }
    else
    {
        PyObject *old = var_activeBlockVectorAP.object;
        var_activeBlockVectorAP.object = tmp_assign_source_130;
        Py_DECREF( old );
    }
    branch_no_37:;
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 424;
        goto try_finally_handler_16;
    }

    tmp_called_54 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_dot );
    if ( tmp_called_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto try_finally_handler_16;
    }
    tmp_source_name_36 = var_blockVectorX.object;

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_called_54 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 424;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_70 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_T );
    if ( tmp_call_arg_element_70 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_54 );

        frame_function->f_lineno = 424;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_71 = var_activeBlockVectorAR.object;

    if ( tmp_call_arg_element_71 == NULL )
    {
        Py_DECREF( tmp_called_54 );
        Py_DECREF( tmp_call_arg_element_70 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277657 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 424;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 424;
    tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS2( tmp_called_54, tmp_call_arg_element_70, tmp_call_arg_element_71 );
    Py_DECREF( tmp_called_54 );
    Py_DECREF( tmp_call_arg_element_70 );
    if ( tmp_assign_source_131 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto try_finally_handler_16;
    }
    if (var_xaw.object == NULL)
    {
        var_xaw.object = tmp_assign_source_131;
    }
    else
    {
        PyObject *old = var_xaw.object;
        var_xaw.object = tmp_assign_source_131;
        Py_DECREF( old );
    }
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 425;
        goto try_finally_handler_16;
    }

    tmp_called_55 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_dot );
    if ( tmp_called_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto try_finally_handler_16;
    }
    tmp_source_name_38 = var_activeBlockVectorR.object;

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_called_55 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277288 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 425;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_72 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_T );
    if ( tmp_call_arg_element_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_55 );

        frame_function->f_lineno = 425;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_73 = var_activeBlockVectorAR.object;

    if ( tmp_call_arg_element_73 == NULL )
    {
        Py_DECREF( tmp_called_55 );
        Py_DECREF( tmp_call_arg_element_72 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277657 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 425;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 425;
    tmp_assign_source_132 = CALL_FUNCTION_WITH_ARGS2( tmp_called_55, tmp_call_arg_element_72, tmp_call_arg_element_73 );
    Py_DECREF( tmp_called_55 );
    Py_DECREF( tmp_call_arg_element_72 );
    if ( tmp_assign_source_132 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 425;
        goto try_finally_handler_16;
    }
    if (var_waw.object == NULL)
    {
        var_waw.object = tmp_assign_source_132;
    }
    else
    {
        PyObject *old = var_waw.object;
        var_waw.object = tmp_assign_source_132;
        Py_DECREF( old );
    }
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto try_finally_handler_16;
    }

    tmp_called_56 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_dot );
    if ( tmp_called_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto try_finally_handler_16;
    }
    tmp_source_name_40 = var_blockVectorX.object;

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_called_56 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_74 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_T );
    if ( tmp_call_arg_element_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_56 );

        frame_function->f_lineno = 426;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_75 = var_activeBlockVectorBR.object;

    if ( tmp_call_arg_element_75 == NULL )
    {
        Py_DECREF( tmp_called_56 );
        Py_DECREF( tmp_call_arg_element_74 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277722 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 426;
    tmp_assign_source_133 = CALL_FUNCTION_WITH_ARGS2( tmp_called_56, tmp_call_arg_element_74, tmp_call_arg_element_75 );
    Py_DECREF( tmp_called_56 );
    Py_DECREF( tmp_call_arg_element_74 );
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 426;
        goto try_finally_handler_16;
    }
    if (var_xbw.object == NULL)
    {
        var_xbw.object = tmp_assign_source_133;
    }
    else
    {
        PyObject *old = var_xbw.object;
        var_xbw.object = tmp_assign_source_133;
        Py_DECREF( old );
    }
    tmp_compare_left_35 = var_iterationNumber.object;

    if ( tmp_compare_left_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277352 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto try_finally_handler_16;
    }

    tmp_compare_right_35 = const_int_0;
    tmp_cmp_Gt_9 = RICH_COMPARE_BOOL_GT( tmp_compare_left_35, tmp_compare_right_35 );
    if ( tmp_cmp_Gt_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_9 == 1)
    {
        goto branch_yes_38;
    }
    else
    {
        goto branch_no_38;
    }
    branch_yes_38:;
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto try_finally_handler_16;
    }

    tmp_called_57 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_dot );
    if ( tmp_called_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 429;
        goto try_finally_handler_16;
    }
    tmp_source_name_42 = var_blockVectorX.object;

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_called_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_76 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_T );
    if ( tmp_call_arg_element_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_57 );

        frame_function->f_lineno = 429;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_77 = var_activeBlockVectorAP.object;

    if ( tmp_call_arg_element_77 == NULL )
    {
        Py_DECREF( tmp_called_57 );
        Py_DECREF( tmp_call_arg_element_76 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277542 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 429;
    tmp_assign_source_134 = CALL_FUNCTION_WITH_ARGS2( tmp_called_57, tmp_call_arg_element_76, tmp_call_arg_element_77 );
    Py_DECREF( tmp_called_57 );
    Py_DECREF( tmp_call_arg_element_76 );
    if ( tmp_assign_source_134 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 429;
        goto try_finally_handler_16;
    }
    if (var_xap.object == NULL)
    {
        var_xap.object = tmp_assign_source_134;
    }
    else
    {
        PyObject *old = var_xap.object;
        var_xap.object = tmp_assign_source_134;
        Py_DECREF( old );
    }
    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 430;
        goto try_finally_handler_16;
    }

    tmp_called_58 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_dot );
    if ( tmp_called_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 430;
        goto try_finally_handler_16;
    }
    tmp_source_name_44 = var_activeBlockVectorR.object;

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_called_58 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277288 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 430;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_78 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_T );
    if ( tmp_call_arg_element_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_58 );

        frame_function->f_lineno = 430;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_79 = var_activeBlockVectorAP.object;

    if ( tmp_call_arg_element_79 == NULL )
    {
        Py_DECREF( tmp_called_58 );
        Py_DECREF( tmp_call_arg_element_78 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277542 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 430;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 430;
    tmp_assign_source_135 = CALL_FUNCTION_WITH_ARGS2( tmp_called_58, tmp_call_arg_element_78, tmp_call_arg_element_79 );
    Py_DECREF( tmp_called_58 );
    Py_DECREF( tmp_call_arg_element_78 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 430;
        goto try_finally_handler_16;
    }
    if (var_wap.object == NULL)
    {
        var_wap.object = tmp_assign_source_135;
    }
    else
    {
        PyObject *old = var_wap.object;
        var_wap.object = tmp_assign_source_135;
        Py_DECREF( old );
    }
    tmp_source_name_45 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_45 == NULL ))
    {
        tmp_source_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 431;
        goto try_finally_handler_16;
    }

    tmp_called_59 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_dot );
    if ( tmp_called_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto try_finally_handler_16;
    }
    tmp_source_name_46 = var_activeBlockVectorP.object;

    if ( tmp_source_name_46 == NULL )
    {
        Py_DECREF( tmp_called_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277413 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 431;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_80 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_T );
    if ( tmp_call_arg_element_80 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_59 );

        frame_function->f_lineno = 431;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_81 = var_activeBlockVectorAP.object;

    if ( tmp_call_arg_element_81 == NULL )
    {
        Py_DECREF( tmp_called_59 );
        Py_DECREF( tmp_call_arg_element_80 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277542 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 431;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 431;
    tmp_assign_source_136 = CALL_FUNCTION_WITH_ARGS2( tmp_called_59, tmp_call_arg_element_80, tmp_call_arg_element_81 );
    Py_DECREF( tmp_called_59 );
    Py_DECREF( tmp_call_arg_element_80 );
    if ( tmp_assign_source_136 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 431;
        goto try_finally_handler_16;
    }
    if (var_pap.object == NULL)
    {
        var_pap.object = tmp_assign_source_136;
    }
    else
    {
        PyObject *old = var_pap.object;
        var_pap.object = tmp_assign_source_136;
        Py_DECREF( old );
    }
    tmp_source_name_47 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_47 == NULL ))
    {
        tmp_source_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_finally_handler_16;
    }

    tmp_called_60 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_dot );
    if ( tmp_called_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 432;
        goto try_finally_handler_16;
    }
    tmp_source_name_48 = var_blockVectorX.object;

    if ( tmp_source_name_48 == NULL )
    {
        Py_DECREF( tmp_called_60 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_82 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_T );
    if ( tmp_call_arg_element_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_60 );

        frame_function->f_lineno = 432;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_83 = var_activeBlockVectorBP.object;

    if ( tmp_call_arg_element_83 == NULL )
    {
        Py_DECREF( tmp_called_60 );
        Py_DECREF( tmp_call_arg_element_82 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277477 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 432;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 432;
    tmp_assign_source_137 = CALL_FUNCTION_WITH_ARGS2( tmp_called_60, tmp_call_arg_element_82, tmp_call_arg_element_83 );
    Py_DECREF( tmp_called_60 );
    Py_DECREF( tmp_call_arg_element_82 );
    if ( tmp_assign_source_137 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 432;
        goto try_finally_handler_16;
    }
    if (var_xbp.object == NULL)
    {
        var_xbp.object = tmp_assign_source_137;
    }
    else
    {
        PyObject *old = var_xbp.object;
        var_xbp.object = tmp_assign_source_137;
        Py_DECREF( old );
    }
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 433;
        goto try_finally_handler_16;
    }

    tmp_called_61 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_dot );
    if ( tmp_called_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 433;
        goto try_finally_handler_16;
    }
    tmp_source_name_50 = var_activeBlockVectorR.object;

    if ( tmp_source_name_50 == NULL )
    {
        Py_DECREF( tmp_called_61 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277288 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 433;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_84 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_T );
    if ( tmp_call_arg_element_84 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_61 );

        frame_function->f_lineno = 433;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_85 = var_activeBlockVectorBP.object;

    if ( tmp_call_arg_element_85 == NULL )
    {
        Py_DECREF( tmp_called_61 );
        Py_DECREF( tmp_call_arg_element_84 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277477 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 433;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 433;
    tmp_assign_source_138 = CALL_FUNCTION_WITH_ARGS2( tmp_called_61, tmp_call_arg_element_84, tmp_call_arg_element_85 );
    Py_DECREF( tmp_called_61 );
    Py_DECREF( tmp_call_arg_element_84 );
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 433;
        goto try_finally_handler_16;
    }
    if (var_wbp.object == NULL)
    {
        var_wbp.object = tmp_assign_source_138;
    }
    else
    {
        PyObject *old = var_wbp.object;
        var_wbp.object = tmp_assign_source_138;
        Py_DECREF( old );
    }
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 435;
        goto try_finally_handler_16;
    }

    tmp_called_62 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_bmat );
    if ( tmp_called_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 435;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_86 = PyList_New( 3 );
    tmp_list_element_2 = PyList_New( 3 );
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_52 == NULL )
    {
        Py_DECREF( tmp_called_62 );
        Py_DECREF( tmp_call_arg_element_86 );
        Py_DECREF( tmp_list_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 435;
        goto try_finally_handler_16;
    }

    tmp_called_63 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_diag );
    if ( tmp_called_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_62 );
        Py_DECREF( tmp_call_arg_element_86 );
        Py_DECREF( tmp_list_element_2 );

        frame_function->f_lineno = 435;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_87 = var__lambda.object;

    if ( tmp_call_arg_element_87 == NULL )
    {
        Py_DECREF( tmp_called_62 );
        Py_DECREF( tmp_call_arg_element_86 );
        Py_DECREF( tmp_list_element_2 );
        Py_DECREF( tmp_called_63 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 435;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 435;
    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_63, tmp_call_arg_element_87 );
    Py_DECREF( tmp_called_63 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_62 );
        Py_DECREF( tmp_call_arg_element_86 );
        Py_DECREF( tmp_list_element_2 );

        frame_function->f_lineno = 435;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_3 );
    tmp_list_element_3 = var_xaw.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_list_element_2, 1, tmp_list_element_3 );
    tmp_list_element_3 = var_xap.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_list_element_2, 2, tmp_list_element_3 );
    PyList_SET_ITEM( tmp_call_arg_element_86, 0, tmp_list_element_2 );
    tmp_list_element_2 = PyList_New( 3 );
    tmp_source_name_53 = var_xaw.object;

    tmp_list_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_T );
    if ( tmp_list_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_62 );
        Py_DECREF( tmp_call_arg_element_86 );
        Py_DECREF( tmp_list_element_2 );

        frame_function->f_lineno = 436;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_4 );
    tmp_list_element_4 = var_waw.object;

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_list_element_2, 1, tmp_list_element_4 );
    tmp_list_element_4 = var_wap.object;

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_list_element_2, 2, tmp_list_element_4 );
    PyList_SET_ITEM( tmp_call_arg_element_86, 1, tmp_list_element_2 );
    tmp_list_element_2 = PyList_New( 3 );
    tmp_source_name_54 = var_xap.object;

    tmp_list_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_T );
    if ( tmp_list_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_62 );
        Py_DECREF( tmp_call_arg_element_86 );
        Py_DECREF( tmp_list_element_2 );

        frame_function->f_lineno = 437;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_5 );
    tmp_source_name_55 = var_wap.object;

    tmp_list_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_T );
    if ( tmp_list_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_62 );
        Py_DECREF( tmp_call_arg_element_86 );
        Py_DECREF( tmp_list_element_2 );

        frame_function->f_lineno = 437;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_2, 1, tmp_list_element_5 );
    tmp_list_element_5 = var_pap.object;

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_list_element_2, 2, tmp_list_element_5 );
    PyList_SET_ITEM( tmp_call_arg_element_86, 2, tmp_list_element_2 );
    frame_function->f_lineno = 437;
    tmp_assign_source_139 = CALL_FUNCTION_WITH_ARGS1( tmp_called_62, tmp_call_arg_element_86 );
    Py_DECREF( tmp_called_62 );
    Py_DECREF( tmp_call_arg_element_86 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 437;
        goto try_finally_handler_16;
    }
    if (var_gramA.object == NULL)
    {
        var_gramA.object = tmp_assign_source_139;
    }
    else
    {
        PyObject *old = var_gramA.object;
        var_gramA.object = tmp_assign_source_139;
        Py_DECREF( old );
    }
    tmp_source_name_56 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_56 == NULL ))
    {
        tmp_source_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto try_finally_handler_16;
    }

    tmp_called_64 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_bmat );
    if ( tmp_called_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 439;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_88 = PyList_New( 3 );
    tmp_list_element_6 = PyList_New( 3 );
    tmp_list_element_7 = var_ident0.object;

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_called_64 );
        Py_DECREF( tmp_call_arg_element_88 );
        Py_DECREF( tmp_list_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277787 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 439;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_list_element_6, 0, tmp_list_element_7 );
    tmp_list_element_7 = var_xbw.object;

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_list_element_6, 1, tmp_list_element_7 );
    tmp_list_element_7 = var_xbp.object;

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_list_element_6, 2, tmp_list_element_7 );
    PyList_SET_ITEM( tmp_call_arg_element_88, 0, tmp_list_element_6 );
    tmp_list_element_6 = PyList_New( 3 );
    tmp_source_name_57 = var_xbw.object;

    tmp_list_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_T );
    if ( tmp_list_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_64 );
        Py_DECREF( tmp_call_arg_element_88 );
        Py_DECREF( tmp_list_element_6 );

        frame_function->f_lineno = 440;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_6, 0, tmp_list_element_8 );
    tmp_list_element_8 = var_ident.object;

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_called_64 );
        Py_DECREF( tmp_call_arg_element_88 );
        Py_DECREF( tmp_list_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244908 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 440;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_list_element_6, 1, tmp_list_element_8 );
    tmp_list_element_8 = var_wbp.object;

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_list_element_6, 2, tmp_list_element_8 );
    PyList_SET_ITEM( tmp_call_arg_element_88, 1, tmp_list_element_6 );
    tmp_list_element_6 = PyList_New( 3 );
    tmp_source_name_58 = var_xbp.object;

    tmp_list_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_T );
    if ( tmp_list_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_64 );
        Py_DECREF( tmp_call_arg_element_88 );
        Py_DECREF( tmp_list_element_6 );

        frame_function->f_lineno = 441;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_6, 0, tmp_list_element_9 );
    tmp_source_name_59 = var_wbp.object;

    tmp_list_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_T );
    if ( tmp_list_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_64 );
        Py_DECREF( tmp_call_arg_element_88 );
        Py_DECREF( tmp_list_element_6 );

        frame_function->f_lineno = 441;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_6, 1, tmp_list_element_9 );
    tmp_list_element_9 = var_ident.object;

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_called_64 );
        Py_DECREF( tmp_call_arg_element_88 );
        Py_DECREF( tmp_list_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244908 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 441;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_list_element_6, 2, tmp_list_element_9 );
    PyList_SET_ITEM( tmp_call_arg_element_88, 2, tmp_list_element_6 );
    frame_function->f_lineno = 441;
    tmp_assign_source_140 = CALL_FUNCTION_WITH_ARGS1( tmp_called_64, tmp_call_arg_element_88 );
    Py_DECREF( tmp_called_64 );
    Py_DECREF( tmp_call_arg_element_88 );
    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 441;
        goto try_finally_handler_16;
    }
    if (var_gramB.object == NULL)
    {
        var_gramB.object = tmp_assign_source_140;
    }
    else
    {
        PyObject *old = var_gramB.object;
        var_gramB.object = tmp_assign_source_140;
        Py_DECREF( old );
    }
    goto branch_end_38;
    branch_no_38:;
    tmp_source_name_60 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_60 == NULL ))
    {
        tmp_source_name_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 443;
        goto try_finally_handler_16;
    }

    tmp_called_65 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_bmat );
    if ( tmp_called_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 443;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_89 = PyList_New( 2 );
    tmp_list_element_10 = PyList_New( 2 );
    tmp_source_name_61 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_61 == NULL ))
    {
        tmp_source_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_61 == NULL )
    {
        Py_DECREF( tmp_called_65 );
        Py_DECREF( tmp_call_arg_element_89 );
        Py_DECREF( tmp_list_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 443;
        goto try_finally_handler_16;
    }

    tmp_called_66 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_diag );
    if ( tmp_called_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_65 );
        Py_DECREF( tmp_call_arg_element_89 );
        Py_DECREF( tmp_list_element_10 );

        frame_function->f_lineno = 443;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_90 = var__lambda.object;

    if ( tmp_call_arg_element_90 == NULL )
    {
        Py_DECREF( tmp_called_65 );
        Py_DECREF( tmp_call_arg_element_89 );
        Py_DECREF( tmp_list_element_10 );
        Py_DECREF( tmp_called_66 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 443;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 443;
    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_66, tmp_call_arg_element_90 );
    Py_DECREF( tmp_called_66 );
    if ( tmp_list_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_65 );
        Py_DECREF( tmp_call_arg_element_89 );
        Py_DECREF( tmp_list_element_10 );

        frame_function->f_lineno = 443;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_10, 0, tmp_list_element_11 );
    tmp_list_element_11 = var_xaw.object;

    Py_INCREF( tmp_list_element_11 );
    PyList_SET_ITEM( tmp_list_element_10, 1, tmp_list_element_11 );
    PyList_SET_ITEM( tmp_call_arg_element_89, 0, tmp_list_element_10 );
    tmp_list_element_10 = PyList_New( 2 );
    tmp_source_name_62 = var_xaw.object;

    tmp_list_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_T );
    if ( tmp_list_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_65 );
        Py_DECREF( tmp_call_arg_element_89 );
        Py_DECREF( tmp_list_element_10 );

        frame_function->f_lineno = 444;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_10, 0, tmp_list_element_12 );
    tmp_list_element_12 = var_waw.object;

    Py_INCREF( tmp_list_element_12 );
    PyList_SET_ITEM( tmp_list_element_10, 1, tmp_list_element_12 );
    PyList_SET_ITEM( tmp_call_arg_element_89, 1, tmp_list_element_10 );
    frame_function->f_lineno = 444;
    tmp_assign_source_141 = CALL_FUNCTION_WITH_ARGS1( tmp_called_65, tmp_call_arg_element_89 );
    Py_DECREF( tmp_called_65 );
    Py_DECREF( tmp_call_arg_element_89 );
    if ( tmp_assign_source_141 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 444;
        goto try_finally_handler_16;
    }
    if (var_gramA.object == NULL)
    {
        var_gramA.object = tmp_assign_source_141;
    }
    else
    {
        PyObject *old = var_gramA.object;
        var_gramA.object = tmp_assign_source_141;
        Py_DECREF( old );
    }
    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_63 == NULL ))
    {
        tmp_source_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_63 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto try_finally_handler_16;
    }

    tmp_called_67 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_bmat );
    if ( tmp_called_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 445;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_91 = PyList_New( 2 );
    tmp_list_element_13 = PyList_New( 2 );
    tmp_list_element_14 = var_ident0.object;

    if ( tmp_list_element_14 == NULL )
    {
        Py_DECREF( tmp_called_67 );
        Py_DECREF( tmp_call_arg_element_91 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277787 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 445;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_list_element_14 );
    PyList_SET_ITEM( tmp_list_element_13, 0, tmp_list_element_14 );
    tmp_list_element_14 = var_xbw.object;

    Py_INCREF( tmp_list_element_14 );
    PyList_SET_ITEM( tmp_list_element_13, 1, tmp_list_element_14 );
    PyList_SET_ITEM( tmp_call_arg_element_91, 0, tmp_list_element_13 );
    tmp_list_element_13 = PyList_New( 2 );
    tmp_source_name_64 = var_xbw.object;

    tmp_list_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_T );
    if ( tmp_list_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_67 );
        Py_DECREF( tmp_call_arg_element_91 );
        Py_DECREF( tmp_list_element_13 );

        frame_function->f_lineno = 446;
        goto try_finally_handler_16;
    }
    PyList_SET_ITEM( tmp_list_element_13, 0, tmp_list_element_15 );
    tmp_list_element_15 = var_ident.object;

    if ( tmp_list_element_15 == NULL )
    {
        Py_DECREF( tmp_called_67 );
        Py_DECREF( tmp_call_arg_element_91 );
        Py_DECREF( tmp_list_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 244908 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 446;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_list_element_15 );
    PyList_SET_ITEM( tmp_list_element_13, 1, tmp_list_element_15 );
    PyList_SET_ITEM( tmp_call_arg_element_91, 1, tmp_list_element_13 );
    frame_function->f_lineno = 446;
    tmp_assign_source_142 = CALL_FUNCTION_WITH_ARGS1( tmp_called_67, tmp_call_arg_element_91 );
    Py_DECREF( tmp_called_67 );
    Py_DECREF( tmp_call_arg_element_91 );
    if ( tmp_assign_source_142 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 446;
        goto try_finally_handler_16;
    }
    if (var_gramB.object == NULL)
    {
        var_gramB.object = tmp_assign_source_142;
    }
    else
    {
        PyObject *old = var_gramB.object;
        var_gramB.object = tmp_assign_source_142;
        Py_DECREF( old );
    }
    branch_end_38:;
    // Tried block of try/except
    tmp_source_name_65 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_65 == NULL ))
    {
        tmp_source_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_65 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 449;
        goto try_except_handler_2;
    }

    tmp_called_68 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_allclose );
    if ( tmp_called_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_except_handler_2;
    }
    tmp_source_name_66 = var_gramA.object;

    tmp_call_arg_element_92 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_T );
    if ( tmp_call_arg_element_92 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_68 );

        frame_function->f_lineno = 449;
        goto try_except_handler_2;
    }
    tmp_call_arg_element_93 = var_gramA.object;

    frame_function->f_lineno = 449;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_68, tmp_call_arg_element_92, tmp_call_arg_element_93 );
    Py_DECREF( tmp_called_68 );
    Py_DECREF( tmp_call_arg_element_92 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 449;
        goto try_except_handler_2;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 449;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_no_39;
    }
    else
    {
        goto branch_yes_39;
    }
    branch_yes_39:;
    tmp_raise_type_5 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_5 );
    frame_function->f_lineno = 449;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    branch_no_39:;
    goto try_except_end_2;
    try_except_handler_2:;
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
    tmp_called_69 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_16;
    }
    tmp_source_name_67 = var_gramA.object;

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277839 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 451;
        goto try_finally_handler_16;
    }

    tmp_binop_left_24 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_T );
    if ( tmp_binop_left_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_16;
    }
    tmp_binop_right_24 = var_gramA.object;

    if ( tmp_binop_right_24 == NULL )
    {
        Py_DECREF( tmp_binop_left_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277839 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 451;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_94 = BINARY_OPERATION_SUB( tmp_binop_left_24, tmp_binop_right_24 );
    Py_DECREF( tmp_binop_left_24 );
    if ( tmp_call_arg_element_94 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 451;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_69, tmp_call_arg_element_94 );
    Py_DECREF( tmp_call_arg_element_94 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 451;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_16;
    try_except_end_2:;
    // Tried block of try/except
    tmp_source_name_68 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_68 == NULL ))
    {
        tmp_source_name_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 455;
        goto try_except_handler_3;
    }

    tmp_called_70 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_allclose );
    if ( tmp_called_70 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
        goto try_except_handler_3;
    }
    tmp_source_name_69 = var_gramB.object;

    if ( tmp_source_name_69 == NULL )
    {
        Py_DECREF( tmp_called_70 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277890 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 455;
        goto try_except_handler_3;
    }

    tmp_call_arg_element_95 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_T );
    if ( tmp_call_arg_element_95 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_70 );

        frame_function->f_lineno = 455;
        goto try_except_handler_3;
    }
    tmp_call_arg_element_96 = var_gramB.object;

    if ( tmp_call_arg_element_96 == NULL )
    {
        Py_DECREF( tmp_called_70 );
        Py_DECREF( tmp_call_arg_element_95 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277890 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 455;
        goto try_except_handler_3;
    }

    frame_function->f_lineno = 455;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_70, tmp_call_arg_element_95, tmp_call_arg_element_96 );
    Py_DECREF( tmp_called_70 );
    Py_DECREF( tmp_call_arg_element_95 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 455;
        goto try_except_handler_3;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 455;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_no_40;
    }
    else
    {
        goto branch_yes_40;
    }
    branch_yes_40:;
    tmp_raise_type_6 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_6 );
    frame_function->f_lineno = 455;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_3;
    branch_no_40:;
    goto try_except_end_3;
    try_except_handler_3:;
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
    tmp_called_71 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto try_finally_handler_16;
    }
    tmp_source_name_70 = var_gramB.object;

    if ( tmp_source_name_70 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277890 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 457;
        goto try_finally_handler_16;
    }

    tmp_binop_left_25 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_T );
    if ( tmp_binop_left_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto try_finally_handler_16;
    }
    tmp_binop_right_25 = var_gramB.object;

    if ( tmp_binop_right_25 == NULL )
    {
        Py_DECREF( tmp_binop_left_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277890 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 457;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_97 = BINARY_OPERATION_SUB( tmp_binop_left_25, tmp_binop_right_25 );
    Py_DECREF( tmp_binop_left_25 );
    if ( tmp_call_arg_element_97 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 457;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_71, tmp_call_arg_element_97 );
    Py_DECREF( tmp_call_arg_element_97 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_16;
    try_except_end_3:;
    tmp_compare_left_36 = par_verbosityLevel.object;

    if ( tmp_compare_left_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 460;
        goto try_finally_handler_16;
    }

    tmp_compare_right_36 = const_int_pos_10;
    tmp_cmp_Gt_10 = RICH_COMPARE_BOOL_GT( tmp_compare_left_36, tmp_compare_right_36 );
    if ( tmp_cmp_Gt_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 460;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_10 == 1)
    {
        goto branch_yes_41;
    }
    else
    {
        goto branch_no_41;
    }
    branch_yes_41:;
    tmp_called_72 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_save );

    if (unlikely( tmp_called_72 == NULL ))
    {
        tmp_called_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_save );
    }

    if ( tmp_called_72 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277941 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_98 = var_gramA.object;

    if ( tmp_call_arg_element_98 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277839 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_99 = const_str_plain_gramA;
    frame_function->f_lineno = 461;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_72, tmp_call_arg_element_98, tmp_call_arg_element_99 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 461;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_called_73 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_save );

    if (unlikely( tmp_called_73 == NULL ))
    {
        tmp_called_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_save );
    }

    if ( tmp_called_73 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277941 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 462;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_100 = var_gramB.object;

    if ( tmp_call_arg_element_100 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277890 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 462;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_101 = const_str_plain_gramB;
    frame_function->f_lineno = 462;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_73, tmp_call_arg_element_100, tmp_call_arg_element_101 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 462;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_41:;
    // Tried code
    tmp_called_74 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_symeig );

    if (unlikely( tmp_called_74 == NULL ))
    {
        tmp_called_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_symeig );
    }

    if ( tmp_called_74 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276147 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto try_finally_handler_19;
    }

    tmp_call_arg_element_102 = var_gramA.object;

    if ( tmp_call_arg_element_102 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277839 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto try_finally_handler_19;
    }

    tmp_call_arg_element_103 = var_gramB.object;

    if ( tmp_call_arg_element_103 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277890 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto try_finally_handler_19;
    }

    frame_function->f_lineno = 467;
    tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_74, tmp_call_arg_element_102, tmp_call_arg_element_103 );
    if ( tmp_iter_arg_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 467;
        goto try_finally_handler_19;
    }
    tmp_assign_source_143 = MAKE_ITERATOR( tmp_iter_arg_9 );
    Py_DECREF( tmp_iter_arg_9 );
    if ( tmp_assign_source_143 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 467;
        goto try_finally_handler_19;
    }
    if (tmp_tuple_unpack_8__source_iter.object == NULL)
    {
        tmp_tuple_unpack_8__source_iter.object = tmp_assign_source_143;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_8__source_iter.object;
        tmp_tuple_unpack_8__source_iter.object = tmp_assign_source_143;
        Py_DECREF( old );
    }
    tmp_unpack_16 = tmp_tuple_unpack_8__source_iter.object;

    tmp_assign_source_144 = UNPACK_PARAMETER_NEXT( tmp_unpack_16, 0 );
    if ( tmp_assign_source_144 == NULL )
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


        frame_function->f_lineno = 467;
        goto try_finally_handler_19;
    }
    if (tmp_tuple_unpack_8__element_1.object == NULL)
    {
        tmp_tuple_unpack_8__element_1.object = tmp_assign_source_144;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_8__element_1.object;
        tmp_tuple_unpack_8__element_1.object = tmp_assign_source_144;
        Py_DECREF( old );
    }
    tmp_unpack_17 = tmp_tuple_unpack_8__source_iter.object;

    tmp_assign_source_145 = UNPACK_PARAMETER_NEXT( tmp_unpack_17, 1 );
    if ( tmp_assign_source_145 == NULL )
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


        frame_function->f_lineno = 467;
        goto try_finally_handler_19;
    }
    if (tmp_tuple_unpack_8__element_2.object == NULL)
    {
        tmp_tuple_unpack_8__element_2.object = tmp_assign_source_145;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_8__element_2.object;
        tmp_tuple_unpack_8__element_2.object = tmp_assign_source_145;
        Py_DECREF( old );
    }
    tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_8 ); assert( PyIter_Check( tmp_iterator_name_8 ) );

    tmp_iterator_attempt_8 = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

    if (likely( tmp_iterator_attempt_8 == NULL ))
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

            goto try_finally_handler_19;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_8 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_19;
    }
    tmp_assign_source_146 = tmp_tuple_unpack_8__element_1.object;

    if (var__lambda.object == NULL)
    {
        var__lambda.object = INCREASE_REFCOUNT( tmp_assign_source_146 );
    }
    else
    {
        PyObject *old = var__lambda.object;
        var__lambda.object = INCREASE_REFCOUNT( tmp_assign_source_146 );
        Py_DECREF( old );
    }
    tmp_assign_source_147 = tmp_tuple_unpack_8__element_2.object;

    if (var_eigBlockVector.object == NULL)
    {
        var_eigBlockVector.object = INCREASE_REFCOUNT( tmp_assign_source_147 );
    }
    else
    {
        PyObject *old = var_eigBlockVector.object;
        var_eigBlockVector.object = INCREASE_REFCOUNT( tmp_assign_source_147 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_18 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_8__source_iter.object );
    tmp_tuple_unpack_8__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_1.object );
    tmp_tuple_unpack_8__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_2.object );
    tmp_tuple_unpack_8__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_18;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto try_finally_handler_16;
    }

    goto finally_end_18;
    finally_end_18:;
    tmp_source_name_71 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_71 == NULL ))
    {
        tmp_source_name_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_71 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto try_finally_handler_16;
    }

    tmp_called_75 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_argsort );
    if ( tmp_called_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_104 = var__lambda.object;

    if ( tmp_call_arg_element_104 == NULL )
    {
        Py_DECREF( tmp_called_75 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 468;
    tmp_slice_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_75, tmp_call_arg_element_104 );
    Py_DECREF( tmp_called_75 );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_16;
    }
    tmp_slice_upper_2 = var_sizeX.object;

    if ( tmp_slice_upper_2 == NULL )
    {
        Py_DECREF( tmp_slice_source_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto try_finally_handler_16;
    }

    tmp_assign_source_148 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_assign_source_148 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto try_finally_handler_16;
    }
    if (var_ii.object == NULL)
    {
        var_ii.object = tmp_assign_source_148;
    }
    else
    {
        PyObject *old = var_ii.object;
        var_ii.object = tmp_assign_source_148;
        Py_DECREF( old );
    }
    tmp_cond_value_6 = par_largest.object;

    if ( tmp_cond_value_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276094 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 469;
        goto try_finally_handler_16;
    }

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 469;
        goto try_finally_handler_16;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_42;
    }
    else
    {
        goto branch_no_42;
    }
    branch_yes_42:;
    tmp_subscr_target_10 = var_ii.object;

    tmp_sliceobj_step_2 = const_int_neg_1;
    tmp_subscr_subscript_10 = MAKE_SLICEOBJ( Py_None, Py_None, tmp_sliceobj_step_2 );
    tmp_assign_source_149 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    Py_DECREF( tmp_subscr_subscript_10 );
    if ( tmp_assign_source_149 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 470;
        goto try_finally_handler_16;
    }
    assert( var_ii.object != NULL );
    {
        PyObject *old = var_ii.object;
        var_ii.object = tmp_assign_source_149;
        Py_DECREF( old );
    }

    branch_no_42:;
    tmp_compare_left_37 = par_verbosityLevel.object;

    if ( tmp_compare_left_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 471;
        goto try_finally_handler_16;
    }

    tmp_compare_right_37 = const_int_pos_10;
    tmp_cmp_Gt_11 = RICH_COMPARE_BOOL_GT( tmp_compare_left_37, tmp_compare_right_37 );
    if ( tmp_cmp_Gt_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 471;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_11 == 1)
    {
        goto branch_yes_43;
    }
    else
    {
        goto branch_no_43;
    }
    branch_yes_43:;
    tmp_called_76 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_105 = var_ii.object;

    frame_function->f_lineno = 472;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_76, tmp_call_arg_element_105 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_43:;
    tmp_subscr_target_11 = var__lambda.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 474;
        goto try_finally_handler_16;
    }

    tmp_subscr_subscript_11 = var_ii.object;

    tmp_source_name_72 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_source_name_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_16;
    }
    tmp_called_77 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_astype );
    Py_DECREF( tmp_source_name_72 );
    if ( tmp_called_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_16;
    }
    tmp_source_name_73 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_73 == NULL ))
    {
        tmp_source_name_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_73 == NULL )
    {
        Py_DECREF( tmp_called_77 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 474;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_106 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_float64 );
    if ( tmp_call_arg_element_106 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_77 );

        frame_function->f_lineno = 474;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 474;
    tmp_assign_source_150 = CALL_FUNCTION_WITH_ARGS1( tmp_called_77, tmp_call_arg_element_106 );
    Py_DECREF( tmp_called_77 );
    Py_DECREF( tmp_call_arg_element_106 );
    if ( tmp_assign_source_150 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto try_finally_handler_16;
    }
    if (var__lambda.object == NULL)
    {
        var__lambda.object = tmp_assign_source_150;
    }
    else
    {
        PyObject *old = var__lambda.object;
        var__lambda.object = tmp_assign_source_150;
        Py_DECREF( old );
    }
    tmp_source_name_74 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_74 == NULL ))
    {
        tmp_source_name_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_74 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }

    tmp_called_78 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_asarray );
    if ( tmp_called_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }
    tmp_subscr_target_12 = var_eigBlockVector.object;

    if ( tmp_subscr_target_12 == NULL )
    {
        Py_DECREF( tmp_called_78 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276235 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }

    tmp_subscr_subscript_12 = PyTuple_New( 2 );
    tmp_tuple_element_21 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_12, 0, tmp_tuple_element_21 );
    tmp_tuple_element_21 = var_ii.object;

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_12, 1, tmp_tuple_element_21 );
    tmp_source_name_75 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    Py_DECREF( tmp_subscr_subscript_12 );
    if ( tmp_source_name_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_78 );

        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }
    tmp_called_79 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_astype );
    Py_DECREF( tmp_source_name_75 );
    if ( tmp_called_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_78 );

        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }
    tmp_source_name_76 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_76 == NULL ))
    {
        tmp_source_name_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_76 == NULL )
    {
        Py_DECREF( tmp_called_78 );
        Py_DECREF( tmp_called_79 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_108 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_float64 );
    if ( tmp_call_arg_element_108 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_78 );
        Py_DECREF( tmp_called_79 );

        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 475;
    tmp_call_arg_element_107 = CALL_FUNCTION_WITH_ARGS1( tmp_called_79, tmp_call_arg_element_108 );
    Py_DECREF( tmp_called_79 );
    Py_DECREF( tmp_call_arg_element_108 );
    if ( tmp_call_arg_element_107 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_78 );

        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }
    frame_function->f_lineno = 475;
    tmp_assign_source_151 = CALL_FUNCTION_WITH_ARGS1( tmp_called_78, tmp_call_arg_element_107 );
    Py_DECREF( tmp_called_78 );
    Py_DECREF( tmp_call_arg_element_107 );
    if ( tmp_assign_source_151 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto try_finally_handler_16;
    }
    if (var_eigBlockVector.object == NULL)
    {
        var_eigBlockVector.object = tmp_assign_source_151;
    }
    else
    {
        PyObject *old = var_eigBlockVector.object;
        var_eigBlockVector.object = tmp_assign_source_151;
        Py_DECREF( old );
    }
    tmp_source_name_77 = var_lambdaHistory.object;

    if ( tmp_source_name_77 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277974 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 477;
        goto try_finally_handler_16;
    }

    tmp_called_80 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_append );
    if ( tmp_called_80 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 477;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_109 = var__lambda.object;

    frame_function->f_lineno = 477;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_80, tmp_call_arg_element_109 );
    Py_DECREF( tmp_called_80 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 477;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_38 = par_verbosityLevel.object;

    if ( tmp_compare_left_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 479;
        goto try_finally_handler_16;
    }

    tmp_compare_right_38 = const_int_pos_10;
    tmp_cmp_Gt_12 = RICH_COMPARE_BOOL_GT( tmp_compare_left_38, tmp_compare_right_38 );
    if ( tmp_cmp_Gt_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 479;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_12 == 1)
    {
        goto branch_yes_44;
    }
    else
    {
        goto branch_no_44;
    }
    branch_yes_44:;
    tmp_called_81 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_81 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_110 = const_str_digest_2c321f6e5584684eb9415cba068b0908;
    tmp_call_arg_element_111 = var__lambda.object;

    frame_function->f_lineno = 480;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_81, tmp_call_arg_element_110, tmp_call_arg_element_111 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_44:;
    tmp_compare_left_39 = par_verbosityLevel.object;

    if ( tmp_compare_left_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 487;
        goto try_finally_handler_16;
    }

    tmp_compare_right_39 = const_int_pos_10;
    tmp_cmp_Gt_13 = RICH_COMPARE_BOOL_GT( tmp_compare_left_39, tmp_compare_right_39 );
    if ( tmp_cmp_Gt_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 487;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_13 == 1)
    {
        goto branch_yes_45;
    }
    else
    {
        goto branch_no_45;
    }
    branch_yes_45:;
    tmp_called_82 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 488;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_112 = var_eigBlockVector.object;

    frame_function->f_lineno = 488;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_82, tmp_call_arg_element_112 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 488;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_called_83 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_pause );

    if (unlikely( tmp_called_83 == NULL ))
    {
        tmp_called_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pause );
    }

    if ( tmp_called_83 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278033 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 489;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 489;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_83 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_45:;
    tmp_compare_left_40 = var_iterationNumber.object;

    if ( tmp_compare_left_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277352 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 493;
        goto try_finally_handler_16;
    }

    tmp_compare_right_40 = const_int_0;
    tmp_cmp_Gt_14 = RICH_COMPARE_BOOL_GT( tmp_compare_left_40, tmp_compare_right_40 );
    if ( tmp_cmp_Gt_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 493;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_14 == 1)
    {
        goto branch_yes_46;
    }
    else
    {
        goto branch_no_46;
    }
    branch_yes_46:;
    tmp_slice_source_3 = var_eigBlockVector.object;

    tmp_slice_upper_3 = var_sizeX.object;

    if ( tmp_slice_upper_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 494;
        goto try_finally_handler_16;
    }

    tmp_assign_source_152 = LOOKUP_SLICE( tmp_slice_source_3, Py_None, tmp_slice_upper_3 );
    if ( tmp_assign_source_152 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 494;
        goto try_finally_handler_16;
    }
    if (var_eigBlockVectorX.object == NULL)
    {
        var_eigBlockVectorX.object = tmp_assign_source_152;
    }
    else
    {
        PyObject *old = var_eigBlockVectorX.object;
        var_eigBlockVectorX.object = tmp_assign_source_152;
        Py_DECREF( old );
    }
    tmp_slice_source_4 = var_eigBlockVector.object;

    tmp_slice_lower_1 = var_sizeX.object;

    if ( tmp_slice_lower_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 495;
        goto try_finally_handler_16;
    }

    tmp_binop_left_26 = var_sizeX.object;

    if ( tmp_binop_left_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 495;
        goto try_finally_handler_16;
    }

    tmp_binop_right_26 = var_currentBlockSize.object;

    if ( tmp_binop_right_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278067 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 495;
        goto try_finally_handler_16;
    }

    tmp_slice_upper_4 = BINARY_OPERATION_ADD( tmp_binop_left_26, tmp_binop_right_26 );
    if ( tmp_slice_upper_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 495;
        goto try_finally_handler_16;
    }
    tmp_assign_source_153 = LOOKUP_SLICE( tmp_slice_source_4, tmp_slice_lower_1, tmp_slice_upper_4 );
    Py_DECREF( tmp_slice_upper_4 );
    if ( tmp_assign_source_153 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 495;
        goto try_finally_handler_16;
    }
    if (var_eigBlockVectorR.object == NULL)
    {
        var_eigBlockVectorR.object = tmp_assign_source_153;
    }
    else
    {
        PyObject *old = var_eigBlockVectorR.object;
        var_eigBlockVectorR.object = tmp_assign_source_153;
        Py_DECREF( old );
    }
    tmp_slice_source_5 = var_eigBlockVector.object;

    tmp_binop_left_27 = var_sizeX.object;

    if ( tmp_binop_left_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 496;
        goto try_finally_handler_16;
    }

    tmp_binop_right_27 = var_currentBlockSize.object;

    if ( tmp_binop_right_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278067 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 496;
        goto try_finally_handler_16;
    }

    tmp_slice_lower_2 = BINARY_OPERATION_ADD( tmp_binop_left_27, tmp_binop_right_27 );
    if ( tmp_slice_lower_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 496;
        goto try_finally_handler_16;
    }
    tmp_assign_source_154 = LOOKUP_SLICE( tmp_slice_source_5, tmp_slice_lower_2, Py_None );
    Py_DECREF( tmp_slice_lower_2 );
    if ( tmp_assign_source_154 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 496;
        goto try_finally_handler_16;
    }
    if (var_eigBlockVectorP.object == NULL)
    {
        var_eigBlockVectorP.object = tmp_assign_source_154;
    }
    else
    {
        PyObject *old = var_eigBlockVectorP.object;
        var_eigBlockVectorP.object = tmp_assign_source_154;
        Py_DECREF( old );
    }
    tmp_source_name_78 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_78 == NULL ))
    {
        tmp_source_name_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_78 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 498;
        goto try_finally_handler_16;
    }

    tmp_called_84 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_dot );
    if ( tmp_called_84 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_113 = var_activeBlockVectorR.object;

    if ( tmp_call_arg_element_113 == NULL )
    {
        Py_DECREF( tmp_called_84 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277288 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 498;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_114 = var_eigBlockVectorR.object;

    frame_function->f_lineno = 498;
    tmp_assign_source_155 = CALL_FUNCTION_WITH_ARGS2( tmp_called_84, tmp_call_arg_element_113, tmp_call_arg_element_114 );
    Py_DECREF( tmp_called_84 );
    if ( tmp_assign_source_155 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto try_finally_handler_16;
    }
    if (var_pp.object == NULL)
    {
        var_pp.object = tmp_assign_source_155;
    }
    else
    {
        PyObject *old = var_pp.object;
        var_pp.object = tmp_assign_source_155;
        Py_DECREF( old );
    }
    tmp_assign_source_156 = var_pp.object;

    if (tmp_inplace_assign_11__inplace_start.object == NULL)
    {
        tmp_inplace_assign_11__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_156 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_11__inplace_start.object;
        tmp_inplace_assign_11__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_156 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_28 = tmp_inplace_assign_11__inplace_start.object;

    tmp_source_name_79 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_79 == NULL ))
    {
        tmp_source_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_79 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 499;
        goto try_finally_handler_20;
    }

    tmp_called_85 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_dot );
    if ( tmp_called_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 499;
        goto try_finally_handler_20;
    }
    tmp_call_arg_element_115 = var_activeBlockVectorP.object;

    if ( tmp_call_arg_element_115 == NULL )
    {
        Py_DECREF( tmp_called_85 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277413 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 499;
        goto try_finally_handler_20;
    }

    tmp_call_arg_element_116 = var_eigBlockVectorP.object;

    frame_function->f_lineno = 499;
    tmp_binop_right_28 = CALL_FUNCTION_WITH_ARGS2( tmp_called_85, tmp_call_arg_element_115, tmp_call_arg_element_116 );
    Py_DECREF( tmp_called_85 );
    if ( tmp_binop_right_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 499;
        goto try_finally_handler_20;
    }
    tmp_assign_source_157 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_28, tmp_binop_right_28 );
    Py_DECREF( tmp_binop_right_28 );
    if ( tmp_assign_source_157 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 499;
        goto try_finally_handler_20;
    }
    if (tmp_inplace_assign_11__inplace_end.object == NULL)
    {
        tmp_inplace_assign_11__inplace_end.object = tmp_assign_source_157;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_11__inplace_end.object;
        tmp_inplace_assign_11__inplace_end.object = tmp_assign_source_157;
        Py_DECREF( old );
    }
    tmp_compare_left_41 = tmp_inplace_assign_11__inplace_start.object;

    tmp_compare_right_41 = tmp_inplace_assign_11__inplace_end.object;

    tmp_isnot_19 = ( tmp_compare_left_41 != tmp_compare_right_41 );
    if (tmp_isnot_19)
    {
        goto branch_yes_47;
    }
    else
    {
        goto branch_no_47;
    }
    branch_yes_47:;
    tmp_assign_source_158 = tmp_inplace_assign_11__inplace_end.object;

    assert( var_pp.object != NULL );
    {
        PyObject *old = var_pp.object;
        var_pp.object = INCREASE_REFCOUNT( tmp_assign_source_158 );
        Py_DECREF( old );
    }

    branch_no_47:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_19 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_11__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_11__inplace_start.object );
        tmp_inplace_assign_11__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_11__inplace_end.object );
    tmp_inplace_assign_11__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_19;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto try_finally_handler_16;
    }

    goto finally_end_19;
    finally_end_19:;
    tmp_source_name_80 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_80 == NULL ))
    {
        tmp_source_name_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_80 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 501;
        goto try_finally_handler_16;
    }

    tmp_called_86 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_dot );
    if ( tmp_called_86 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_117 = var_activeBlockVectorAR.object;

    if ( tmp_call_arg_element_117 == NULL )
    {
        Py_DECREF( tmp_called_86 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277657 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 501;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_118 = var_eigBlockVectorR.object;

    if ( tmp_call_arg_element_118 == NULL )
    {
        Py_DECREF( tmp_called_86 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278129 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 501;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 501;
    tmp_assign_source_159 = CALL_FUNCTION_WITH_ARGS2( tmp_called_86, tmp_call_arg_element_117, tmp_call_arg_element_118 );
    Py_DECREF( tmp_called_86 );
    if ( tmp_assign_source_159 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto try_finally_handler_16;
    }
    if (var_app.object == NULL)
    {
        var_app.object = tmp_assign_source_159;
    }
    else
    {
        PyObject *old = var_app.object;
        var_app.object = tmp_assign_source_159;
        Py_DECREF( old );
    }
    tmp_assign_source_160 = var_app.object;

    if (tmp_inplace_assign_12__inplace_start.object == NULL)
    {
        tmp_inplace_assign_12__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_160 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_12__inplace_start.object;
        tmp_inplace_assign_12__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_160 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_29 = tmp_inplace_assign_12__inplace_start.object;

    tmp_source_name_81 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_81 == NULL ))
    {
        tmp_source_name_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_81 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 502;
        goto try_finally_handler_21;
    }

    tmp_called_87 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_dot );
    if ( tmp_called_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto try_finally_handler_21;
    }
    tmp_call_arg_element_119 = var_activeBlockVectorAP.object;

    if ( tmp_call_arg_element_119 == NULL )
    {
        Py_DECREF( tmp_called_87 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277542 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 502;
        goto try_finally_handler_21;
    }

    tmp_call_arg_element_120 = var_eigBlockVectorP.object;

    if ( tmp_call_arg_element_120 == NULL )
    {
        Py_DECREF( tmp_called_87 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278190 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 502;
        goto try_finally_handler_21;
    }

    frame_function->f_lineno = 502;
    tmp_binop_right_29 = CALL_FUNCTION_WITH_ARGS2( tmp_called_87, tmp_call_arg_element_119, tmp_call_arg_element_120 );
    Py_DECREF( tmp_called_87 );
    if ( tmp_binop_right_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto try_finally_handler_21;
    }
    tmp_assign_source_161 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_29, tmp_binop_right_29 );
    Py_DECREF( tmp_binop_right_29 );
    if ( tmp_assign_source_161 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 502;
        goto try_finally_handler_21;
    }
    if (tmp_inplace_assign_12__inplace_end.object == NULL)
    {
        tmp_inplace_assign_12__inplace_end.object = tmp_assign_source_161;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_12__inplace_end.object;
        tmp_inplace_assign_12__inplace_end.object = tmp_assign_source_161;
        Py_DECREF( old );
    }
    tmp_compare_left_42 = tmp_inplace_assign_12__inplace_start.object;

    tmp_compare_right_42 = tmp_inplace_assign_12__inplace_end.object;

    tmp_isnot_20 = ( tmp_compare_left_42 != tmp_compare_right_42 );
    if (tmp_isnot_20)
    {
        goto branch_yes_48;
    }
    else
    {
        goto branch_no_48;
    }
    branch_yes_48:;
    tmp_assign_source_162 = tmp_inplace_assign_12__inplace_end.object;

    assert( var_app.object != NULL );
    {
        PyObject *old = var_app.object;
        var_app.object = INCREASE_REFCOUNT( tmp_assign_source_162 );
        Py_DECREF( old );
    }

    branch_no_48:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_20 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_12__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_12__inplace_start.object );
        tmp_inplace_assign_12__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_12__inplace_end.object );
    tmp_inplace_assign_12__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_20;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_20 != NULL )
    {
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;

        goto try_finally_handler_16;
    }

    goto finally_end_20;
    finally_end_20:;
    tmp_source_name_82 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_82 == NULL ))
    {
        tmp_source_name_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_82 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 504;
        goto try_finally_handler_16;
    }

    tmp_called_88 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_dot );
    if ( tmp_called_88 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 504;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_121 = var_activeBlockVectorBR.object;

    if ( tmp_call_arg_element_121 == NULL )
    {
        Py_DECREF( tmp_called_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277722 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 504;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_122 = var_eigBlockVectorR.object;

    if ( tmp_call_arg_element_122 == NULL )
    {
        Py_DECREF( tmp_called_88 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278129 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 504;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 504;
    tmp_assign_source_163 = CALL_FUNCTION_WITH_ARGS2( tmp_called_88, tmp_call_arg_element_121, tmp_call_arg_element_122 );
    Py_DECREF( tmp_called_88 );
    if ( tmp_assign_source_163 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 504;
        goto try_finally_handler_16;
    }
    if (var_bpp.object == NULL)
    {
        var_bpp.object = tmp_assign_source_163;
    }
    else
    {
        PyObject *old = var_bpp.object;
        var_bpp.object = tmp_assign_source_163;
        Py_DECREF( old );
    }
    tmp_assign_source_164 = var_bpp.object;

    if (tmp_inplace_assign_13__inplace_start.object == NULL)
    {
        tmp_inplace_assign_13__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_164 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_13__inplace_start.object;
        tmp_inplace_assign_13__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_164 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_30 = tmp_inplace_assign_13__inplace_start.object;

    tmp_source_name_83 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_83 == NULL ))
    {
        tmp_source_name_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_83 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 505;
        goto try_finally_handler_22;
    }

    tmp_called_89 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_dot );
    if ( tmp_called_89 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_22;
    }
    tmp_call_arg_element_123 = var_activeBlockVectorBP.object;

    if ( tmp_call_arg_element_123 == NULL )
    {
        Py_DECREF( tmp_called_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277477 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 505;
        goto try_finally_handler_22;
    }

    tmp_call_arg_element_124 = var_eigBlockVectorP.object;

    if ( tmp_call_arg_element_124 == NULL )
    {
        Py_DECREF( tmp_called_89 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278190 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 505;
        goto try_finally_handler_22;
    }

    frame_function->f_lineno = 505;
    tmp_binop_right_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_89, tmp_call_arg_element_123, tmp_call_arg_element_124 );
    Py_DECREF( tmp_called_89 );
    if ( tmp_binop_right_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_22;
    }
    tmp_assign_source_165 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_30, tmp_binop_right_30 );
    Py_DECREF( tmp_binop_right_30 );
    if ( tmp_assign_source_165 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_22;
    }
    if (tmp_inplace_assign_13__inplace_end.object == NULL)
    {
        tmp_inplace_assign_13__inplace_end.object = tmp_assign_source_165;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_13__inplace_end.object;
        tmp_inplace_assign_13__inplace_end.object = tmp_assign_source_165;
        Py_DECREF( old );
    }
    tmp_compare_left_43 = tmp_inplace_assign_13__inplace_start.object;

    tmp_compare_right_43 = tmp_inplace_assign_13__inplace_end.object;

    tmp_isnot_21 = ( tmp_compare_left_43 != tmp_compare_right_43 );
    if (tmp_isnot_21)
    {
        goto branch_yes_49;
    }
    else
    {
        goto branch_no_49;
    }
    branch_yes_49:;
    tmp_assign_source_166 = tmp_inplace_assign_13__inplace_end.object;

    assert( var_bpp.object != NULL );
    {
        PyObject *old = var_bpp.object;
        var_bpp.object = INCREASE_REFCOUNT( tmp_assign_source_166 );
        Py_DECREF( old );
    }

    branch_no_49:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_22:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_21 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_13__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_13__inplace_start.object );
        tmp_inplace_assign_13__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_13__inplace_end.object );
    tmp_inplace_assign_13__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_21;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_21 != NULL )
    {
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;

        goto try_finally_handler_16;
    }

    goto finally_end_21;
    finally_end_21:;
    goto branch_end_46;
    branch_no_46:;
    tmp_slice_source_6 = var_eigBlockVector.object;

    tmp_slice_upper_5 = var_sizeX.object;

    if ( tmp_slice_upper_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_16;
    }

    tmp_assign_source_167 = LOOKUP_SLICE( tmp_slice_source_6, Py_None, tmp_slice_upper_5 );
    if ( tmp_assign_source_167 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_16;
    }
    if (var_eigBlockVectorX.object == NULL)
    {
        var_eigBlockVectorX.object = tmp_assign_source_167;
    }
    else
    {
        PyObject *old = var_eigBlockVectorX.object;
        var_eigBlockVectorX.object = tmp_assign_source_167;
        Py_DECREF( old );
    }
    tmp_slice_source_7 = var_eigBlockVector.object;

    tmp_slice_lower_3 = var_sizeX.object;

    if ( tmp_slice_lower_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275951 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 508;
        goto try_finally_handler_16;
    }

    tmp_assign_source_168 = LOOKUP_SLICE( tmp_slice_source_7, tmp_slice_lower_3, Py_None );
    if ( tmp_assign_source_168 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 508;
        goto try_finally_handler_16;
    }
    if (var_eigBlockVectorR.object == NULL)
    {
        var_eigBlockVectorR.object = tmp_assign_source_168;
    }
    else
    {
        PyObject *old = var_eigBlockVectorR.object;
        var_eigBlockVectorR.object = tmp_assign_source_168;
        Py_DECREF( old );
    }
    tmp_source_name_84 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_84 == NULL ))
    {
        tmp_source_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_84 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 510;
        goto try_finally_handler_16;
    }

    tmp_called_90 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_dot );
    if ( tmp_called_90 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 510;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_125 = var_activeBlockVectorR.object;

    if ( tmp_call_arg_element_125 == NULL )
    {
        Py_DECREF( tmp_called_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277288 ], 64, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 510;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_126 = var_eigBlockVectorR.object;

    frame_function->f_lineno = 510;
    tmp_assign_source_169 = CALL_FUNCTION_WITH_ARGS2( tmp_called_90, tmp_call_arg_element_125, tmp_call_arg_element_126 );
    Py_DECREF( tmp_called_90 );
    if ( tmp_assign_source_169 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 510;
        goto try_finally_handler_16;
    }
    if (var_pp.object == NULL)
    {
        var_pp.object = tmp_assign_source_169;
    }
    else
    {
        PyObject *old = var_pp.object;
        var_pp.object = tmp_assign_source_169;
        Py_DECREF( old );
    }
    tmp_source_name_85 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_85 == NULL ))
    {
        tmp_source_name_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_85 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 511;
        goto try_finally_handler_16;
    }

    tmp_called_91 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_dot );
    if ( tmp_called_91 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 511;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_127 = var_activeBlockVectorAR.object;

    if ( tmp_call_arg_element_127 == NULL )
    {
        Py_DECREF( tmp_called_91 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277657 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 511;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_128 = var_eigBlockVectorR.object;

    frame_function->f_lineno = 511;
    tmp_assign_source_170 = CALL_FUNCTION_WITH_ARGS2( tmp_called_91, tmp_call_arg_element_127, tmp_call_arg_element_128 );
    Py_DECREF( tmp_called_91 );
    if ( tmp_assign_source_170 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 511;
        goto try_finally_handler_16;
    }
    if (var_app.object == NULL)
    {
        var_app.object = tmp_assign_source_170;
    }
    else
    {
        PyObject *old = var_app.object;
        var_app.object = tmp_assign_source_170;
        Py_DECREF( old );
    }
    tmp_source_name_86 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_86 == NULL ))
    {
        tmp_source_name_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_86 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 512;
        goto try_finally_handler_16;
    }

    tmp_called_92 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_dot );
    if ( tmp_called_92 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 512;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_129 = var_activeBlockVectorBR.object;

    if ( tmp_call_arg_element_129 == NULL )
    {
        Py_DECREF( tmp_called_92 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277722 ], 65, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 512;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_130 = var_eigBlockVectorR.object;

    frame_function->f_lineno = 512;
    tmp_assign_source_171 = CALL_FUNCTION_WITH_ARGS2( tmp_called_92, tmp_call_arg_element_129, tmp_call_arg_element_130 );
    Py_DECREF( tmp_called_92 );
    if ( tmp_assign_source_171 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 512;
        goto try_finally_handler_16;
    }
    if (var_bpp.object == NULL)
    {
        var_bpp.object = tmp_assign_source_171;
    }
    else
    {
        PyObject *old = var_bpp.object;
        var_bpp.object = tmp_assign_source_171;
        Py_DECREF( old );
    }
    branch_end_46:;
    tmp_compare_left_44 = par_verbosityLevel.object;

    if ( tmp_compare_left_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 514;
        goto try_finally_handler_16;
    }

    tmp_compare_right_44 = const_int_pos_10;
    tmp_cmp_Gt_15 = RICH_COMPARE_BOOL_GT( tmp_compare_left_44, tmp_compare_right_44 );
    if ( tmp_cmp_Gt_15 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 514;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_Gt_15 == 1)
    {
        goto branch_yes_50;
    }
    else
    {
        goto branch_no_50;
    }
    branch_yes_50:;
    tmp_called_93 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_93 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 515;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_131 = var_pp.object;

    if ( tmp_call_arg_element_131 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278251 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 515;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 515;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_93, tmp_call_arg_element_131 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 515;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_called_94 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_94 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 516;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_132 = var_app.object;

    if ( tmp_call_arg_element_132 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278299 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 516;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 516;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_94, tmp_call_arg_element_132 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 516;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_called_95 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_95 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 517;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_133 = var_bpp.object;

    if ( tmp_call_arg_element_133 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278348 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 517;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 517;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_95, tmp_call_arg_element_133 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 517;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_called_96 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_pause );

    if (unlikely( tmp_called_96 == NULL ))
    {
        tmp_called_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pause );
    }

    if ( tmp_called_96 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278033 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 518;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 518;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_96 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 518;
        goto try_finally_handler_16;
    }
    Py_DECREF( tmp_unused );
    branch_no_50:;
    tmp_source_name_87 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_87 == NULL ))
    {
        tmp_source_name_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_87 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 520;
        goto try_finally_handler_16;
    }

    tmp_called_97 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_dot );
    if ( tmp_called_97 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 520;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_134 = var_blockVectorX.object;

    if ( tmp_call_arg_element_134 == NULL )
    {
        Py_DECREF( tmp_called_97 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 520;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_135 = var_eigBlockVectorX.object;

    if ( tmp_call_arg_element_135 == NULL )
    {
        Py_DECREF( tmp_called_97 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278397 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 520;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 520;
    tmp_binop_left_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_97, tmp_call_arg_element_134, tmp_call_arg_element_135 );
    Py_DECREF( tmp_called_97 );
    if ( tmp_binop_left_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 520;
        goto try_finally_handler_16;
    }
    tmp_binop_right_31 = var_pp.object;

    if ( tmp_binop_right_31 == NULL )
    {
        Py_DECREF( tmp_binop_left_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278251 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 520;
        goto try_finally_handler_16;
    }

    tmp_assign_source_172 = BINARY_OPERATION_ADD( tmp_binop_left_31, tmp_binop_right_31 );
    Py_DECREF( tmp_binop_left_31 );
    if ( tmp_assign_source_172 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 520;
        goto try_finally_handler_16;
    }
    if (var_blockVectorX.object == NULL)
    {
        var_blockVectorX.object = tmp_assign_source_172;
    }
    else
    {
        PyObject *old = var_blockVectorX.object;
        var_blockVectorX.object = tmp_assign_source_172;
        Py_DECREF( old );
    }
    tmp_source_name_88 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_88 == NULL ))
    {
        tmp_source_name_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_88 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 521;
        goto try_finally_handler_16;
    }

    tmp_called_98 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_dot );
    if ( tmp_called_98 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 521;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_136 = var_blockVectorAX.object;

    if ( tmp_call_arg_element_136 == NULL )
    {
        Py_DECREF( tmp_called_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276776 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 521;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_137 = var_eigBlockVectorX.object;

    if ( tmp_call_arg_element_137 == NULL )
    {
        Py_DECREF( tmp_called_98 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278397 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 521;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 521;
    tmp_binop_left_32 = CALL_FUNCTION_WITH_ARGS2( tmp_called_98, tmp_call_arg_element_136, tmp_call_arg_element_137 );
    Py_DECREF( tmp_called_98 );
    if ( tmp_binop_left_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 521;
        goto try_finally_handler_16;
    }
    tmp_binop_right_32 = var_app.object;

    if ( tmp_binop_right_32 == NULL )
    {
        Py_DECREF( tmp_binop_left_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278299 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 521;
        goto try_finally_handler_16;
    }

    tmp_assign_source_173 = BINARY_OPERATION_ADD( tmp_binop_left_32, tmp_binop_right_32 );
    Py_DECREF( tmp_binop_left_32 );
    if ( tmp_assign_source_173 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 521;
        goto try_finally_handler_16;
    }
    if (var_blockVectorAX.object == NULL)
    {
        var_blockVectorAX.object = tmp_assign_source_173;
    }
    else
    {
        PyObject *old = var_blockVectorAX.object;
        var_blockVectorAX.object = tmp_assign_source_173;
        Py_DECREF( old );
    }
    tmp_source_name_89 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp );

    if (unlikely( tmp_source_name_89 == NULL ))
    {
        tmp_source_name_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sp );
    }

    if ( tmp_source_name_89 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 275580 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 522;
        goto try_finally_handler_16;
    }

    tmp_called_99 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_dot );
    if ( tmp_called_99 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto try_finally_handler_16;
    }
    tmp_call_arg_element_138 = var_blockVectorBX.object;

    if ( tmp_call_arg_element_138 == NULL )
    {
        Py_DECREF( tmp_called_99 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276835 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 522;
        goto try_finally_handler_16;
    }

    tmp_call_arg_element_139 = var_eigBlockVectorX.object;

    if ( tmp_call_arg_element_139 == NULL )
    {
        Py_DECREF( tmp_called_99 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278397 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 522;
        goto try_finally_handler_16;
    }

    frame_function->f_lineno = 522;
    tmp_binop_left_33 = CALL_FUNCTION_WITH_ARGS2( tmp_called_99, tmp_call_arg_element_138, tmp_call_arg_element_139 );
    Py_DECREF( tmp_called_99 );
    if ( tmp_binop_left_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto try_finally_handler_16;
    }
    tmp_binop_right_33 = var_bpp.object;

    if ( tmp_binop_right_33 == NULL )
    {
        Py_DECREF( tmp_binop_left_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278348 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 522;
        goto try_finally_handler_16;
    }

    tmp_assign_source_174 = BINARY_OPERATION_ADD( tmp_binop_left_33, tmp_binop_right_33 );
    Py_DECREF( tmp_binop_left_33 );
    if ( tmp_assign_source_174 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 522;
        goto try_finally_handler_16;
    }
    if (var_blockVectorBX.object == NULL)
    {
        var_blockVectorBX.object = tmp_assign_source_174;
    }
    else
    {
        PyObject *old = var_blockVectorBX.object;
        var_blockVectorBX.object = tmp_assign_source_174;
        Py_DECREF( old );
    }
    // Tried code
    tmp_iter_arg_10 = PyTuple_New( 3 );
    tmp_tuple_element_22 = var_pp.object;

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_iter_arg_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278251 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto try_finally_handler_23;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_iter_arg_10, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = var_app.object;

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_iter_arg_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278299 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto try_finally_handler_23;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_iter_arg_10, 1, tmp_tuple_element_22 );
    tmp_tuple_element_22 = var_bpp.object;

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_iter_arg_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278348 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 524;
        goto try_finally_handler_23;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_iter_arg_10, 2, tmp_tuple_element_22 );
    tmp_assign_source_175 = MAKE_ITERATOR( tmp_iter_arg_10 );
    Py_DECREF( tmp_iter_arg_10 );
    if ( tmp_assign_source_175 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 524;
        goto try_finally_handler_23;
    }
    if (tmp_tuple_unpack_9__source_iter.object == NULL)
    {
        tmp_tuple_unpack_9__source_iter.object = tmp_assign_source_175;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_9__source_iter.object;
        tmp_tuple_unpack_9__source_iter.object = tmp_assign_source_175;
        Py_DECREF( old );
    }
    tmp_unpack_18 = tmp_tuple_unpack_9__source_iter.object;

    tmp_assign_source_176 = UNPACK_PARAMETER_NEXT( tmp_unpack_18, 0 );
    if ( tmp_assign_source_176 == NULL )
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


        frame_function->f_lineno = 524;
        goto try_finally_handler_23;
    }
    if (tmp_tuple_unpack_9__element_1.object == NULL)
    {
        tmp_tuple_unpack_9__element_1.object = tmp_assign_source_176;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_9__element_1.object;
        tmp_tuple_unpack_9__element_1.object = tmp_assign_source_176;
        Py_DECREF( old );
    }
    tmp_unpack_19 = tmp_tuple_unpack_9__source_iter.object;

    tmp_assign_source_177 = UNPACK_PARAMETER_NEXT( tmp_unpack_19, 1 );
    if ( tmp_assign_source_177 == NULL )
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


        frame_function->f_lineno = 524;
        goto try_finally_handler_23;
    }
    if (tmp_tuple_unpack_9__element_2.object == NULL)
    {
        tmp_tuple_unpack_9__element_2.object = tmp_assign_source_177;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_9__element_2.object;
        tmp_tuple_unpack_9__element_2.object = tmp_assign_source_177;
        Py_DECREF( old );
    }
    tmp_unpack_20 = tmp_tuple_unpack_9__source_iter.object;

    tmp_assign_source_178 = UNPACK_PARAMETER_NEXT( tmp_unpack_20, 2 );
    if ( tmp_assign_source_178 == NULL )
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


        frame_function->f_lineno = 524;
        goto try_finally_handler_23;
    }
    if (tmp_tuple_unpack_9__element_3.object == NULL)
    {
        tmp_tuple_unpack_9__element_3.object = tmp_assign_source_178;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_9__element_3.object;
        tmp_tuple_unpack_9__element_3.object = tmp_assign_source_178;
        Py_DECREF( old );
    }
    tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter.object;

    // Check if iterator has left-over elements.
    assertObject( tmp_iterator_name_9 ); assert( PyIter_Check( tmp_iterator_name_9 ) );

    tmp_iterator_attempt_9 = (*Py_TYPE( tmp_iterator_name_9 )->tp_iternext)( tmp_iterator_name_9 );

    if (likely( tmp_iterator_attempt_9 == NULL ))
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

            goto try_finally_handler_23;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_9 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_23;
    }
    tmp_assign_source_179 = tmp_tuple_unpack_9__element_1.object;

    if (var_blockVectorP.object == NULL)
    {
        var_blockVectorP.object = INCREASE_REFCOUNT( tmp_assign_source_179 );
    }
    else
    {
        PyObject *old = var_blockVectorP.object;
        var_blockVectorP.object = INCREASE_REFCOUNT( tmp_assign_source_179 );
        Py_DECREF( old );
    }
    tmp_assign_source_180 = tmp_tuple_unpack_9__element_2.object;

    if (var_blockVectorAP.object == NULL)
    {
        var_blockVectorAP.object = INCREASE_REFCOUNT( tmp_assign_source_180 );
    }
    else
    {
        PyObject *old = var_blockVectorAP.object;
        var_blockVectorAP.object = INCREASE_REFCOUNT( tmp_assign_source_180 );
        Py_DECREF( old );
    }
    tmp_assign_source_181 = tmp_tuple_unpack_9__element_3.object;

    if (var_blockVectorBP.object == NULL)
    {
        var_blockVectorBP.object = INCREASE_REFCOUNT( tmp_assign_source_181 );
    }
    else
    {
        PyObject *old = var_blockVectorBP.object;
        var_blockVectorBP.object = INCREASE_REFCOUNT( tmp_assign_source_181 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_23:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_22 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_9__source_iter.object );
    tmp_tuple_unpack_9__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_1.object );
    tmp_tuple_unpack_9__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_2.object );
    tmp_tuple_unpack_9__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_3.object );
    tmp_tuple_unpack_9__element_3.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_22;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_22 != NULL )
    {
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;

        goto try_finally_handler_16;
    }

    goto finally_end_22;
    finally_end_22:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto try_finally_handler_16;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_16:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_23 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_23;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_23 != NULL )
    {
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;

        goto frame_exception_exit_1;
    }

    goto finally_end_23;
    finally_end_23:;
    tmp_binop_left_34 = var_blockVectorBX.object;

    if ( tmp_binop_left_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276835 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_13 = var__lambda.object;

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_13 = PyTuple_New( 2 );
    tmp_source_name_90 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_90 == NULL ))
    {
        tmp_source_name_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_90 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_23 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_newaxis );
    if ( tmp_tuple_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_13 );

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_13, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_13, 1, tmp_tuple_element_23 );
    tmp_binop_right_34 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    Py_DECREF( tmp_subscr_subscript_13 );
    if ( tmp_binop_right_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_182 = BINARY_OPERATION_MUL( tmp_binop_left_34, tmp_binop_right_34 );
    Py_DECREF( tmp_binop_right_34 );
    if ( tmp_assign_source_182 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }
    if (var_aux.object == NULL)
    {
        var_aux.object = tmp_assign_source_182;
    }
    else
    {
        PyObject *old = var_aux.object;
        var_aux.object = tmp_assign_source_182;
        Py_DECREF( old );
    }
    tmp_binop_left_35 = var_blockVectorAX.object;

    if ( tmp_binop_left_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276776 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_35 = var_aux.object;

    tmp_assign_source_183 = BINARY_OPERATION_SUB( tmp_binop_left_35, tmp_binop_right_35 );
    if ( tmp_assign_source_183 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 527;
        goto frame_exception_exit_1;
    }
    if (var_blockVectorR.object == NULL)
    {
        var_blockVectorR.object = tmp_assign_source_183;
    }
    else
    {
        PyObject *old = var_blockVectorR.object;
        var_blockVectorR.object = tmp_assign_source_183;
        Py_DECREF( old );
    }
    tmp_source_name_91 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_91 == NULL ))
    {
        tmp_source_name_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_91 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 529;
        goto frame_exception_exit_1;
    }

    tmp_called_100 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_sum );
    if ( tmp_called_100 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 529;
        goto frame_exception_exit_1;
    }
    tmp_source_name_92 = var_blockVectorR.object;

    tmp_called_101 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_conjugate );
    if ( tmp_called_101 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_100 );

        frame_function->f_lineno = 529;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 529;
    tmp_binop_left_36 = CALL_FUNCTION_NO_ARGS( tmp_called_101 );
    Py_DECREF( tmp_called_101 );
    if ( tmp_binop_left_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_100 );

        frame_function->f_lineno = 529;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_36 = var_blockVectorR.object;

    tmp_call_arg_element_140 = BINARY_OPERATION_MUL( tmp_binop_left_36, tmp_binop_right_36 );
    Py_DECREF( tmp_binop_left_36 );
    if ( tmp_call_arg_element_140 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_100 );

        frame_function->f_lineno = 529;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_141 = const_int_0;
    frame_function->f_lineno = 529;
    tmp_assign_source_184 = CALL_FUNCTION_WITH_ARGS2( tmp_called_100, tmp_call_arg_element_140, tmp_call_arg_element_141 );
    Py_DECREF( tmp_called_100 );
    Py_DECREF( tmp_call_arg_element_140 );
    if ( tmp_assign_source_184 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 529;
        goto frame_exception_exit_1;
    }
    assert( var_aux.object != NULL );
    {
        PyObject *old = var_aux.object;
        var_aux.object = tmp_assign_source_184;
        Py_DECREF( old );
    }

    tmp_source_name_93 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_93 == NULL ))
    {
        tmp_source_name_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_93 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }

    tmp_called_102 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_sqrt );
    if ( tmp_called_102 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_142 = var_aux.object;

    frame_function->f_lineno = 530;
    tmp_assign_source_185 = CALL_FUNCTION_WITH_ARGS1( tmp_called_102, tmp_call_arg_element_142 );
    Py_DECREF( tmp_called_102 );
    if ( tmp_assign_source_185 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 530;
        goto frame_exception_exit_1;
    }
    if (var_residualNorms.object == NULL)
    {
        var_residualNorms.object = tmp_assign_source_185;
    }
    else
    {
        PyObject *old = var_residualNorms.object;
        var_residualNorms.object = tmp_assign_source_185;
        Py_DECREF( old );
    }
    tmp_compare_left_45 = par_verbosityLevel.object;

    if ( tmp_compare_left_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276417 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 532;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_45 = const_int_0;
    tmp_cmp_Gt_16 = RICH_COMPARE_BOOL_GT( tmp_compare_left_45, tmp_compare_right_45 );
    if ( tmp_cmp_Gt_16 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 532;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_16 == 1)
    {
        goto branch_yes_51;
    }
    else
    {
        goto branch_no_51;
    }
    branch_yes_51:;
    tmp_called_103 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_103 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 533;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_143 = const_str_digest_acdced9010978888e4aa59fc1221cabe;
    tmp_call_arg_element_144 = var__lambda.object;

    if ( tmp_call_arg_element_144 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 533;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 533;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_103, tmp_call_arg_element_143, tmp_call_arg_element_144 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 533;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_104 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_104 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 534;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_145 = const_str_digest_d767e91ae430aa3b68903e81abeaea2c;
    tmp_call_arg_element_146 = var_residualNorms.object;

    frame_function->f_lineno = 534;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_104, tmp_call_arg_element_145, tmp_call_arg_element_146 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 534;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_51:;
    tmp_cond_value_7 = par_retLambdaHistory.object;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278458 ], 62, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 536;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_52;
    }
    else
    {
        goto branch_no_52;
    }
    branch_yes_52:;
    tmp_cond_value_8 = par_retResidualNormsHistory.object;

    if ( tmp_cond_value_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278520 ], 69, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 537;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 537;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto branch_yes_53;
    }
    else
    {
        goto branch_no_53;
    }
    branch_yes_53:;
    tmp_return_value = PyTuple_New( 4 );
    tmp_tuple_element_24 = var__lambda.object;

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = var_blockVectorX.object;

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_24 );
    tmp_tuple_element_24 = var_lambdaHistory.object;

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277974 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_24 );
    tmp_tuple_element_24 = var_residualNormsHistory.object;

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276894 ], 66, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_24 );
    goto frame_return_exit_1;
    goto branch_end_53;
    branch_no_53:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_25 = var__lambda.object;

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = var_blockVectorX.object;

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_25 );
    tmp_tuple_element_25 = var_lambdaHistory.object;

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 277974 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_25 );
    goto frame_return_exit_1;
    branch_end_53:;
    goto branch_end_52;
    branch_no_52:;
    tmp_cond_value_9 = par_retResidualNormsHistory.object;

    if ( tmp_cond_value_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 278520 ], 69, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 542;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_9 == 1)
    {
        goto branch_yes_54;
    }
    else
    {
        goto branch_no_54;
    }
    branch_yes_54:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_26 = var__lambda.object;

    if ( tmp_tuple_element_26 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = var_blockVectorX.object;

    if ( tmp_tuple_element_26 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_26 );
    tmp_tuple_element_26 = var_residualNormsHistory.object;

    if ( tmp_tuple_element_26 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276894 ], 66, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_26 );
    goto frame_return_exit_1;
    goto branch_end_54;
    branch_no_54:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_27 = var__lambda.object;

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276182 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_27 );
    tmp_tuple_element_27 = var_blockVectorX.object;

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 276620 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_27 );
    goto frame_return_exit_1;
    branch_end_54:;
    branch_end_52:;

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
    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;
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
    if ((var_failureFlag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_failureFlag,
            var_failureFlag.object
        );

    }
    if ((var_sla.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sla,
            var_sla.object
        );

    }
    if ((var_blockVectorX.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorX,
            var_blockVectorX.object
        );

    }
    if ((var_blockVectorY.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorY,
            var_blockVectorY.object
        );

    }
    if ((var_residualTolerance.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_residualTolerance,
            var_residualTolerance.object
        );

    }
    if ((var_maxIterations.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxIterations,
            var_maxIterations.object
        );

    }
    if ((var_sizeY.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sizeY,
            var_sizeY.object
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
    if ((var_sizeX.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sizeX,
            var_sizeX.object
        );

    }
    if ((var_lohi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lohi,
            var_lohi.object
        );

    }
    if ((var_A_dense.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_A_dense,
            var_A_dense.object
        );

    }
    if ((var_B_dense.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_B_dense,
            var_B_dense.object
        );

    }
    if ((var__lambda.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__lambda,
            var__lambda.object
        );

    }
    if ((var_eigBlockVector.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_eigBlockVector,
            var_eigBlockVector.object
        );

    }
    if ((var_aux.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_aux,
            var_aux.object
        );

    }
    if ((var_blockVectorBY.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorBY,
            var_blockVectorBY.object
        );

    }
    if ((var_gramYBY.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gramYBY,
            var_gramYBY.object
        );

    }
    if ((var_blockVectorBX.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorBX,
            var_blockVectorBX.object
        );

    }
    if ((var_blockVectorAX.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorAX,
            var_blockVectorAX.object
        );

    }
    if ((var_gramXAX.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gramXAX,
            var_gramXAX.object
        );

    }
    if ((var_gramXBX.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gramXBX,
            var_gramXBX.object
        );

    }
    if ((var_ii.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ii,
            var_ii.object
        );

    }
    if ((var_activeMask.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_activeMask,
            var_activeMask.object
        );

    }
    if ((var_lambdaHistory.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lambdaHistory,
            var_lambdaHistory.object
        );

    }
    if ((var_residualNormsHistory.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_residualNormsHistory,
            var_residualNormsHistory.object
        );

    }
    if ((var_previousBlockSize.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_previousBlockSize,
            var_previousBlockSize.object
        );

    }
    if ((var_ident.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ident,
            var_ident.object
        );

    }
    if ((var_ident0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ident0,
            var_ident0.object
        );

    }
    if ((var_blockVectorP.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorP,
            var_blockVectorP.object
        );

    }
    if ((var_blockVectorAP.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorAP,
            var_blockVectorAP.object
        );

    }
    if ((var_blockVectorBP.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorBP,
            var_blockVectorBP.object
        );

    }
    if ((var_iterationNumber.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_iterationNumber,
            var_iterationNumber.object
        );

    }
    if ((var_blockVectorR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_blockVectorR,
            var_blockVectorR.object
        );

    }
    if ((var_residualNorms.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_residualNorms,
            var_residualNorms.object
        );

    }
    if ((var_currentBlockSize.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_currentBlockSize,
            var_currentBlockSize.object
        );

    }
    if ((var_activeBlockVectorR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_activeBlockVectorR,
            var_activeBlockVectorR.object
        );

    }
    if ((var_activeBlockVectorP.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_activeBlockVectorP,
            var_activeBlockVectorP.object
        );

    }
    if ((var_activeBlockVectorAP.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_activeBlockVectorAP,
            var_activeBlockVectorAP.object
        );

    }
    if ((var_activeBlockVectorBP.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_activeBlockVectorBP,
            var_activeBlockVectorBP.object
        );

    }
    if ((var_activeBlockVectorBR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_activeBlockVectorBR,
            var_activeBlockVectorBR.object
        );

    }
    if ((var_activeBlockVectorAR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_activeBlockVectorAR,
            var_activeBlockVectorAR.object
        );

    }
    if ((var_invR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_invR,
            var_invR.object
        );

    }
    if ((var_xaw.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_xaw,
            var_xaw.object
        );

    }
    if ((var_waw.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_waw,
            var_waw.object
        );

    }
    if ((var_xbw.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_xbw,
            var_xbw.object
        );

    }
    if ((var_xap.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_xap,
            var_xap.object
        );

    }
    if ((var_wap.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_wap,
            var_wap.object
        );

    }
    if ((var_pap.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pap,
            var_pap.object
        );

    }
    if ((var_xbp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_xbp,
            var_xbp.object
        );

    }
    if ((var_wbp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_wbp,
            var_wbp.object
        );

    }
    if ((var_gramA.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gramA,
            var_gramA.object
        );

    }
    if ((var_gramB.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gramB,
            var_gramB.object
        );

    }
    if ((var_eigBlockVectorX.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_eigBlockVectorX,
            var_eigBlockVectorX.object
        );

    }
    if ((var_eigBlockVectorR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_eigBlockVectorR,
            var_eigBlockVectorR.object
        );

    }
    if ((var_eigBlockVectorP.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_eigBlockVectorP,
            var_eigBlockVectorP.object
        );

    }
    if ((var_pp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pp,
            var_pp.object
        );

    }
    if ((var_app.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_app,
            var_app.object
        );

    }
    if ((var_bpp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bpp,
            var_bpp.object
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
    if ((par_X.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_X,
            par_X.object
        );

    }
    if ((par_B.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_B,
            par_B.object
        );

    }
    if ((par_M.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_M,
            par_M.object
        );

    }
    if ((par_Y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Y,
            par_Y.object
        );

    }
    if ((par_tol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tol,
            par_tol.object
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
    if ((par_largest.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_largest,
            par_largest.object
        );

    }
    if ((par_verbosityLevel.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_verbosityLevel,
            par_verbosityLevel.object
        );

    }
    if ((par_retLambdaHistory.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_retLambdaHistory,
            par_retLambdaHistory.object
        );

    }
    if ((par_retResidualNormsHistory.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_retResidualNormsHistory,
            par_retResidualNormsHistory.object
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
static PyObject *fparse_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_A = NULL;
    PyObject *_python_par_X = NULL;
    PyObject *_python_par_B = NULL;
    PyObject *_python_par_M = NULL;
    PyObject *_python_par_Y = NULL;
    PyObject *_python_par_tol = NULL;
    PyObject *_python_par_maxiter = NULL;
    PyObject *_python_par_largest = NULL;
    PyObject *_python_par_verbosityLevel = NULL;
    PyObject *_python_par_retLambdaHistory = NULL;
    PyObject *_python_par_retResidualNormsHistory = NULL;
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
                PyErr_Format( PyExc_TypeError, "lobpcg() keywords must be strings" );
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
            if ( found == false && const_str_plain_X == key )
            {
                assert( _python_par_X == NULL );
                _python_par_X = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_B == key )
            {
                assert( _python_par_B == NULL );
                _python_par_B = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_M == key )
            {
                assert( _python_par_M == NULL );
                _python_par_M = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_Y == key )
            {
                assert( _python_par_Y == NULL );
                _python_par_Y = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_tol == key )
            {
                assert( _python_par_tol == NULL );
                _python_par_tol = value;

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
            if ( found == false && const_str_plain_largest == key )
            {
                assert( _python_par_largest == NULL );
                _python_par_largest = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_verbosityLevel == key )
            {
                assert( _python_par_verbosityLevel == NULL );
                _python_par_verbosityLevel = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_retLambdaHistory == key )
            {
                assert( _python_par_retLambdaHistory == NULL );
                _python_par_retLambdaHistory = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_retResidualNormsHistory == key )
            {
                assert( _python_par_retResidualNormsHistory == NULL );
                _python_par_retResidualNormsHistory = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_X, key ) == 1 )
            {
                assert( _python_par_X == NULL );
                _python_par_X = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_B, key ) == 1 )
            {
                assert( _python_par_B == NULL );
                _python_par_B = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_M, key ) == 1 )
            {
                assert( _python_par_M == NULL );
                _python_par_M = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_Y, key ) == 1 )
            {
                assert( _python_par_Y == NULL );
                _python_par_Y = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_tol, key ) == 1 )
            {
                assert( _python_par_tol == NULL );
                _python_par_tol = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_largest, key ) == 1 )
            {
                assert( _python_par_largest == NULL );
                _python_par_largest = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_verbosityLevel, key ) == 1 )
            {
                assert( _python_par_verbosityLevel == NULL );
                _python_par_verbosityLevel = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_retLambdaHistory, key ) == 1 )
            {
                assert( _python_par_retLambdaHistory == NULL );
                _python_par_retLambdaHistory = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_retResidualNormsHistory, key ) == 1 )
            {
                assert( _python_par_retResidualNormsHistory == NULL );
                _python_par_retResidualNormsHistory = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "lobpcg() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 11 ))
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
        if ( 0 + self->m_defaults_given >= 11  )
        {
            _python_par_A = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 11 ) );
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
         if (unlikely( _python_par_X != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_X = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_X == NULL )
    {
        if ( 1 + self->m_defaults_given >= 11  )
        {
            _python_par_X = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 11 ) );
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
         if (unlikely( _python_par_B != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_B = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_B == NULL )
    {
        if ( 2 + self->m_defaults_given >= 11  )
        {
            _python_par_B = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 11 ) );
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
         if (unlikely( _python_par_M != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_M = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_M == NULL )
    {
        if ( 3 + self->m_defaults_given >= 11  )
        {
            _python_par_M = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 11 ) );
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
         if (unlikely( _python_par_Y != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_Y = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_Y == NULL )
    {
        if ( 4 + self->m_defaults_given >= 11  )
        {
            _python_par_Y = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 11 ) );
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
         if (unlikely( _python_par_tol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_tol = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_tol == NULL )
    {
        if ( 5 + self->m_defaults_given >= 11  )
        {
            _python_par_tol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 11 ) );
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
        if ( 6 + self->m_defaults_given >= 11  )
        {
            _python_par_maxiter = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 11 ) );
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
         if (unlikely( _python_par_largest != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_largest = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_largest == NULL )
    {
        if ( 7 + self->m_defaults_given >= 11  )
        {
            _python_par_largest = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 11 ) );
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
         if (unlikely( _python_par_verbosityLevel != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_verbosityLevel = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_verbosityLevel == NULL )
    {
        if ( 8 + self->m_defaults_given >= 11  )
        {
            _python_par_verbosityLevel = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 11 ) );
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
    if (likely( 9 < args_given ))
    {
         if (unlikely( _python_par_retLambdaHistory != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_retLambdaHistory = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_retLambdaHistory == NULL )
    {
        if ( 9 + self->m_defaults_given >= 11  )
        {
            _python_par_retLambdaHistory = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 11 ) );
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
    if (likely( 10 < args_given ))
    {
         if (unlikely( _python_par_retResidualNormsHistory != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_retResidualNormsHistory = INCREASE_REFCOUNT( args[ 10 ] );
    }
    else if ( _python_par_retResidualNormsHistory == NULL )
    {
        if ( 10 + self->m_defaults_given >= 11  )
        {
            _python_par_retResidualNormsHistory = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 11 ) );
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
    if (unlikely( _python_par_A == NULL || _python_par_X == NULL || _python_par_B == NULL || _python_par_M == NULL || _python_par_Y == NULL || _python_par_tol == NULL || _python_par_maxiter == NULL || _python_par_largest == NULL || _python_par_verbosityLevel == NULL || _python_par_retLambdaHistory == NULL || _python_par_retResidualNormsHistory == NULL ))
    {
        PyObject *values[] = { _python_par_A, _python_par_X, _python_par_B, _python_par_M, _python_par_Y, _python_par_tol, _python_par_maxiter, _python_par_largest, _python_par_verbosityLevel, _python_par_retLambdaHistory, _python_par_retResidualNormsHistory };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, _python_par_A, _python_par_X, _python_par_B, _python_par_M, _python_par_Y, _python_par_tol, _python_par_maxiter, _python_par_largest, _python_par_verbosityLevel, _python_par_retLambdaHistory, _python_par_retResidualNormsHistory );

error_exit:;

    Py_XDECREF( _python_par_A );
    Py_XDECREF( _python_par_X );
    Py_XDECREF( _python_par_B );
    Py_XDECREF( _python_par_M );
    Py_XDECREF( _python_par_Y );
    Py_XDECREF( _python_par_tol );
    Py_XDECREF( _python_par_maxiter );
    Py_XDECREF( _python_par_largest );
    Py_XDECREF( _python_par_verbosityLevel );
    Py_XDECREF( _python_par_retLambdaHistory );
    Py_XDECREF( _python_par_retResidualNormsHistory );

    return NULL;
}

static PyObject *dparse_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 11 )
    {
        return impl_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_1___call___of_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cce96516c7d03d6fa12f042be867f226,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_1_ident_of_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_ident,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_617d712187d531f52f64f81de386b599,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_symeig,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8e6873f0a5303fc159904738ff721011,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_pause,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bc68840c90d91356808df948e2a7df43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_save,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b08cb0a4a7b34e3c98f208d26c008547,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_as2d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7b9f89b67b0524e6c9fe4702c3db809a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_digest_6da59f92cbc6ecc2b0ac130c35f402b1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_makeOperator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_997ddfdd268f5225ee8273c7df8717ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_digest_1f83378ea9dcf0a81bb226b9679fa37d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_applyConstraints,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_00559fe9176866f402dd328d706fcc2c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_digest_33af2a100fb867426f3e6fdfe4d86449
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_b_orthonormalize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_750794f07ac85a678ca4393a477627f0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_digest_06ad8683589d2b6f144b49408f1b7b98
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        dparse_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_plain_lobpcg,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9e85cef337e8948c06d556ad84ee22ee,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$sparse$linalg$eigen$lobpcg$lobpcg,
        const_str_digest_3065b0e1f607f0ee71aeda64fc832c85
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$sparse$linalg$eigen$lobpcg$lobpcg =
{
    PyModuleDef_HEAD_INIT,
    "scipy.sparse.linalg.eigen.lobpcg.lobpcg",   /* m_name */
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

MOD_INIT_DECL( scipy$sparse$linalg$eigen$lobpcg$lobpcg )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
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

    // puts( "in initscipy$sparse$linalg$eigen$lobpcg$lobpcg" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$sparse$linalg$eigen$lobpcg$lobpcg = Py_InitModule4(
        "scipy.sparse.linalg.eigen.lobpcg.lobpcg",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$sparse$linalg$eigen$lobpcg$lobpcg = PyModule_Create( &mdef_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
#endif

    moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg = (PyDictObject *)((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;

    assertObject( module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_21a0a09629a887bb5cd9f6dfd2612a40, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );

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
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_class_bases_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
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
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_b2f1f7dbe81b6e2fe872b5f0e7718f72;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4a2b91e2918e7b6eb32d7addb159bf0b;
    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_8fc071a71e2433fd796e62307c09fbbe, module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 15;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 16;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 17;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_scipy, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_sp, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_644880ce7dbf6c5f121ce247016ffe23, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_xrange_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_xrange );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_61b740be5b509d29051d45cb59c060e0, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_aslinearoperator_str_plain_LinearOperator_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_aslinearoperator );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_aslinearoperator, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$sparse$linalg$eigen$lobpcg$lobpcg)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_61b740be5b509d29051d45cb59c060e0, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_aslinearoperator_str_plain_LinearOperator_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LinearOperator );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_LinearOperator, tmp_assign_source_11 );
    tmp_assign_source_12 = LIST_COPY( const_list_str_plain_lobpcg_list );
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    tmp_defaults_1 = const_tuple_none_true_none_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_function_1_symeig_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_symeig, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_function_2_pause_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_pause, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_function_3_save_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_save, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_function_4_as2d_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        frame_module->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_as2d, tmp_assign_source_16 );
    // Tried code
    tmp_assign_source_17 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_LinearOperator );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LinearOperator );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 245711 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 95;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_17;

    tmp_assign_source_18 = impl_class_5_CallableLinearOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_18;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
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
    tmp_assign_source_19 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_19 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_19;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_CallableLinearOperator;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 95;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_20;

    tmp_assign_source_21 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_CallableLinearOperator, tmp_assign_source_21 );
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
    tmp_assign_source_22 = MAKE_FUNCTION_function_6_makeOperator_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        frame_module->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_makeOperator, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_function_7_applyConstraints_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg(  );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_module->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_applyConstraints, tmp_assign_source_23 );
    tmp_defaults_2 = const_tuple_none_false_tuple;
    tmp_assign_source_24 = MAKE_FUNCTION_function_8_b_orthonormalize_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_b_orthonormalize, tmp_assign_source_24 );
    tmp_defaults_3 = const_tuple_none_none_none_none_int_pos_20_true_int_0_false_false_tuple;
    tmp_assign_source_25 = MAKE_FUNCTION_function_9_lobpcg_of_module_scipy$sparse$linalg$eigen$lobpcg$lobpcg( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$sparse$linalg$eigen$lobpcg$lobpcg, (Nuitka_StringObject *)const_str_plain_lobpcg, tmp_assign_source_25 );

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

    return MOD_RETURN_VALUE( module_scipy$sparse$linalg$eigen$lobpcg$lobpcg );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
