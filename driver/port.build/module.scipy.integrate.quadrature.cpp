// Generated code for Python source for module 'scipy.integrate.quadrature'
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

// The _module_scipy$integrate$quadrature is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$integrate$quadrature;
PyDictObject *moduledict_scipy$integrate$quadrature;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_str_dot;
extern PyObject *const_float_0_0;
extern PyObject *const_float_0_5;
extern PyObject *const_float_1_0;
extern PyObject *const_float_2_0;
extern PyObject *const_float_3_0;
extern PyObject *const_float_4_0;
extern PyObject *const_float_6_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_neg_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_empty;
extern PyObject *const_str_space;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_50;
extern PyObject *const_str_chr_37;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_R;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_h;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_BN;
extern PyObject *const_str_plain_ai;
extern PyObject *const_str_plain_da;
extern PyObject *const_str_plain_db;
extern PyObject *const_str_plain_dx;
extern PyObject *const_str_plain_h0;
static PyObject *const_str_plain_h1;
extern PyObject *const_str_plain_na;
extern PyObject *const_str_plain_nb;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_p1;
extern PyObject *const_str_plain_rn;
static PyObject *const_str_plain_ti;
static PyObject *const_str_plain_vi;
extern PyObject *const_str_plain_y0;
static PyObject *const_str_plain_yi;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_avg;
extern PyObject *const_str_plain_dot;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_exp;
extern PyObject *const_str_plain_fac;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_log;
static PyObject *const_str_plain_lox;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_res;
static PyObject *const_str_plain_sl0;
static PyObject *const_str_plain_sl1;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_vec;
static PyObject *const_str_plain_Cinv;
static PyObject *const_str_plain_ainf;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_plain_binf;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_even;
extern PyObject *const_str_plain_from;
extern PyObject *const_str_plain_func;
static PyObject *const_str_plain_hsum;
extern PyObject *const_str_plain_last;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_plain_nvec;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_real;
static PyObject *const_str_plain_romb;
extern PyObject *const_str_plain_rtol;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_stop;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_after;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_equal;
extern PyObject *const_str_plain_first;
extern PyObject *const_str_plain_float;
static PyObject *const_str_plain_hprod;
extern PyObject *const_str_plain_isinf;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_simps;
extern PyObject *const_str_plain_slice;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_trapz;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain_vfunc;
extern PyObject *const_str_plain_width;
static PyObject *const_str_plain_Nsamps;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_plain_divmax;
extern PyObject *const_str_plain_linalg;
static PyObject *const_str_plain_newval;
static PyObject *const_str_plain_ordsum;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain_points;
static PyObject *const_str_plain_precis;
extern PyObject *const_str_plain_reduce;
static PyObject *const_str_plain_resmat;
extern PyObject *const_str_plain_result;
static PyObject *const_str_plain_shapex;
extern PyObject *const_str_plain_slice0;
extern PyObject *const_str_plain_slice1;
extern PyObject *const_str_plain_slice2;
extern PyObject *const_str_plain_xrange;
static PyObject *const_str_plain_Ninterv;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain_formstr;
extern PyObject *const_str_plain_gammaln;
static PyObject *const_str_plain_h0divh1;
static PyObject *const_str_plain_initial;
static PyObject *const_str_plain_last_dx;
extern PyObject *const_str_plain_maxiter;
static PyObject *const_str_plain_miniter;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_str_plain_p_roots;
extern PyObject *const_str_plain_reshape;
static PyObject *const_str_plain_romberg;
static PyObject *const_str_plain_slice_R;
static PyObject *const_str_plain_slicem1;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_cumtrapz;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_first_dx;
extern PyObject *const_str_plain_function;
extern PyObject *const_str_plain_interval;
static PyObject *const_str_plain_intrange;
extern PyObject *const_str_plain_isscalar;
static PyObject *const_str_plain_numtosum;
static PyObject *const_str_plain_numtraps;
static PyObject *const_str_plain_tupleset;
static PyObject *const_str_plain_vec_func;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_list_int_pos_1_list;
static PyObject *const_str_plain__difftrap;
static PyObject *const_str_plain_saveshape;
static PyObject *const_float_1_48e_minus_08;
extern PyObject *const_float_1_49e_minus_08;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_accumulate;
static PyObject *const_str_plain_fixed_quad;
static PyObject *const_str_plain_lastresult;
extern PyObject *const_str_plain_quadrature;
static PyObject *const_str_plain_vectorize1;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_str_plain_returnshape;
static PyObject *const_str_plain__basic_simps;
static PyObject *const_str_plain__printresmat;
static PyObject *const_str_plain_newton_cotes;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__romberg_diff;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_plain__builtincoeffs;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_AccuracyWarning;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_int_0_int_pos_1_tuple;
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_tuple_str_plain_gammaln_tuple;
static PyObject *const_tuple_str_plain_p_roots_tuple;
static PyObject *const_tuple_tuple_empty_false_tuple;
extern PyObject *const_tuple_int_pos_1_int_pos_1_tuple;
static PyObject *const_tuple_tuple_empty_int_pos_5_tuple;
static PyObject *const_dict_781521607e0786098475f1bcd1891db7;
extern PyObject *const_dict_fb4ddbadafbecbaef28aef989e4b600e;
static PyObject *const_tuple_float_1_0_int_neg_1_false_tuple;
static PyObject *const_list_str_plain_avg_str_plain_last_list;
static PyObject *const_list_str_plain_avg_str_plain_first_list;
static PyObject *const_tuple_str_plain_rn_str_plain_equal_tuple;
static PyObject *const_tuple_none_float_1_0_int_neg_1_none_tuple;
static PyObject *const_list_abd4608d2db02e99c3dfbf05942624db_list;
static PyObject *const_str_digest_02a7a784aa778e462221eb9ea10dab96;
static PyObject *const_str_digest_04871342ca8acec106007cd5986e42e0;
static PyObject *const_str_digest_157321bb10147e72d497dc62483361c5;
static PyObject *const_str_digest_189aec901c4f937e4ad7040d7b76500d;
static PyObject *const_str_digest_1aaf817f4065bde386fc5aa564dffd6d;
static PyObject *const_str_digest_1b8ac8aba45ab96c57cd57c55542de8c;
static PyObject *const_str_digest_219438e84926828eeaf05c8c92b2041c;
static PyObject *const_str_digest_26b20b057633956ef531267ae8606b73;
static PyObject *const_str_digest_39647d231e54ac9bc3e595d25a84277e;
static PyObject *const_str_digest_3c0bea9b20ade77bbb897408b9dff399;
extern PyObject *const_str_digest_3d05d759268294774569330d98381450;
static PyObject *const_str_digest_408adddfb35f444ec4e8ff611f85705f;
static PyObject *const_str_digest_477e9194db0e0a0de3073f445995c766;
static PyObject *const_str_digest_53b7f4f97fb64412a0754646ba873188;
static PyObject *const_str_digest_5e48f17c40bb7b50e5ad09b520fcf6d4;
extern PyObject *const_str_digest_644880ce7dbf6c5f121ce247016ffe23;
static PyObject *const_str_digest_6569a97cd8a59a36b230f637f6e8ea15;
static PyObject *const_str_digest_67ed3d29d7f8c5d469ab9423a57a959e;
static PyObject *const_str_digest_7051cbaab0e484ea1edda9504ac94f98;
static PyObject *const_str_digest_714971b0dc59e503512a4785731b29b5;
static PyObject *const_str_digest_759eac21812f98d33d286be47f7ef53c;
static PyObject *const_str_digest_776b28d0f59737a44b1cd979a38b06ed;
static PyObject *const_str_digest_82da6fb6bd26fb6f6029d13926704284;
static PyObject *const_str_digest_8336423ea16711437f3d3642bfad0788;
static PyObject *const_str_digest_885818b15b8c84c14211f9327db66669;
static PyObject *const_str_digest_9da61a2ab62756a9ef6222583301fd54;
extern PyObject *const_str_digest_a175ed48db162ffdb55bc9a35e478b7b;
static PyObject *const_str_digest_b03742aa16c972e9af8a28ec89c25da6;
static PyObject *const_str_digest_b2f34ddfe3b9596001f2cfecd61a91bc;
static PyObject *const_str_digest_c19c730461f9601651392590cd087cd6;
static PyObject *const_str_digest_c83db1debdd5198d701ea1d0abe31726;
static PyObject *const_str_digest_e03d880bde19376f985800583ee83aaa;
static PyObject *const_str_digest_e5c2d94a67bcd84cdb599b51902a9863;
static PyObject *const_str_digest_e60127afdeb4959a97493e9d18a55162;
static PyObject *const_str_digest_ea80b3f062486e5f9f8eaa5b2d4c12e2;
static PyObject *const_str_digest_f1d02f5e81ce421e7cd32ce895d6e8d2;
static PyObject *const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple;
static PyObject *const_tuple_0b52f2c4060b6442340206adc79babab_tuple;
static PyObject *const_tuple_17521504b1f96856e800f9ee4a0dd55d_tuple;
static PyObject *const_tuple_19802c22eccac6708c3cd4378f90fae4_tuple;
static PyObject *const_tuple_1aa12456f8b069695605fc72a73758c6_tuple;
static PyObject *const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple;
static PyObject *const_tuple_3d0bd45641c2f07b3282f34039e92503_tuple;
static PyObject *const_tuple_4ccbfc041fdff1bdf60ccc1644108012_tuple;
static PyObject *const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple;
static PyObject *const_tuple_77d0c6d679a30419d551c6768af8e2cc_tuple;
static PyObject *const_tuple_a9068e635b34ba8058197f757711e8f7_tuple;
static PyObject *const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple;
static PyObject *const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_c61e3331c604dfee164016e29c4809c2_tuple;
static PyObject *const_tuple_c65bbef5e630c39dd1eda4d7f30300ca_tuple;
static PyObject *const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple;
static PyObject *const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple;
static PyObject *const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple;
static PyObject *const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple;
static PyObject *const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple;
static PyObject *const_tuple_f8b1ced9f7c27609f5faaa90e84d99da_tuple;
static PyObject *const_tuple_str_plain_b_str_plain_c_str_plain_k_tuple;
static PyObject *const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple;
static PyObject *const_tuple_str_plain_t_str_plain_i_str_plain_value_tuple;
static PyObject *const_list_str_plain_avg_str_plain_last_str_plain_first_list;
static PyObject *const_tuple_str_plain_func_str_plain_args_str_plain_vec_func_tuple;
static PyObject *const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple;
static PyObject *const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple;
static PyObject *const_tuple_str_plain_function_str_plain_interval_str_plain_resmat_tuple;
static PyObject *const_tuple_str_plain_y_str_plain_dx_str_plain_axis_str_plain_show_tuple;
static PyObject *const_tuple_str_plain_function_str_plain_interval_str_plain_numtraps_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_BN = UNSTREAM_STRING( &constant_bin[ 242878 ], 2, 1 );
    const_str_plain_h1 = UNSTREAM_STRING( &constant_bin[ 113654 ], 2, 1 );
    const_str_plain_ti = UNSTREAM_STRING( &constant_bin[ 1538 ], 2, 1 );
    const_str_plain_vi = UNSTREAM_STRING( &constant_bin[ 14210 ], 2, 1 );
    const_str_plain_yi = UNSTREAM_STRING( &constant_bin[ 71879 ], 2, 1 );
    const_str_plain_lox = UNSTREAM_STRING( &constant_bin[ 2133327 ], 3, 1 );
    const_str_plain_sl0 = UNSTREAM_STRING( &constant_bin[ 2133330 ], 3, 1 );
    const_str_plain_sl1 = UNSTREAM_STRING( &constant_bin[ 2133333 ], 3, 1 );
    const_str_plain_Cinv = UNSTREAM_STRING( &constant_bin[ 242731 ], 4, 1 );
    const_str_plain_ainf = UNSTREAM_STRING( &constant_bin[ 241185 ], 4, 1 );
    const_str_plain_binf = UNSTREAM_STRING( &constant_bin[ 85957 ], 4, 1 );
    const_str_plain_hsum = UNSTREAM_STRING( &constant_bin[ 2133336 ], 4, 1 );
    const_str_plain_nvec = UNSTREAM_STRING( &constant_bin[ 242828 ], 4, 1 );
    const_str_plain_romb = UNSTREAM_STRING( &constant_bin[ 10296 ], 4, 1 );
    const_str_plain_hprod = UNSTREAM_STRING( &constant_bin[ 2133340 ], 5, 1 );
    const_str_plain_vfunc = UNSTREAM_STRING( &constant_bin[ 241505 ], 5, 1 );
    const_str_plain_Nsamps = UNSTREAM_STRING( &constant_bin[ 2133345 ], 6, 1 );
    const_str_plain_divmax = UNSTREAM_STRING( &constant_bin[ 242399 ], 6, 1 );
    const_str_plain_newval = UNSTREAM_STRING( &constant_bin[ 434564 ], 6, 1 );
    const_str_plain_ordsum = UNSTREAM_STRING( &constant_bin[ 242451 ], 6, 1 );
    const_str_plain_precis = UNSTREAM_STRING( &constant_bin[ 56436 ], 6, 1 );
    const_str_plain_resmat = UNSTREAM_STRING( &constant_bin[ 242309 ], 6, 1 );
    const_str_plain_shapex = UNSTREAM_STRING( &constant_bin[ 2133351 ], 6, 1 );
    const_str_plain_Ninterv = UNSTREAM_STRING( &constant_bin[ 241947 ], 7, 1 );
    const_str_plain_formstr = UNSTREAM_STRING( &constant_bin[ 242202 ], 7, 1 );
    const_str_plain_h0divh1 = UNSTREAM_STRING( &constant_bin[ 2133357 ], 7, 1 );
    const_str_plain_initial = UNSTREAM_STRING( &constant_bin[ 5220 ], 7, 1 );
    const_str_plain_last_dx = UNSTREAM_STRING( &constant_bin[ 2133364 ], 7, 1 );
    const_str_plain_miniter = UNSTREAM_STRING( &constant_bin[ 241413 ], 7, 1 );
    const_str_plain_romberg = UNSTREAM_STRING( &constant_bin[ 242555 ], 7, 1 );
    const_str_plain_slice_R = UNSTREAM_STRING( &constant_bin[ 242000 ], 7, 1 );
    const_str_plain_slicem1 = UNSTREAM_STRING( &constant_bin[ 2133371 ], 7, 1 );
    const_str_plain_first_dx = UNSTREAM_STRING( &constant_bin[ 241781 ], 8, 1 );
    const_str_plain_intrange = UNSTREAM_STRING( &constant_bin[ 242503 ], 8, 1 );
    const_str_plain_numtosum = UNSTREAM_STRING( &constant_bin[ 2133378 ], 8, 1 );
    const_str_plain_numtraps = UNSTREAM_STRING( &constant_bin[ 242255 ], 8, 1 );
    const_str_plain_tupleset = UNSTREAM_STRING( &constant_bin[ 241597 ], 8, 1 );
    const_str_plain_vec_func = UNSTREAM_STRING( &constant_bin[ 241285 ], 8, 1 );
    const_str_plain__difftrap = UNSTREAM_STRING( &constant_bin[ 242358 ], 9, 1 );
    const_str_plain_saveshape = UNSTREAM_STRING( &constant_bin[ 241892 ], 9, 1 );
    const_float_1_48e_minus_08 = UNSTREAM_FLOAT( &constant_bin[ 2133386 ] );
    const_str_plain_fixed_quad = UNSTREAM_STRING( &constant_bin[ 241463 ], 10, 1 );
    const_str_plain_lastresult = UNSTREAM_STRING( &constant_bin[ 2133394 ], 10, 1 );
    const_str_plain_vectorize1 = UNSTREAM_STRING( &constant_bin[ 241371 ], 10, 1 );
    const_str_plain_returnshape = UNSTREAM_STRING( &constant_bin[ 241835 ], 11, 1 );
    const_str_plain__basic_simps = UNSTREAM_STRING( &constant_bin[ 241737 ], 12, 1 );
    const_str_plain__printresmat = UNSTREAM_STRING( &constant_bin[ 242596 ], 12, 1 );
    const_str_plain_newton_cotes = UNSTREAM_STRING( &constant_bin[ 2133404 ], 12, 1 );
    const_str_plain__romberg_diff = UNSTREAM_STRING( &constant_bin[ 242554 ], 13, 1 );
    const_str_plain__builtincoeffs = UNSTREAM_STRING( &constant_bin[ 242637 ], 14, 1 );
    const_str_plain_AccuracyWarning = UNSTREAM_STRING( &constant_bin[ 241553 ], 15, 1 );
    const_tuple_str_plain_p_roots_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_roots_tuple, 0, const_str_plain_p_roots ); Py_INCREF( const_str_plain_p_roots );
    const_tuple_tuple_empty_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_false_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_tuple_empty_int_pos_5_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_int_pos_5_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_int_pos_5_tuple, 1, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    const_dict_781521607e0786098475f1bcd1891db7 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2133416 ], 1211 );
    const_tuple_float_1_0_int_neg_1_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_int_neg_1_false_tuple, 0, const_float_1_0 ); Py_INCREF( const_float_1_0 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_int_neg_1_false_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_float_1_0_int_neg_1_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_list_str_plain_avg_str_plain_last_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_list, 0, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_list, 1, const_str_plain_last ); Py_INCREF( const_str_plain_last );
    const_list_str_plain_avg_str_plain_first_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_first_list, 0, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_first_list, 1, const_str_plain_first ); Py_INCREF( const_str_plain_first );
    const_tuple_str_plain_rn_str_plain_equal_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rn_str_plain_equal_tuple, 0, const_str_plain_rn ); Py_INCREF( const_str_plain_rn );
    PyTuple_SET_ITEM( const_tuple_str_plain_rn_str_plain_equal_tuple, 1, const_str_plain_equal ); Py_INCREF( const_str_plain_equal );
    const_tuple_none_float_1_0_int_neg_1_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_float_1_0_int_neg_1_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_float_1_0_int_neg_1_none_tuple, 1, const_float_1_0 ); Py_INCREF( const_float_1_0 );
    PyTuple_SET_ITEM( const_tuple_none_float_1_0_int_neg_1_none_tuple, 2, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_float_1_0_int_neg_1_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_list_abd4608d2db02e99c3dfbf05942624db_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 0, const_str_plain_fixed_quad ); Py_INCREF( const_str_plain_fixed_quad );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 1, const_str_plain_quadrature ); Py_INCREF( const_str_plain_quadrature );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 2, const_str_plain_romberg ); Py_INCREF( const_str_plain_romberg );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 3, const_str_plain_trapz ); Py_INCREF( const_str_plain_trapz );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 4, const_str_plain_simps ); Py_INCREF( const_str_plain_simps );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 5, const_str_plain_romb ); Py_INCREF( const_str_plain_romb );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 6, const_str_plain_cumtrapz ); Py_INCREF( const_str_plain_cumtrapz );
    PyList_SET_ITEM( const_list_abd4608d2db02e99c3dfbf05942624db_list, 7, const_str_plain_newton_cotes ); Py_INCREF( const_str_plain_newton_cotes );
    const_str_digest_02a7a784aa778e462221eb9ea10dab96 = UNSTREAM_STRING( &constant_bin[ 2134627 ], 55, 0 );
    const_str_digest_04871342ca8acec106007cd5986e42e0 = UNSTREAM_STRING( &constant_bin[ 2134682 ], 62, 0 );
    const_str_digest_157321bb10147e72d497dc62483361c5 = UNSTREAM_STRING( &constant_bin[ 2134744 ], 45, 0 );
    const_str_digest_189aec901c4f937e4ad7040d7b76500d = UNSTREAM_STRING( &constant_bin[ 2134789 ], 53, 0 );
    const_str_digest_1aaf817f4065bde386fc5aa564dffd6d = UNSTREAM_STRING( &constant_bin[ 2134842 ], 26, 0 );
    const_str_digest_1b8ac8aba45ab96c57cd57c55542de8c = UNSTREAM_STRING( &constant_bin[ 2121285 ], 21, 0 );
    const_str_digest_219438e84926828eeaf05c8c92b2041c = UNSTREAM_STRING( &constant_bin[ 2134868 ], 44, 0 );
    const_str_digest_26b20b057633956ef531267ae8606b73 = UNSTREAM_STRING( &constant_bin[ 2134912 ], 49, 0 );
    const_str_digest_39647d231e54ac9bc3e595d25a84277e = UNSTREAM_STRING( &constant_bin[ 2134961 ], 1056, 0 );
    const_str_digest_3c0bea9b20ade77bbb897408b9dff399 = UNSTREAM_STRING( &constant_bin[ 2136017 ], 1289, 0 );
    const_str_digest_408adddfb35f444ec4e8ff611f85705f = UNSTREAM_STRING( &constant_bin[ 2137306 ], 7, 0 );
    const_str_digest_477e9194db0e0a0de3073f445995c766 = UNSTREAM_STRING( &constant_bin[ 472417 ], 69, 0 );
    const_str_digest_53b7f4f97fb64412a0754646ba873188 = UNSTREAM_STRING( &constant_bin[ 2137313 ], 1053, 0 );
    const_str_digest_5e48f17c40bb7b50e5ad09b520fcf6d4 = UNSTREAM_STRING( &constant_bin[ 2138366 ], 1500, 0 );
    const_str_digest_6569a97cd8a59a36b230f637f6e8ea15 = UNSTREAM_STRING( &constant_bin[ 2139866 ], 603, 0 );
    const_str_digest_67ed3d29d7f8c5d469ab9423a57a959e = UNSTREAM_STRING( &constant_bin[ 472413 ], 68, 0 );
    const_str_digest_7051cbaab0e484ea1edda9504ac94f98 = UNSTREAM_STRING( &constant_bin[ 2140469 ], 61, 0 );
    const_str_digest_714971b0dc59e503512a4785731b29b5 = UNSTREAM_STRING( &constant_bin[ 2137310 ], 3, 0 );
    const_str_digest_759eac21812f98d33d286be47f7ef53c = UNSTREAM_STRING( &constant_bin[ 2140530 ], 2671, 0 );
    const_str_digest_776b28d0f59737a44b1cd979a38b06ed = UNSTREAM_STRING( &constant_bin[ 2143201 ], 1962, 0 );
    const_str_digest_82da6fb6bd26fb6f6029d13926704284 = UNSTREAM_STRING( &constant_bin[ 2145163 ], 26, 0 );
    const_str_digest_8336423ea16711437f3d3642bfad0788 = UNSTREAM_STRING( &constant_bin[ 2145189 ], 50, 0 );
    const_str_digest_885818b15b8c84c14211f9327db66669 = UNSTREAM_STRING( &constant_bin[ 2145239 ], 600, 0 );
    const_str_digest_9da61a2ab62756a9ef6222583301fd54 = UNSTREAM_STRING( &constant_bin[ 2145839 ], 35, 0 );
    const_str_digest_b03742aa16c972e9af8a28ec89c25da6 = UNSTREAM_STRING( &constant_bin[ 2145874 ], 56, 0 );
    const_str_digest_b2f34ddfe3b9596001f2cfecd61a91bc = UNSTREAM_STRING( &constant_bin[ 2145930 ], 39, 0 );
    const_str_digest_c19c730461f9601651392590cd087cd6 = UNSTREAM_STRING( &constant_bin[ 2145969 ], 1762, 0 );
    const_str_digest_c83db1debdd5198d701ea1d0abe31726 = UNSTREAM_STRING( &constant_bin[ 2147731 ], 69, 0 );
    const_str_digest_e03d880bde19376f985800583ee83aaa = UNSTREAM_STRING( &constant_bin[ 2147800 ], 51, 0 );
    const_str_digest_e5c2d94a67bcd84cdb599b51902a9863 = UNSTREAM_STRING( &constant_bin[ 2140535 ], 22, 0 );
    const_str_digest_e60127afdeb4959a97493e9d18a55162 = UNSTREAM_STRING( &constant_bin[ 2143063 ], 19, 0 );
    const_str_digest_ea80b3f062486e5f9f8eaa5b2d4c12e2 = UNSTREAM_STRING( &constant_bin[ 2147851 ], 69, 0 );
    const_str_digest_f1d02f5e81ce421e7cd32ce895d6e8d2 = UNSTREAM_STRING( &constant_bin[ 2147920 ], 131, 0 );
    const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 5, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 6, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 7, const_str_plain_vec_func ); Py_INCREF( const_str_plain_vec_func );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 8, const_str_plain_miniter ); Py_INCREF( const_str_plain_miniter );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 9, const_str_plain_vfunc ); Py_INCREF( const_str_plain_vfunc );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 10, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 11, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 12, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 13, const_str_plain_newval ); Py_INCREF( const_str_plain_newval );
    const_tuple_0b52f2c4060b6442340206adc79babab_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 2, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 4, const_str_plain_initial ); Py_INCREF( const_str_plain_initial );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 5, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 6, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 7, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 8, const_str_plain_slice1 ); Py_INCREF( const_str_plain_slice1 );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 9, const_str_plain_slice2 ); Py_INCREF( const_str_plain_slice2 );
    PyTuple_SET_ITEM( const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 10, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_17521504b1f96856e800f9ee4a0dd55d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_17521504b1f96856e800f9ee4a0dd55d_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_17521504b1f96856e800f9ee4a0dd55d_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_17521504b1f96856e800f9ee4a0dd55d_tuple, 2, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_17521504b1f96856e800f9ee4a0dd55d_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_17521504b1f96856e800f9ee4a0dd55d_tuple, 4, const_str_plain_initial ); Py_INCREF( const_str_plain_initial );
    const_tuple_19802c22eccac6708c3cd4378f90fae4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_19802c22eccac6708c3cd4378f90fae4_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_19802c22eccac6708c3cd4378f90fae4_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_19802c22eccac6708c3cd4378f90fae4_tuple, 2, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_19802c22eccac6708c3cd4378f90fae4_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_19802c22eccac6708c3cd4378f90fae4_tuple, 4, const_str_plain_even ); Py_INCREF( const_str_plain_even );
    const_tuple_1aa12456f8b069695605fc72a73758c6_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2148051 ], 154 );
    const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 0, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 1, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 2, const_str_plain_numtraps ); Py_INCREF( const_str_plain_numtraps );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 3, const_str_plain_numtosum ); Py_INCREF( const_str_plain_numtosum );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 4, const_str_plain_h ); Py_INCREF( const_str_plain_h );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 5, const_str_plain_lox ); Py_INCREF( const_str_plain_lox );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 6, const_str_plain_points ); Py_INCREF( const_str_plain_points );
    PyTuple_SET_ITEM( const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 7, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_tuple_3d0bd45641c2f07b3282f34039e92503_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_3d0bd45641c2f07b3282f34039e92503_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_3d0bd45641c2f07b3282f34039e92503_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_3d0bd45641c2f07b3282f34039e92503_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_3d0bd45641c2f07b3282f34039e92503_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_3d0bd45641c2f07b3282f34039e92503_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_tuple_4ccbfc041fdff1bdf60ccc1644108012_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2148205 ], 206 );
    const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 2, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 4, const_str_plain_even ); Py_INCREF( const_str_plain_even );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 5, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 6, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 7, const_str_plain_last_dx ); Py_INCREF( const_str_plain_last_dx );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 8, const_str_plain_first_dx ); Py_INCREF( const_str_plain_first_dx );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 9, const_str_plain_returnshape ); Py_INCREF( const_str_plain_returnshape );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 10, const_str_plain_shapex ); Py_INCREF( const_str_plain_shapex );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 11, const_str_plain_saveshape ); Py_INCREF( const_str_plain_saveshape );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 12, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 13, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 14, const_str_plain_slice1 ); Py_INCREF( const_str_plain_slice1 );
    PyTuple_SET_ITEM( const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 15, const_str_plain_slice2 ); Py_INCREF( const_str_plain_slice2 );
    const_tuple_77d0c6d679a30419d551c6768af8e2cc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_77d0c6d679a30419d551c6768af8e2cc_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_77d0c6d679a30419d551c6768af8e2cc_tuple, 1, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    PyTuple_SET_ITEM( const_tuple_77d0c6d679a30419d551c6768af8e2cc_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_77d0c6d679a30419d551c6768af8e2cc_tuple, 3, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_77d0c6d679a30419d551c6768af8e2cc_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_a9068e635b34ba8058197f757711e8f7_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 6, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 7, const_str_plain_ainf ); Py_INCREF( const_str_plain_ainf );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 8, const_str_plain_binf ); Py_INCREF( const_str_plain_binf );
    PyTuple_SET_ITEM( const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 9, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 0, const_str_plain_sum ); Py_INCREF( const_str_plain_sum );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 1, const_str_plain_ones ); Py_INCREF( const_str_plain_ones );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 2, const_str_plain_add ); Py_INCREF( const_str_plain_add );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 3, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 4, const_str_plain_isinf ); Py_INCREF( const_str_plain_isinf );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 5, const_str_plain_isscalar ); Py_INCREF( const_str_plain_isscalar );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 6, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 7, const_str_plain_real ); Py_INCREF( const_str_plain_real );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 8, const_str_plain_trapz ); Py_INCREF( const_str_plain_trapz );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 9, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, 10, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 1, const_float_1_48e_minus_08 ); Py_INCREF( const_float_1_48e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 2, const_float_1_48e_minus_08 ); Py_INCREF( const_float_1_48e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 4, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple, 5, Py_False ); Py_INCREF( Py_False );
    const_tuple_c61e3331c604dfee164016e29c4809c2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 1, const_float_1_49e_minus_08 ); Py_INCREF( const_float_1_49e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 2, const_float_1_49e_minus_08 ); Py_INCREF( const_float_1_49e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 3, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 4, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_c61e3331c604dfee164016e29c4809c2_tuple, 5, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_c65bbef5e630c39dd1eda4d7f30300ca_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2148411 ], 187 );
    const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple, 1, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple, 2, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple, 4, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple, 5, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 2, const_str_plain_vec_func ); Py_INCREF( const_str_plain_vec_func );
    PyTuple_SET_ITEM( const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 3, const_str_plain_vfunc ); Py_INCREF( const_str_plain_vfunc );
    const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 5, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 6, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 7, const_str_plain_vec_func ); Py_INCREF( const_str_plain_vec_func );
    PyTuple_SET_ITEM( const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 8, const_str_plain_miniter ); Py_INCREF( const_str_plain_miniter );
    const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 0, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 1, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 2, const_str_plain_resmat ); Py_INCREF( const_str_plain_resmat );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 4, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 0, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 5, const_str_plain_rtol ); Py_INCREF( const_str_plain_rtol );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 6, const_str_plain_show ); Py_INCREF( const_str_plain_show );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 7, const_str_plain_divmax ); Py_INCREF( const_str_plain_divmax );
    PyTuple_SET_ITEM( const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 8, const_str_plain_vec_func ); Py_INCREF( const_str_plain_vec_func );
    const_tuple_f8b1ced9f7c27609f5faaa90e84d99da_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2148598 ], 199 );
    const_tuple_str_plain_b_str_plain_c_str_plain_k_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_tuple, 0, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple, 2, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple, 3, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    const_tuple_str_plain_t_str_plain_i_str_plain_value_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_list_str_plain_avg_str_plain_last_str_plain_first_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_str_plain_first_list, 0, const_str_plain_avg ); Py_INCREF( const_str_plain_avg );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_str_plain_first_list, 1, const_str_plain_last ); Py_INCREF( const_str_plain_last );
    PyList_SET_ITEM( const_list_str_plain_avg_str_plain_last_str_plain_first_list, 2, const_str_plain_first ); Py_INCREF( const_str_plain_first );
    const_tuple_str_plain_func_str_plain_args_str_plain_vec_func_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_args_str_plain_vec_func_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_args_str_plain_vec_func_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_args_str_plain_vec_func_tuple, 2, const_str_plain_vec_func ); Py_INCREF( const_str_plain_vec_func );
    const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 0, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 3, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 0, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 3, const_str_plain_l ); Py_INCREF( const_str_plain_l );
    const_tuple_str_plain_function_str_plain_interval_str_plain_resmat_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_function_str_plain_interval_str_plain_resmat_tuple, 0, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_str_plain_function_str_plain_interval_str_plain_resmat_tuple, 1, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    PyTuple_SET_ITEM( const_tuple_str_plain_function_str_plain_interval_str_plain_resmat_tuple, 2, const_str_plain_resmat ); Py_INCREF( const_str_plain_resmat );
    const_tuple_str_plain_y_str_plain_dx_str_plain_axis_str_plain_show_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_y_str_plain_dx_str_plain_axis_str_plain_show_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_str_plain_y_str_plain_dx_str_plain_axis_str_plain_show_tuple, 1, const_str_plain_dx ); Py_INCREF( const_str_plain_dx );
    PyTuple_SET_ITEM( const_tuple_str_plain_y_str_plain_dx_str_plain_axis_str_plain_show_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_y_str_plain_dx_str_plain_axis_str_plain_show_tuple, 3, const_str_plain_show ); Py_INCREF( const_str_plain_show );
    const_tuple_str_plain_function_str_plain_interval_str_plain_numtraps_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_function_str_plain_interval_str_plain_numtraps_tuple, 0, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_str_plain_function_str_plain_interval_str_plain_numtraps_tuple, 1, const_str_plain_interval ); Py_INCREF( const_str_plain_interval );
    PyTuple_SET_ITEM( const_tuple_str_plain_function_str_plain_interval_str_plain_numtraps_tuple, 2, const_str_plain_numtraps ); Py_INCREF( const_str_plain_numtraps );
}

// The module code objects.
static PyCodeObject *codeobj_a240513ae813a989ecba62633b2a3a67;
static PyCodeObject *codeobj_27716352da40eff1f774eb452ae28ed4;
static PyCodeObject *codeobj_3b367cd706ea951513fbbe7b357c267b;
static PyCodeObject *codeobj_a233f2969be08fcdde72acbd3408203c;
static PyCodeObject *codeobj_8b079babdd27875ee500dbb347e77d49;
static PyCodeObject *codeobj_fb395907fb3b7d667750cd596889a532;
static PyCodeObject *codeobj_5b3a1cb4e0c484b01068c682afd15708;
static PyCodeObject *codeobj_a0e09e0344b9aaf45e93d8f38ea7e56d;
static PyCodeObject *codeobj_3192991fb346a46ca76af60d7413c3f3;
static PyCodeObject *codeobj_a61b9ba9711450c8cc9b2eb9bf01c8e2;
static PyCodeObject *codeobj_76305dae3679f8ee0f0bf9514a2ef8a5;
static PyCodeObject *codeobj_1e2cfe945281e3ad6dd596f6c35cb5b1;
static PyCodeObject *codeobj_78ec103f9a6746e39486ff6ed7a17a8b;
static PyCodeObject *codeobj_b1b37fe68b01ca29dee7f60fcd4af25f;
static PyCodeObject *codeobj_79e5a63264a672143e3c1829dc5ce6f4;
static PyCodeObject *codeobj_48de1ffa77538aecef3cc42c9e3b6f86;
static PyCodeObject *codeobj_a31bd3e2eeae1dd61b0ecad914b0bc31;
static PyCodeObject *codeobj_c052591914252cbe5cc68d255c365fc8;
static PyCodeObject *codeobj_207890bf451aae5f1c2704a5442d5eb6;
static PyCodeObject *codeobj_3eac3efe02e81b3523ee2a25f9bbef07;
static PyCodeObject *codeobj_269992869f9a3d95af55dfb0803a7db5;
static PyCodeObject *codeobj_eb84a3e11c6886b3c05a8197a3689be2;
static PyCodeObject *codeobj_57b2ba88218ea82d79d59ae41021291f;
static PyCodeObject *codeobj_a7111f778a7e3a864ddafbfa97d8ee96;
static PyCodeObject *codeobj_d8aa4f6121e155a190e5ad288008d691;
static PyCodeObject *codeobj_f1dcc463136510aba3a35bbae24dfaf2;
static PyCodeObject *codeobj_eb8d9082dd316aa14dad51a92817a2c6;
static PyCodeObject *codeobj_272e71ed9ac2940610aa48796e488da6;
static PyCodeObject *codeobj_c6ff7986abcfdd0265553f1a682f2021;
static PyCodeObject *codeobj_46dced9e542caf15e8cf22e87e773caa;

static void _initModuleCodeObjects(void)
{
    codeobj_a240513ae813a989ecba62633b2a3a67 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain__basic_simps, 285, const_tuple_cd085060b36bd0ee07a3894b3b3188c9_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_27716352da40eff1f774eb452ae28ed4 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain__basic_simps, 285, const_tuple_c65bbef5e630c39dd1eda4d7f30300ca_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3b367cd706ea951513fbbe7b357c267b = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain__difftrap, 525, const_tuple_str_plain_function_str_plain_interval_str_plain_numtraps_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a233f2969be08fcdde72acbd3408203c = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain__difftrap, 525, const_tuple_38052a07b6668a3814b04c3474ec3e5c_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8b079babdd27875ee500dbb347e77d49 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain__printresmat, 560, const_tuple_str_plain_function_str_plain_interval_str_plain_resmat_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fb395907fb3b7d667750cd596889a532 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain__printresmat, 560, const_tuple_e93eac2b7e67ab5f16774f0d8253c310_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5b3a1cb4e0c484b01068c682afd15708 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain__romberg_diff, 551, const_tuple_str_plain_b_str_plain_c_str_plain_k_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a0e09e0344b9aaf45e93d8f38ea7e56d = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain__romberg_diff, 551, const_tuple_str_plain_b_str_plain_c_str_plain_k_str_plain_tmp_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3192991fb346a46ca76af60d7413c3f3 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_cumtrapz, 193, const_tuple_17521504b1f96856e800f9ee4a0dd55d_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a61b9ba9711450c8cc9b2eb9bf01c8e2 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_cumtrapz, 193, const_tuple_0b52f2c4060b6442340206adc79babab_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_76305dae3679f8ee0f0bf9514a2ef8a5 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_fixed_quad, 21, const_tuple_3d0bd45641c2f07b3282f34039e92503_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1e2cfe945281e3ad6dd596f6c35cb5b1 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_fixed_quad, 21, const_tuple_a9068e635b34ba8058197f757711e8f7_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78ec103f9a6746e39486ff6ed7a17a8b = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_newton_cotes, 755, const_tuple_str_plain_rn_str_plain_equal_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b1b37fe68b01ca29dee7f60fcd4af25f = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_newton_cotes, 755, const_tuple_1aa12456f8b069695605fc72a73758c6_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_79e5a63264a672143e3c1829dc5ce6f4 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_quadrature, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_48de1ffa77538aecef3cc42c9e3b6f86 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_quadrature, 117, const_tuple_d1a5bc61cd703ca510c96bde9b5da5d6_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a31bd3e2eeae1dd61b0ecad914b0bc31 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_quadrature, 117, const_tuple_03a903cd8bb2d78ed007b3b8966f2663_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c052591914252cbe5cc68d255c365fc8 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_romb, 421, const_tuple_str_plain_y_str_plain_dx_str_plain_axis_str_plain_show_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_207890bf451aae5f1c2704a5442d5eb6 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_romb, 421, const_tuple_4ccbfc041fdff1bdf60ccc1644108012_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3eac3efe02e81b3523ee2a25f9bbef07 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_romberg, 577, const_tuple_ece0a23ee5fd6dbbe81b910f4983d7d8_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_269992869f9a3d95af55dfb0803a7db5 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_romberg, 577, const_tuple_f8b1ced9f7c27609f5faaa90e84d99da_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eb84a3e11c6886b3c05a8197a3689be2 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_simps, 315, const_tuple_19802c22eccac6708c3cd4378f90fae4_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_57b2ba88218ea82d79d59ae41021291f = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_simps, 315, const_tuple_73f8e64bb530851f5b146c1eb36cfb41_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a7111f778a7e3a864ddafbfa97d8ee96 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_tupleset, 187, const_tuple_str_plain_t_str_plain_i_str_plain_value_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d8aa4f6121e155a190e5ad288008d691 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_tupleset, 187, const_tuple_str_plain_t_str_plain_i_str_plain_value_str_plain_l_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f1dcc463136510aba3a35bbae24dfaf2 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_vectorize1, 70, const_tuple_str_plain_func_str_plain_args_str_plain_vec_func_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eb8d9082dd316aa14dad51a92817a2c6 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_vectorize1, 70, const_tuple_d003280b35f0e15a58de9ea72682b96b_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_272e71ed9ac2940610aa48796e488da6 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_vfunc, 96, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c6ff7986abcfdd0265553f1a682f2021 = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_vfunc, 99, const_tuple_str_plain_x_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_46dced9e542caf15e8cf22e87e773caa = MAKE_CODEOBJ( const_str_digest_04871342ca8acec106007cd5986e42e0, const_str_plain_vfunc, 99, const_tuple_77d0c6d679a30419d551c6768af8e2cc_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_AccuracyWarning_of_module_scipy$integrate$quadrature(  );


NUITKA_CROSS_MODULE PyObject *impl_function_1_complex_call_helper_pos_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_star_arg_list );


static PyObject *MAKE_FUNCTION_function_10__difftrap_of_module_scipy$integrate$quadrature(  );


static PyObject *MAKE_FUNCTION_function_11__romberg_diff_of_module_scipy$integrate$quadrature(  );


static PyObject *MAKE_FUNCTION_function_12__printresmat_of_module_scipy$integrate$quadrature(  );


static PyObject *MAKE_FUNCTION_function_13_romberg_of_module_scipy$integrate$quadrature( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_14_newton_cotes_of_module_scipy$integrate$quadrature( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( PyObjectSharedLocalVariable &closure_args, PyObjectSharedLocalVariable &closure_func );


// This structure is for attachment as self of function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature.
// It is allocated at the time the function object is created.
struct _context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_args;
    PyObjectSharedLocalVariable closure_func;
};

static void _context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_destructor( void *context_voidptr )
{
    _context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *_python_context = (_context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_2_fixed_quad_of_module_scipy$integrate$quadrature( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( PyObjectSharedLocalVariable &closure_args, PyObjectSharedLocalVariable &closure_func );


// This structure is for attachment as self of function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature.
// It is allocated at the time the function object is created.
struct _context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t
{
    // The function can access a read-only closure of the creator.
    PyObjectSharedLocalVariable closure_args;
    PyObjectSharedLocalVariable closure_func;
};

static void _context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_destructor( void *context_voidptr )
{
    _context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *_python_context = (_context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_3_vectorize1_of_module_scipy$integrate$quadrature( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_quadrature_of_module_scipy$integrate$quadrature( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_tupleset_of_module_scipy$integrate$quadrature(  );


static PyObject *MAKE_FUNCTION_function_6_cumtrapz_of_module_scipy$integrate$quadrature( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7__basic_simps_of_module_scipy$integrate$quadrature(  );


static PyObject *MAKE_FUNCTION_function_8_simps_of_module_scipy$integrate$quadrature( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_9_romb_of_module_scipy$integrate$quadrature( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_AccuracyWarning_of_module_scipy$integrate$quadrature(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_82da6fb6bd26fb6f6029d13926704284;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_return_value = PyDict_New();
    if ((var___module__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__.object
        );

    }
    goto function_return_exit;

    // Return statement must be present.
    assert(false);
    return NULL;
function_return_exit:
    return tmp_return_value;

}


static PyObject *impl_function_2_fixed_quad_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_args, PyObject *_python_par_n )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_n; par_n.object = _python_par_n;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_w;
    PyObjectLocalVariable var_ainf;
    PyObjectLocalVariable var_binf;
    PyObjectLocalVariable var_y;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_or_1__value_1;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_left_8;
    PyObject *tmp_binop_left_9;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
    PyObject *tmp_binop_right_9;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_76305dae3679f8ee0f0bf9514a2ef8a5, module_scipy$integrate$quadrature );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_p_roots );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_p_roots );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241133 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_1 = par_n.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 60;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_2 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_3 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_3 == NULL )
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


        frame_function->f_lineno = 60;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1.object;

    assert( var_x.object == NULL );
    var_x.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_w.object == NULL );
    var_w.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_real );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_real );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 175903 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_x.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 61;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    if (var_x.object == NULL)
    {
        var_x.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    // Tried code
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_map );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_isinf );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinf );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 58835 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_arg_element_4, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 62;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_7;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_8 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
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


        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_8;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_9 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
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


        frame_function->f_lineno = 62;
        goto try_finally_handler_2;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_9;

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
    tmp_assign_source_10 = tmp_tuple_unpack_2__element_1.object;

    assert( var_ainf.object == NULL );
    var_ainf.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_assign_source_11 = tmp_tuple_unpack_2__element_2.object;

    assert( var_binf.object == NULL );
    var_binf.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

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
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_assign_source_12 = var_ainf.object;

    if ( tmp_assign_source_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241169 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto try_finally_handler_4;
    }

    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
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
    tmp_cond_value_1 = tmp_or_1__value_1.object;

    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_1 = var_binf.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241219 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto try_finally_handler_5;
    }

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
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

        goto try_finally_handler_4;
    }

    goto finally_end_3;
    finally_end_3:;
    condexpr_end_1:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_3;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_3;
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
    tmp_make_exception_arg_1 = const_str_digest_b03742aa16c972e9af8a28ec89c25da6;
    frame_function->f_lineno = 64;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto try_finally_handler_3;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 64;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_3;
    branch_no_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    tmp_binop_left_4 = par_b.object;

    if ( tmp_binop_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_4 = par_a.object;

    if ( tmp_binop_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_3 = BINARY_OPERATION_SUB( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = var_x.object;

    if ( tmp_binop_left_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = const_int_pos_1;
    tmp_binop_right_3 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = const_float_2_0;
    tmp_binop_left_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = par_a.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    assert( var_y.object == NULL );
    var_y.object = tmp_assign_source_13;

    tmp_return_value = PyTuple_New( 2 );
    tmp_binop_left_8 = par_b.object;

    if ( tmp_binop_left_8 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_8 = par_a.object;

    if ( tmp_binop_right_8 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_7 = BINARY_OPERATION_SUB( tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_7 = const_float_2_0;
    tmp_binop_left_6 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_sum );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sum );
    }

    if ( tmp_called_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185628 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_9 = var_w.object;

    if ( tmp_binop_left_9 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4312 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = par_func.object;

    if ( tmp_dircall_arg1_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_y.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_3 );
    tmp_dircall_arg3_1 = par_args.object;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_6 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_9 = impl_function_1_complex_call_helper_pos_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1, INCREASE_REFCOUNT( tmp_dircall_arg3_1 ) );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = BINARY_OPERATION_MUL( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_int_0;
    frame_function->f_lineno = 67;
    tmp_binop_right_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
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
    if ((var_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            var_x.object
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
    if ((var_ainf.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ainf,
            var_ainf.object
        );

    }
    if ((var_binf.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_binf,
            var_binf.object
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
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
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
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
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
static PyObject *fparse_function_2_fixed_quad_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_n = NULL;
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
                PyErr_Format( PyExc_TypeError, "fixed_quad() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
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
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_n == key )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_n, key ) == 1 )
            {
                assert( _python_par_n == NULL );
                _python_par_n = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fixed_quad() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_b = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_n != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_n == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_n = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_a == NULL || _python_par_b == NULL || _python_par_args == NULL || _python_par_n == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_n };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_fixed_quad_of_module_scipy$integrate$quadrature( self, _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_n );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_n );

    return NULL;
}

static PyObject *dparse_function_2_fixed_quad_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_2_fixed_quad_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_fixed_quad_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_args, PyObject *_python_par_vec_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable par_func; par_func.storage->object = _python_par_func;
    PyObjectSharedLocalVariable par_args; par_args.storage->object = _python_par_args;
    PyObjectLocalVariable par_vec_func; par_vec_func.object = _python_par_vec_func;
    PyObjectLocalVariable var_vfunc;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f1dcc463136510aba3a35bbae24dfaf2, module_scipy$integrate$quadrature );
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
    tmp_cond_value_1 = par_vec_func.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241269 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
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
    tmp_assign_source_1 = MAKE_FUNCTION_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( par_args, par_func );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    assert( var_vfunc.object == NULL );
    var_vfunc.object = tmp_assign_source_1;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_2 = MAKE_FUNCTION_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( par_args, par_func );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    assert( var_vfunc.object == NULL );
    var_vfunc.object = tmp_assign_source_2;

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
    if ((var_vfunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vfunc,
            var_vfunc.object
        );

    }
    if ((par_func.storage != NULL && par_func.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.storage->object
        );

    }
    if ((par_args.storage != NULL && par_args.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.storage->object
        );

    }
    if ((par_vec_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vec_func,
            par_vec_func.object
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
    tmp_return_value = var_vfunc.object;

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
static PyObject *fparse_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_vec_func = NULL;
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
                PyErr_Format( PyExc_TypeError, "vectorize1() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_vec_func == key )
            {
                assert( _python_par_vec_func == NULL );
                _python_par_vec_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_vec_func, key ) == 1 )
            {
                assert( _python_par_vec_func == NULL );
                _python_par_vec_func = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "vectorize1() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_vec_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_vec_func = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_vec_func == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_vec_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_args == NULL || _python_par_vec_func == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_args, _python_par_vec_func };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, _python_par_func, _python_par_args, _python_par_vec_func );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_vec_func );

    return NULL;
}

static PyObject *dparse_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // The context of the function.
    struct _context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *_python_context = (struct _context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_272e71ed9ac2940610aa48796e488da6, module_scipy$integrate$quadrature );
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
    tmp_dircall_arg1_1 = _python_context->closure_func.storage->object;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _python_context->closure_args.storage->object;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_return_value = impl_function_1_complex_call_helper_pos_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1, INCREASE_REFCOUNT( tmp_dircall_arg3_1 ) );
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
    if ((par_x.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_x,
            par_x.object
        );

    }
    if ((_python_context->closure_func.storage != NULL && _python_context->closure_func.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            _python_context->closure_func.storage->object
        );

    }
    if ((_python_context->closure_args.storage != NULL && _python_context->closure_args.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            _python_context->closure_args.storage->object
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
static PyObject *fparse_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "vfunc() keywords must be strings" );
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
                   "vfunc() got an unexpected keyword argument '%s'",
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


    return impl_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // The context of the function.
    struct _context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *_python_context = (struct _context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable var_y0;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_output;
    PyObjectLocalVariable var_i;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg3_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_type_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c6ff7986abcfdd0265553f1a682f2021, module_scipy$integrate$quadrature );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72338 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 100;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
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
    tmp_dircall_arg1_1 = _python_context->closure_func.storage->object;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _python_context->closure_args.storage->object;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_return_value = impl_function_1_complex_call_helper_pos_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), tmp_dircall_arg2_1, INCREASE_REFCOUNT( tmp_dircall_arg3_1 ) );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_x.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 102;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    if (par_x.object == NULL)
    {
        par_x.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_x.object;
        par_x.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_dircall_arg1_2 = _python_context->closure_func.storage->object;

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_subscr_target_1 = par_x.object;

    tmp_subscr_subscript_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg2_2 );

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = _python_context->closure_args.storage->object;

    if ( tmp_dircall_arg3_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = impl_function_1_complex_call_helper_pos_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_2 ), tmp_dircall_arg2_2, INCREASE_REFCOUNT( tmp_dircall_arg3_2 ) );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    assert( var_y0.object == NULL );
    var_y0.object = tmp_assign_source_2;

    tmp_len_arg_1 = par_x.object;

    tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    assert( var_n.object == NULL );
    var_n.object = tmp_assign_source_3;

    tmp_hasattr_source_1 = var_y0.object;

    tmp_hasattr_attr_1 = const_str_plain_dtype;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
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
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_empty );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69177 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_n.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_3 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_1 = var_y0.object;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 107;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    assert( var_output.object == NULL );
    var_output.object = tmp_assign_source_4;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_empty );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69177 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_5 = PyTuple_New( 1 );
    tmp_tuple_element_6 = var_n.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_tuple_element_5, 0, tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_5 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_type_arg_1 = var_y0.object;

    tmp_dict_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 109;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_4, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    assert( var_output.object == NULL );
    var_output.object = tmp_assign_source_5;

    branch_end_2:;
    tmp_ass_subvalue_1 = var_y0.object;

    tmp_ass_subscribed_1 = var_output.object;

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241323 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = const_int_pos_1;
    tmp_call_arg_element_4 = var_n.object;

    frame_function->f_lineno = 111;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
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
        frame_function->f_lineno = 111;
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

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_dircall_arg1_3 = _python_context->closure_func.storage->object;

    if ( tmp_dircall_arg1_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }

    tmp_dircall_arg2_3 = PyTuple_New( 1 );
    tmp_subscr_target_2 = par_x.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = var_i.object;

    tmp_tuple_element_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_dircall_arg2_3 );

        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_7 );
    tmp_dircall_arg3_3 = _python_context->closure_args.storage->object;

    if ( tmp_dircall_arg3_3 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }

    tmp_ass_subvalue_2 = impl_function_1_complex_call_helper_pos_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_3 ), tmp_dircall_arg2_3, INCREASE_REFCOUNT( tmp_dircall_arg3_3 ) );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }
    tmp_ass_subscribed_2 = var_output.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82676 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_2 = var_i.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto try_finally_handler_1;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
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
    tmp_return_value = var_output.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82676 ], 52, 0 );
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
    if ((var_y0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y0,
            var_y0.object
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
    if ((var_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output,
            var_output.object
        );

    }
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
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
    if ((_python_context->closure_func.storage != NULL && _python_context->closure_func.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            _python_context->closure_func.storage->object
        );

    }
    if ((_python_context->closure_args.storage != NULL && _python_context->closure_args.storage->object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            _python_context->closure_args.storage->object
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
static PyObject *fparse_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "vfunc() keywords must be strings" );
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
                   "vfunc() got an unexpected keyword argument '%s'",
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


    return impl_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_quadrature_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_args, PyObject *_python_par_tol, PyObject *_python_par_rtol, PyObject *_python_par_maxiter, PyObject *_python_par_vec_func, PyObject *_python_par_miniter )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_tol; par_tol.object = _python_par_tol;
    PyObjectLocalVariable par_rtol; par_rtol.object = _python_par_rtol;
    PyObjectLocalVariable par_maxiter; par_maxiter.object = _python_par_maxiter;
    PyObjectLocalVariable par_vec_func; par_vec_func.object = _python_par_vec_func;
    PyObjectLocalVariable par_miniter; par_miniter.object = _python_par_miniter;
    PyObjectLocalVariable var_vfunc;
    PyObjectLocalVariable var_val;
    PyObjectLocalVariable var_err;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_newval;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_1__break_indicator;
    PyObjectTempVariable tmp_or_1__value_1;
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
    bool tmp_break_1;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next1_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_48de1ffa77538aecef3cc42c9e3b6f86, module_scipy$integrate$quadrature );
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
    tmp_isinstance_inst_1 = par_args.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
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
    tmp_assign_source_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_args.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_1 );
    if (par_args.object == NULL)
    {
        par_args.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_args.object;
        par_args.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_vectorize1 );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vectorize1 );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241358 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_func.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_args.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_vec_func.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241269 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_vec_func;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 169;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    assert( var_vfunc.object == NULL );
    var_vfunc.object = tmp_assign_source_2;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    assert( var_val.object == NULL );
    var_val.object = tmp_assign_source_3;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inf );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    assert( var_err.object == NULL );
    var_err.object = tmp_assign_source_4;

    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = par_miniter.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_int_pos_1;
    tmp_call_arg_element_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_maxiter.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 172;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    if (par_maxiter.object == NULL)
    {
        par_maxiter.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = par_maxiter.object;
        par_maxiter.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    // Tried code
    tmp_assign_source_6 = Py_False;
    assert( tmp_for_loop_1__break_indicator.object == NULL );
    tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241323 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = par_miniter.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241397 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }

    tmp_binop_left_2 = par_maxiter.object;

    tmp_binop_right_2 = const_int_pos_1;
    tmp_call_arg_element_4 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 173;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_7;

    // Tried code
    loop_start_1:;
    // Tried block of try/except
    tmp_next1_arg_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next1_arg_1 );
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


        frame_function->f_lineno = 173;
        goto try_except_handler_1;
    }
    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_compare_left_1 = exception_type;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_2;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_9 = Py_True;
    if (tmp_for_loop_1__break_indicator.object == NULL)
    {
        tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = tmp_for_loop_1__break_indicator.object;
        tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    goto try_finally_handler_2;
    branch_end_2:;
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );

    try_except_end_1:;
    tmp_assign_source_10 = tmp_for_loop_1__iter_value.object;

    if (var_n.object == NULL)
    {
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_n.object;
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_fixed_quad );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fixed_quad );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241450 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_5 = var_vfunc.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241489 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_6 = par_a.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_7 = par_b.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_8 = const_tuple_empty;
    tmp_call_arg_element_9 = var_n.object;

    frame_function->f_lineno = 174;
    tmp_subscr_target_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_2;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_2;
    }
    if (var_newval.object == NULL)
    {
        var_newval.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_newval.object;
        var_newval.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_2;
    }
    tmp_binop_left_3 = var_newval.object;

    tmp_binop_right_3 = var_val.object;

    if ( tmp_binop_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_10 = BINARY_OPERATION_SUB( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 175;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_2;
    }
    if (var_err.object == NULL)
    {
        var_err.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_err.object;
        var_err.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_assign_source_13 = var_newval.object;

    if (var_val.object == NULL)
    {
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_val.object;
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    tmp_break_1 = false;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_err.object;

    tmp_compexpr_right_1 = par_tol.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161861 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto try_finally_handler_4;
    }

    tmp_assign_source_14 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_4;
    }
    if (tmp_or_1__value_1.object == NULL)
    {
        tmp_or_1__value_1.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = tmp_or_1__value_1.object;
        tmp_or_1__value_1.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
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
    tmp_cond_value_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = var_err.object;

    tmp_binop_left_4 = par_rtol.object;

    if ( tmp_binop_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71963 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto try_finally_handler_5;
    }

    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_11 = var_val.object;

    frame_function->f_lineno = 178;
    tmp_binop_right_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_11 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_5;
    }
    tmp_compexpr_right_2 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_5;
    }
    tmp_cond_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto try_finally_handler_5;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
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

        goto try_finally_handler_4;
    }

    goto finally_end_1;
    finally_end_1:;
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
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

        goto try_finally_handler_3;
    }

    goto finally_end_2;
    finally_end_2:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 178;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_break_1 = true;
    goto try_finally_handler_start_1;
    branch_no_3:;
    try_finally_handler_start_1:;
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

        goto try_finally_handler_2;
    }

    // Break if entered via break.
    if ( tmp_break_1 )
    {

    goto loop_end_1;
    }
    goto finally_end_3;
    finally_end_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_1;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_compare_left_2 = tmp_for_loop_1__break_indicator.object;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 181;
        goto try_finally_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto try_finally_handler_1;
    }
    tmp_binop_left_5 = const_str_digest_157321bb10147e72d497dc62483361c5;
    tmp_binop_right_5 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_maxiter.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161719 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_err.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21528 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 1, tmp_tuple_element_3 );
    tmp_call_arg_element_12 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 182;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_AccuracyWarning );

    if (unlikely( tmp_call_arg_element_13 == NULL ))
    {
        tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AccuracyWarning );
    }

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241540 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 183;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    tmp_result = tmp_for_loop_1__break_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_for_loop_1__break_indicator.object );
        tmp_for_loop_1__break_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_3;
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_val.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_err.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21528 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
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
    if ((var_vfunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vfunc,
            var_vfunc.object
        );

    }
    if ((var_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            var_val.object
        );

    }
    if ((var_err.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_err,
            var_err.object
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
    if ((var_newval.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_newval,
            var_newval.object
        );

    }
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
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
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
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
    if ((par_rtol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rtol,
            par_rtol.object
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
    if ((par_vec_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vec_func,
            par_vec_func.object
        );

    }
    if ((par_miniter.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_miniter,
            par_miniter.object
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
static PyObject *fparse_function_4_quadrature_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_tol = NULL;
    PyObject *_python_par_rtol = NULL;
    PyObject *_python_par_maxiter = NULL;
    PyObject *_python_par_vec_func = NULL;
    PyObject *_python_par_miniter = NULL;
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
                PyErr_Format( PyExc_TypeError, "quadrature() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
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
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

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
            if ( found == false && const_str_plain_rtol == key )
            {
                assert( _python_par_rtol == NULL );
                _python_par_rtol = value;

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
            if ( found == false && const_str_plain_vec_func == key )
            {
                assert( _python_par_vec_func == NULL );
                _python_par_vec_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_miniter == key )
            {
                assert( _python_par_miniter == NULL );
                _python_par_miniter = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rtol, key ) == 1 )
            {
                assert( _python_par_rtol == NULL );
                _python_par_rtol = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_vec_func, key ) == 1 )
            {
                assert( _python_par_vec_func == NULL );
                _python_par_vec_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_miniter, key ) == 1 )
            {
                assert( _python_par_miniter == NULL );
                _python_par_miniter = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "quadrature() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 0 + self->m_defaults_given >= 9  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 9 ) );
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 1 + self->m_defaults_given >= 9  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 9 ) );
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_b = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 2 + self->m_defaults_given >= 9  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 9 ) );
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
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 3 + self->m_defaults_given >= 9  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 9 ) );
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
         if (unlikely( _python_par_tol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_tol = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_tol == NULL )
    {
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_tol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 ) );
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
         if (unlikely( _python_par_rtol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_rtol = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_rtol == NULL )
    {
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_rtol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 ) );
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
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_maxiter = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 ) );
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
         if (unlikely( _python_par_vec_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_vec_func = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_vec_func == NULL )
    {
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_vec_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 ) );
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
         if (unlikely( _python_par_miniter != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_miniter = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_miniter == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_miniter = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_a == NULL || _python_par_b == NULL || _python_par_args == NULL || _python_par_tol == NULL || _python_par_rtol == NULL || _python_par_maxiter == NULL || _python_par_vec_func == NULL || _python_par_miniter == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_tol, _python_par_rtol, _python_par_maxiter, _python_par_vec_func, _python_par_miniter };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_quadrature_of_module_scipy$integrate$quadrature( self, _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_tol, _python_par_rtol, _python_par_maxiter, _python_par_vec_func, _python_par_miniter );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_tol );
    Py_XDECREF( _python_par_rtol );
    Py_XDECREF( _python_par_maxiter );
    Py_XDECREF( _python_par_vec_func );
    Py_XDECREF( _python_par_miniter );

    return NULL;
}

static PyObject *dparse_function_4_quadrature_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 9 )
    {
        return impl_function_4_quadrature_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_quadrature_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_tupleset_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_t, PyObject *_python_par_i, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_t; par_t.object = _python_par_t;
    PyObjectLocalVariable par_i; par_i.object = _python_par_i;
    PyObjectLocalVariable par_value; par_value.object = _python_par_value;
    PyObjectLocalVariable var_l;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a7111f778a7e3a864ddafbfa97d8ee96, module_scipy$integrate$quadrature );
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
    tmp_list_arg_1 = par_t.object;

    if ( tmp_list_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4881 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }
    assert( var_l.object == NULL );
    var_l.object = tmp_assign_source_1;

    tmp_ass_subvalue_1 = par_value.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5634 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_l.object;

    tmp_ass_subscript_1 = par_i.object;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_1 = var_l.object;

    tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
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
    if ((var_l.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_l,
            var_l.object
        );

    }
    if ((par_t.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_t,
            par_t.object
        );

    }
    if ((par_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            par_i.object
        );

    }
    if ((par_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_value,
            par_value.object
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
static PyObject *fparse_function_5_tupleset_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_t = NULL;
    PyObject *_python_par_i = NULL;
    PyObject *_python_par_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "tupleset() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_t == key )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_i == key )
            {
                assert( _python_par_i == NULL );
                _python_par_i = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_value == key )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_t, key ) == 1 )
            {
                assert( _python_par_t == NULL );
                _python_par_t = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_i, key ) == 1 )
            {
                assert( _python_par_i == NULL );
                _python_par_i = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_value, key ) == 1 )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "tupleset() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_t != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_t = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_t == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_t = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_i != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_i = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_i == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_i = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_value != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_value == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_value = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_t == NULL || _python_par_i == NULL || _python_par_value == NULL ))
    {
        PyObject *values[] = { _python_par_t, _python_par_i, _python_par_value };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_tupleset_of_module_scipy$integrate$quadrature( self, _python_par_t, _python_par_i, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_t );
    Py_XDECREF( _python_par_i );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_5_tupleset_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_5_tupleset_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_tupleset_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_cumtrapz_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_y, PyObject *_python_par_x, PyObject *_python_par_dx, PyObject *_python_par_axis, PyObject *_python_par_initial )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_y; par_y.object = _python_par_y;
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_dx; par_dx.object = _python_par_dx;
    PyObjectLocalVariable par_axis; par_axis.object = _python_par_axis;
    PyObjectLocalVariable par_initial; par_initial.object = _python_par_initial;
    PyObjectLocalVariable var_d;
    PyObjectLocalVariable var_shape;
    PyObjectLocalVariable var_nd;
    PyObjectLocalVariable var_slice1;
    PyObjectLocalVariable var_slice2;
    PyObjectLocalVariable var_res;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_left_8;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
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
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
    PyObject *tmp_called_13;
    PyObject *tmp_called_14;
    PyObject *tmp_called_15;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3192991fb346a46ca76af60d7413c3f3, module_scipy$integrate$quadrature );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_y.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 247;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    if (par_y.object == NULL)
    {
        par_y.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_y.object;
        par_y.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_compare_left_1 = par_x.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
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
    tmp_assign_source_2 = par_dx.object;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164857 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    assert( var_d.object == NULL );
    var_d.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    goto branch_end_1;
    branch_no_1:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_x.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 251;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    if (par_x.object == NULL)
    {
        par_x.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_x.object;
        par_x.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_x.object;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163602 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_x.object;

    frame_function->f_lineno = 253;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    assert( var_d.object == NULL );
    var_d.object = tmp_assign_source_4;

    tmp_binop_left_1 = LIST_COPY( const_list_int_pos_1_list );
    tmp_source_name_2 = par_y.object;

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    assert( var_shape.object == NULL );
    var_shape.object = tmp_assign_source_5;

    tmp_ass_subvalue_1 = const_int_neg_1;
    tmp_ass_subscribed_1 = var_shape.object;

    tmp_ass_subscript_1 = par_axis.object;

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_d.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_reshape );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_shape.object;

    frame_function->f_lineno = 257;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    assert( var_d.object != NULL );
    {
        PyObject *old = var_d.object;
        var_d.object = tmp_assign_source_6;
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = par_x.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_y.object;

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_8336423ea16711437f3d3642bfad0788;
    frame_function->f_lineno = 259;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 259;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163602 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_axis.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_axis;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 262;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_5, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    assert( var_d.object == NULL );
    var_d.object = tmp_assign_source_7;

    branch_end_3:;
    branch_end_2:;
    tmp_source_name_6 = var_d.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = par_axis.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {
        Py_DECREF( tmp_subscr_target_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_y.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = par_axis.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_subscr_target_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = const_int_pos_1;
    tmp_compare_right_4 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_02a7a784aa778e462221eb9ea10dab96;
    frame_function->f_lineno = 265;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 265;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    branch_end_1:;
    tmp_source_name_8 = par_y.object;

    tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_len_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = BUILTIN_LEN( tmp_len_arg_3 );
    Py_DECREF( tmp_len_arg_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    assert( var_nd.object == NULL );
    var_nd.object = tmp_assign_source_8;

    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_3 = PyTuple_New( 1 );
    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = Py_None;
    frame_function->f_lineno = 269;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_6 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_left_3, 0, tmp_tuple_element_2 );
    tmp_binop_right_3 = var_nd.object;

    tmp_call_arg_element_5 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = par_axis.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_int_pos_1;
    tmp_call_arg_element_10 = Py_None;
    frame_function->f_lineno = 269;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 269;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_5, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    assert( var_slice1.object == NULL );
    var_slice1.object = tmp_assign_source_9;

    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = PyTuple_New( 1 );
    tmp_called_10 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = Py_None;
    frame_function->f_lineno = 270;
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_12 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_left_4, 0, tmp_tuple_element_3 );
    tmp_binop_right_4 = var_nd.object;

    tmp_call_arg_element_11 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = par_axis.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = Py_None;
    tmp_call_arg_element_16 = const_int_neg_1;
    frame_function->f_lineno = 270;
    tmp_call_arg_element_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 270;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_9, tmp_call_arg_element_11, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    assert( var_slice2.object == NULL );
    var_slice2.object = tmp_assign_source_10;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_add );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61315 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_accumulate );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_6 = var_d.object;

    if ( tmp_binop_left_6 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = par_y.object;

    tmp_subscr_subscript_3 = var_slice1.object;

    tmp_binop_left_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_4 = par_y.object;

    tmp_subscr_subscript_4 = var_slice2.object;

    tmp_binop_right_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );
        Py_DECREF( tmp_binop_left_7 );

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_5 = const_float_2_0;
    tmp_call_arg_element_17 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_18 = par_axis.object;

    if ( tmp_call_arg_element_18 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        Py_DECREF( tmp_call_arg_element_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 271;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_12, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    assert( var_res.object == NULL );
    var_res.object = tmp_assign_source_11;

    tmp_compare_left_5 = par_initial.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241621 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_isscalar );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = par_initial.object;

    if ( tmp_call_arg_element_19 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241621 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 274;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_make_exception_arg_3 = const_str_digest_b2f34ddfe3b9596001f2cfecd61a91bc;
    frame_function->f_lineno = 275;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 275;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_source_name_11 = var_res.object;

    tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    assert( var_shape.object == NULL );
    var_shape.object = tmp_assign_source_12;

    tmp_ass_subvalue_2 = const_int_pos_1;
    tmp_ass_subscribed_2 = var_shape.object;

    tmp_ass_subscript_2 = par_axis.object;

    if ( tmp_ass_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_concatenate );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_4 = PyList_New( 2 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ones );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_4 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_5 = var_shape.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_5 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_14 = var_res.object;

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_4 );
        Py_DECREF( tmp_called_15 );
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 279;
    tmp_binop_left_8 = CALL_FUNCTION( tmp_called_15, tmp_call_pos_3, tmp_call_kw_2 );
    Py_DECREF( tmp_called_15 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_4 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = par_initial.object;

    if ( tmp_binop_right_8 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_4 );
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241621 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = BINARY_OPERATION_MUL( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_tuple_element_4 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_tuple_element_4, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_res.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_4, 1, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_4 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = par_axis.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_axis;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 280;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_14, tmp_call_pos_2, tmp_call_kw_3 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    assert( var_res.object != NULL );
    {
        PyObject *old = var_res.object;
        var_res.object = tmp_assign_source_13;
        Py_DECREF( old );
    }

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
    if ((var_d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_d,
            var_d.object
        );

    }
    if ((var_shape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shape,
            var_shape.object
        );

    }
    if ((var_nd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nd,
            var_nd.object
        );

    }
    if ((var_slice1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice1,
            var_slice1.object
        );

    }
    if ((var_slice2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice2,
            var_slice2.object
        );

    }
    if ((var_res.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_res,
            var_res.object
        );

    }
    if ((par_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            par_y.object
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
    if ((par_dx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dx,
            par_dx.object
        );

    }
    if ((par_axis.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_axis,
            par_axis.object
        );

    }
    if ((par_initial.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_initial,
            par_initial.object
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
    tmp_return_value = var_res.object;

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
static PyObject *fparse_function_6_cumtrapz_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_y = NULL;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_dx = NULL;
    PyObject *_python_par_axis = NULL;
    PyObject *_python_par_initial = NULL;
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
                PyErr_Format( PyExc_TypeError, "cumtrapz() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_y == key )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

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
            if ( found == false && const_str_plain_dx == key )
            {
                assert( _python_par_dx == NULL );
                _python_par_dx = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_axis == key )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_initial == key )
            {
                assert( _python_par_initial == NULL );
                _python_par_initial = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_y, key ) == 1 )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dx, key ) == 1 )
            {
                assert( _python_par_dx == NULL );
                _python_par_dx = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_axis, key ) == 1 )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_initial, key ) == 1 )
            {
                assert( _python_par_initial == NULL );
                _python_par_initial = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "cumtrapz() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_y != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_y = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_y == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_y = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_dx != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_dx = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_dx == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_dx = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_axis != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_axis = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_axis == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_axis = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_initial != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_initial = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_initial == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_initial = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_y == NULL || _python_par_x == NULL || _python_par_dx == NULL || _python_par_axis == NULL || _python_par_initial == NULL ))
    {
        PyObject *values[] = { _python_par_y, _python_par_x, _python_par_dx, _python_par_axis, _python_par_initial };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_cumtrapz_of_module_scipy$integrate$quadrature( self, _python_par_y, _python_par_x, _python_par_dx, _python_par_axis, _python_par_initial );

error_exit:;

    Py_XDECREF( _python_par_y );
    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_dx );
    Py_XDECREF( _python_par_axis );
    Py_XDECREF( _python_par_initial );

    return NULL;
}

static PyObject *dparse_function_6_cumtrapz_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_6_cumtrapz_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_cumtrapz_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__basic_simps_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_y, PyObject *_python_par_start, PyObject *_python_par_stop, PyObject *_python_par_x, PyObject *_python_par_dx, PyObject *_python_par_axis )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_y; par_y.object = _python_par_y;
    PyObjectLocalVariable par_start; par_start.object = _python_par_start;
    PyObjectLocalVariable par_stop; par_stop.object = _python_par_stop;
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_dx; par_dx.object = _python_par_dx;
    PyObjectLocalVariable par_axis; par_axis.object = _python_par_axis;
    PyObjectLocalVariable var_nd;
    PyObjectLocalVariable var_step;
    PyObjectLocalVariable var_all;
    PyObjectLocalVariable var_slice0;
    PyObjectLocalVariable var_slice1;
    PyObjectLocalVariable var_slice2;
    PyObjectLocalVariable var_result;
    PyObjectLocalVariable var_h;
    PyObjectLocalVariable var_sl0;
    PyObjectLocalVariable var_sl1;
    PyObjectLocalVariable var_h0;
    PyObjectLocalVariable var_h1;
    PyObjectLocalVariable var_hsum;
    PyObjectLocalVariable var_hprod;
    PyObjectLocalVariable var_h0divh1;
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
    PyObject *tmp_assign_source_17;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
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
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a240513ae813a989ecba62633b2a3a67, module_scipy$integrate$quadrature );
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
    tmp_source_name_1 = par_y.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    assert( var_nd.object == NULL );
    var_nd.object = tmp_assign_source_1;

    tmp_compare_left_1 = par_start.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
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
    tmp_assign_source_2 = const_int_0;
    if (par_start.object == NULL)
    {
        par_start.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = par_start.object;
        par_start.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_assign_source_3 = const_int_pos_2;
    assert( var_step.object == NULL );
    var_step.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_binop_left_1 = PyTuple_New( 1 );
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = Py_None;
    frame_function->f_lineno = 290;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_left_1, 0, tmp_tuple_element_1 );
    tmp_binop_right_1 = var_nd.object;

    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    assert( var_all.object == NULL );
    var_all.object = tmp_assign_source_4;

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_all.object;

    tmp_call_arg_element_3 = par_axis.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_start.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_stop.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44039 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = var_step.object;

    frame_function->f_lineno = 291;
    tmp_call_arg_element_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 291;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    assert( var_slice0.object == NULL );
    var_slice0.object = tmp_assign_source_5;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = var_all.object;

    tmp_call_arg_element_9 = par_axis.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = par_start.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = const_int_pos_1;
    tmp_call_arg_element_11 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = par_stop.object;

    if ( tmp_binop_left_3 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44039 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = const_int_pos_1;
    tmp_call_arg_element_12 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = var_step.object;

    frame_function->f_lineno = 292;
    tmp_call_arg_element_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 292;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    assert( var_slice1.object == NULL );
    var_slice1.object = tmp_assign_source_6;

    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = var_all.object;

    tmp_call_arg_element_15 = par_axis.object;

    if ( tmp_call_arg_element_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = par_start.object;

    if ( tmp_binop_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_4 = const_int_pos_2;
    tmp_call_arg_element_17 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = par_stop.object;

    if ( tmp_binop_left_5 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44039 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = const_int_pos_2;
    tmp_call_arg_element_18 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = var_step.object;

    frame_function->f_lineno = 293;
    tmp_call_arg_element_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_18 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 293;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    assert( var_slice2.object == NULL );
    var_slice2.object = tmp_assign_source_7;

    tmp_compare_left_2 = par_x.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_2)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_add );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61315 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reduce );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = par_dx.object;

    if ( tmp_binop_left_7 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164857 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = const_float_3_0;
    tmp_binop_left_6 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_1 = par_y.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = var_slice0.object;

    tmp_binop_left_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_10 = const_int_pos_4;
    tmp_subscr_target_2 = par_y.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = var_slice1.object;

    tmp_binop_right_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );
        Py_DECREF( tmp_binop_left_9 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_9 = BINARY_OPERATION_MUL( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );
        Py_DECREF( tmp_binop_left_9 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_8 = BINARY_OPERATION_ADD( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_3 = par_y.object;

    if ( tmp_subscr_target_3 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = var_slice2.object;

    tmp_binop_right_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_20 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = par_axis.object;

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 297;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }
    assert( var_result.object == NULL );
    var_result.object = tmp_assign_source_8;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163602 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_x.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_axis.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_axis;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 301;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_9, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    assert( var_h.object == NULL );
    var_h.object = tmp_assign_source_9;

    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = var_all.object;

    tmp_call_arg_element_23 = par_axis.object;

    if ( tmp_call_arg_element_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_25 = par_start.object;

    if ( tmp_call_arg_element_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_26 = par_stop.object;

    if ( tmp_call_arg_element_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44039 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_27 = var_step.object;

    frame_function->f_lineno = 302;
    tmp_call_arg_element_24 = CALL_FUNCTION_WITH_ARGS3( tmp_called_11, tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 302;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_10, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    Py_DECREF( tmp_call_arg_element_24 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto frame_exception_exit_1;
    }
    assert( var_sl0.object == NULL );
    var_sl0.object = tmp_assign_source_10;

    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_28 = var_all.object;

    tmp_call_arg_element_29 = par_axis.object;

    if ( tmp_call_arg_element_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_11 = par_start.object;

    if ( tmp_binop_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_11 = const_int_pos_1;
    tmp_call_arg_element_31 = BINARY_OPERATION_ADD( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_call_arg_element_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_12 = par_stop.object;

    if ( tmp_binop_left_12 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44039 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_12 = const_int_pos_1;
    tmp_call_arg_element_32 = BINARY_OPERATION_ADD( tmp_binop_left_12, tmp_binop_right_12 );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_33 = var_step.object;

    frame_function->f_lineno = 303;
    tmp_call_arg_element_30 = CALL_FUNCTION_WITH_ARGS3( tmp_called_13, tmp_call_arg_element_31, tmp_call_arg_element_32, tmp_call_arg_element_33 );
    Py_DECREF( tmp_call_arg_element_31 );
    Py_DECREF( tmp_call_arg_element_32 );
    if ( tmp_call_arg_element_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 303;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_12, tmp_call_arg_element_28, tmp_call_arg_element_29, tmp_call_arg_element_30 );
    Py_DECREF( tmp_call_arg_element_30 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    assert( var_sl1.object == NULL );
    var_sl1.object = tmp_assign_source_11;

    tmp_subscr_target_4 = var_h.object;

    tmp_subscr_subscript_4 = var_sl0.object;

    tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    assert( var_h0.object == NULL );
    var_h0.object = tmp_assign_source_12;

    tmp_subscr_target_5 = var_h.object;

    tmp_subscr_subscript_5 = var_sl1.object;

    tmp_assign_source_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    assert( var_h1.object == NULL );
    var_h1.object = tmp_assign_source_13;

    tmp_binop_left_13 = var_h0.object;

    tmp_binop_right_13 = var_h1.object;

    tmp_assign_source_14 = BINARY_OPERATION_ADD( tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    assert( var_hsum.object == NULL );
    var_hsum.object = tmp_assign_source_14;

    tmp_binop_left_14 = var_h0.object;

    tmp_binop_right_14 = var_h1.object;

    tmp_assign_source_15 = BINARY_OPERATION_MUL( tmp_binop_left_14, tmp_binop_right_14 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    assert( var_hprod.object == NULL );
    var_hprod.object = tmp_assign_source_15;

    tmp_binop_left_15 = var_h0.object;

    tmp_binop_right_15 = var_h1.object;

    tmp_assign_source_16 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_15, tmp_binop_right_15 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    assert( var_h0divh1.object == NULL );
    var_h0divh1.object = tmp_assign_source_16;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_add );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61315 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_reduce );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_17 = var_hsum.object;

    tmp_binop_right_17 = const_float_6_0;
    tmp_binop_left_16 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_17, tmp_binop_right_17 );
    if ( tmp_binop_left_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_6 = par_y.object;

    if ( tmp_subscr_target_6 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_6 = var_slice0.object;

    tmp_binop_left_20 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_binop_left_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_21 = const_int_pos_2;
    tmp_binop_left_22 = const_float_1_0;
    tmp_binop_right_22 = var_h0divh1.object;

    tmp_binop_right_21 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_22, tmp_binop_right_22 );
    if ( tmp_binop_right_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_20 );

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_20 = BINARY_OPERATION_SUB( tmp_binop_left_21, tmp_binop_right_21 );
    Py_DECREF( tmp_binop_right_21 );
    if ( tmp_binop_right_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_20 );

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_19 = BINARY_OPERATION_MUL( tmp_binop_left_20, tmp_binop_right_20 );
    Py_DECREF( tmp_binop_left_20 );
    Py_DECREF( tmp_binop_right_20 );
    if ( tmp_binop_left_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_7 = par_y.object;

    if ( tmp_subscr_target_7 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_7 = var_slice1.object;

    tmp_binop_left_25 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_binop_left_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_19 );

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_25 = var_hsum.object;

    tmp_binop_left_24 = BINARY_OPERATION_MUL( tmp_binop_left_25, tmp_binop_right_25 );
    Py_DECREF( tmp_binop_left_25 );
    if ( tmp_binop_left_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_19 );

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_24 = var_hsum.object;

    tmp_binop_left_23 = BINARY_OPERATION_MUL( tmp_binop_left_24, tmp_binop_right_24 );
    Py_DECREF( tmp_binop_left_24 );
    if ( tmp_binop_left_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_19 );

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_23 = var_hprod.object;

    tmp_binop_right_19 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_23, tmp_binop_right_23 );
    Py_DECREF( tmp_binop_left_23 );
    if ( tmp_binop_right_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_19 );

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_18 = BINARY_OPERATION_ADD( tmp_binop_left_19, tmp_binop_right_19 );
    Py_DECREF( tmp_binop_left_19 );
    Py_DECREF( tmp_binop_right_19 );
    if ( tmp_binop_left_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_8 = par_y.object;

    if ( tmp_subscr_target_8 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_8 = var_slice2.object;

    tmp_binop_left_26 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_binop_left_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_18 );

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_27 = const_int_pos_2;
    tmp_binop_right_27 = var_h0divh1.object;

    tmp_binop_right_26 = BINARY_OPERATION_SUB( tmp_binop_left_27, tmp_binop_right_27 );
    if ( tmp_binop_right_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_26 );

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_18 = BINARY_OPERATION_MUL( tmp_binop_left_26, tmp_binop_right_26 );
    Py_DECREF( tmp_binop_left_26 );
    Py_DECREF( tmp_binop_right_26 );
    if ( tmp_binop_right_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );
        Py_DECREF( tmp_binop_left_18 );

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_16 = BINARY_OPERATION_ADD( tmp_binop_left_18, tmp_binop_right_18 );
    Py_DECREF( tmp_binop_left_18 );
    Py_DECREF( tmp_binop_right_18 );
    if ( tmp_binop_right_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_binop_left_16 );

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = BINARY_OPERATION_MUL( tmp_binop_left_16, tmp_binop_right_16 );
    Py_DECREF( tmp_binop_left_16 );
    Py_DECREF( tmp_binop_right_16 );
    if ( tmp_call_arg_element_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_35 = par_axis.object;

    if ( tmp_call_arg_element_35 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_arg_element_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 311;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_34, tmp_call_arg_element_35 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_34 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    assert( var_result.object == NULL );
    var_result.object = tmp_assign_source_17;

    branch_end_2:;

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
    if ((var_nd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nd,
            var_nd.object
        );

    }
    if ((var_step.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_step,
            var_step.object
        );

    }
    if ((var_all.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_all,
            var_all.object
        );

    }
    if ((var_slice0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice0,
            var_slice0.object
        );

    }
    if ((var_slice1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice1,
            var_slice1.object
        );

    }
    if ((var_slice2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice2,
            var_slice2.object
        );

    }
    if ((var_result.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_result,
            var_result.object
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
    if ((var_sl0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sl0,
            var_sl0.object
        );

    }
    if ((var_sl1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sl1,
            var_sl1.object
        );

    }
    if ((var_h0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_h0,
            var_h0.object
        );

    }
    if ((var_h1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_h1,
            var_h1.object
        );

    }
    if ((var_hsum.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hsum,
            var_hsum.object
        );

    }
    if ((var_hprod.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hprod,
            var_hprod.object
        );

    }
    if ((var_h0divh1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_h0divh1,
            var_h0divh1.object
        );

    }
    if ((par_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            par_y.object
        );

    }
    if ((par_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_start,
            par_start.object
        );

    }
    if ((par_stop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stop,
            par_stop.object
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
    if ((par_dx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dx,
            par_dx.object
        );

    }
    if ((par_axis.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_axis,
            par_axis.object
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
    tmp_return_value = var_result.object;

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
static PyObject *fparse_function_7__basic_simps_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_y = NULL;
    PyObject *_python_par_start = NULL;
    PyObject *_python_par_stop = NULL;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_dx = NULL;
    PyObject *_python_par_axis = NULL;
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
                PyErr_Format( PyExc_TypeError, "_basic_simps() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_y == key )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_start == key )
            {
                assert( _python_par_start == NULL );
                _python_par_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_stop == key )
            {
                assert( _python_par_stop == NULL );
                _python_par_stop = value;

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
            if ( found == false && const_str_plain_dx == key )
            {
                assert( _python_par_dx == NULL );
                _python_par_dx = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_axis == key )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_y, key ) == 1 )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_start, key ) == 1 )
            {
                assert( _python_par_start == NULL );
                _python_par_start = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_stop, key ) == 1 )
            {
                assert( _python_par_stop == NULL );
                _python_par_stop = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dx, key ) == 1 )
            {
                assert( _python_par_dx == NULL );
                _python_par_dx = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_axis, key ) == 1 )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_basic_simps() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 6 ))
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
         if (unlikely( _python_par_y != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_y = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_y == NULL )
    {
        if ( 0 + self->m_defaults_given >= 6  )
        {
            _python_par_y = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 6 ) );
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
         if (unlikely( _python_par_start != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_start = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_start == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_start = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
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
         if (unlikely( _python_par_stop != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_stop = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_stop == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_stop = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
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
         if (unlikely( _python_par_dx != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_dx = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_dx == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_dx = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
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
         if (unlikely( _python_par_axis != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_axis = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_axis == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_axis = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
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
    if (unlikely( _python_par_y == NULL || _python_par_start == NULL || _python_par_stop == NULL || _python_par_x == NULL || _python_par_dx == NULL || _python_par_axis == NULL ))
    {
        PyObject *values[] = { _python_par_y, _python_par_start, _python_par_stop, _python_par_x, _python_par_dx, _python_par_axis };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7__basic_simps_of_module_scipy$integrate$quadrature( self, _python_par_y, _python_par_start, _python_par_stop, _python_par_x, _python_par_dx, _python_par_axis );

error_exit:;

    Py_XDECREF( _python_par_y );
    Py_XDECREF( _python_par_start );
    Py_XDECREF( _python_par_stop );
    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_dx );
    Py_XDECREF( _python_par_axis );

    return NULL;
}

static PyObject *dparse_function_7__basic_simps_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_7__basic_simps_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__basic_simps_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_simps_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_y, PyObject *_python_par_x, PyObject *_python_par_dx, PyObject *_python_par_axis, PyObject *_python_par_even )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_y; par_y.object = _python_par_y;
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_dx; par_dx.object = _python_par_dx;
    PyObjectLocalVariable par_axis; par_axis.object = _python_par_axis;
    PyObjectLocalVariable par_even; par_even.object = _python_par_even;
    PyObjectLocalVariable var_nd;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_last_dx;
    PyObjectLocalVariable var_first_dx;
    PyObjectLocalVariable var_returnshape;
    PyObjectLocalVariable var_shapex;
    PyObjectLocalVariable var_saveshape;
    PyObjectLocalVariable var_val;
    PyObjectLocalVariable var_result;
    PyObjectLocalVariable var_slice1;
    PyObjectLocalVariable var_slice2;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotIn_1;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    bool tmp_isnot_6;
    bool tmp_isnot_7;
    bool tmp_isnot_8;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_arg_2;
    PyObject *tmp_tuple_arg_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_eb84a3e11c6886b3c05a8197a3689be2, module_scipy$integrate$quadrature );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_y.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 367;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }
    if (par_y.object == NULL)
    {
        par_y.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_y.object;
        par_y.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_y.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 368;
        goto frame_exception_exit_1;
    }
    assert( var_nd.object == NULL );
    var_nd.object = tmp_assign_source_2;

    tmp_source_name_2 = par_y.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = par_axis.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {
        Py_DECREF( tmp_subscr_target_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto frame_exception_exit_1;
    }
    assert( var_N.object == NULL );
    var_N.object = tmp_assign_source_3;

    tmp_assign_source_4 = par_dx.object;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164857 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }

    assert( var_last_dx.object == NULL );
    var_last_dx.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = par_dx.object;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164857 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto frame_exception_exit_1;
    }

    assert( var_first_dx.object == NULL );
    var_first_dx.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = const_int_0;
    assert( var_returnshape.object == NULL );
    var_returnshape.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_compare_left_1 = par_x.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }

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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_x.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 374;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto frame_exception_exit_1;
    }
    if (par_x.object == NULL)
    {
        par_x.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = par_x.object;
        par_x.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_source_name_3 = par_x.object;

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 375;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_ones );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ones );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163368 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = var_nd.object;

    frame_function->f_lineno = 376;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto frame_exception_exit_1;
    }
    assert( var_shapex.object == NULL );
    var_shapex.object = tmp_assign_source_8;

    tmp_source_name_4 = par_x.object;

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = const_int_0;
    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_shapex.object;

    tmp_ass_subscript_1 = par_axis.object;

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_x.object;

    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto frame_exception_exit_1;
    }
    assert( var_saveshape.object == NULL );
    var_saveshape.object = tmp_assign_source_9;

    tmp_assign_source_10 = const_int_pos_1;
    assert( var_returnshape.object != NULL );
    {
        PyObject *old = var_returnshape.object;
        var_returnshape.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }

    tmp_source_name_6 = par_x.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_reshape );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_1 = var_shapex.object;

    tmp_call_arg_element_4 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 380;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    assert( par_x.object != NULL );
    {
        PyObject *old = par_x.object;
        par_x.object = tmp_assign_source_11;
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_7 = par_x.object;

    tmp_len_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_len_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_3 );
    Py_DECREF( tmp_len_arg_3 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_y.object;

    tmp_len_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_len_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = BUILTIN_LEN( tmp_len_arg_4 );
    Py_DECREF( tmp_len_arg_4 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_8336423ea16711437f3d3642bfad0788;
    frame_function->f_lineno = 382;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 382;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    branch_end_2:;
    tmp_source_name_9 = par_x.object;

    tmp_subscr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = par_axis.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {
        Py_DECREF( tmp_subscr_target_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = var_N.object;

    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_02a7a784aa778e462221eb9ea10dab96;
    frame_function->f_lineno = 385;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 385;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 385;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    branch_no_1:;
    tmp_binop_left_1 = var_N.object;

    tmp_binop_right_1 = const_int_pos_2;
    tmp_compare_left_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_12 = const_float_0_0;
    assert( var_val.object == NULL );
    var_val.object = INCREASE_REFCOUNT( tmp_assign_source_12 );

    tmp_assign_source_13 = const_float_0_0;
    assert( var_result.object == NULL );
    var_result.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    tmp_binop_left_2 = PyTuple_New( 1 );
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = Py_None;
    frame_function->f_lineno = 390;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_left_2, 0, tmp_tuple_element_1 );
    tmp_binop_right_2 = var_nd.object;

    tmp_assign_source_14 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto frame_exception_exit_1;
    }
    assert( var_slice1.object == NULL );
    var_slice1.object = tmp_assign_source_14;

    tmp_binop_left_3 = PyTuple_New( 1 );
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = Py_None;
    frame_function->f_lineno = 391;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_left_3, 0, tmp_tuple_element_2 );
    tmp_binop_right_3 = var_nd.object;

    tmp_assign_source_15 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    assert( var_slice2.object == NULL );
    var_slice2.object = tmp_assign_source_15;

    tmp_compare_left_6 = par_even.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241674 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = LIST_COPY( const_list_str_plain_avg_str_plain_last_str_plain_first_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_6 );

        frame_function->f_lineno = 392;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_6 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_make_exception_arg_3 = const_str_digest_e03d880bde19376f985800583ee83aaa;
    frame_function->f_lineno = 393;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 393;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_compare_left_7 = par_even.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241674 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = LIST_COPY( const_list_str_plain_avg_str_plain_first_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_7 );

        frame_function->f_lineno = 395;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_7 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = var_slice1.object;

    tmp_call_arg_element_8 = par_axis.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = const_int_neg_1;
    frame_function->f_lineno = 396;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto frame_exception_exit_1;
    }
    assert( var_slice1.object != NULL );
    {
        PyObject *old = var_slice1.object;
        var_slice1.object = tmp_assign_source_16;
        Py_DECREF( old );
    }

    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = var_slice2.object;

    tmp_call_arg_element_11 = par_axis.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = const_int_neg_2;
    frame_function->f_lineno = 397;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 397;
        goto frame_exception_exit_1;
    }
    assert( var_slice2.object != NULL );
    {
        PyObject *old = var_slice2.object;
        var_slice2.object = tmp_assign_source_17;
        Py_DECREF( old );
    }

    tmp_compare_left_8 = par_x.object;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_8 != tmp_compare_right_8 );
    if (tmp_isnot_2)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_subscr_target_4 = par_x.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = var_slice1.object;

    tmp_binop_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_5 = par_x.object;

    if ( tmp_subscr_target_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = var_slice2.object;

    tmp_binop_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = BINARY_OPERATION_SUB( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    assert( var_last_dx.object != NULL );
    {
        PyObject *old = var_last_dx.object;
        var_last_dx.object = tmp_assign_source_18;
        Py_DECREF( old );
    }

    branch_no_8:;
    tmp_assign_source_19 = var_val.object;

    assert( tmp_inplace_assign_1__inplace_start.object == NULL );
    tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

    // Tried code
    tmp_binop_left_5 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_left_7 = const_float_0_5;
    tmp_binop_right_7 = var_last_dx.object;

    tmp_binop_left_6 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_6 = par_y.object;

    tmp_subscr_subscript_6 = var_slice1.object;

    tmp_binop_left_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 400;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_7 = par_y.object;

    tmp_subscr_subscript_7 = var_slice2.object;

    tmp_binop_right_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_6 );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 400;
        goto try_finally_handler_1;
    }
    tmp_binop_right_6 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 400;
        goto try_finally_handler_1;
    }
    tmp_binop_right_5 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto try_finally_handler_1;
    }
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto try_finally_handler_1;
    }
    assert( tmp_inplace_assign_1__inplace_end.object == NULL );
    tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_20;

    tmp_compare_left_9 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_9 = tmp_inplace_assign_1__inplace_end.object;

    tmp_isnot_3 = ( tmp_compare_left_9 != tmp_compare_right_9 );
    if (tmp_isnot_3)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_21 = tmp_inplace_assign_1__inplace_end.object;

    assert( var_val.object != NULL );
    {
        PyObject *old = var_val.object;
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_21 );
        Py_DECREF( old );
    }

    branch_no_9:;
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
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__basic_simps );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_simps );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241724 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = par_y.object;

    if ( tmp_call_arg_element_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = const_int_0;
    tmp_binop_left_9 = var_N.object;

    if ( tmp_binop_left_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_9 = const_int_pos_3;
    tmp_call_arg_element_15 = BINARY_OPERATION_SUB( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = par_x.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = par_dx.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164857 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = par_axis.object;

    if ( tmp_call_arg_element_18 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 401;
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS6( tmp_called_9, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_15 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 401;
        goto frame_exception_exit_1;
    }
    if (var_result.object == NULL)
    {
        var_result.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = var_result.object;
        var_result.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    branch_no_7:;
    tmp_compare_left_10 = par_even.object;

    if ( tmp_compare_left_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241674 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_10 = LIST_COPY( const_list_str_plain_avg_str_plain_last_list );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_10 );

        frame_function->f_lineno = 403;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_10 );
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = var_slice1.object;

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164648 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = par_axis.object;

    if ( tmp_call_arg_element_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = const_int_0;
    frame_function->f_lineno = 404;
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_10, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 404;
        goto frame_exception_exit_1;
    }
    if (var_slice1.object == NULL)
    {
        var_slice1.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = var_slice1.object;
        var_slice1.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = var_slice2.object;

    if ( tmp_call_arg_element_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164700 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_23 = par_axis.object;

    if ( tmp_call_arg_element_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_24 = const_int_pos_1;
    frame_function->f_lineno = 405;
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3( tmp_called_11, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    if (var_slice2.object == NULL)
    {
        var_slice2.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = var_slice2.object;
        var_slice2.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    tmp_compare_left_11 = par_x.object;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_11 != tmp_compare_right_11 );
    if (tmp_isnot_4)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_subscr_target_8 = par_x.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    tmp_tuple_arg_2 = var_slice2.object;

    tmp_subscr_subscript_8 = PySequence_Tuple( tmp_tuple_arg_2 );
    if ( tmp_subscr_subscript_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_subscript_8 );
    if ( tmp_binop_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_9 = par_x.object;

    if ( tmp_subscr_target_9 == NULL )
    {
        Py_DECREF( tmp_binop_left_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    tmp_tuple_arg_3 = var_slice1.object;

    tmp_subscr_subscript_9 = PySequence_Tuple( tmp_tuple_arg_3 );
    if ( tmp_subscr_subscript_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_10 );

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_subscript_9 );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_10 );

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = BINARY_OPERATION_SUB( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_left_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    if (var_first_dx.object == NULL)
    {
        var_first_dx.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = var_first_dx.object;
        var_first_dx.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    branch_no_11:;
    tmp_assign_source_26 = var_val.object;

    if ( tmp_assign_source_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_2__inplace_start.object == NULL );
    tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_26 );

    // Tried code
    tmp_binop_left_11 = tmp_inplace_assign_2__inplace_start.object;

    tmp_binop_left_13 = const_float_0_5;
    tmp_binop_right_13 = var_first_dx.object;

    if ( tmp_binop_right_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241765 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }

    tmp_binop_left_12 = BINARY_OPERATION_MUL( tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }
    tmp_subscr_target_10 = par_y.object;

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_binop_left_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_10 = var_slice2.object;

    tmp_binop_left_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_binop_left_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );

        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }
    tmp_subscr_target_11 = par_y.object;

    if ( tmp_subscr_target_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_12 );
        Py_DECREF( tmp_binop_left_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_11 = var_slice1.object;

    tmp_binop_right_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_binop_right_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );
        Py_DECREF( tmp_binop_left_14 );

        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }
    tmp_binop_right_12 = BINARY_OPERATION_ADD( tmp_binop_left_14, tmp_binop_right_14 );
    Py_DECREF( tmp_binop_left_14 );
    Py_DECREF( tmp_binop_right_14 );
    if ( tmp_binop_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );

        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }
    tmp_binop_right_11 = BINARY_OPERATION_MUL( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_binop_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }
    tmp_assign_source_27 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto try_finally_handler_2;
    }
    assert( tmp_inplace_assign_2__inplace_end.object == NULL );
    tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_27;

    tmp_compare_left_12 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_12 = tmp_inplace_assign_2__inplace_end.object;

    tmp_isnot_5 = ( tmp_compare_left_12 != tmp_compare_right_12 );
    if (tmp_isnot_5)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_28 = tmp_inplace_assign_2__inplace_end.object;

    if (var_val.object == NULL)
    {
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
    }
    else
    {
        PyObject *old = var_val.object;
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
        Py_DECREF( old );
    }
    branch_no_12:;
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
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

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
    tmp_assign_source_29 = var_result.object;

    if ( tmp_assign_source_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19941 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_3__inplace_start.object == NULL );
    tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_29 );

    // Tried code
    tmp_binop_left_15 = tmp_inplace_assign_3__inplace_start.object;

    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__basic_simps );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_simps );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241724 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_25 = par_y.object;

    if ( tmp_call_arg_element_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_26 = const_int_pos_1;
    tmp_binop_left_16 = var_N.object;

    if ( tmp_binop_left_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }

    tmp_binop_right_16 = const_int_pos_2;
    tmp_call_arg_element_27 = BINARY_OPERATION_SUB( tmp_binop_left_16, tmp_binop_right_16 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }
    tmp_call_arg_element_28 = par_x.object;

    if ( tmp_call_arg_element_28 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_29 = par_dx.object;

    if ( tmp_call_arg_element_29 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164857 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_30 = par_axis.object;

    if ( tmp_call_arg_element_30 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 409;
    tmp_binop_right_15 = CALL_FUNCTION_WITH_ARGS6( tmp_called_12, tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27, tmp_call_arg_element_28, tmp_call_arg_element_29, tmp_call_arg_element_30 );
    Py_DECREF( tmp_call_arg_element_27 );
    if ( tmp_binop_right_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }
    tmp_assign_source_30 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_15, tmp_binop_right_15 );
    Py_DECREF( tmp_binop_right_15 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto try_finally_handler_3;
    }
    assert( tmp_inplace_assign_3__inplace_end.object == NULL );
    tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_30;

    tmp_compare_left_13 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_13 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_6 = ( tmp_compare_left_13 != tmp_compare_right_13 );
    if (tmp_isnot_6)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assign_source_31 = tmp_inplace_assign_3__inplace_end.object;

    if (var_result.object == NULL)
    {
        var_result.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
    }
    else
    {
        PyObject *old = var_result.object;
        var_result.object = INCREASE_REFCOUNT( tmp_assign_source_31 );
        Py_DECREF( old );
    }
    branch_no_13:;
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
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

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
    branch_no_10:;
    tmp_compare_left_14 = par_even.object;

    if ( tmp_compare_left_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241674 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_14 = const_str_plain_avg;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 410;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_assign_source_32 = var_val.object;

    if ( tmp_assign_source_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 411;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_4__inplace_start.object == NULL );
    tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_32 );

    // Tried code
    tmp_binop_left_17 = tmp_inplace_assign_4__inplace_start.object;

    tmp_binop_right_17 = const_float_2_0;
    tmp_assign_source_33 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_binop_left_17, tmp_binop_right_17 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 411;
        goto try_finally_handler_4;
    }
    assert( tmp_inplace_assign_4__inplace_end.object == NULL );
    tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_33;

    tmp_compare_left_15 = tmp_inplace_assign_4__inplace_start.object;

    tmp_compare_right_15 = tmp_inplace_assign_4__inplace_end.object;

    tmp_isnot_7 = ( tmp_compare_left_15 != tmp_compare_right_15 );
    if (tmp_isnot_7)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_assign_source_34 = tmp_inplace_assign_4__inplace_end.object;

    if (var_val.object == NULL)
    {
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_34 );
    }
    else
    {
        PyObject *old = var_val.object;
        var_val.object = INCREASE_REFCOUNT( tmp_assign_source_34 );
        Py_DECREF( old );
    }
    branch_no_15:;
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
    tmp_result = tmp_inplace_assign_4__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_4__inplace_start.object );
        tmp_inplace_assign_4__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_4__inplace_end.object );
    tmp_inplace_assign_4__inplace_end.object = NULL;

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
    tmp_assign_source_35 = var_result.object;

    if ( tmp_assign_source_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19941 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 412;
        goto frame_exception_exit_1;
    }

    assert( tmp_inplace_assign_5__inplace_start.object == NULL );
    tmp_inplace_assign_5__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_35 );

    // Tried code
    tmp_binop_left_18 = tmp_inplace_assign_5__inplace_start.object;

    tmp_binop_right_18 = const_float_2_0;
    tmp_assign_source_36 = BINARY_OPERATION( PyNumber_InPlaceTrueDivide, tmp_binop_left_18, tmp_binop_right_18 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 412;
        goto try_finally_handler_5;
    }
    assert( tmp_inplace_assign_5__inplace_end.object == NULL );
    tmp_inplace_assign_5__inplace_end.object = tmp_assign_source_36;

    tmp_compare_left_16 = tmp_inplace_assign_5__inplace_start.object;

    tmp_compare_right_16 = tmp_inplace_assign_5__inplace_end.object;

    tmp_isnot_8 = ( tmp_compare_left_16 != tmp_compare_right_16 );
    if (tmp_isnot_8)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_assign_source_37 = tmp_inplace_assign_5__inplace_end.object;

    if (var_result.object == NULL)
    {
        var_result.object = INCREASE_REFCOUNT( tmp_assign_source_37 );
    }
    else
    {
        PyObject *old = var_result.object;
        var_result.object = INCREASE_REFCOUNT( tmp_assign_source_37 );
        Py_DECREF( old );
    }
    branch_no_16:;
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
    tmp_result = tmp_inplace_assign_5__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_5__inplace_start.object );
        tmp_inplace_assign_5__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_5__inplace_end.object );
    tmp_inplace_assign_5__inplace_end.object = NULL;

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
    branch_no_14:;
    tmp_binop_left_19 = var_result.object;

    if ( tmp_binop_left_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19941 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_19 = var_val.object;

    if ( tmp_binop_right_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_38 = BINARY_OPERATION_ADD( tmp_binop_left_19, tmp_binop_right_19 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 413;
        goto frame_exception_exit_1;
    }
    if (var_result.object == NULL)
    {
        var_result.object = tmp_assign_source_38;
    }
    else
    {
        PyObject *old = var_result.object;
        var_result.object = tmp_assign_source_38;
        Py_DECREF( old );
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__basic_simps );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_simps );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241724 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_31 = par_y.object;

    tmp_call_arg_element_32 = const_int_0;
    tmp_binop_left_20 = var_N.object;

    tmp_binop_right_20 = const_int_pos_2;
    tmp_call_arg_element_33 = BINARY_OPERATION_SUB( tmp_binop_left_20, tmp_binop_right_20 );
    if ( tmp_call_arg_element_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = par_x.object;

    if ( tmp_call_arg_element_34 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_35 = par_dx.object;

    if ( tmp_call_arg_element_35 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164857 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_36 = par_axis.object;

    if ( tmp_call_arg_element_36 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 415;
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS6( tmp_called_13, tmp_call_arg_element_31, tmp_call_arg_element_32, tmp_call_arg_element_33, tmp_call_arg_element_34, tmp_call_arg_element_35, tmp_call_arg_element_36 );
    Py_DECREF( tmp_call_arg_element_33 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 415;
        goto frame_exception_exit_1;
    }
    assert( var_result.object == NULL );
    var_result.object = tmp_assign_source_39;

    branch_end_5:;
    tmp_cond_value_1 = var_returnshape.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241819 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 416;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_source_name_10 = par_x.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_reshape );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_37 = var_saveshape.object;

    if ( tmp_call_arg_element_37 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241876 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 417;
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_37 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 417;
        goto frame_exception_exit_1;
    }
    if (par_x.object == NULL)
    {
        par_x.object = tmp_assign_source_40;
    }
    else
    {
        PyObject *old = par_x.object;
        par_x.object = tmp_assign_source_40;
        Py_DECREF( old );
    }
    branch_no_17:;

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
    if ((var_nd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nd,
            var_nd.object
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
    if ((var_last_dx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_last_dx,
            var_last_dx.object
        );

    }
    if ((var_first_dx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_first_dx,
            var_first_dx.object
        );

    }
    if ((var_returnshape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_returnshape,
            var_returnshape.object
        );

    }
    if ((var_shapex.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shapex,
            var_shapex.object
        );

    }
    if ((var_saveshape.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_saveshape,
            var_saveshape.object
        );

    }
    if ((var_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            var_val.object
        );

    }
    if ((var_result.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_result,
            var_result.object
        );

    }
    if ((var_slice1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice1,
            var_slice1.object
        );

    }
    if ((var_slice2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice2,
            var_slice2.object
        );

    }
    if ((par_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            par_y.object
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
    if ((par_dx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dx,
            par_dx.object
        );

    }
    if ((par_axis.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_axis,
            par_axis.object
        );

    }
    if ((par_even.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_even,
            par_even.object
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
    tmp_return_value = var_result.object;

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
static PyObject *fparse_function_8_simps_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_y = NULL;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_dx = NULL;
    PyObject *_python_par_axis = NULL;
    PyObject *_python_par_even = NULL;
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
                PyErr_Format( PyExc_TypeError, "simps() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_y == key )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

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
            if ( found == false && const_str_plain_dx == key )
            {
                assert( _python_par_dx == NULL );
                _python_par_dx = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_axis == key )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_even == key )
            {
                assert( _python_par_even == NULL );
                _python_par_even = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_y, key ) == 1 )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dx, key ) == 1 )
            {
                assert( _python_par_dx == NULL );
                _python_par_dx = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_axis, key ) == 1 )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_even, key ) == 1 )
            {
                assert( _python_par_even == NULL );
                _python_par_even = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "simps() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_y != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_y = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_y == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_y = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_dx != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_dx = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_dx == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_dx = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_axis != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_axis = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_axis == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_axis = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_even != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_even = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_even == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_even = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_y == NULL || _python_par_x == NULL || _python_par_dx == NULL || _python_par_axis == NULL || _python_par_even == NULL ))
    {
        PyObject *values[] = { _python_par_y, _python_par_x, _python_par_dx, _python_par_axis, _python_par_even };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_simps_of_module_scipy$integrate$quadrature( self, _python_par_y, _python_par_x, _python_par_dx, _python_par_axis, _python_par_even );

error_exit:;

    Py_XDECREF( _python_par_y );
    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_dx );
    Py_XDECREF( _python_par_axis );
    Py_XDECREF( _python_par_even );

    return NULL;
}

static PyObject *dparse_function_8_simps_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_8_simps_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_simps_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_romb_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_y, PyObject *_python_par_dx, PyObject *_python_par_axis, PyObject *_python_par_show )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_y; par_y.object = _python_par_y;
    PyObjectLocalVariable par_dx; par_dx.object = _python_par_dx;
    PyObjectLocalVariable par_axis; par_axis.object = _python_par_axis;
    PyObjectLocalVariable par_show; par_show.object = _python_par_show;
    PyObjectLocalVariable var_nd;
    PyObjectLocalVariable var_Nsamps;
    PyObjectLocalVariable var_Ninterv;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_R;
    PyObjectLocalVariable var_all;
    PyObjectLocalVariable var_slice0;
    PyObjectLocalVariable var_slicem1;
    PyObjectLocalVariable var_h;
    PyObjectLocalVariable var_slice_R;
    PyObjectLocalVariable var_start;
    PyObjectLocalVariable var_stop;
    PyObjectLocalVariable var_step;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_j;
    PyObjectLocalVariable var_precis;
    PyObjectLocalVariable var_width;
    PyObjectLocalVariable var_formstr;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_1__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_2__inplace_end;
    PyObjectTempVariable tmp_assign_unpack_1__assign_source;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_3__inplace_end;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_start;
    PyObjectTempVariable tmp_inplace_assign_4__inplace_end;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
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
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_high_2;
    PyObject *tmp_range2_high_3;
    PyObject *tmp_range2_high_4;
    PyObject *tmp_range2_low_1;
    PyObject *tmp_range2_low_2;
    PyObject *tmp_range2_low_3;
    PyObject *tmp_range2_low_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_str_arg_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c052591914252cbe5cc68d255c365fc8, module_scipy$integrate$quadrature );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_y.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 457;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }
    if (par_y.object == NULL)
    {
        par_y.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_y.object;
        par_y.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_source_name_1 = par_y.object;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 458;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 458;
        goto frame_exception_exit_1;
    }
    assert( var_nd.object == NULL );
    var_nd.object = tmp_assign_source_2;

    tmp_source_name_2 = par_y.object;

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = par_axis.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {
        Py_DECREF( tmp_subscr_target_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }
    assert( var_Nsamps.object == NULL );
    var_Nsamps.object = tmp_assign_source_3;

    tmp_binop_left_1 = var_Nsamps.object;

    tmp_binop_right_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 460;
        goto frame_exception_exit_1;
    }
    assert( var_Ninterv.object == NULL );
    var_Ninterv.object = tmp_assign_source_4;

    tmp_assign_source_5 = const_int_pos_1;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = const_int_0;
    assert( var_k.object == NULL );
    var_k.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    loop_start_1:;
    tmp_compare_left_1 = var_n.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 463;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = var_Ninterv.object;

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_assign_source_7 = var_n.object;

    if ( tmp_assign_source_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }

    if (tmp_inplace_assign_1__inplace_start.object == NULL)
    {
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_start.object;
        tmp_inplace_assign_1__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_binop_right_2 = const_int_pos_1;
    tmp_assign_source_8 = BINARY_OPERATION( PyNumber_InPlaceLshift, tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 464;
        goto try_finally_handler_1;
    }
    if (tmp_inplace_assign_1__inplace_end.object == NULL)
    {
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_1__inplace_end.object;
        tmp_inplace_assign_1__inplace_end.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_compare_left_2 = tmp_inplace_assign_1__inplace_start.object;

    tmp_compare_right_2 = tmp_inplace_assign_1__inplace_end.object;

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
    tmp_assign_source_9 = tmp_inplace_assign_1__inplace_end.object;

    if (var_n.object == NULL)
    {
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_n.object;
        var_n.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    branch_no_2:;
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
    tmp_assign_source_10 = var_k.object;

    if ( tmp_assign_source_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }

    if (tmp_inplace_assign_2__inplace_start.object == NULL)
    {
        tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_start.object;
        tmp_inplace_assign_2__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_3 = tmp_inplace_assign_2__inplace_start.object;

    tmp_binop_right_3 = const_int_pos_1;
    tmp_assign_source_11 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 465;
        goto try_finally_handler_2;
    }
    if (tmp_inplace_assign_2__inplace_end.object == NULL)
    {
        tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_2__inplace_end.object;
        tmp_inplace_assign_2__inplace_end.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    tmp_compare_left_3 = tmp_inplace_assign_2__inplace_start.object;

    tmp_compare_right_3 = tmp_inplace_assign_2__inplace_end.object;

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
    tmp_assign_source_12 = tmp_inplace_assign_2__inplace_end.object;

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    branch_no_3:;
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
    tmp_result = tmp_inplace_assign_2__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_2__inplace_start.object );
        tmp_inplace_assign_2__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_2__inplace_end.object );
    tmp_inplace_assign_2__inplace_end.object = NULL;

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
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 463;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_compare_left_4 = var_n.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = var_Ninterv.object;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241931 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_1 = const_str_digest_7051cbaab0e484ea1edda9504ac94f98;
    frame_function->f_lineno = 467;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 467;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 467;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_assign_source_13 = PyDict_New();
    assert( var_R.object == NULL );
    var_R.object = tmp_assign_source_13;

    tmp_binop_left_4 = PyTuple_New( 1 );
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 471;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = Py_None;
    frame_function->f_lineno = 471;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 471;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_left_4, 0, tmp_tuple_element_1 );
    tmp_binop_right_4 = var_nd.object;

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 176569 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 471;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 471;
        goto frame_exception_exit_1;
    }
    assert( var_all.object == NULL );
    var_all.object = tmp_assign_source_14;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = var_all.object;

    tmp_call_arg_element_4 = par_axis.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = const_int_0;
    frame_function->f_lineno = 472;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }
    assert( var_slice0.object == NULL );
    var_slice0.object = tmp_assign_source_15;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 473;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = var_all.object;

    tmp_call_arg_element_7 = par_axis.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 473;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = const_int_neg_1;
    frame_function->f_lineno = 473;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 473;
        goto frame_exception_exit_1;
    }
    assert( var_slicem1.object == NULL );
    var_slicem1.object = tmp_assign_source_16;

    tmp_binop_left_6 = var_Ninterv.object;

    if ( tmp_binop_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241931 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 474;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 474;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = par_dx.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 164857 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 474;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 474;
    tmp_binop_right_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_9 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_5 = const_float_1_0;
    tmp_assign_source_17 = BINARY_OPERATION_MUL( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 474;
        goto frame_exception_exit_1;
    }
    assert( var_h.object == NULL );
    var_h.object = tmp_assign_source_17;

    tmp_subscr_target_2 = par_y.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = var_slice0.object;

    tmp_binop_left_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_binop_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_3 = par_y.object;

    if ( tmp_subscr_target_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = var_slicem1.object;

    tmp_binop_right_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_9 );

        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_8 = BINARY_OPERATION_ADD( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_left_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = const_float_2_0;
    tmp_binop_left_7 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_7 = var_h.object;

    tmp_ass_subvalue_1 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_R.object;

    tmp_ass_subscript_1 = const_tuple_int_pos_1_int_pos_1_tuple;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 475;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = var_all.object;

    assert( var_slice_R.object == NULL );
    var_slice_R.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

    // Tried code
    tmp_assign_source_19 = var_Ninterv.object;

    if ( tmp_assign_source_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241931 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 477;
        goto try_finally_handler_3;
    }

    assert( tmp_assign_unpack_1__assign_source.object == NULL );
    tmp_assign_unpack_1__assign_source.object = INCREASE_REFCOUNT( tmp_assign_source_19 );

    tmp_assign_source_20 = tmp_assign_unpack_1__assign_source.object;

    assert( var_start.object == NULL );
    var_start.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

    tmp_assign_source_21 = tmp_assign_unpack_1__assign_source.object;

    assert( var_stop.object == NULL );
    var_stop.object = INCREASE_REFCOUNT( tmp_assign_source_21 );

    tmp_assign_source_22 = tmp_assign_unpack_1__assign_source.object;

    assert( var_step.object == NULL );
    var_step.object = INCREASE_REFCOUNT( tmp_assign_source_22 );

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
    Py_XDECREF( tmp_assign_unpack_1__assign_source.object );
    tmp_assign_unpack_1__assign_source.object = NULL;

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
    tmp_range2_low_1 = const_int_pos_2;
    tmp_binop_left_10 = var_k.object;

    if ( tmp_binop_left_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 478;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_10 = const_int_pos_1;
    tmp_range2_high_1 = BINARY_OPERATION_ADD( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 478;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 478;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 478;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_23;

    // Tried code
    loop_start_2:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_24 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_24 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 478;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_24;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_24;
        Py_DECREF( old );
    }
    tmp_assign_source_25 = tmp_for_loop_1__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_25 );
        Py_DECREF( old );
    }
    tmp_assign_source_26 = var_start.object;

    if ( tmp_assign_source_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 479;
        goto try_finally_handler_4;
    }

    if (tmp_inplace_assign_3__inplace_start.object == NULL)
    {
        tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_3__inplace_start.object;
        tmp_inplace_assign_3__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_11 = tmp_inplace_assign_3__inplace_start.object;

    tmp_binop_right_11 = const_int_pos_1;
    tmp_assign_source_27 = BINARY_OPERATION( PyNumber_InPlaceRshift, tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 479;
        goto try_finally_handler_5;
    }
    if (tmp_inplace_assign_3__inplace_end.object == NULL)
    {
        tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_3__inplace_end.object;
        tmp_inplace_assign_3__inplace_end.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_compare_left_5 = tmp_inplace_assign_3__inplace_start.object;

    tmp_compare_right_5 = tmp_inplace_assign_3__inplace_end.object;

    tmp_isnot_3 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if (tmp_isnot_3)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_28 = tmp_inplace_assign_3__inplace_end.object;

    if (var_start.object == NULL)
    {
        var_start.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
    }
    else
    {
        PyObject *old = var_start.object;
        var_start.object = INCREASE_REFCOUNT( tmp_assign_source_28 );
        Py_DECREF( old );
    }
    branch_no_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_3__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_3__inplace_start.object );
        tmp_inplace_assign_3__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_3__inplace_end.object );
    tmp_inplace_assign_3__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_4;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tupleset );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241584 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_10 = var_slice_R.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241984 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_11 = par_axis.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }

    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_slice );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_13 = var_start.object;

    if ( tmp_call_arg_element_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 43988 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_14 = var_stop.object;

    if ( tmp_call_arg_element_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 44039 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_15 = var_step.object;

    if ( tmp_call_arg_element_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50835 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 480;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 480;
    tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 480;
        goto try_finally_handler_4;
    }
    if (var_slice_R.object == NULL)
    {
        var_slice_R.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = var_slice_R.object;
        var_slice_R.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    tmp_assign_source_30 = var_step.object;

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50835 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 481;
        goto try_finally_handler_4;
    }

    if (tmp_inplace_assign_4__inplace_start.object == NULL)
    {
        tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = tmp_inplace_assign_4__inplace_start.object;
        tmp_inplace_assign_4__inplace_start.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    // Tried code
    tmp_binop_left_12 = tmp_inplace_assign_4__inplace_start.object;

    tmp_binop_right_12 = const_int_pos_1;
    tmp_assign_source_31 = BINARY_OPERATION( PyNumber_InPlaceRshift, tmp_binop_left_12, tmp_binop_right_12 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 481;
        goto try_finally_handler_6;
    }
    if (tmp_inplace_assign_4__inplace_end.object == NULL)
    {
        tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = tmp_inplace_assign_4__inplace_end.object;
        tmp_inplace_assign_4__inplace_end.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    tmp_compare_left_6 = tmp_inplace_assign_4__inplace_start.object;

    tmp_compare_right_6 = tmp_inplace_assign_4__inplace_end.object;

    tmp_isnot_4 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if (tmp_isnot_4)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_32 = tmp_inplace_assign_4__inplace_end.object;

    if (var_step.object == NULL)
    {
        var_step.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
    }
    else
    {
        PyObject *old = var_step.object;
        var_step.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
        Py_DECREF( old );
    }
    branch_no_6:;
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

    tmp_tried_lineno_5 = frame_function->f_lineno;
    tmp_result = tmp_inplace_assign_4__inplace_start.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_inplace_assign_4__inplace_start.object );
        tmp_inplace_assign_4__inplace_start.object = NULL;
    }

    assert( tmp_result != false );
    Py_XDECREF( tmp_inplace_assign_4__inplace_end.object );
    tmp_inplace_assign_4__inplace_end.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
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
    tmp_binop_left_13 = const_float_0_5;
    tmp_subscr_target_4 = var_R.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    tmp_subscr_subscript_4 = PyTuple_New( 2 );
    tmp_binop_left_15 = var_i.object;

    if ( tmp_binop_left_15 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    tmp_binop_right_15 = const_int_pos_1;
    tmp_tuple_element_2 = BINARY_OPERATION_SUB( tmp_binop_left_15, tmp_binop_right_15 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_4 );

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 1, tmp_tuple_element_2 );
    tmp_binop_left_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_binop_left_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    tmp_binop_left_16 = var_h.object;

    if ( tmp_binop_left_16 == NULL )
    {
        Py_DECREF( tmp_binop_left_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7936 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_add );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_add );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61315 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_reduce );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_14 );

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    tmp_subscr_target_5 = par_y.object;

    if ( tmp_subscr_target_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_14 );
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    tmp_subscr_subscript_5 = var_slice_R.object;

    if ( tmp_subscr_subscript_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_14 );
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241984 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_14 );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_17 = par_axis.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_binop_left_14 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 55922 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 482;
    tmp_binop_right_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_binop_right_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_14 );

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    tmp_binop_right_14 = BINARY_OPERATION_MUL( tmp_binop_left_16, tmp_binop_right_16 );
    Py_DECREF( tmp_binop_right_16 );
    if ( tmp_binop_right_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_14 );

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    tmp_binop_right_13 = BINARY_OPERATION_ADD( tmp_binop_left_14, tmp_binop_right_14 );
    Py_DECREF( tmp_binop_left_14 );
    Py_DECREF( tmp_binop_right_14 );
    if ( tmp_binop_right_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    tmp_ass_subvalue_2 = BINARY_OPERATION_MUL( tmp_binop_left_13, tmp_binop_right_13 );
    Py_DECREF( tmp_binop_right_13 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    tmp_ass_subscribed_2 = var_R.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    tmp_ass_subscript_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_i.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subscript_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_ass_subscript_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_ass_subscript_2, 1, tmp_tuple_element_3 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscript_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 482;
        goto try_finally_handler_4;
    }
    tmp_range2_low_2 = const_int_pos_2;
    tmp_binop_left_17 = var_i.object;

    if ( tmp_binop_left_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 483;
        goto try_finally_handler_4;
    }

    tmp_binop_right_17 = const_int_pos_1;
    tmp_range2_high_2 = BINARY_OPERATION_ADD( tmp_binop_left_17, tmp_binop_right_17 );
    if ( tmp_range2_high_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 483;
        goto try_finally_handler_4;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE2( tmp_range2_low_2, tmp_range2_high_2 );
    Py_DECREF( tmp_range2_high_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 483;
        goto try_finally_handler_4;
    }
    tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 483;
        goto try_finally_handler_4;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_33;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_33;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_3:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_34 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_34 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 483;
            goto try_finally_handler_7;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_34;
        Py_DECREF( old );
    }
    tmp_assign_source_35 = tmp_for_loop_2__iter_value.object;

    if (var_j.object == NULL)
    {
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
        Py_DECREF( old );
    }
    tmp_subscr_target_6 = var_R.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_6 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_i.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 0, tmp_tuple_element_4 );
    tmp_binop_left_19 = var_j.object;

    tmp_binop_right_19 = const_int_pos_1;
    tmp_tuple_element_4 = BINARY_OPERATION_SUB( tmp_binop_left_19, tmp_binop_right_19 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_6 );

        frame_function->f_lineno = 484;
        goto try_finally_handler_7;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 1, tmp_tuple_element_4 );
    tmp_binop_left_18 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_subscript_6 );
    if ( tmp_binop_left_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 484;
        goto try_finally_handler_7;
    }
    tmp_subscr_target_7 = var_R.object;

    if ( tmp_subscr_target_7 == NULL )
    {
        Py_DECREF( tmp_binop_left_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_7 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_i.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_subscr_subscript_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_7, 0, tmp_tuple_element_5 );
    tmp_binop_left_22 = var_j.object;

    tmp_binop_right_22 = const_int_pos_1;
    tmp_tuple_element_5 = BINARY_OPERATION_SUB( tmp_binop_left_22, tmp_binop_right_22 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_subscr_subscript_7 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_7, 1, tmp_tuple_element_5 );
    tmp_binop_left_21 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_subscript_7 );
    if ( tmp_binop_left_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    tmp_subscr_target_8 = var_R.object;

    if ( tmp_subscr_target_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_8 = PyTuple_New( 2 );
    tmp_binop_left_23 = var_i.object;

    if ( tmp_binop_left_23 == NULL )
    {
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_21 );
        Py_DECREF( tmp_subscr_subscript_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }

    tmp_binop_right_23 = const_int_pos_1;
    tmp_tuple_element_6 = BINARY_OPERATION_SUB( tmp_binop_left_23, tmp_binop_right_23 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_21 );
        Py_DECREF( tmp_subscr_subscript_8 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_8, 0, tmp_tuple_element_6 );
    tmp_binop_left_24 = var_j.object;

    tmp_binop_right_24 = const_int_pos_1;
    tmp_tuple_element_6 = BINARY_OPERATION_SUB( tmp_binop_left_24, tmp_binop_right_24 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_21 );
        Py_DECREF( tmp_subscr_subscript_8 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_8, 1, tmp_tuple_element_6 );
    tmp_binop_right_21 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    Py_DECREF( tmp_subscr_subscript_8 );
    if ( tmp_binop_right_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_21 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    tmp_binop_left_20 = BINARY_OPERATION_SUB( tmp_binop_left_21, tmp_binop_right_21 );
    Py_DECREF( tmp_binop_left_21 );
    Py_DECREF( tmp_binop_right_21 );
    if ( tmp_binop_left_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    tmp_binop_left_26 = const_int_pos_1;
    tmp_binop_left_27 = const_int_pos_2;
    tmp_binop_left_28 = var_j.object;

    tmp_binop_right_28 = const_int_pos_1;
    tmp_binop_right_27 = BINARY_OPERATION_SUB( tmp_binop_left_28, tmp_binop_right_28 );
    if ( tmp_binop_right_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_20 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    tmp_binop_right_26 = BINARY_OPERATION_MUL( tmp_binop_left_27, tmp_binop_right_27 );
    Py_DECREF( tmp_binop_right_27 );
    if ( tmp_binop_right_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_20 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    tmp_binop_left_25 = BINARY_OPERATION( PyNumber_Lshift, tmp_binop_left_26, tmp_binop_right_26 );
    Py_DECREF( tmp_binop_right_26 );
    if ( tmp_binop_left_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_20 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    tmp_binop_right_25 = const_int_pos_1;
    tmp_binop_right_20 = BINARY_OPERATION_SUB( tmp_binop_left_25, tmp_binop_right_25 );
    Py_DECREF( tmp_binop_left_25 );
    if ( tmp_binop_right_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );
        Py_DECREF( tmp_binop_left_20 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    tmp_binop_right_18 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_20, tmp_binop_right_20 );
    Py_DECREF( tmp_binop_left_20 );
    Py_DECREF( tmp_binop_right_20 );
    if ( tmp_binop_right_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_18 );

        frame_function->f_lineno = 485;
        goto try_finally_handler_7;
    }
    tmp_ass_subvalue_3 = BINARY_OPERATION_ADD( tmp_binop_left_18, tmp_binop_right_18 );
    Py_DECREF( tmp_binop_left_18 );
    Py_DECREF( tmp_binop_right_18 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 484;
        goto try_finally_handler_7;
    }
    tmp_ass_subscribed_3 = var_R.object;

    if ( tmp_ass_subscribed_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto try_finally_handler_7;
    }

    tmp_ass_subscript_3 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_i.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subscript_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 484;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_ass_subscript_3, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_j.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_ass_subscript_3, 1, tmp_tuple_element_7 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscript_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 484;
        goto try_finally_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 483;
        goto try_finally_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
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
    tmp_binop_left_29 = var_h.object;

    if ( tmp_binop_left_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 7936 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 486;
        goto try_finally_handler_4;
    }

    tmp_binop_right_29 = const_float_2_0;
    tmp_assign_source_36 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_29, tmp_binop_right_29 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 486;
        goto try_finally_handler_4;
    }
    if (var_h.object == NULL)
    {
        var_h.object = tmp_assign_source_36;
    }
    else
    {
        PyObject *old = var_h.object;
        var_h.object = tmp_assign_source_36;
        Py_DECREF( old );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 478;
        goto try_finally_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
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

    tmp_tried_lineno_7 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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
    tmp_cond_value_1 = par_show.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 488;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72338 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 489;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_9 = var_R.object;

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 489;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_9 = const_tuple_int_pos_1_int_pos_1_tuple;
    tmp_call_arg_element_18 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 489;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_18 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 489;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 489;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_called_10 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 490;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = const_str_digest_ea80b3f062486e5f9f8eaa5b2d4c12e2;
    frame_function->f_lineno = 490;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 490;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_8;
    branch_no_8:;
    // Tried block of try/except
    tmp_subscr_target_10 = par_show.object;

    if ( tmp_subscr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 494;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_10 = const_int_0;
    tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 494;
        goto try_except_handler_1;
    }
    assert( var_precis.object == NULL );
    var_precis.object = tmp_assign_source_37;

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
    tmp_compare_left_7 = PyThreadState_GET()->exc_type;
    tmp_compare_right_7 = PyTuple_New( 2 );
    tmp_tuple_element_8 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_compare_right_7, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = PyExc_IndexError;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_compare_right_7, 1, tmp_tuple_element_8 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_7 );

        frame_function->f_lineno = 495;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_7 );
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_38 = const_int_pos_5;
    if (var_precis.object == NULL)
    {
        var_precis.object = INCREASE_REFCOUNT( tmp_assign_source_38 );
    }
    else
    {
        PyObject *old = var_precis.object;
        var_precis.object = INCREASE_REFCOUNT( tmp_assign_source_38 );
        Py_DECREF( old );
    }
    goto branch_end_9;
    branch_no_9:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_9:;
    try_except_end_1:;
    // Tried block of try/except
    tmp_subscr_target_11 = par_show.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 498;
        goto try_except_handler_2;
    }

    tmp_subscr_subscript_11 = const_int_pos_1;
    tmp_assign_source_39 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 498;
        goto try_except_handler_2;
    }
    assert( var_width.object == NULL );
    var_width.object = tmp_assign_source_39;

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
    tmp_compare_left_8 = PyThreadState_GET()->exc_type;
    tmp_compare_right_8 = PyTuple_New( 2 );
    tmp_tuple_element_9 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_compare_right_8, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = PyExc_IndexError;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_compare_right_8, 1, tmp_tuple_element_9 );
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_8 );

        frame_function->f_lineno = 499;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_8 );
    if (tmp_exc_match_exception_match_2 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_40 = const_int_pos_8;
    if (var_width.object == NULL)
    {
        var_width.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
    }
    else
    {
        PyObject *old = var_width.object;
        var_width.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
        Py_DECREF( old );
    }
    goto branch_end_10;
    branch_no_10:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_10:;
    try_except_end_2:;
    tmp_binop_left_33 = const_str_chr_37;
    tmp_str_arg_1 = var_width.object;

    if ( tmp_str_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42025 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_33 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_binop_right_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_32 = BINARY_OPERATION_ADD( tmp_binop_left_33, tmp_binop_right_33 );
    Py_DECREF( tmp_binop_right_33 );
    if ( tmp_binop_left_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_32 = const_str_dot;
    tmp_binop_left_31 = BINARY_OPERATION_ADD( tmp_binop_left_32, tmp_binop_right_32 );
    Py_DECREF( tmp_binop_left_32 );
    if ( tmp_binop_left_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }
    tmp_str_arg_2 = var_precis.object;

    if ( tmp_str_arg_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242134 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_31 = PyObject_Str( tmp_str_arg_2 );
    if ( tmp_binop_right_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_31 );

        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_30 = BINARY_OPERATION_ADD( tmp_binop_left_31, tmp_binop_right_31 );
    Py_DECREF( tmp_binop_left_31 );
    Py_DECREF( tmp_binop_right_31 );
    if ( tmp_binop_left_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_30 = const_str_plain_f;
    tmp_assign_source_41 = BINARY_OPERATION_ADD( tmp_binop_left_30, tmp_binop_right_30 );
    Py_DECREF( tmp_binop_left_30 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 501;
        goto frame_exception_exit_1;
    }
    assert( var_formstr.object == NULL );
    var_formstr.object = tmp_assign_source_41;

    tmp_called_11 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_20 = const_str_digest_c83db1debdd5198d701ea1d0abe31726;
    frame_function->f_lineno = 503;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 503;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_12 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 504;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = const_str_digest_67ed3d29d7f8c5d469ab9423a57a959e;
    frame_function->f_lineno = 504;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 504;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_range2_low_3 = const_int_pos_1;
    tmp_binop_left_34 = var_k.object;

    if ( tmp_binop_left_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 505;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_34 = const_int_pos_1;
    tmp_range2_high_3 = BINARY_OPERATION_ADD( tmp_binop_left_34, tmp_binop_right_34 );
    if ( tmp_range2_high_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_3 = BUILTIN_RANGE2( tmp_range2_low_3, tmp_range2_high_3 );
    Py_DECREF( tmp_range2_high_3 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_42 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_42;

    // Tried code
    loop_start_4:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_43 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_43 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 505;
            goto try_finally_handler_8;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_43;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_43;
        Py_DECREF( old );
    }
    tmp_assign_source_44 = tmp_for_loop_3__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_44 );
        Py_DECREF( old );
    }
    tmp_range2_low_4 = const_int_pos_1;
    tmp_binop_left_35 = var_i.object;

    tmp_binop_right_35 = const_int_pos_1;
    tmp_range2_high_4 = BINARY_OPERATION_ADD( tmp_binop_left_35, tmp_binop_right_35 );
    if ( tmp_range2_high_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 506;
        goto try_finally_handler_8;
    }
    tmp_iter_arg_4 = BUILTIN_RANGE2( tmp_range2_low_4, tmp_range2_high_4 );
    Py_DECREF( tmp_range2_high_4 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 506;
        goto try_finally_handler_8;
    }
    tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 506;
        goto try_finally_handler_8;
    }
    if (tmp_for_loop_4__for_iterator.object == NULL)
    {
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_45;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__for_iterator.object;
        tmp_for_loop_4__for_iterator.object = tmp_assign_source_45;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_5:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_46 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_46 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 506;
            goto try_finally_handler_9;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_46;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_46;
        Py_DECREF( old );
    }
    tmp_assign_source_47 = tmp_for_loop_4__iter_value.object;

    if (var_j.object == NULL)
    {
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_47 );
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_47 );
        Py_DECREF( old );
    }
    tmp_called_13 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_9;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_binop_left_36 = var_formstr.object;

    if ( tmp_binop_left_36 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242186 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_9;
    }

    tmp_subscr_target_12 = var_R.object;

    if ( tmp_subscr_target_12 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_9;
    }

    tmp_subscr_subscript_12 = PyTuple_New( 2 );
    tmp_tuple_element_11 = var_i.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_subscr_subscript_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 507;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_12, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_j.object;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_12, 1, tmp_tuple_element_11 );
    tmp_binop_right_36 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    Py_DECREF( tmp_subscr_subscript_12 );
    if ( tmp_binop_right_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 507;
        goto try_finally_handler_9;
    }
    tmp_tuple_element_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_36, tmp_binop_right_36 );
    Py_DECREF( tmp_binop_right_36 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 507;
        goto try_finally_handler_9;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_10 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
    frame_function->f_lineno = 507;
    tmp_unused = CALL_FUNCTION( tmp_called_13, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 507;
        goto try_finally_handler_9;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 506;
        goto try_finally_handler_9;
    }
    goto loop_start_5;
    loop_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_8 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_8;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_8;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_called_14 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 508;
        goto try_finally_handler_8;
    }
    frame_function->f_lineno = 508;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 508;
        goto try_finally_handler_8;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 505;
        goto try_finally_handler_8;
    }
    goto loop_start_4;
    loop_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

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
    tmp_called_15 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_str_digest_477e9194db0e0a0de3073f445995c766;
    frame_function->f_lineno = 509;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 509;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_8:;
    branch_no_7:;
    tmp_subscr_target_13 = var_R.object;

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242037 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 511;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_13 = PyTuple_New( 2 );
    tmp_tuple_element_12 = var_k.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 511;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_13, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = var_k.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 511;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_13, 1, tmp_tuple_element_12 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    Py_DECREF( tmp_subscr_subscript_13 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 511;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

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
    if ((var_nd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nd,
            var_nd.object
        );

    }
    if ((var_Nsamps.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Nsamps,
            var_Nsamps.object
        );

    }
    if ((var_Ninterv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Ninterv,
            var_Ninterv.object
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
    if ((var_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            var_k.object
        );

    }
    if ((var_R.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_R,
            var_R.object
        );

    }
    if ((var_all.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_all,
            var_all.object
        );

    }
    if ((var_slice0.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice0,
            var_slice0.object
        );

    }
    if ((var_slicem1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slicem1,
            var_slicem1.object
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
    if ((var_slice_R.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_slice_R,
            var_slice_R.object
        );

    }
    if ((var_start.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_start,
            var_start.object
        );

    }
    if ((var_stop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stop,
            var_stop.object
        );

    }
    if ((var_step.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_step,
            var_step.object
        );

    }
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
        );

    }
    if ((var_j.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_j,
            var_j.object
        );

    }
    if ((var_precis.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_precis,
            var_precis.object
        );

    }
    if ((var_width.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_width,
            var_width.object
        );

    }
    if ((var_formstr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_formstr,
            var_formstr.object
        );

    }
    if ((par_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            par_y.object
        );

    }
    if ((par_dx.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dx,
            par_dx.object
        );

    }
    if ((par_axis.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_axis,
            par_axis.object
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
static PyObject *fparse_function_9_romb_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_y = NULL;
    PyObject *_python_par_dx = NULL;
    PyObject *_python_par_axis = NULL;
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
                PyErr_Format( PyExc_TypeError, "romb() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_y == key )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dx == key )
            {
                assert( _python_par_dx == NULL );
                _python_par_dx = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_axis == key )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_y, key ) == 1 )
            {
                assert( _python_par_y == NULL );
                _python_par_y = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dx, key ) == 1 )
            {
                assert( _python_par_dx == NULL );
                _python_par_dx = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_axis, key ) == 1 )
            {
                assert( _python_par_axis == NULL );
                _python_par_axis = value;

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
                   "romb() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_y != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_y = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_y == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_y = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_dx != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_dx = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_dx == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_dx = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_axis != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_axis = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_axis == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_axis = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_show != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_show = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_show == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_show = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_y == NULL || _python_par_dx == NULL || _python_par_axis == NULL || _python_par_show == NULL ))
    {
        PyObject *values[] = { _python_par_y, _python_par_dx, _python_par_axis, _python_par_show };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_romb_of_module_scipy$integrate$quadrature( self, _python_par_y, _python_par_dx, _python_par_axis, _python_par_show );

error_exit:;

    Py_XDECREF( _python_par_y );
    Py_XDECREF( _python_par_dx );
    Py_XDECREF( _python_par_axis );
    Py_XDECREF( _python_par_show );

    return NULL;
}

static PyObject *dparse_function_9_romb_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_9_romb_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_romb_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10__difftrap_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_function, PyObject *_python_par_interval, PyObject *_python_par_numtraps )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_function; par_function.object = _python_par_function;
    PyObjectLocalVariable par_interval; par_interval.object = _python_par_interval;
    PyObjectLocalVariable par_numtraps; par_numtraps.object = _python_par_numtraps;
    PyObjectLocalVariable var_numtosum;
    PyObjectLocalVariable var_h;
    PyObjectLocalVariable var_lox;
    PyObjectLocalVariable var_points;
    PyObjectLocalVariable var_s;
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
    PyObject *tmp_binop_left_8;
    PyObject *tmp_binop_left_9;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
    PyObject *tmp_binop_right_8;
    PyObject *tmp_binop_right_9;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3b367cd706ea951513fbbe7b357c267b, module_scipy$integrate$quadrature );
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
    tmp_compare_left_1 = par_numtraps.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242239 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 538;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 538;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_LtE_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_9da61a2ab62756a9ef6222583301fd54;
    frame_function->f_lineno = 539;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 539;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 539;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_numtraps.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242239 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 540;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 540;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_binop_left_1 = const_float_0_5;
    tmp_called_1 = par_function.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25418 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = par_interval.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_call_arg_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 541;
    tmp_binop_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = par_function.object;

    if ( tmp_called_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25418 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = par_interval.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_int_pos_1;
    tmp_call_arg_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 541;
    tmp_binop_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 541;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_binop_left_3 = par_numtraps.object;

    if ( tmp_binop_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242239 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = const_int_pos_2;
    tmp_assign_source_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 543;
        goto frame_exception_exit_1;
    }
    assert( var_numtosum.object == NULL );
    var_numtosum.object = tmp_assign_source_1;

    tmp_subscr_target_3 = par_interval.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = const_int_pos_1;
    tmp_binop_left_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_4 = par_interval.object;

    if ( tmp_subscr_target_4 == NULL )
    {
        Py_DECREF( tmp_binop_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = const_int_0;
    tmp_binop_right_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );

        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_float_arg_1 = BINARY_OPERATION_SUB( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_float_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = TO_FLOAT( tmp_float_arg_1 );
    Py_DECREF( tmp_float_arg_1 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = var_numtosum.object;

    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 544;
        goto frame_exception_exit_1;
    }
    assert( var_h.object == NULL );
    var_h.object = tmp_assign_source_2;

    tmp_subscr_target_5 = par_interval.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = const_int_0;
    tmp_binop_left_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = const_float_0_5;
    tmp_binop_right_7 = var_h.object;

    tmp_binop_right_6 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 545;
        goto frame_exception_exit_1;
    }
    assert( var_lox.object == NULL );
    var_lox.object = tmp_assign_source_3;

    tmp_binop_left_8 = var_lox.object;

    tmp_binop_left_9 = var_h.object;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = const_int_0;
    tmp_call_arg_element_4 = var_numtosum.object;

    frame_function->f_lineno = 546;
    tmp_binop_right_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = BINARY_OPERATION_MUL( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 546;
        goto frame_exception_exit_1;
    }
    assert( var_points.object == NULL );
    var_points.object = tmp_assign_source_4;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_sum );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sum );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 185628 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = par_function.object;

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25418 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = var_points.object;

    frame_function->f_lineno = 547;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_int_0;
    frame_function->f_lineno = 547;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 547;
        goto frame_exception_exit_1;
    }
    assert( var_s.object == NULL );
    var_s.object = tmp_assign_source_5;

    tmp_return_value = var_s.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;
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
    if ((var_numtosum.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_numtosum,
            var_numtosum.object
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
    if ((var_lox.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lox,
            var_lox.object
        );

    }
    if ((var_points.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_points,
            var_points.object
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
    if ((par_function.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_function,
            par_function.object
        );

    }
    if ((par_interval.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_interval,
            par_interval.object
        );

    }
    if ((par_numtraps.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_numtraps,
            par_numtraps.object
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
static PyObject *fparse_function_10__difftrap_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_function = NULL;
    PyObject *_python_par_interval = NULL;
    PyObject *_python_par_numtraps = NULL;
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
                PyErr_Format( PyExc_TypeError, "_difftrap() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_function == key )
            {
                assert( _python_par_function == NULL );
                _python_par_function = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_interval == key )
            {
                assert( _python_par_interval == NULL );
                _python_par_interval = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_numtraps == key )
            {
                assert( _python_par_numtraps == NULL );
                _python_par_numtraps = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_function, key ) == 1 )
            {
                assert( _python_par_function == NULL );
                _python_par_function = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_interval, key ) == 1 )
            {
                assert( _python_par_interval == NULL );
                _python_par_interval = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_numtraps, key ) == 1 )
            {
                assert( _python_par_numtraps == NULL );
                _python_par_numtraps = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_difftrap() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_function != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_function = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_function == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_function = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_interval != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_interval = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_interval == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_interval = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_numtraps != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_numtraps = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_numtraps == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_numtraps = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_function == NULL || _python_par_interval == NULL || _python_par_numtraps == NULL ))
    {
        PyObject *values[] = { _python_par_function, _python_par_interval, _python_par_numtraps };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10__difftrap_of_module_scipy$integrate$quadrature( self, _python_par_function, _python_par_interval, _python_par_numtraps );

error_exit:;

    Py_XDECREF( _python_par_function );
    Py_XDECREF( _python_par_interval );
    Py_XDECREF( _python_par_numtraps );

    return NULL;
}

static PyObject *dparse_function_10__difftrap_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_10__difftrap_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10__difftrap_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11__romberg_diff_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_b, PyObject *_python_par_c, PyObject *_python_par_k )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_c; par_c.object = _python_par_c;
    PyObjectLocalVariable par_k; par_k.object = _python_par_k;
    PyObjectLocalVariable var_tmp;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5b3a1cb4e0c484b01068c682afd15708, module_scipy$integrate$quadrature );
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
    tmp_binop_left_1 = const_float_4_0;
    tmp_binop_right_1 = par_k.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6318 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = POWER_OPERATION( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 556;
        goto frame_exception_exit_1;
    }
    assert( var_tmp.object == NULL );
    var_tmp.object = tmp_assign_source_1;

    tmp_binop_left_4 = var_tmp.object;

    tmp_binop_right_4 = par_c.object;

    if ( tmp_binop_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 100 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_3 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = par_b.object;

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = BINARY_OPERATION_SUB( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = var_tmp.object;

    tmp_binop_right_5 = const_float_1_0;
    tmp_binop_right_2 = BINARY_OPERATION_SUB( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 557;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 557;
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
    if ((var_tmp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_tmp,
            var_tmp.object
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
    if ((par_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c,
            par_c.object
        );

    }
    if ((par_k.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_k,
            par_k.object
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
static PyObject *fparse_function_11__romberg_diff_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_c = NULL;
    PyObject *_python_par_k = NULL;
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
                PyErr_Format( PyExc_TypeError, "_romberg_diff() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_b == key )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_c == key )
            {
                assert( _python_par_c == NULL );
                _python_par_c = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_k == key )
            {
                assert( _python_par_k == NULL );
                _python_par_k = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_b, key ) == 1 )
            {
                assert( _python_par_b == NULL );
                _python_par_b = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_c, key ) == 1 )
            {
                assert( _python_par_c == NULL );
                _python_par_c = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_k, key ) == 1 )
            {
                assert( _python_par_k == NULL );
                _python_par_k = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_romberg_diff() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_b = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_c != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_c = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_c == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_c = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_k != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_k = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_k == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_k = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_b == NULL || _python_par_c == NULL || _python_par_k == NULL ))
    {
        PyObject *values[] = { _python_par_b, _python_par_c, _python_par_k };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11__romberg_diff_of_module_scipy$integrate$quadrature( self, _python_par_b, _python_par_c, _python_par_k );

error_exit:;

    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_c );
    Py_XDECREF( _python_par_k );

    return NULL;
}

static PyObject *dparse_function_11__romberg_diff_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_11__romberg_diff_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11__romberg_diff_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12__printresmat_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_function, PyObject *_python_par_interval, PyObject *_python_par_resmat )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_function; par_function.object = _python_par_function;
    PyObjectLocalVariable par_interval; par_interval.object = _python_par_interval;
    PyObjectLocalVariable par_resmat; par_resmat.object = _python_par_resmat;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_j;
    PyObjectTempVariable tmp_assign_unpack_1__assign_source;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unary_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_0;
    assert( tmp_assign_unpack_1__assign_source.object == NULL );
    tmp_assign_unpack_1__assign_source.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = tmp_assign_unpack_1__assign_source.object;

    assert( var_i.object == NULL );
    var_i.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = tmp_assign_unpack_1__assign_source.object;

    assert( var_j.object == NULL );
    var_j.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    Py_XDECREF( tmp_assign_unpack_1__assign_source.object );
    tmp_assign_unpack_1__assign_source.object = NULL;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8b079babdd27875ee500dbb347e77d49, module_scipy$integrate$quadrature );
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
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_e5c2d94a67bcd84cdb599b51902a9863;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_unary_arg_1 = par_function.object;

    if ( tmp_unary_arg_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25418 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = UNARY_OPERATION( PyObject_Repr, tmp_unary_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
    frame_function->f_lineno = 563;
    tmp_unused = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 563;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 564;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_from;
    tmp_call_arg_element_2 = par_interval.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 564;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 564;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 564;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 565;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_empty;
    frame_function->f_lineno = 565;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 565;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_4 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 566;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_digest_1aaf817f4065bde386fc5aa564dffd6d;
    frame_function->f_lineno = 566;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 566;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_len_arg_1 = par_resmat.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 567;
        goto frame_exception_exit_1;
    }

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 567;
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
        frame_function->f_lineno = 567;
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

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_called_5 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_binop_left_1 = const_str_digest_408adddfb35f444ec4e8ff611f85705f;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_binop_left_2 = const_int_pos_2;
    tmp_binop_right_2 = var_i.object;

    tmp_tuple_element_3 = POWER_OPERATION( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_3 );
    tmp_subscr_target_1 = par_interval.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_binop_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    tmp_subscr_target_2 = par_interval.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_binop_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    tmp_binop_left_3 = BINARY_OPERATION_SUB( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    tmp_binop_left_5 = const_float_2_0;
    tmp_binop_right_5 = var_i.object;

    tmp_binop_right_3 = POWER_OPERATION( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    tmp_tuple_element_3 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_3 );
    tmp_tuple_element_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_2 );
    tmp_call_kw_2 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
    frame_function->f_lineno = 568;
    tmp_unused = CALL_FUNCTION( tmp_called_5, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 568;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_6 = var_i.object;

    tmp_binop_right_6 = const_int_pos_1;
    tmp_range_arg_2 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_range_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 569;
        goto try_finally_handler_1;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_2 );
    Py_DECREF( tmp_range_arg_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 569;
        goto try_finally_handler_1;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 569;
        goto try_finally_handler_1;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_8 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 569;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_assign_source_9 = tmp_for_loop_2__iter_value.object;

    if (var_j.object == NULL)
    {
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = var_j.object;
        var_j.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
        Py_DECREF( old );
    }
    tmp_called_6 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto try_finally_handler_2;
    }
    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_binop_left_7 = const_str_digest_714971b0dc59e503512a4785731b29b5;
    tmp_subscr_target_4 = par_resmat.object;

    if ( tmp_subscr_target_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 570;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_4 = var_i.object;

    if ( tmp_subscr_subscript_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 570;
        goto try_finally_handler_2;
    }

    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 570;
        goto try_finally_handler_2;
    }
    tmp_subscr_subscript_3 = var_j.object;

    tmp_binop_right_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 570;
        goto try_finally_handler_2;
    }
    tmp_tuple_element_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 570;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_4 );
    tmp_call_kw_3 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
    frame_function->f_lineno = 570;
    tmp_unused = CALL_FUNCTION( tmp_called_6, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 570;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 569;
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
    tmp_called_7 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 571;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = const_str_empty;
    frame_function->f_lineno = 571;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 571;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 567;
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
    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 572;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_empty;
    frame_function->f_lineno = 572;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 572;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_9 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_4 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_str_digest_e60127afdeb4959a97493e9d18a55162;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_5 );
    tmp_subscr_target_6 = par_resmat.object;

    if ( tmp_subscr_target_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_6 = var_i.object;

    if ( tmp_subscr_subscript_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_5 = var_j.object;

    if ( tmp_subscr_subscript_5 == NULL )
    {
        Py_DECREF( tmp_call_pos_4 );
        Py_DECREF( tmp_subscr_target_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 54692 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_4, 1, tmp_tuple_element_5 );
    tmp_call_kw_4 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
    frame_function->f_lineno = 573;
    tmp_unused = CALL_FUNCTION( tmp_called_9, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_call_pos_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 573;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_10 = LOOKUP_BUILTIN( const_str_plain_print );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_after;
    tmp_binop_left_9 = const_int_pos_2;
    tmp_len_arg_2 = par_resmat.object;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_10 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_binop_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_10 = const_int_pos_1;
    tmp_binop_right_9 = BINARY_OPERATION_SUB( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_left_10 );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_8 = POWER_OPERATION( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = const_int_pos_1;
    tmp_call_arg_element_8 = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_digest_1b8ac8aba45ab96c57cd57c55542de8c;
    frame_function->f_lineno = 574;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_10, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 574;
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
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
        );

    }
    if ((var_j.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_j,
            var_j.object
        );

    }
    if ((par_function.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_function,
            par_function.object
        );

    }
    if ((par_interval.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_interval,
            par_interval.object
        );

    }
    if ((par_resmat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_resmat,
            par_resmat.object
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
static PyObject *fparse_function_12__printresmat_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_function = NULL;
    PyObject *_python_par_interval = NULL;
    PyObject *_python_par_resmat = NULL;
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
                PyErr_Format( PyExc_TypeError, "_printresmat() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_function == key )
            {
                assert( _python_par_function == NULL );
                _python_par_function = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_interval == key )
            {
                assert( _python_par_interval == NULL );
                _python_par_interval = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_resmat == key )
            {
                assert( _python_par_resmat == NULL );
                _python_par_resmat = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_function, key ) == 1 )
            {
                assert( _python_par_function == NULL );
                _python_par_function = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_interval, key ) == 1 )
            {
                assert( _python_par_interval == NULL );
                _python_par_interval = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_resmat, key ) == 1 )
            {
                assert( _python_par_resmat == NULL );
                _python_par_resmat = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_printresmat() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 3 ))
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
         if (unlikely( _python_par_function != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_function = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_function == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_function = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_interval != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_interval = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_interval == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_interval = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_resmat != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_resmat = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_resmat == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_resmat = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_function == NULL || _python_par_interval == NULL || _python_par_resmat == NULL ))
    {
        PyObject *values[] = { _python_par_function, _python_par_interval, _python_par_resmat };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12__printresmat_of_module_scipy$integrate$quadrature( self, _python_par_function, _python_par_interval, _python_par_resmat );

error_exit:;

    Py_XDECREF( _python_par_function );
    Py_XDECREF( _python_par_interval );
    Py_XDECREF( _python_par_resmat );

    return NULL;
}

static PyObject *dparse_function_12__printresmat_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_12__printresmat_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12__printresmat_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_romberg_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_function, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_args, PyObject *_python_par_tol, PyObject *_python_par_rtol, PyObject *_python_par_show, PyObject *_python_par_divmax, PyObject *_python_par_vec_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_function; par_function.object = _python_par_function;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_tol; par_tol.object = _python_par_tol;
    PyObjectLocalVariable par_rtol; par_rtol.object = _python_par_rtol;
    PyObjectLocalVariable par_show; par_show.object = _python_par_show;
    PyObjectLocalVariable par_divmax; par_divmax.object = _python_par_divmax;
    PyObjectLocalVariable par_vec_func; par_vec_func.object = _python_par_vec_func;
    PyObjectLocalVariable var_vfunc;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_interval;
    PyObjectLocalVariable var_intrange;
    PyObjectLocalVariable var_ordsum;
    PyObjectLocalVariable var_result;
    PyObjectLocalVariable var_resmat;
    PyObjectLocalVariable var_err;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_k;
    PyObjectLocalVariable var_lastresult;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_1__break_indicator;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_or_2__value_1;
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
    bool tmp_break_1;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next1_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range_arg_1;
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
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_subscript_7;
    PyObject *tmp_subscr_subscript_8;
    PyObject *tmp_subscr_subscript_9;
    PyObject *tmp_subscr_subscript_10;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3eac3efe02e81b3523ee2a25f9bbef07, module_scipy$integrate$quadrature );
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_isinf );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinf );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 58835 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 661;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_1 = par_a.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 661;
        goto try_finally_handler_2;
    }

    frame_function->f_lineno = 661;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 661;
        goto try_finally_handler_2;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_1;

    tmp_cond_value_2 = tmp_or_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 661;
        goto try_finally_handler_2;
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
    tmp_cond_value_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_isinf );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isinf );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 58835 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 661;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_2 = par_b.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 661;
        goto try_finally_handler_3;
    }

    frame_function->f_lineno = 661;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 661;
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
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 661;
        goto try_finally_handler_1;
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
    tmp_make_exception_arg_1 = const_str_digest_189aec901c4f937e4ad7040d7b76500d;
    frame_function->f_lineno = 662;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 662;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 662;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_1:;
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
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_vectorize1 );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vectorize1 );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241358 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 663;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_function.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 25418 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 663;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_args.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 663;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_vec_func.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241269 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 663;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_vec_func;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 663;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 663;
        goto frame_exception_exit_1;
    }
    assert( var_vfunc.object == NULL );
    var_vfunc.object = tmp_assign_source_2;

    tmp_assign_source_3 = const_int_pos_1;
    assert( var_n.object == NULL );
    var_n.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    tmp_assign_source_4 = PyList_New( 2 );
    tmp_list_element_1 = par_a.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 665;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_4, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_b.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 665;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_4, 1, tmp_list_element_1 );
    assert( var_interval.object == NULL );
    var_interval.object = tmp_assign_source_4;

    tmp_binop_left_1 = par_b.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 666;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = par_a.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 666;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 666;
        goto frame_exception_exit_1;
    }
    assert( var_intrange.object == NULL );
    var_intrange.object = tmp_assign_source_5;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__difftrap );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__difftrap );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242345 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 667;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = var_vfunc.object;

    tmp_call_arg_element_4 = var_interval.object;

    tmp_call_arg_element_5 = var_n.object;

    frame_function->f_lineno = 667;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 667;
        goto frame_exception_exit_1;
    }
    assert( var_ordsum.object == NULL );
    var_ordsum.object = tmp_assign_source_6;

    tmp_binop_left_2 = var_intrange.object;

    tmp_binop_right_2 = var_ordsum.object;

    tmp_assign_source_7 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 668;
        goto frame_exception_exit_1;
    }
    assert( var_result.object == NULL );
    var_result.object = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 1 );
    tmp_list_element_2 = PyList_New( 1 );
    tmp_list_element_3 = var_result.object;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assign_source_8, 0, tmp_list_element_2 );
    assert( var_resmat.object == NULL );
    var_resmat.object = tmp_assign_source_8;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 670;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 670;
        goto frame_exception_exit_1;
    }
    assert( var_err.object == NULL );
    var_err.object = tmp_assign_source_9;

    // Tried code
    tmp_assign_source_10 = Py_False;
    assert( tmp_for_loop_1__break_indicator.object == NULL );
    tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_10 );

    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241323 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 671;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_6 = const_int_pos_1;
    tmp_binop_left_3 = par_divmax.object;

    if ( tmp_binop_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242383 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 671;
        goto try_finally_handler_4;
    }

    tmp_binop_right_3 = const_int_pos_1;
    tmp_call_arg_element_7 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 671;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 671;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 671;
        goto try_finally_handler_4;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 671;
        goto try_finally_handler_4;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_11;

    // Tried code
    loop_start_1:;
    // Tried block of try/except
    tmp_next1_arg_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next1_arg_1 );
    if ( tmp_assign_source_12 == NULL )
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


        frame_function->f_lineno = 671;
        goto try_except_handler_1;
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
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_compare_left_1 = exception_type;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 671;
        goto try_finally_handler_5;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_13 = Py_True;
    if (tmp_for_loop_1__break_indicator.object == NULL)
    {
        tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = tmp_for_loop_1__break_indicator.object;
        tmp_for_loop_1__break_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
    }
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    goto try_finally_handler_5;
    branch_end_2:;
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );
    Py_DECREF( exception_type );
    Py_XDECREF( exception_value );
    Py_XDECREF( exception_tb );

    try_except_end_1:;
    tmp_assign_source_14 = tmp_for_loop_1__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_binop_left_4 = var_n.object;

    if ( tmp_binop_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 672;
        goto try_finally_handler_5;
    }

    tmp_binop_right_4 = const_int_pos_2;
    tmp_assign_source_15 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 672;
        goto try_finally_handler_5;
    }
    if (var_n.object == NULL)
    {
        var_n.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_n.object;
        var_n.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_binop_left_5 = var_ordsum.object;

    if ( tmp_binop_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242435 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 673;
        goto try_finally_handler_5;
    }

    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__difftrap );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__difftrap );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242345 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 673;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_8 = var_vfunc.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241489 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 673;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_9 = var_interval.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 673;
        goto try_finally_handler_5;
    }

    tmp_call_arg_element_10 = var_n.object;

    frame_function->f_lineno = 673;
    tmp_binop_right_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 673;
        goto try_finally_handler_5;
    }
    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 673;
        goto try_finally_handler_5;
    }
    if (var_ordsum.object == NULL)
    {
        var_ordsum.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_ordsum.object;
        var_ordsum.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    tmp_source_name_2 = var_resmat.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 674;
        goto try_finally_handler_5;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 674;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_11 = PyList_New( 0 );
    frame_function->f_lineno = 674;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 674;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_subscr_target_1 = var_resmat.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 675;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_1 = var_i.object;

    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 675;
        goto try_finally_handler_5;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 675;
        goto try_finally_handler_5;
    }
    tmp_binop_left_7 = var_intrange.object;

    if ( tmp_binop_left_7 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242487 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 675;
        goto try_finally_handler_5;
    }

    tmp_binop_right_7 = var_ordsum.object;

    tmp_binop_left_6 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 675;
        goto try_finally_handler_5;
    }
    tmp_binop_right_6 = var_n.object;

    tmp_call_arg_element_12 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 675;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 675;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 675;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_range_arg_1 = var_i.object;

    tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 676;
        goto try_finally_handler_5;
    }
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 676;
        goto try_finally_handler_5;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_2:;
    tmp_next_source_1 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_18 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 676;
            goto try_finally_handler_6;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_assign_source_19 = tmp_for_loop_2__iter_value.object;

    if (var_k.object == NULL)
    {
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
    }
    else
    {
        PyObject *old = var_k.object;
        var_k.object = INCREASE_REFCOUNT( tmp_assign_source_19 );
        Py_DECREF( old );
    }
    tmp_subscr_target_2 = var_resmat.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_2 = var_i.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }

    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__romberg_diff );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__romberg_diff );
    }

    if ( tmp_called_10 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242541 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }

    tmp_subscr_target_4 = var_resmat.object;

    if ( tmp_subscr_target_4 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }

    tmp_binop_left_8 = var_i.object;

    if ( tmp_binop_left_8 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }

    tmp_binop_right_8 = const_int_pos_1;
    tmp_subscr_subscript_4 = BINARY_OPERATION_SUB( tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_subscr_subscript_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    tmp_subscr_subscript_3 = var_k.object;

    tmp_call_arg_element_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    tmp_subscr_target_6 = var_resmat.object;

    if ( tmp_subscr_target_6 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_6 = var_i.object;

    if ( tmp_subscr_subscript_6 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }

    tmp_subscr_target_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    tmp_subscr_subscript_5 = var_k.object;

    tmp_call_arg_element_15 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    tmp_binop_left_9 = var_k.object;

    tmp_binop_right_9 = const_int_pos_1;
    tmp_call_arg_element_16 = BINARY_OPERATION_ADD( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 677;
    tmp_call_arg_element_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_10, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 677;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 677;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 676;
        goto try_finally_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
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
    tmp_subscr_target_8 = var_resmat.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 678;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_8 = var_i.object;

    if ( tmp_subscr_subscript_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 678;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_subscr_target_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 678;
        goto try_finally_handler_5;
    }
    tmp_subscr_subscript_7 = var_i.object;

    if ( tmp_subscr_subscript_7 == NULL )
    {
        Py_DECREF( tmp_subscr_target_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 678;
        goto try_finally_handler_5;
    }

    tmp_assign_source_20 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    Py_DECREF( tmp_subscr_target_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 678;
        goto try_finally_handler_5;
    }
    if (var_result.object == NULL)
    {
        var_result.object = tmp_assign_source_20;
    }
    else
    {
        PyObject *old = var_result.object;
        var_result.object = tmp_assign_source_20;
        Py_DECREF( old );
    }
    tmp_subscr_target_10 = var_resmat.object;

    if ( tmp_subscr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 679;
        goto try_finally_handler_5;
    }

    tmp_binop_left_10 = var_i.object;

    if ( tmp_binop_left_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 679;
        goto try_finally_handler_5;
    }

    tmp_binop_right_10 = const_int_pos_1;
    tmp_subscr_subscript_10 = BINARY_OPERATION_SUB( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_subscr_subscript_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 679;
        goto try_finally_handler_5;
    }
    tmp_subscr_target_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    Py_DECREF( tmp_subscr_subscript_10 );
    if ( tmp_subscr_target_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 679;
        goto try_finally_handler_5;
    }
    tmp_binop_left_11 = var_i.object;

    if ( tmp_binop_left_11 == NULL )
    {
        Py_DECREF( tmp_subscr_target_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 679;
        goto try_finally_handler_5;
    }

    tmp_binop_right_11 = const_int_pos_1;
    tmp_subscr_subscript_9 = BINARY_OPERATION_SUB( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_subscr_subscript_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_target_9 );

        frame_function->f_lineno = 679;
        goto try_finally_handler_5;
    }
    tmp_assign_source_21 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_target_9 );
    Py_DECREF( tmp_subscr_subscript_9 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 679;
        goto try_finally_handler_5;
    }
    if (var_lastresult.object == NULL)
    {
        var_lastresult.object = tmp_assign_source_21;
    }
    else
    {
        PyObject *old = var_lastresult.object;
        var_lastresult.object = tmp_assign_source_21;
        Py_DECREF( old );
    }
    tmp_called_11 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 681;
        goto try_finally_handler_5;
    }
    tmp_binop_left_12 = var_result.object;

    tmp_binop_right_12 = var_lastresult.object;

    tmp_call_arg_element_17 = BINARY_OPERATION_SUB( tmp_binop_left_12, tmp_binop_right_12 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 681;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 681;
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 681;
        goto try_finally_handler_5;
    }
    if (var_err.object == NULL)
    {
        var_err.object = tmp_assign_source_22;
    }
    else
    {
        PyObject *old = var_err.object;
        var_err.object = tmp_assign_source_22;
        Py_DECREF( old );
    }
    tmp_break_1 = false;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_err.object;

    tmp_compexpr_right_1 = par_tol.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 161861 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 682;
        goto try_finally_handler_8;
    }

    tmp_assign_source_23 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 682;
        goto try_finally_handler_8;
    }
    if (tmp_or_2__value_1.object == NULL)
    {
        tmp_or_2__value_1.object = tmp_assign_source_23;
    }
    else
    {
        PyObject *old = tmp_or_2__value_1.object;
        tmp_or_2__value_1.object = tmp_assign_source_23;
        Py_DECREF( old );
    }
    tmp_cond_value_4 = tmp_or_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 682;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_cond_value_3 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_cond_value_3 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = var_err.object;

    tmp_binop_left_13 = par_rtol.object;

    if ( tmp_binop_left_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71963 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 682;
        goto try_finally_handler_9;
    }

    tmp_called_12 = LOOKUP_BUILTIN( const_str_plain_abs );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 682;
        goto try_finally_handler_9;
    }
    tmp_call_arg_element_18 = var_result.object;

    frame_function->f_lineno = 682;
    tmp_binop_right_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_18 );
    if ( tmp_binop_right_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 682;
        goto try_finally_handler_9;
    }
    tmp_compexpr_right_2 = BINARY_OPERATION_MUL( tmp_binop_left_13, tmp_binop_right_13 );
    Py_DECREF( tmp_binop_right_13 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 682;
        goto try_finally_handler_9;
    }
    tmp_cond_value_3 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 682;
        goto try_finally_handler_9;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_8;
    }

    goto finally_end_5;
    finally_end_5:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
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

        goto try_finally_handler_7;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 682;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_break_1 = true;
    goto try_finally_handler_start_1;
    branch_no_3:;
    try_finally_handler_start_1:;
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

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_5;
    }

    // Break if entered via break.
    if ( tmp_break_1 )
    {

    goto loop_end_1;
    }
    goto finally_end_7;
    finally_end_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 671;
        goto try_finally_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
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
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_4;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_compare_left_2 = tmp_for_loop_1__break_indicator.object;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 685;
        goto try_finally_handler_4;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_warn );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 685;
        goto try_finally_handler_4;
    }
    tmp_binop_left_14 = const_str_digest_219438e84926828eeaf05c8c92b2041c;
    tmp_binop_right_14 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_divmax.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_binop_right_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242383 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 686;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_14, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_err.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_binop_right_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 21528 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 686;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_14, 1, tmp_tuple_element_2 );
    tmp_call_arg_element_19 = BINARY_OPERATION_REMAINDER( tmp_binop_left_14, tmp_binop_right_14 );
    Py_DECREF( tmp_binop_right_14 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );

        frame_function->f_lineno = 686;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_20 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_AccuracyWarning );

    if (unlikely( tmp_call_arg_element_20 == NULL ))
    {
        tmp_call_arg_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AccuracyWarning );
    }

    if ( tmp_call_arg_element_20 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241540 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 687;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 687;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_13, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 687;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    tmp_result = tmp_for_loop_1__break_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_for_loop_1__break_indicator.object );
        tmp_for_loop_1__break_indicator.object = NULL;
    }

    assert( tmp_result != false );
    frame_function->f_lineno = tmp_tried_lineno_5;
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
    tmp_cond_value_5 = par_show.object;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242084 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 689;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 689;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__printresmat );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__printresmat );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242583 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = var_vfunc.object;

    if ( tmp_call_arg_element_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241489 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = var_interval.object;

    if ( tmp_call_arg_element_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27241 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_23 = var_resmat.object;

    if ( tmp_call_arg_element_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242293 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 690;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_14, tmp_call_arg_element_21, tmp_call_arg_element_22, tmp_call_arg_element_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_return_value = var_result.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19941 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 691;
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
    if ((var_vfunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vfunc,
            var_vfunc.object
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
    if ((var_interval.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_interval,
            var_interval.object
        );

    }
    if ((var_intrange.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_intrange,
            var_intrange.object
        );

    }
    if ((var_ordsum.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ordsum,
            var_ordsum.object
        );

    }
    if ((var_result.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_result,
            var_result.object
        );

    }
    if ((var_resmat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_resmat,
            var_resmat.object
        );

    }
    if ((var_err.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_err,
            var_err.object
        );

    }
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
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
    if ((var_lastresult.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lastresult,
            var_lastresult.object
        );

    }
    if ((par_function.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_function,
            par_function.object
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
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
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
    if ((par_rtol.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rtol,
            par_rtol.object
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
    if ((par_divmax.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_divmax,
            par_divmax.object
        );

    }
    if ((par_vec_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vec_func,
            par_vec_func.object
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
static PyObject *fparse_function_13_romberg_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_function = NULL;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_tol = NULL;
    PyObject *_python_par_rtol = NULL;
    PyObject *_python_par_show = NULL;
    PyObject *_python_par_divmax = NULL;
    PyObject *_python_par_vec_func = NULL;
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
                PyErr_Format( PyExc_TypeError, "romberg() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_function == key )
            {
                assert( _python_par_function == NULL );
                _python_par_function = value;

                found = true;
                kw_found += 1;
            }
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
            if ( found == false && const_str_plain_args == key )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

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
            if ( found == false && const_str_plain_rtol == key )
            {
                assert( _python_par_rtol == NULL );
                _python_par_rtol = value;

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
            if ( found == false && const_str_plain_divmax == key )
            {
                assert( _python_par_divmax == NULL );
                _python_par_divmax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_vec_func == key )
            {
                assert( _python_par_vec_func == NULL );
                _python_par_vec_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_function, key ) == 1 )
            {
                assert( _python_par_function == NULL );
                _python_par_function = value;

                found = true;
                kw_found += 1;
            }
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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_args, key ) == 1 )
            {
                assert( _python_par_args == NULL );
                _python_par_args = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rtol, key ) == 1 )
            {
                assert( _python_par_rtol == NULL );
                _python_par_rtol = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_divmax, key ) == 1 )
            {
                assert( _python_par_divmax == NULL );
                _python_par_divmax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_vec_func, key ) == 1 )
            {
                assert( _python_par_vec_func == NULL );
                _python_par_vec_func = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "romberg() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_function != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_function = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_function == NULL )
    {
        if ( 0 + self->m_defaults_given >= 9  )
        {
            _python_par_function = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 9 ) );
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
         if (unlikely( _python_par_a != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_a = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_a == NULL )
    {
        if ( 1 + self->m_defaults_given >= 9  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 9 ) );
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
         if (unlikely( _python_par_b != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_b = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_b == NULL )
    {
        if ( 2 + self->m_defaults_given >= 9  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 9 ) );
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
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 3 + self->m_defaults_given >= 9  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 9 ) );
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
         if (unlikely( _python_par_tol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_tol = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_tol == NULL )
    {
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_tol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 ) );
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
         if (unlikely( _python_par_rtol != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_rtol = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_rtol == NULL )
    {
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_rtol = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 ) );
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
         if (unlikely( _python_par_show != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_show = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_show == NULL )
    {
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_show = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 ) );
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
         if (unlikely( _python_par_divmax != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_divmax = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_divmax == NULL )
    {
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_divmax = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 ) );
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
         if (unlikely( _python_par_vec_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_vec_func = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_vec_func == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_vec_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 ) );
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
    if (unlikely( _python_par_function == NULL || _python_par_a == NULL || _python_par_b == NULL || _python_par_args == NULL || _python_par_tol == NULL || _python_par_rtol == NULL || _python_par_show == NULL || _python_par_divmax == NULL || _python_par_vec_func == NULL ))
    {
        PyObject *values[] = { _python_par_function, _python_par_a, _python_par_b, _python_par_args, _python_par_tol, _python_par_rtol, _python_par_show, _python_par_divmax, _python_par_vec_func };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_13_romberg_of_module_scipy$integrate$quadrature( self, _python_par_function, _python_par_a, _python_par_b, _python_par_args, _python_par_tol, _python_par_rtol, _python_par_show, _python_par_divmax, _python_par_vec_func );

error_exit:;

    Py_XDECREF( _python_par_function );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_tol );
    Py_XDECREF( _python_par_rtol );
    Py_XDECREF( _python_par_show );
    Py_XDECREF( _python_par_divmax );
    Py_XDECREF( _python_par_vec_func );

    return NULL;
}

static PyObject *dparse_function_13_romberg_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 9 )
    {
        return impl_function_13_romberg_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_romberg_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_newton_cotes_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject *_python_par_rn, PyObject *_python_par_equal )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_rn; par_rn.object = _python_par_rn;
    PyObjectLocalVariable par_equal; par_equal.object = _python_par_equal;
    PyObjectLocalVariable var_N;
    PyObjectLocalVariable var_na;
    PyObjectLocalVariable var_da;
    PyObjectLocalVariable var_vi;
    PyObjectLocalVariable var_nb;
    PyObjectLocalVariable var_db;
    PyObjectLocalVariable var_yi;
    PyObjectLocalVariable var_ti;
    PyObjectLocalVariable var_nvec;
    PyObjectLocalVariable var_C;
    PyObjectLocalVariable var_Cinv;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_vec;
    PyObjectLocalVariable var_ai;
    PyObjectLocalVariable var_BN;
    PyObjectLocalVariable var_power;
    PyObjectLocalVariable var_p1;
    PyObjectLocalVariable var_fac;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
    PyObjectTempVariable tmp_tuple_unpack_1__element_4;
    PyObjectTempVariable tmp_tuple_unpack_1__element_5;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_and_2__value_1;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_float_arg_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_subscript_3;
    PyObject *tmp_subscr_subscript_4;
    PyObject *tmp_subscr_subscript_5;
    PyObject *tmp_subscr_subscript_6;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    PyObject *tmp_subscr_target_3;
    PyObject *tmp_subscr_target_4;
    PyObject *tmp_subscr_target_5;
    PyObject *tmp_subscr_target_6;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_78ec103f9a6746e39486ff6ed7a17a8b, module_scipy$integrate$quadrature );
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
    // Tried block of try/except
    tmp_len_arg_1 = par_rn.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144105 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 796;
        goto try_except_handler_1;
    }

    tmp_binop_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 796;
        goto try_except_handler_1;
    }
    tmp_binop_right_1 = const_int_pos_1;
    tmp_assign_source_1 = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 796;
        goto try_except_handler_1;
    }
    assert( var_N.object == NULL );
    var_N.object = tmp_assign_source_1;

    tmp_cond_value_1 = par_equal.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70117 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 797;
        goto try_except_handler_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 797;
        goto try_except_handler_1;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 798;
        goto try_except_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 798;
        goto try_except_handler_1;
    }
    tmp_binop_left_2 = var_N.object;

    tmp_binop_right_2 = const_int_pos_1;
    tmp_call_arg_element_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 798;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 798;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 798;
        goto try_except_handler_1;
    }
    if (par_rn.object == NULL)
    {
        par_rn.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_rn.object;
        par_rn.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_diff );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_3 = par_rn.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144105 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 799;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_call_arg_element_2 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 799;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 799;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_3 = const_int_pos_1;
    if (par_equal.object == NULL)
    {
        par_equal.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = par_equal.object;
        par_equal.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    branch_no_2:;
    branch_end_1:;
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
    tmp_assign_source_4 = par_rn.object;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144105 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 802;
        goto frame_exception_exit_1;
    }

    if (var_N.object == NULL)
    {
        var_N.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_N.object;
        var_N.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 803;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_arange );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 803;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = var_N.object;

    tmp_binop_right_3 = const_int_pos_1;
    tmp_call_arg_element_4 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 803;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 803;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 803;
        goto frame_exception_exit_1;
    }
    if (par_rn.object == NULL)
    {
        par_rn.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = par_rn.object;
        par_rn.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_assign_source_6 = const_int_pos_1;
    if (par_equal.object == NULL)
    {
        par_equal.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = par_equal.object;
        par_equal.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    try_except_end_1:;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_assign_source_7 = par_equal.object;

    if ( tmp_assign_source_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70117 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 806;
        goto try_finally_handler_2;
    }

    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    tmp_cond_value_4 = tmp_and_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 806;
        goto try_finally_handler_2;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = var_N.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 806;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__builtincoeffs );

    if (unlikely( tmp_compexpr_right_2 == NULL ))
    {
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__builtincoeffs );
    }

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242624 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 806;
        goto try_finally_handler_3;
    }

    tmp_cond_value_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 806;
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
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_3 = tmp_and_1__value_1.object;

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
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 806;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    // Tried code
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__builtincoeffs );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__builtincoeffs );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242624 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
    }

    tmp_subscr_subscript_1 = var_N.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
    }

    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
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


        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
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


        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_10;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_11 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 2 );
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


        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_3.object == NULL );
    tmp_tuple_unpack_1__element_3.object = tmp_assign_source_11;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_12 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_12 == NULL )
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


        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_4.object == NULL );
    tmp_tuple_unpack_1__element_4.object = tmp_assign_source_12;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_13 = UNPACK_PARAMETER_NEXT( tmp_unpack_5, 4 );
    if ( tmp_assign_source_13 == NULL )
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


        frame_function->f_lineno = 807;
        goto try_finally_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_5.object == NULL );
    tmp_tuple_unpack_1__element_5.object = tmp_assign_source_13;

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

            goto try_finally_handler_4;
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt_1 );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );

        goto try_finally_handler_4;
    }
    tmp_assign_source_14 = tmp_tuple_unpack_1__element_1.object;

    assert( var_na.object == NULL );
    var_na.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

    tmp_assign_source_15 = tmp_tuple_unpack_1__element_2.object;

    assert( var_da.object == NULL );
    var_da.object = INCREASE_REFCOUNT( tmp_assign_source_15 );

    tmp_assign_source_16 = tmp_tuple_unpack_1__element_3.object;

    assert( var_vi.object == NULL );
    var_vi.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    tmp_assign_source_17 = tmp_tuple_unpack_1__element_4.object;

    assert( var_nb.object == NULL );
    var_nb.object = INCREASE_REFCOUNT( tmp_assign_source_17 );

    tmp_assign_source_18 = tmp_tuple_unpack_1__element_5.object;

    assert( var_db.object == NULL );
    var_db.object = INCREASE_REFCOUNT( tmp_assign_source_18 );

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

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter.object );
    tmp_tuple_unpack_1__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1.object );
    tmp_tuple_unpack_1__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2.object );
    tmp_tuple_unpack_1__element_2.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3.object );
    tmp_tuple_unpack_1__element_3.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4.object );
    tmp_tuple_unpack_1__element_4.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_5.object );
    tmp_tuple_unpack_1__element_5.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_1;
    }

    goto finally_end_3;
    finally_end_3:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_binop_left_5 = var_na.object;

    if ( tmp_binop_left_5 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69826 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_array );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_5 = var_vi.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242667 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 808;
    tmp_binop_right_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }
    tmp_binop_left_4 = BINARY_OPERATION_MUL( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }
    tmp_binop_right_4 = var_da.object;

    if ( tmp_binop_right_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 189828 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_float_arg_1 = var_nb.object;

    if ( tmp_float_arg_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69874 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }

    tmp_binop_left_6 = TO_FLOAT( tmp_float_arg_1 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }
    tmp_binop_right_6 = var_db.object;

    if ( tmp_binop_right_6 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 189876 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 808;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto try_finally_handler_start_1;
    branch_no_3:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_4;
    finally_end_4:;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_subscr_target_2 = par_rn.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144105 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 810;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 810;
        goto try_finally_handler_6;
    }
    tmp_compexpr_right_3 = const_int_0;
    tmp_assign_source_19 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 810;
        goto try_finally_handler_6;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_19;

    tmp_cond_value_6 = tmp_or_1__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 810;
        goto try_finally_handler_6;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_cond_value_5 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_subscr_target_3 = par_rn.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144105 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 810;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_3 = const_int_neg_1;
    tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 810;
        goto try_finally_handler_7;
    }
    tmp_compexpr_right_4 = var_N.object;

    if ( tmp_compexpr_right_4 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 810;
        goto try_finally_handler_7;
    }

    tmp_cond_value_5 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 810;
        goto try_finally_handler_7;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_6;
    }

    goto finally_end_5;
    finally_end_5:;
    condexpr_end_2:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_5;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 810;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_1 = const_str_digest_26b20b057633956ef531267ae8606b73;
    frame_function->f_lineno = 811;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 811;
        goto try_finally_handler_5;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 811;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_5;
    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
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
    tmp_binop_left_7 = par_rn.object;

    if ( tmp_binop_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144105 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 813;
        goto frame_exception_exit_1;
    }

    tmp_float_arg_2 = var_N.object;

    if ( tmp_float_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 813;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = TO_FLOAT( tmp_float_arg_2 );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 813;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 813;
        goto frame_exception_exit_1;
    }
    assert( var_yi.object == NULL );
    var_yi.object = tmp_assign_source_20;

    tmp_binop_left_9 = const_float_2_0;
    tmp_binop_right_9 = var_yi.object;

    tmp_binop_left_8 = BINARY_OPERATION_MUL( tmp_binop_left_9, tmp_binop_right_9 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 814;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_8 = const_int_pos_1;
    tmp_assign_source_21 = BINARY_OPERATION_SUB( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 814;
        goto frame_exception_exit_1;
    }
    assert( var_ti.object == NULL );
    var_ti.object = tmp_assign_source_21;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 815;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_arange );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 815;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_int_0;
    tmp_binop_left_10 = var_N.object;

    if ( tmp_binop_left_10 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 815;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_10 = const_int_pos_1;
    tmp_call_arg_element_8 = BINARY_OPERATION_ADD( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 815;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 815;
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 815;
        goto frame_exception_exit_1;
    }
    assert( var_nvec.object == NULL );
    var_nvec.object = tmp_assign_source_22;

    tmp_binop_left_11 = var_ti.object;

    tmp_subscr_target_4 = var_nvec.object;

    tmp_subscr_subscript_4 = PyTuple_New( 2 );
    tmp_tuple_element_2 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 0, tmp_tuple_element_2 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_subscr_subscript_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 816;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_newaxis );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_subscr_subscript_4 );

        frame_function->f_lineno = 816;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 1, tmp_tuple_element_2 );
    tmp_binop_right_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_binop_right_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 816;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = POWER_OPERATION( tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 816;
        goto frame_exception_exit_1;
    }
    assert( var_C.object == NULL );
    var_C.object = tmp_assign_source_23;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 817;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_linalg );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 817;
        goto frame_exception_exit_1;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_inv );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 817;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = var_C.object;

    frame_function->f_lineno = 817;
    tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 817;
        goto frame_exception_exit_1;
    }
    assert( var_Cinv.object == NULL );
    var_Cinv.object = tmp_assign_source_24;

    tmp_iter_arg_2 = const_tuple_int_0_int_pos_1_tuple;
    tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 819;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_25;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_26 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 819;
            goto try_finally_handler_8;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    tmp_assign_source_27 = tmp_for_loop_1__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
        Py_DECREF( old );
    }
    tmp_binop_left_13 = const_int_pos_2;
    tmp_binop_right_13 = var_Cinv.object;

    if ( tmp_binop_right_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242715 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }

    tmp_binop_left_12 = BINARY_OPERATION_MUL( tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }
    tmp_source_name_11 = var_Cinv.object;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242715 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dot );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );

        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }
    tmp_call_arg_element_10 = var_C.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_binop_left_12 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242765 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }

    frame_function->f_lineno = 820;
    tmp_source_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );

        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dot );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );

        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }
    tmp_call_arg_element_11 = var_Cinv.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_12 );
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242715 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }

    frame_function->f_lineno = 820;
    tmp_binop_right_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_binop_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_12 );

        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }
    tmp_assign_source_28 = BINARY_OPERATION_SUB( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 820;
        goto try_finally_handler_8;
    }
    if (var_Cinv.object == NULL)
    {
        var_Cinv.object = tmp_assign_source_28;
    }
    else
    {
        PyObject *old = var_Cinv.object;
        var_Cinv.object = tmp_assign_source_28;
        Py_DECREF( old );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 819;
        goto try_finally_handler_8;
    }
    goto loop_start_1;
    loop_end_1:;
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

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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
    tmp_binop_left_14 = const_float_2_0;
    tmp_subscr_target_5 = var_nvec.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242812 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 821;
        goto frame_exception_exit_1;
    }

    tmp_sliceobj_step_1 = const_int_pos_2;
    tmp_subscr_subscript_5 = MAKE_SLICEOBJ( Py_None, Py_None, tmp_sliceobj_step_1 );
    tmp_binop_left_15 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_subscript_5 );
    if ( tmp_binop_left_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 821;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_15 = const_int_pos_1;
    tmp_binop_right_14 = BINARY_OPERATION_ADD( tmp_binop_left_15, tmp_binop_right_15 );
    Py_DECREF( tmp_binop_left_15 );
    if ( tmp_binop_right_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 821;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_14, tmp_binop_right_14 );
    Py_DECREF( tmp_binop_right_14 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 821;
        goto frame_exception_exit_1;
    }
    assert( var_vec.object == NULL );
    var_vec.object = tmp_assign_source_29;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 822;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dot );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 822;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_6 = var_Cinv.object;

    if ( tmp_subscr_target_6 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242715 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 822;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 0, tmp_tuple_element_3 );
    tmp_sliceobj_step_2 = const_int_pos_2;
    tmp_tuple_element_3 = MAKE_SLICEOBJ( Py_None, Py_None, tmp_sliceobj_step_2 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_6, 1, tmp_tuple_element_3 );
    tmp_call_arg_element_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_subscript_6 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 822;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = var_vec.object;

    frame_function->f_lineno = 822;
    tmp_binop_left_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_binop_left_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 822;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_17 = var_N.object;

    if ( tmp_binop_right_17 == NULL )
    {
        Py_DECREF( tmp_binop_left_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 822;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_16 = BINARY_OPERATION_MUL( tmp_binop_left_17, tmp_binop_right_17 );
    Py_DECREF( tmp_binop_left_17 );
    if ( tmp_binop_left_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 822;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_16 = const_int_pos_2;
    tmp_assign_source_30 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_16, tmp_binop_right_16 );
    Py_DECREF( tmp_binop_left_16 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 822;
        goto frame_exception_exit_1;
    }
    assert( var_ai.object == NULL );
    var_ai.object = tmp_assign_source_30;

    // Tried code
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_binop_left_18 = var_N.object;

    if ( tmp_binop_left_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 824;
        goto try_finally_handler_10;
    }

    tmp_binop_right_18 = const_int_pos_2;
    tmp_compexpr_left_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_18, tmp_binop_right_18 );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 824;
        goto try_finally_handler_10;
    }
    tmp_compexpr_right_5 = const_int_0;
    tmp_assign_source_31 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 824;
        goto try_finally_handler_10;
    }
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = tmp_assign_source_31;

    tmp_cond_value_8 = tmp_and_2__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 824;
        goto try_finally_handler_10;
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
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_7 = par_equal.object;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70117 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 824;
        goto try_finally_handler_11;
    }

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_10;
    }

    goto finally_end_9;
    finally_end_9:;
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_7 = tmp_and_2__value_1.object;

    condexpr_end_3:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_9;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 824;
        goto try_finally_handler_9;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_binop_left_19 = var_N.object;

    if ( tmp_binop_left_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 825;
        goto try_finally_handler_9;
    }

    tmp_binop_left_20 = var_N.object;

    if ( tmp_binop_left_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 825;
        goto try_finally_handler_9;
    }

    tmp_binop_right_20 = const_float_3_0;
    tmp_binop_right_19 = BINARY_OPERATION_ADD( tmp_binop_left_20, tmp_binop_right_20 );
    if ( tmp_binop_right_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 825;
        goto try_finally_handler_9;
    }
    tmp_assign_source_32 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_19, tmp_binop_right_19 );
    Py_DECREF( tmp_binop_right_19 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 825;
        goto try_finally_handler_9;
    }
    assert( var_BN.object == NULL );
    var_BN.object = tmp_assign_source_32;

    tmp_binop_left_21 = var_N.object;

    if ( tmp_binop_left_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 826;
        goto try_finally_handler_9;
    }

    tmp_binop_right_21 = const_int_pos_2;
    tmp_assign_source_33 = BINARY_OPERATION_ADD( tmp_binop_left_21, tmp_binop_right_21 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 826;
        goto try_finally_handler_9;
    }
    assert( var_power.object == NULL );
    var_power.object = tmp_assign_source_33;

    goto branch_end_5;
    branch_no_5:;
    tmp_binop_left_22 = var_N.object;

    if ( tmp_binop_left_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 828;
        goto try_finally_handler_9;
    }

    tmp_binop_left_23 = var_N.object;

    if ( tmp_binop_left_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 828;
        goto try_finally_handler_9;
    }

    tmp_binop_right_23 = const_float_2_0;
    tmp_binop_right_22 = BINARY_OPERATION_ADD( tmp_binop_left_23, tmp_binop_right_23 );
    if ( tmp_binop_right_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 828;
        goto try_finally_handler_9;
    }
    tmp_assign_source_34 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_22, tmp_binop_right_22 );
    Py_DECREF( tmp_binop_right_22 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 828;
        goto try_finally_handler_9;
    }
    assert( var_BN.object == NULL );
    var_BN.object = tmp_assign_source_34;

    tmp_binop_left_24 = var_N.object;

    if ( tmp_binop_left_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 829;
        goto try_finally_handler_9;
    }

    tmp_binop_right_24 = const_int_pos_1;
    tmp_assign_source_35 = BINARY_OPERATION_ADD( tmp_binop_left_24, tmp_binop_right_24 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 829;
        goto try_finally_handler_9;
    }
    assert( var_power.object == NULL );
    var_power.object = tmp_assign_source_35;

    branch_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_5;
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
    tmp_binop_left_25 = var_BN.object;

    if ( tmp_binop_left_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242862 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67960 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_dot );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_26 = var_yi.object;

    if ( tmp_binop_left_26 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242910 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_26 = var_power.object;

    if ( tmp_binop_right_26 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 175567 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = POWER_OPERATION( tmp_binop_left_26, tmp_binop_right_26 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = var_ai.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79765 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 831;
    tmp_binop_right_25 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_binop_right_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_36 = BINARY_OPERATION_SUB( tmp_binop_left_25, tmp_binop_right_25 );
    Py_DECREF( tmp_binop_right_25 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 831;
        goto frame_exception_exit_1;
    }
    if (var_BN.object == NULL)
    {
        var_BN.object = tmp_assign_source_36;
    }
    else
    {
        PyObject *old = var_BN.object;
        var_BN.object = tmp_assign_source_36;
        Py_DECREF( old );
    }
    tmp_binop_left_27 = var_power.object;

    if ( tmp_binop_left_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 175567 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 832;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_27 = const_int_pos_1;
    tmp_assign_source_37 = BINARY_OPERATION_ADD( tmp_binop_left_27, tmp_binop_right_27 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 832;
        goto frame_exception_exit_1;
    }
    assert( var_p1.object == NULL );
    var_p1.object = tmp_assign_source_37;

    tmp_binop_left_29 = var_power.object;

    if ( tmp_binop_left_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 175567 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1572 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_log );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = var_N.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71377 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 833;
    tmp_binop_right_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_binop_right_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_28 = BINARY_OPERATION_MUL( tmp_binop_left_29, tmp_binop_right_29 );
    Py_DECREF( tmp_binop_right_29 );
    if ( tmp_binop_left_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_gammaln );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gammaln );
    }

    if ( tmp_called_13 == NULL )
    {
        Py_DECREF( tmp_binop_left_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 242958 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = var_p1.object;

    frame_function->f_lineno = 833;
    tmp_binop_right_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_17 );
    if ( tmp_binop_right_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_28 );

        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_38 = BINARY_OPERATION_SUB( tmp_binop_left_28, tmp_binop_right_28 );
    Py_DECREF( tmp_binop_left_28 );
    Py_DECREF( tmp_binop_right_28 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 833;
        goto frame_exception_exit_1;
    }
    assert( var_fac.object == NULL );
    var_fac.object = tmp_assign_source_38;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1572 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 834;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_exp );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 834;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_18 = var_fac.object;

    frame_function->f_lineno = 834;
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 834;
        goto frame_exception_exit_1;
    }
    assert( var_fac.object != NULL );
    {
        PyObject *old = var_fac.object;
        var_fac.object = tmp_assign_source_39;
        Py_DECREF( old );
    }

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_ai.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 79765 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 835;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_binop_left_30 = var_BN.object;

    tmp_binop_right_30 = var_fac.object;

    tmp_tuple_element_4 = BINARY_OPERATION_MUL( tmp_binop_left_30, tmp_binop_right_30 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 835;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;

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
    if ((var_N.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_N,
            var_N.object
        );

    }
    if ((var_na.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_na,
            var_na.object
        );

    }
    if ((var_da.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_da,
            var_da.object
        );

    }
    if ((var_vi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vi,
            var_vi.object
        );

    }
    if ((var_nb.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nb,
            var_nb.object
        );

    }
    if ((var_db.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_db,
            var_db.object
        );

    }
    if ((var_yi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_yi,
            var_yi.object
        );

    }
    if ((var_ti.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ti,
            var_ti.object
        );

    }
    if ((var_nvec.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nvec,
            var_nvec.object
        );

    }
    if ((var_C.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_C,
            var_C.object
        );

    }
    if ((var_Cinv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_Cinv,
            var_Cinv.object
        );

    }
    if ((var_i.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_i,
            var_i.object
        );

    }
    if ((var_vec.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vec,
            var_vec.object
        );

    }
    if ((var_ai.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ai,
            var_ai.object
        );

    }
    if ((var_BN.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_BN,
            var_BN.object
        );

    }
    if ((var_power.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_power,
            var_power.object
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
    if ((var_fac.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fac,
            var_fac.object
        );

    }
    if ((par_rn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rn,
            par_rn.object
        );

    }
    if ((par_equal.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_equal,
            par_equal.object
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
static PyObject *fparse_function_14_newton_cotes_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_rn = NULL;
    PyObject *_python_par_equal = NULL;
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
                PyErr_Format( PyExc_TypeError, "newton_cotes() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_rn == key )
            {
                assert( _python_par_rn == NULL );
                _python_par_rn = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_equal == key )
            {
                assert( _python_par_equal == NULL );
                _python_par_equal = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rn, key ) == 1 )
            {
                assert( _python_par_rn == NULL );
                _python_par_rn = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_equal, key ) == 1 )
            {
                assert( _python_par_equal == NULL );
                _python_par_equal = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "newton_cotes() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rn != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_rn = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_rn == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_rn = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_equal != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_equal = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_equal == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_equal = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_rn == NULL || _python_par_equal == NULL ))
    {
        PyObject *values[] = { _python_par_rn, _python_par_equal };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_14_newton_cotes_of_module_scipy$integrate$quadrature( self, _python_par_rn, _python_par_equal );

error_exit:;

    Py_XDECREF( _python_par_rn );
    Py_XDECREF( _python_par_equal );

    return NULL;
}

static PyObject *dparse_function_14_newton_cotes_of_module_scipy$integrate$quadrature( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_14_newton_cotes_of_module_scipy$integrate$quadrature( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_newton_cotes_of_module_scipy$integrate$quadrature( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10__difftrap_of_module_scipy$integrate$quadrature(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10__difftrap_of_module_scipy$integrate$quadrature,
        dparse_function_10__difftrap_of_module_scipy$integrate$quadrature,
        const_str_plain__difftrap,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a233f2969be08fcdde72acbd3408203c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_885818b15b8c84c14211f9327db66669
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11__romberg_diff_of_module_scipy$integrate$quadrature(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11__romberg_diff_of_module_scipy$integrate$quadrature,
        dparse_function_11__romberg_diff_of_module_scipy$integrate$quadrature,
        const_str_plain__romberg_diff,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a0e09e0344b9aaf45e93d8f38ea7e56d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_f1d02f5e81ce421e7cd32ce895d6e8d2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12__printresmat_of_module_scipy$integrate$quadrature(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12__printresmat_of_module_scipy$integrate$quadrature,
        dparse_function_12__printresmat_of_module_scipy$integrate$quadrature,
        const_str_plain__printresmat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fb395907fb3b7d667750cd596889a532,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_romberg_of_module_scipy$integrate$quadrature( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_romberg_of_module_scipy$integrate$quadrature,
        dparse_function_13_romberg_of_module_scipy$integrate$quadrature,
        const_str_plain_romberg,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_269992869f9a3d95af55dfb0803a7db5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_759eac21812f98d33d286be47f7ef53c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_newton_cotes_of_module_scipy$integrate$quadrature( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_newton_cotes_of_module_scipy$integrate$quadrature,
        dparse_function_14_newton_cotes_of_module_scipy$integrate$quadrature,
        const_str_plain_newton_cotes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b1b37fe68b01ca29dee7f60fcd4af25f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_3c0bea9b20ade77bbb897408b9dff399
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( PyObjectSharedLocalVariable &closure_args, PyObjectSharedLocalVariable &closure_func )
{
    struct _context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *_python_context = new _context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_args.shareWith( closure_args );
    _python_context->closure_func.shareWith( closure_func );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature,
        dparse_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature,
        const_str_plain_vfunc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_272e71ed9ac2940610aa48796e488da6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        Py_None,
        _python_context,
        _context_function_1_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_fixed_quad_of_module_scipy$integrate$quadrature( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_fixed_quad_of_module_scipy$integrate$quadrature,
        dparse_function_2_fixed_quad_of_module_scipy$integrate$quadrature,
        const_str_plain_fixed_quad,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1e2cfe945281e3ad6dd596f6c35cb5b1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_39647d231e54ac9bc3e595d25a84277e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature( PyObjectSharedLocalVariable &closure_args, PyObjectSharedLocalVariable &closure_func )
{
    struct _context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t *_python_context = new _context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_t;

    // Copy the parameter default values and closure values over.
    _python_context->closure_args.shareWith( closure_args );
    _python_context->closure_func.shareWith( closure_func );

    PyObject *result = Nuitka_Function_New(
        fparse_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature,
        dparse_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature,
        const_str_plain_vfunc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_46dced9e542caf15e8cf22e87e773caa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        Py_None,
        _python_context,
        _context_function_2_vfunc_of_function_3_vectorize1_of_module_scipy$integrate$quadrature_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_vectorize1_of_module_scipy$integrate$quadrature( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_vectorize1_of_module_scipy$integrate$quadrature,
        dparse_function_3_vectorize1_of_module_scipy$integrate$quadrature,
        const_str_plain_vectorize1,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eb8d9082dd316aa14dad51a92817a2c6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_6569a97cd8a59a36b230f637f6e8ea15
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_quadrature_of_module_scipy$integrate$quadrature( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_quadrature_of_module_scipy$integrate$quadrature,
        dparse_function_4_quadrature_of_module_scipy$integrate$quadrature,
        const_str_plain_quadrature,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a31bd3e2eeae1dd61b0ecad914b0bc31,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_5e48f17c40bb7b50e5ad09b520fcf6d4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_tupleset_of_module_scipy$integrate$quadrature(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_tupleset_of_module_scipy$integrate$quadrature,
        dparse_function_5_tupleset_of_module_scipy$integrate$quadrature,
        const_str_plain_tupleset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d8aa4f6121e155a190e5ad288008d691,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_cumtrapz_of_module_scipy$integrate$quadrature( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_cumtrapz_of_module_scipy$integrate$quadrature,
        dparse_function_6_cumtrapz_of_module_scipy$integrate$quadrature,
        const_str_plain_cumtrapz,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a61b9ba9711450c8cc9b2eb9bf01c8e2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_c19c730461f9601651392590cd087cd6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__basic_simps_of_module_scipy$integrate$quadrature(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__basic_simps_of_module_scipy$integrate$quadrature,
        dparse_function_7__basic_simps_of_module_scipy$integrate$quadrature,
        const_str_plain__basic_simps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_27716352da40eff1f774eb452ae28ed4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_simps_of_module_scipy$integrate$quadrature( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_simps_of_module_scipy$integrate$quadrature,
        dparse_function_8_simps_of_module_scipy$integrate$quadrature,
        const_str_plain_simps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_57b2ba88218ea82d79d59ae41021291f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_776b28d0f59737a44b1cd979a38b06ed
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_romb_of_module_scipy$integrate$quadrature( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_romb_of_module_scipy$integrate$quadrature,
        dparse_function_9_romb_of_module_scipy$integrate$quadrature,
        const_str_plain_romb,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_207890bf451aae5f1c2704a5442d5eb6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadrature,
        const_str_digest_53b7f4f97fb64412a0754646ba873188
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$integrate$quadrature =
{
    PyModuleDef_HEAD_INIT,
    "scipy.integrate.quadrature",   /* m_name */
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

MOD_INIT_DECL( scipy$integrate$quadrature )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$integrate$quadrature );
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

    // puts( "in initscipy$integrate$quadrature" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$integrate$quadrature = Py_InitModule4(
        "scipy.integrate.quadrature",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$integrate$quadrature = PyModule_Create( &mdef_scipy$integrate$quadrature );
#endif

    moduledict_scipy$integrate$quadrature = (PyDictObject *)((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;

    assertObject( module_scipy$integrate$quadrature );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_82da6fb6bd26fb6f6029d13926704284, module_scipy$integrate$quadrature );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$integrate$quadrature );

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
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
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
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_globals_14;
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
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
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_04871342ca8acec106007cd5986e42e0;
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_79e5a63264a672143e3c1829dc5ce6f4, module_scipy$integrate$quadrature );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
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
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_abd4608d2db02e99c3dfbf05942624db_list );
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_3d05d759268294774569330d98381450, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_p_roots_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_p_roots );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_p_roots, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_a175ed48db162ffdb55bc9a35e478b7b, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_gammaln_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_gammaln );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_gammaln, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sum );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_sum, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ones );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_ones, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_8, tmp_import_globals_8, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_add );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_add, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_9, tmp_import_globals_9, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_diff );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_diff, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_10, tmp_import_globals_10, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_isinf );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_isinf, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_11, tmp_import_globals_11, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_isscalar );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_isscalar, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_12, tmp_import_globals_12, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_13, tmp_import_globals_13, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_real );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_real, tmp_assign_source_16 );
    tmp_import_globals_14 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_14, tmp_import_globals_14, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_trapz );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_trapz, tmp_assign_source_17 );
    tmp_import_globals_15 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_15, tmp_import_globals_15, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_arange );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_18 );
    tmp_import_globals_16 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_16, tmp_import_globals_16, const_tuple_b31a5038b05ad7c9210f26ca10dbc5fb_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_empty );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_empty, tmp_assign_source_19 );
    tmp_import_globals_17 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 10;
    tmp_assign_source_20 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_17, tmp_import_globals_17, Py_None, const_int_0 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_20 );
    tmp_import_globals_18 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 11;
    tmp_assign_source_21 = IMPORT_MODULE( const_str_plain_math, tmp_import_globals_18, tmp_import_globals_18, Py_None, const_int_0 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_21 );
    tmp_import_globals_19 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_22 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_19, tmp_import_globals_19, Py_None, const_int_0 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_22 );
    tmp_import_globals_20 = ((PyModuleObject *)module_scipy$integrate$quadrature)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_644880ce7dbf6c5f121ce247016ffe23, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_plain_xrange_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_xrange );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_23 );
    // Tried code
    tmp_assign_source_24 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 200212 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_24;

    tmp_assign_source_25 = impl_class_1_AccuracyWarning_of_module_scipy$integrate$quadrature(  );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_25;

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
    tmp_assign_source_26 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_26 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_26;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_AccuracyWarning;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 17;
    tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_27;

    tmp_assign_source_28 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_AccuracyWarning, tmp_assign_source_28 );
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
    tmp_defaults_1 = const_tuple_tuple_empty_int_pos_5_tuple;
    tmp_assign_source_29 = MAKE_FUNCTION_function_2_fixed_quad_of_module_scipy$integrate$quadrature( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_29 );

        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_fixed_quad, tmp_assign_source_29 );
    tmp_defaults_2 = const_tuple_tuple_empty_false_tuple;
    tmp_assign_source_30 = MAKE_FUNCTION_function_3_vectorize1_of_module_scipy$integrate$quadrature( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        frame_module->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_vectorize1, tmp_assign_source_30 );
    tmp_defaults_3 = const_tuple_c61e3331c604dfee164016e29c4809c2_tuple;
    tmp_assign_source_31 = MAKE_FUNCTION_function_4_quadrature_of_module_scipy$integrate$quadrature( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_31 );

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_quadrature, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_function_5_tupleset_of_module_scipy$integrate$quadrature(  );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        frame_module->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_tupleset, tmp_assign_source_32 );
    tmp_defaults_4 = const_tuple_none_float_1_0_int_neg_1_none_tuple;
    tmp_assign_source_33 = MAKE_FUNCTION_function_6_cumtrapz_of_module_scipy$integrate$quadrature( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_33 );

        frame_module->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_cumtrapz, tmp_assign_source_33 );
    tmp_assign_source_34 = MAKE_FUNCTION_function_7__basic_simps_of_module_scipy$integrate$quadrature(  );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_34 );

        frame_module->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__basic_simps, tmp_assign_source_34 );
    tmp_defaults_5 = const_tuple_none_int_pos_1_int_neg_1_str_plain_avg_tuple;
    tmp_assign_source_35 = MAKE_FUNCTION_function_8_simps_of_module_scipy$integrate$quadrature( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        frame_module->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_simps, tmp_assign_source_35 );
    tmp_defaults_6 = const_tuple_float_1_0_int_neg_1_false_tuple;
    tmp_assign_source_36 = MAKE_FUNCTION_function_9_romb_of_module_scipy$integrate$quadrature( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        frame_module->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_romb, tmp_assign_source_36 );
    tmp_assign_source_37 = MAKE_FUNCTION_function_10__difftrap_of_module_scipy$integrate$quadrature(  );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        frame_module->f_lineno = 525;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__difftrap, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_function_11__romberg_diff_of_module_scipy$integrate$quadrature(  );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_38 );

        frame_module->f_lineno = 551;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__romberg_diff, tmp_assign_source_38 );
    tmp_assign_source_39 = MAKE_FUNCTION_function_12__printresmat_of_module_scipy$integrate$quadrature(  );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_39 );

        frame_module->f_lineno = 560;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__printresmat, tmp_assign_source_39 );
    tmp_defaults_7 = const_tuple_b8bcc5ec99fca6949bc56a40cba949f2_tuple;
    tmp_assign_source_40 = MAKE_FUNCTION_function_13_romberg_of_module_scipy$integrate$quadrature( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_40 );

        frame_module->f_lineno = 577;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_romberg, tmp_assign_source_40 );
    tmp_assign_source_41 = DEEP_COPY( const_dict_781521607e0786098475f1bcd1891db7 );
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain__builtincoeffs, tmp_assign_source_41 );
    tmp_defaults_8 = const_tuple_int_0_tuple;
    tmp_assign_source_42 = MAKE_FUNCTION_function_14_newton_cotes_of_module_scipy$integrate$quadrature( INCREASE_REFCOUNT( tmp_defaults_8 ) );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_42 );

        frame_module->f_lineno = 755;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadrature, (Nuitka_StringObject *)const_str_plain_newton_cotes, tmp_assign_source_42 );

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

    return MOD_RETURN_VALUE( module_scipy$integrate$quadrature );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
