// Generated code for Python source for module 'scipy.integrate.quadpack'
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

// The _module_scipy$integrate$quadpack is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$integrate$quadpack;
PyDictObject *moduledict_scipy$integrate$quadpack;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_50;
extern PyObject *const_int_pos_80;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_a2;
extern PyObject *const_str_plain_b2;
extern PyObject *const_str_plain_nl;
extern PyObject *const_str_plain_Inf;
static PyObject *const_str_plain_alg;
extern PyObject *const_str_plain_cos;
static PyObject *const_str_plain_ier;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_low;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_opt;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_rng;
extern PyObject *const_str_plain_sin;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_func;
static PyObject *const_str_plain_gfun;
static PyObject *const_str_plain_hfun;
extern PyObject *const_str_plain_high;
static PyObject *const_str_plain_msgs;
extern PyObject *const_str_plain_opts;
static PyObject *const_str_plain_qfun;
extern PyObject *const_str_plain_quad;
static PyObject *const_str_plain_rfun;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain_wvar;
static PyObject *const_str_plain__quad;
extern PyObject *const_str_plain_bound;
extern PyObject *const_str_plain_depth;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_float;
static PyObject *const_str_plain_limit;
static PyObject *const_str_plain_maxp1;
static PyObject *const_str_plain_nquad;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain_wopts;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_plain__NQuad;
static PyObject *const_str_plain__qagie;
static PyObject *const_str_plain__qagpe;
static PyObject *const_str_plain__qagse;
static PyObject *const_str_plain__qawce;
static PyObject *const_str_plain__qawfe;
static PyObject *const_str_plain__qawoe;
static PyObject *const_str_plain__qawse;
static PyObject *const_str_plain_abserr;
static PyObject *const_str_plain_cauchy;
static PyObject *const_str_plain_epsabs;
static PyObject *const_str_plain_epsrel;
static PyObject *const_str_plain_fn_opt;
static PyObject *const_str_plain_integr;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain_limlst;
static PyObject *const_str_plain_momcom;
static PyObject *const_str_plain_myargs;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain_points;
static PyObject *const_str_plain_range_;
extern PyObject *const_str_plain_ranges;
extern PyObject *const_str_plain_retval;
extern PyObject *const_str_plain_stdout;
static PyObject *const_str_plain_weight;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__infunc;
static PyObject *const_str_plain_chebcom;
static PyObject *const_str_plain_dblquad;
static PyObject *const_str_plain_explain;
extern PyObject *const_str_plain_partial;
static PyObject *const_str_plain_strdict;
static PyObject *const_str_plain_thefunc;
static PyObject *const_str_plain_tplquad;
extern PyObject *const_str_plain_unknown;
static PyObject *const_str_plain__OptFunc;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain__infunc2;
extern PyObject *const_str_plain_callable;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_fn_range;
static PyObject *const_str_plain_maxdepth;
extern PyObject *const_str_plain_quadpack;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain__quadpack;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_plain_infbounds;
extern PyObject *const_str_plain_integrate;
static PyObject *const_str_plain_more_args;
extern PyObject *const_float_1_49e_minus_08;
extern PyObject *const_list_dict_empty_list;
static PyObject *const_str_plain__RangeFunc;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_the_points;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain_full_output;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain__quad_weight;
static PyObject *const_str_plain_quad_explain;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_Inf_tuple;
static PyObject *const_str_plain_IntegrationWarning;
static PyObject *const_tuple_str_plain_output_tuple;
static PyObject *const_tuple_str_plain_partial_tuple;
static PyObject *const_tuple_str_plain__quadpack_tuple;
static PyObject *const_dict_90e5dda4b43581c37b49cc3a7124fe24;
static PyObject *const_dict_e9ec908e700718f0d28077861c8a7288;
static PyObject *const_list_str_plain_cos_str_plain_sin_list;
static PyObject *const_tuple_str_plain_self_str_plain_opt_tuple;
static PyObject *const_tuple_str_plain_x_str_plain_myargs_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
static PyObject *const_list_76d88ba854906a655f3f1b9748aba672_list;
static PyObject *const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list;
static PyObject *const_str_digest_06dbfcd9c3612c282a44642e58e0822c;
static PyObject *const_str_digest_0b15989119418fd27ae42a9b5a9aec33;
static PyObject *const_str_digest_109715467b74bd66639faa5673f707c1;
static PyObject *const_str_digest_11e867bfc3a680295069b6a8bfda1c08;
static PyObject *const_str_digest_363623f957866100bc2ae264eb09fc2e;
static PyObject *const_str_digest_3ccbb8db726eb122d7b2b45c4640eb04;
static PyObject *const_str_digest_4a5969bacdeb54378f7f10f4eea5a343;
static PyObject *const_str_digest_500c9f164dbd904ae0b85a0b62db6348;
static PyObject *const_str_digest_50d1f4ff5bb3cdafb59ea044281992e4;
static PyObject *const_str_digest_5148c8b44c27ceb6e93935380c9d7297;
static PyObject *const_str_digest_57fa2c25368aa0ccb9a0cffbdd506546;
static PyObject *const_str_digest_5a4953fa3c99aca82178fa81fb90cf3a;
static PyObject *const_str_digest_6b116b68d4f950754e1372bfe23b7013;
static PyObject *const_str_digest_6b8308bc6ce4a2130140488c5898fbca;
static PyObject *const_str_digest_700a168f39f8cac015bd3f8526f22222;
static PyObject *const_str_digest_70560c519e97cbb0ab21ec4c0869e70f;
static PyObject *const_str_digest_7b3374a81d28dc6d229ae8a4dc8b429f;
static PyObject *const_str_digest_94582a6e784e0ad7f46c5b1d53da8d95;
static PyObject *const_str_digest_a3d7185e3d4dcac2048040cfeb41608f;
static PyObject *const_str_digest_a757028e5d9044054982de536991b384;
static PyObject *const_str_digest_aa560db96555f25b76013cc66174ee9d;
static PyObject *const_str_digest_ad57d3b27d0e8faaa1fe912e8c9f021f;
static PyObject *const_str_digest_afefcce2cd09bee93348b649679db522;
static PyObject *const_str_digest_b547445c9df3da942671a6dc7ff3649e;
static PyObject *const_str_digest_bdad57b8b0bbd11815e2229c44a3b799;
static PyObject *const_str_digest_c01749511da13c63f60a4f87b83b66d0;
static PyObject *const_str_digest_c4520721daa7f8d22f7a9b9595fd9dc5;
static PyObject *const_str_digest_c7a2181e0a22321ceb90faa0d65b7f39;
static PyObject *const_str_digest_cd145e13c65ca8f490faddfafe1d91b0;
static PyObject *const_str_digest_d357026acc772a1fcde1a74236d9c0a5;
static PyObject *const_str_digest_e5eff1d177939ba287dfe50eb8e479ca;
static PyObject *const_str_digest_e645f452d1fe53e296a864781affafe1;
static PyObject *const_str_digest_ea1f1fae3f52535e125ed7cd0ffd8f81;
static PyObject *const_str_digest_f49673f4ff370fe3dd0a27b4b3084e3f;
static PyObject *const_str_digest_f70ddb86266d2db6eaa05b77d5f16768;
static PyObject *const_tuple_str_plain_self_str_plain_range__tuple;
static PyObject *const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple;
static PyObject *const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple;
static PyObject *const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple;
static PyObject *const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple;
static PyObject *const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple;
static PyObject *const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple;
static PyObject *const_tuple_6345345d54372dcb6b550c2fd0e878ce_tuple;
static PyObject *const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple;
static PyObject *const_tuple_64ce9461a404231795e914fa9849e62b_tuple;
static PyObject *const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple;
static PyObject *const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple;
static PyObject *const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple;
static PyObject *const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple;
static PyObject *const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple;
static PyObject *const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple;
static PyObject *const_tuple_e0aad205653b517a3b569df1303a478d_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_tuple_tuple_empty_float_1_49e_minus_08_float_1_49e_minus_08_tuple;
static PyObject *const_tuple_str_plain_x_str_plain_myargs_str_plain_y_str_plain_func_tuple;
static PyObject *const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list;

static void _initModuleConstants(void)
{
    const_str_plain_alg = UNSTREAM_STRING( &constant_bin[ 183412 ], 3, 1 );
    const_str_plain_ier = UNSTREAM_STRING( &constant_bin[ 25496 ], 3, 1 );
    const_str_plain_gfun = UNSTREAM_STRING( &constant_bin[ 126184 ], 4, 1 );
    const_str_plain_hfun = UNSTREAM_STRING( &constant_bin[ 240584 ], 4, 1 );
    const_str_plain_msgs = UNSTREAM_STRING( &constant_bin[ 239392 ], 4, 1 );
    const_str_plain_qfun = UNSTREAM_STRING( &constant_bin[ 240725 ], 4, 1 );
    const_str_plain_rfun = UNSTREAM_STRING( &constant_bin[ 48150 ], 4, 1 );
    const_str_plain_wvar = UNSTREAM_STRING( &constant_bin[ 166467 ], 4, 1 );
    const_str_plain__quad = UNSTREAM_STRING( &constant_bin[ 239474 ], 5, 1 );
    const_str_plain_limit = UNSTREAM_STRING( &constant_bin[ 52554 ], 5, 1 );
    const_str_plain_maxp1 = UNSTREAM_STRING( &constant_bin[ 239882 ], 5, 1 );
    const_str_plain_nquad = UNSTREAM_STRING( &constant_bin[ 2091788 ], 5, 1 );
    const_str_plain_wopts = UNSTREAM_STRING( &constant_bin[ 239983 ], 5, 1 );
    const_str_plain__NQuad = UNSTREAM_STRING( &constant_bin[ 240971 ], 6, 1 );
    const_str_plain__qagie = UNSTREAM_STRING( &constant_bin[ 2112222 ], 6, 1 );
    const_str_plain__qagpe = UNSTREAM_STRING( &constant_bin[ 2112228 ], 6, 1 );
    const_str_plain__qagse = UNSTREAM_STRING( &constant_bin[ 2112234 ], 6, 1 );
    const_str_plain__qawce = UNSTREAM_STRING( &constant_bin[ 2112240 ], 6, 1 );
    const_str_plain__qawfe = UNSTREAM_STRING( &constant_bin[ 2112246 ], 6, 1 );
    const_str_plain__qawoe = UNSTREAM_STRING( &constant_bin[ 2112252 ], 6, 1 );
    const_str_plain__qawse = UNSTREAM_STRING( &constant_bin[ 2112258 ], 6, 1 );
    const_str_plain_abserr = UNSTREAM_STRING( &constant_bin[ 241097 ], 6, 1 );
    const_str_plain_cauchy = UNSTREAM_STRING( &constant_bin[ 1999560 ], 6, 1 );
    const_str_plain_epsabs = UNSTREAM_STRING( &constant_bin[ 239634 ], 6, 1 );
    const_str_plain_epsrel = UNSTREAM_STRING( &constant_bin[ 239686 ], 6, 1 );
    const_str_plain_fn_opt = UNSTREAM_STRING( &constant_bin[ 2112264 ], 6, 1 );
    const_str_plain_integr = UNSTREAM_STRING( &constant_bin[ 45891 ], 6, 1 );
    const_str_plain_limlst = UNSTREAM_STRING( &constant_bin[ 239830 ], 6, 1 );
    const_str_plain_momcom = UNSTREAM_STRING( &constant_bin[ 2112270 ], 6, 1 );
    const_str_plain_myargs = UNSTREAM_STRING( &constant_bin[ 240482 ], 6, 1 );
    const_str_plain_range_ = UNSTREAM_STRING( &constant_bin[ 157795 ], 6, 1 );
    const_str_plain_weight = UNSTREAM_STRING( &constant_bin[ 162908 ], 6, 1 );
    const_str_plain__infunc = UNSTREAM_STRING( &constant_bin[ 240686 ], 7, 1 );
    const_str_plain_chebcom = UNSTREAM_STRING( &constant_bin[ 208032 ], 7, 1 );
    const_str_plain_dblquad = UNSTREAM_STRING( &constant_bin[ 240822 ], 7, 1 );
    const_str_plain_explain = UNSTREAM_STRING( &constant_bin[ 240133 ], 7, 1 );
    const_str_plain_strdict = UNSTREAM_STRING( &constant_bin[ 240429 ], 7, 1 );
    const_str_plain_thefunc = UNSTREAM_STRING( &constant_bin[ 2112276 ], 7, 1 );
    const_str_plain_tplquad = UNSTREAM_STRING( &constant_bin[ 2091733 ], 7, 1 );
    const_str_plain__OptFunc = UNSTREAM_STRING( &constant_bin[ 240934 ], 8, 1 );
    const_str_plain__infunc2 = UNSTREAM_STRING( &constant_bin[ 240858 ], 8, 1 );
    const_str_plain_fn_range = UNSTREAM_STRING( &constant_bin[ 2112283 ], 8, 1 );
    const_str_plain_maxdepth = UNSTREAM_STRING( &constant_bin[ 2112291 ], 8, 1 );
    const_str_plain__quadpack = UNSTREAM_STRING( &constant_bin[ 239474 ], 9, 1 );
    const_str_plain_infbounds = UNSTREAM_STRING( &constant_bin[ 240233 ], 9, 1 );
    const_str_plain_more_args = UNSTREAM_STRING( &constant_bin[ 240634 ], 9, 1 );
    const_str_plain__RangeFunc = UNSTREAM_STRING( &constant_bin[ 240895 ], 10, 1 );
    const_str_plain_the_points = UNSTREAM_STRING( &constant_bin[ 2112299 ], 10, 1 );
    const_str_plain__quad_weight = UNSTREAM_STRING( &constant_bin[ 239786 ], 12, 1 );
    const_str_plain_quad_explain = UNSTREAM_STRING( &constant_bin[ 2112309 ], 12, 1 );
    const_tuple_str_plain_Inf_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Inf_tuple, 0, const_str_plain_Inf ); Py_INCREF( const_str_plain_Inf );
    const_str_plain_IntegrationWarning = UNSTREAM_STRING( &constant_bin[ 240183 ], 18, 1 );
    const_tuple_str_plain_output_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_output_tuple, 0, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_tuple_str_plain_partial_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_partial_tuple, 0, const_str_plain_partial ); Py_INCREF( const_str_plain_partial );
    const_tuple_str_plain__quadpack_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__quadpack_tuple, 0, const_str_plain__quadpack ); Py_INCREF( const_str_plain__quadpack );
    const_dict_90e5dda4b43581c37b49cc3a7124fe24 = _PyDict_NewPresized( 6 );
    PyDict_SetItem( const_dict_90e5dda4b43581c37b49cc3a7124fe24, const_str_plain_cos, const_int_pos_1 );
    PyDict_SetItem( const_dict_90e5dda4b43581c37b49cc3a7124fe24, const_str_plain_alg, const_int_pos_1 );
    const_str_digest_7b3374a81d28dc6d229ae8a4dc8b429f = UNSTREAM_STRING( &constant_bin[ 2112321 ], 8, 0 );
    PyDict_SetItem( const_dict_90e5dda4b43581c37b49cc3a7124fe24, const_str_digest_7b3374a81d28dc6d229ae8a4dc8b429f, const_int_pos_2 );
    const_str_digest_11e867bfc3a680295069b6a8bfda1c08 = UNSTREAM_STRING( &constant_bin[ 2112329 ], 8, 0 );
    PyDict_SetItem( const_dict_90e5dda4b43581c37b49cc3a7124fe24, const_str_digest_11e867bfc3a680295069b6a8bfda1c08, const_int_pos_3 );
    const_str_digest_06dbfcd9c3612c282a44642e58e0822c = UNSTREAM_STRING( &constant_bin[ 2112321 ], 7, 0 );
    PyDict_SetItem( const_dict_90e5dda4b43581c37b49cc3a7124fe24, const_str_digest_06dbfcd9c3612c282a44642e58e0822c, const_int_pos_4 );
    PyDict_SetItem( const_dict_90e5dda4b43581c37b49cc3a7124fe24, const_str_plain_sin, const_int_pos_2 );
    const_dict_e9ec908e700718f0d28077861c8a7288 = _PyDict_NewPresized( 5 );
    const_str_digest_500c9f164dbd904ae0b85a0b62db6348 = UNSTREAM_STRING( &constant_bin[ 2112337 ], 80, 0 );
    PyDict_SetItem( const_dict_e9ec908e700718f0d28077861c8a7288, const_int_pos_1, const_str_digest_500c9f164dbd904ae0b85a0b62db6348 );
    const_str_digest_bdad57b8b0bbd11815e2229c44a3b799 = UNSTREAM_STRING( &constant_bin[ 2112417 ], 116, 0 );
    PyDict_SetItem( const_dict_e9ec908e700718f0d28077861c8a7288, const_int_pos_2, const_str_digest_bdad57b8b0bbd11815e2229c44a3b799 );
    const_str_digest_afefcce2cd09bee93348b649679db522 = UNSTREAM_STRING( &constant_bin[ 2112533 ], 71, 0 );
    PyDict_SetItem( const_dict_e9ec908e700718f0d28077861c8a7288, const_int_pos_3, const_str_digest_afefcce2cd09bee93348b649679db522 );
    const_str_digest_57fa2c25368aa0ccb9a0cffbdd506546 = UNSTREAM_STRING( &constant_bin[ 2112604 ], 233, 0 );
    PyDict_SetItem( const_dict_e9ec908e700718f0d28077861c8a7288, const_int_pos_4, const_str_digest_57fa2c25368aa0ccb9a0cffbdd506546 );
    const_str_digest_f49673f4ff370fe3dd0a27b4b3084e3f = UNSTREAM_STRING( &constant_bin[ 2112837 ], 72, 0 );
    PyDict_SetItem( const_dict_e9ec908e700718f0d28077861c8a7288, const_int_pos_5, const_str_digest_f49673f4ff370fe3dd0a27b4b3084e3f );
    const_list_str_plain_cos_str_plain_sin_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_cos_str_plain_sin_list, 0, const_str_plain_cos ); Py_INCREF( const_str_plain_cos );
    PyList_SET_ITEM( const_list_str_plain_cos_str_plain_sin_list, 1, const_str_plain_sin ); Py_INCREF( const_str_plain_sin );
    const_tuple_str_plain_self_str_plain_opt_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_opt_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_opt_tuple, 1, const_str_plain_opt ); Py_INCREF( const_str_plain_opt );
    const_tuple_str_plain_x_str_plain_myargs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_myargs_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_myargs_tuple, 1, const_str_plain_myargs ); Py_INCREF( const_str_plain_myargs );
    const_list_76d88ba854906a655f3f1b9748aba672_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_76d88ba854906a655f3f1b9748aba672_list, 0, const_str_plain_quad ); Py_INCREF( const_str_plain_quad );
    PyList_SET_ITEM( const_list_76d88ba854906a655f3f1b9748aba672_list, 1, const_str_plain_dblquad ); Py_INCREF( const_str_plain_dblquad );
    PyList_SET_ITEM( const_list_76d88ba854906a655f3f1b9748aba672_list, 2, const_str_plain_tplquad ); Py_INCREF( const_str_plain_tplquad );
    PyList_SET_ITEM( const_list_76d88ba854906a655f3f1b9748aba672_list, 3, const_str_plain_nquad ); Py_INCREF( const_str_plain_nquad );
    PyList_SET_ITEM( const_list_76d88ba854906a655f3f1b9748aba672_list, 4, const_str_plain_quad_explain ); Py_INCREF( const_str_plain_quad_explain );
    PyList_SET_ITEM( const_list_76d88ba854906a655f3f1b9748aba672_list, 5, const_str_plain_IntegrationWarning ); Py_INCREF( const_str_plain_IntegrationWarning );
    const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list, 0, const_str_plain_cos ); Py_INCREF( const_str_plain_cos );
    PyList_SET_ITEM( const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list, 1, const_str_plain_sin ); Py_INCREF( const_str_plain_sin );
    PyList_SET_ITEM( const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list, 2, const_str_plain_alg ); Py_INCREF( const_str_plain_alg );
    PyList_SET_ITEM( const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list, 3, const_str_digest_7b3374a81d28dc6d229ae8a4dc8b429f ); Py_INCREF( const_str_digest_7b3374a81d28dc6d229ae8a4dc8b429f );
    PyList_SET_ITEM( const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list, 4, const_str_digest_11e867bfc3a680295069b6a8bfda1c08 ); Py_INCREF( const_str_digest_11e867bfc3a680295069b6a8bfda1c08 );
    PyList_SET_ITEM( const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list, 5, const_str_digest_06dbfcd9c3612c282a44642e58e0822c ); Py_INCREF( const_str_digest_06dbfcd9c3612c282a44642e58e0822c );
    PyList_SET_ITEM( const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list, 6, const_str_plain_cauchy ); Py_INCREF( const_str_plain_cauchy );
    const_str_digest_0b15989119418fd27ae42a9b5a9aec33 = UNSTREAM_STRING( &constant_bin[ 2112909 ], 276, 0 );
    const_str_digest_109715467b74bd66639faa5673f707c1 = UNSTREAM_STRING( &constant_bin[ 2113185 ], 14, 0 );
    const_str_digest_363623f957866100bc2ae264eb09fc2e = UNSTREAM_STRING( &constant_bin[ 2113199 ], 39, 0 );
    const_str_digest_3ccbb8db726eb122d7b2b45c4640eb04 = UNSTREAM_STRING( &constant_bin[ 2113238 ], 21, 0 );
    const_str_digest_4a5969bacdeb54378f7f10f4eea5a343 = UNSTREAM_STRING( &constant_bin[ 2113259 ], 1552, 0 );
    const_str_digest_50d1f4ff5bb3cdafb59ea044281992e4 = UNSTREAM_STRING( &constant_bin[ 2114811 ], 52, 0 );
    const_str_digest_5148c8b44c27ceb6e93935380c9d7297 = UNSTREAM_STRING( &constant_bin[ 2114863 ], 236, 0 );
    const_str_digest_5a4953fa3c99aca82178fa81fb90cf3a = UNSTREAM_STRING( &constant_bin[ 2115099 ], 85, 0 );
    const_str_digest_6b116b68d4f950754e1372bfe23b7013 = UNSTREAM_STRING( &constant_bin[ 2115184 ], 1826, 0 );
    const_str_digest_6b8308bc6ce4a2130140488c5898fbca = UNSTREAM_STRING( &constant_bin[ 2117010 ], 40, 0 );
    const_str_digest_700a168f39f8cac015bd3f8526f22222 = UNSTREAM_STRING( &constant_bin[ 2117050 ], 145, 0 );
    const_str_digest_70560c519e97cbb0ab21ec4c0869e70f = UNSTREAM_STRING( &constant_bin[ 2117195 ], 60, 0 );
    const_str_digest_94582a6e784e0ad7f46c5b1d53da8d95 = UNSTREAM_STRING( &constant_bin[ 2117255 ], 192, 0 );
    const_str_digest_a3d7185e3d4dcac2048040cfeb41608f = UNSTREAM_STRING( &constant_bin[ 2117447 ], 24, 0 );
    const_str_digest_a757028e5d9044054982de536991b384 = UNSTREAM_STRING( &constant_bin[ 2117471 ], 146, 0 );
    const_str_digest_aa560db96555f25b76013cc66174ee9d = UNSTREAM_STRING( &constant_bin[ 2117617 ], 244, 0 );
    const_str_digest_ad57d3b27d0e8faaa1fe912e8c9f021f = UNSTREAM_STRING( &constant_bin[ 2117861 ], 19, 0 );
    const_str_digest_b547445c9df3da942671a6dc7ff3649e = UNSTREAM_STRING( &constant_bin[ 2117880 ], 9874, 0 );
    const_str_digest_c01749511da13c63f60a4f87b83b66d0 = UNSTREAM_STRING( &constant_bin[ 2127754 ], 161, 0 );
    const_str_digest_c4520721daa7f8d22f7a9b9595fd9dc5 = UNSTREAM_STRING( &constant_bin[ 2127915 ], 49, 0 );
    const_str_digest_c7a2181e0a22321ceb90faa0d65b7f39 = UNSTREAM_STRING( &constant_bin[ 2127964 ], 436, 0 );
    const_str_digest_cd145e13c65ca8f490faddfafe1d91b0 = UNSTREAM_STRING( &constant_bin[ 2128400 ], 57, 0 );
    const_str_digest_d357026acc772a1fcde1a74236d9c0a5 = UNSTREAM_STRING( &constant_bin[ 2128457 ], 17, 0 );
    const_str_digest_e5eff1d177939ba287dfe50eb8e479ca = UNSTREAM_STRING( &constant_bin[ 2128474 ], 4444, 0 );
    const_str_digest_e645f452d1fe53e296a864781affafe1 = UNSTREAM_STRING( &constant_bin[ 2132918 ], 289, 0 );
    const_str_digest_ea1f1fae3f52535e125ed7cd0ffd8f81 = UNSTREAM_STRING( &constant_bin[ 2133207 ], 60, 0 );
    const_str_digest_f70ddb86266d2db6eaa05b77d5f16768 = UNSTREAM_STRING( &constant_bin[ 2133267 ], 60, 0 );
    const_tuple_str_plain_self_str_plain_range__tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_range__tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_range__tuple, 1, const_str_plain_range_ ); Py_INCREF( const_str_plain_range_ );
    const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple, 2, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple, 3, const_str_plain_qfun ); Py_INCREF( const_str_plain_qfun );
    PyTuple_SET_ITEM( const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple, 4, const_str_plain_rfun ); Py_INCREF( const_str_plain_rfun );
    PyTuple_SET_ITEM( const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple, 5, const_str_plain_more_args ); Py_INCREF( const_str_plain_more_args );
    const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 0, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 2, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 3, const_str_plain_qfun ); Py_INCREF( const_str_plain_qfun );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 4, const_str_plain_rfun ); Py_INCREF( const_str_plain_rfun );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 5, const_str_plain_more_args ); Py_INCREF( const_str_plain_more_args );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 6, const_str_plain_a2 ); Py_INCREF( const_str_plain_a2 );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 7, const_str_plain_b2 ); Py_INCREF( const_str_plain_b2 );
    PyTuple_SET_ITEM( const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 8, const_str_plain_myargs ); Py_INCREF( const_str_plain_myargs );
    const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 3, const_str_plain_gfun ); Py_INCREF( const_str_plain_gfun );
    PyTuple_SET_ITEM( const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 4, const_str_plain_hfun ); Py_INCREF( const_str_plain_hfun );
    PyTuple_SET_ITEM( const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 5, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 6, const_str_plain_epsabs ); Py_INCREF( const_str_plain_epsabs );
    PyTuple_SET_ITEM( const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 7, const_str_plain_epsrel ); Py_INCREF( const_str_plain_epsrel );
    const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 3, const_str_plain_depth ); Py_INCREF( const_str_plain_depth );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 4, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 5, const_str_plain_fn_range ); Py_INCREF( const_str_plain_fn_range );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 6, const_str_plain_low ); Py_INCREF( const_str_plain_low );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 7, const_str_plain_high ); Py_INCREF( const_str_plain_high );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 8, const_str_plain_fn_opt ); Py_INCREF( const_str_plain_fn_opt );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 9, const_str_plain_opt ); Py_INCREF( const_str_plain_opt );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 10, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 11, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 12, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 13, const_str_plain_abserr ); Py_INCREF( const_str_plain_abserr );
    const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 2, const_float_1_49e_minus_08 ); Py_INCREF( const_float_1_49e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 3, const_float_1_49e_minus_08 ); Py_INCREF( const_float_1_49e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 4, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 6, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 7, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 8, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 9, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple, 10, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 4, const_str_plain_full_output ); Py_INCREF( const_str_plain_full_output );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 5, const_str_plain_epsabs ); Py_INCREF( const_str_plain_epsabs );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 6, const_str_plain_epsrel ); Py_INCREF( const_str_plain_epsrel );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 7, const_str_plain_limit ); Py_INCREF( const_str_plain_limit );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 8, const_str_plain_points ); Py_INCREF( const_str_plain_points );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 9, const_str_plain_weight ); Py_INCREF( const_str_plain_weight );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 10, const_str_plain_wvar ); Py_INCREF( const_str_plain_wvar );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 11, const_str_plain_wopts ); Py_INCREF( const_str_plain_wopts );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 12, const_str_plain_maxp1 ); Py_INCREF( const_str_plain_maxp1 );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 13, const_str_plain_limlst ); Py_INCREF( const_str_plain_limlst );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 14, const_str_plain_retval ); Py_INCREF( const_str_plain_retval );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 15, const_str_plain_ier ); Py_INCREF( const_str_plain_ier );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 16, const_str_plain_msgs ); Py_INCREF( const_str_plain_msgs );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 17, const_str_plain_explain ); Py_INCREF( const_str_plain_explain );
    PyTuple_SET_ITEM( const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 18, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_6345345d54372dcb6b550c2fd0e878ce_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6345345d54372dcb6b550c2fd0e878ce_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_6345345d54372dcb6b550c2fd0e878ce_tuple, 1, const_str_plain_ranges ); Py_INCREF( const_str_plain_ranges );
    PyTuple_SET_ITEM( const_tuple_6345345d54372dcb6b550c2fd0e878ce_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_6345345d54372dcb6b550c2fd0e878ce_tuple, 3, const_str_plain_opts ); Py_INCREF( const_str_plain_opts );
    const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 4, const_str_plain_full_output ); Py_INCREF( const_str_plain_full_output );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 5, const_str_plain_epsabs ); Py_INCREF( const_str_plain_epsabs );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 6, const_str_plain_epsrel ); Py_INCREF( const_str_plain_epsrel );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 7, const_str_plain_limit ); Py_INCREF( const_str_plain_limit );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 8, const_str_plain_points ); Py_INCREF( const_str_plain_points );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 9, const_str_plain_infbounds ); Py_INCREF( const_str_plain_infbounds );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 10, const_str_plain_bound ); Py_INCREF( const_str_plain_bound );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 11, const_str_plain_nl ); Py_INCREF( const_str_plain_nl );
    PyTuple_SET_ITEM( const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 12, const_str_plain_the_points ); Py_INCREF( const_str_plain_the_points );
    const_tuple_64ce9461a404231795e914fa9849e62b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_64ce9461a404231795e914fa9849e62b_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_64ce9461a404231795e914fa9849e62b_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_64ce9461a404231795e914fa9849e62b_tuple, 2, const_str_plain_gfun ); Py_INCREF( const_str_plain_gfun );
    PyTuple_SET_ITEM( const_tuple_64ce9461a404231795e914fa9849e62b_tuple, 3, const_str_plain_hfun ); Py_INCREF( const_str_plain_hfun );
    PyTuple_SET_ITEM( const_tuple_64ce9461a404231795e914fa9849e62b_tuple, 4, const_str_plain_more_args ); Py_INCREF( const_str_plain_more_args );
    const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 4, const_str_plain_full_output ); Py_INCREF( const_str_plain_full_output );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 5, const_str_plain_epsabs ); Py_INCREF( const_str_plain_epsabs );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 6, const_str_plain_epsrel ); Py_INCREF( const_str_plain_epsrel );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 7, const_str_plain_limit ); Py_INCREF( const_str_plain_limit );
    PyTuple_SET_ITEM( const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 8, const_str_plain_points ); Py_INCREF( const_str_plain_points );
    const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple, 1, const_str_plain_ranges ); Py_INCREF( const_str_plain_ranges );
    PyTuple_SET_ITEM( const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple, 3, const_str_plain_opts ); Py_INCREF( const_str_plain_opts );
    PyTuple_SET_ITEM( const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple, 4, const_str_plain_depth ); Py_INCREF( const_str_plain_depth );
    PyTuple_SET_ITEM( const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple, 5, const_str_plain_rng ); Py_INCREF( const_str_plain_rng );
    PyTuple_SET_ITEM( const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple, 6, const_str_plain_opt ); Py_INCREF( const_str_plain_opt );
    const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 2, const_str_plain_gfun ); Py_INCREF( const_str_plain_gfun );
    PyTuple_SET_ITEM( const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 3, const_str_plain_hfun ); Py_INCREF( const_str_plain_hfun );
    PyTuple_SET_ITEM( const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 4, const_str_plain_more_args ); Py_INCREF( const_str_plain_more_args );
    PyTuple_SET_ITEM( const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 5, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 6, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 7, const_str_plain_myargs ); Py_INCREF( const_str_plain_myargs );
    const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 3, const_str_plain_gfun ); Py_INCREF( const_str_plain_gfun );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 4, const_str_plain_hfun ); Py_INCREF( const_str_plain_hfun );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 5, const_str_plain_qfun ); Py_INCREF( const_str_plain_qfun );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 6, const_str_plain_rfun ); Py_INCREF( const_str_plain_rfun );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 7, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 8, const_str_plain_epsabs ); Py_INCREF( const_str_plain_epsabs );
    PyTuple_SET_ITEM( const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 9, const_str_plain_epsrel ); Py_INCREF( const_str_plain_epsrel );
    const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 4, const_str_plain_full_output ); Py_INCREF( const_str_plain_full_output );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 5, const_str_plain_epsabs ); Py_INCREF( const_str_plain_epsabs );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 6, const_str_plain_epsrel ); Py_INCREF( const_str_plain_epsrel );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 7, const_str_plain_limlst ); Py_INCREF( const_str_plain_limlst );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 8, const_str_plain_limit ); Py_INCREF( const_str_plain_limit );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 9, const_str_plain_maxp1 ); Py_INCREF( const_str_plain_maxp1 );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 10, const_str_plain_weight ); Py_INCREF( const_str_plain_weight );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 11, const_str_plain_wvar ); Py_INCREF( const_str_plain_wvar );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 12, const_str_plain_wopts ); Py_INCREF( const_str_plain_wopts );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 13, const_str_plain_strdict ); Py_INCREF( const_str_plain_strdict );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 14, const_str_plain_integr ); Py_INCREF( const_str_plain_integr );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 15, const_str_plain_momcom ); Py_INCREF( const_str_plain_momcom );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 16, const_str_plain_chebcom ); Py_INCREF( const_str_plain_chebcom );
    PyTuple_SET_ITEM( const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 17, const_str_plain_thefunc ); Py_INCREF( const_str_plain_thefunc );
    const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 4, const_str_plain_full_output ); Py_INCREF( const_str_plain_full_output );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 5, const_str_plain_epsabs ); Py_INCREF( const_str_plain_epsabs );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 6, const_str_plain_epsrel ); Py_INCREF( const_str_plain_epsrel );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 7, const_str_plain_limlst ); Py_INCREF( const_str_plain_limlst );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 8, const_str_plain_limit ); Py_INCREF( const_str_plain_limit );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 9, const_str_plain_maxp1 ); Py_INCREF( const_str_plain_maxp1 );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 10, const_str_plain_weight ); Py_INCREF( const_str_plain_weight );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 11, const_str_plain_wvar ); Py_INCREF( const_str_plain_wvar );
    PyTuple_SET_ITEM( const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 12, const_str_plain_wopts ); Py_INCREF( const_str_plain_wopts );
    const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 2, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 3, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 4, const_str_plain_full_output ); Py_INCREF( const_str_plain_full_output );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 5, const_str_plain_epsabs ); Py_INCREF( const_str_plain_epsabs );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 6, const_str_plain_epsrel ); Py_INCREF( const_str_plain_epsrel );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 7, const_str_plain_limit ); Py_INCREF( const_str_plain_limit );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 8, const_str_plain_points ); Py_INCREF( const_str_plain_points );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 9, const_str_plain_weight ); Py_INCREF( const_str_plain_weight );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 10, const_str_plain_wvar ); Py_INCREF( const_str_plain_wvar );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 11, const_str_plain_wopts ); Py_INCREF( const_str_plain_wopts );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 12, const_str_plain_maxp1 ); Py_INCREF( const_str_plain_maxp1 );
    PyTuple_SET_ITEM( const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 13, const_str_plain_limlst ); Py_INCREF( const_str_plain_limlst );
    const_tuple_e0aad205653b517a3b569df1303a478d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e0aad205653b517a3b569df1303a478d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e0aad205653b517a3b569df1303a478d_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_e0aad205653b517a3b569df1303a478d_tuple, 2, const_str_plain_ranges ); Py_INCREF( const_str_plain_ranges );
    PyTuple_SET_ITEM( const_tuple_e0aad205653b517a3b569df1303a478d_tuple, 3, const_str_plain_opts ); Py_INCREF( const_str_plain_opts );
    const_tuple_tuple_empty_float_1_49e_minus_08_float_1_49e_minus_08_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_float_1_49e_minus_08_float_1_49e_minus_08_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_float_1_49e_minus_08_float_1_49e_minus_08_tuple, 1, const_float_1_49e_minus_08 ); Py_INCREF( const_float_1_49e_minus_08 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_float_1_49e_minus_08_float_1_49e_minus_08_tuple, 2, const_float_1_49e_minus_08 ); Py_INCREF( const_float_1_49e_minus_08 );
    const_tuple_str_plain_x_str_plain_myargs_str_plain_y_str_plain_func_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_myargs_str_plain_y_str_plain_func_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_myargs_str_plain_y_str_plain_func_tuple, 1, const_str_plain_myargs ); Py_INCREF( const_str_plain_myargs );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_myargs_str_plain_y_str_plain_func_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_myargs_str_plain_y_str_plain_func_tuple, 3, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list, 2, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list, 3, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list, 4, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list, 5, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
}

// The module code objects.
static PyCodeObject *codeobj_ca6d5b379183ced7df2fe49b0515c7a9;
static PyCodeObject *codeobj_20eddd35b6d29c9c49f57fc3deb720a7;
static PyCodeObject *codeobj_a645012d72318f8829dee4c2a9ed870e;
static PyCodeObject *codeobj_9ecb61c352db669783af7d510d1d6649;
static PyCodeObject *codeobj_010226969a291027bb75d61d4ecb5098;
static PyCodeObject *codeobj_31966ea47e5a1eb1e9e318a5db095216;
static PyCodeObject *codeobj_7c00c509ec1fe218773ccc752f406826;
static PyCodeObject *codeobj_60f5d990e23a6aa94e3e672df32d5666;
static PyCodeObject *codeobj_c6459356398f5b3444c7efcd2b82bef9;
static PyCodeObject *codeobj_dfdcc12ea6c3373ee67d808ee6806afb;
static PyCodeObject *codeobj_237895572f8120b9d54b6cf45ca2892f;
static PyCodeObject *codeobj_2b66d4ea52405cb51fc7c621633d379f;
static PyCodeObject *codeobj_d4db7020947db67329da4821089deac9;
static PyCodeObject *codeobj_e5eac9ed987951f10ce91ca2c82b0b9f;
static PyCodeObject *codeobj_2c536fe743512c2f871403ff10d0e735;
static PyCodeObject *codeobj_75dfe3ae2b09ca864db3041b257a5cc5;
static PyCodeObject *codeobj_93ccb2cbd17e9f5511aa3e5d71d059bb;
static PyCodeObject *codeobj_4c38e8808ff34b7ef4e7f2f291cf52f9;
static PyCodeObject *codeobj_7eac326419f8f6dd79809f00ef120ffd;
static PyCodeObject *codeobj_450f1e82ad12e7232f1b57338c9bc1b3;
static PyCodeObject *codeobj_58fff518d66eef945229b6e465fa7f31;
static PyCodeObject *codeobj_c5ef03ca7a1476901d701361a853d5ec;
static PyCodeObject *codeobj_abadc761a5bbe0b4fd2218c25e97ebf6;
static PyCodeObject *codeobj_3abe36cdeb8016ee80e621dd6ac40661;
static PyCodeObject *codeobj_aee07e484617166f678c4589717c46a4;
static PyCodeObject *codeobj_e7c53da7434ba18b45821c4ff79bd477;
static PyCodeObject *codeobj_81891a373c22e13c8b6311baab2cd400;
static PyCodeObject *codeobj_7ab9075d5daeda9483803eba61d2121a;
static PyCodeObject *codeobj_872c6f2157b4a70ea01f338fb8d15a0e;
static PyCodeObject *codeobj_1c766fe38475725c9cecaef3d0ff65b8;
static PyCodeObject *codeobj_8f734991932146870818a4a1767cd140;
static PyCodeObject *codeobj_05d2ff85adfa351d2fde31eb81aa9ece;

static void _initModuleCodeObjects(void)
{
    codeobj_ca6d5b379183ced7df2fe49b0515c7a9 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__NQuad, 669, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_20eddd35b6d29c9c49f57fc3deb720a7 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__OptFunc, 660, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a645012d72318f8829dee4c2a9ed870e = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__RangeFunc, 647, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9ecb61c352db669783af7d510d1d6649 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain___call__, 651, const_tuple_str_plain_self_str_plain_args_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_010226969a291027bb75d61d4ecb5098 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain___call__, 651, const_tuple_str_plain_self_str_plain_args_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_31966ea47e5a1eb1e9e318a5db095216 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain___call__, 664, const_tuple_str_plain_self_str_plain_args_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7c00c509ec1fe218773ccc752f406826 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain___call__, 664, const_tuple_str_plain_self_str_plain_args_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_60f5d990e23a6aa94e3e672df32d5666 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain___init__, 648, const_tuple_str_plain_self_str_plain_range__tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c6459356398f5b3444c7efcd2b82bef9 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain___init__, 661, const_tuple_str_plain_self_str_plain_opt_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dfdcc12ea6c3373ee67d808ee6806afb = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain___init__, 670, const_tuple_e0aad205653b517a3b569df1303a478d_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_237895572f8120b9d54b6cf45ca2892f = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__infunc, 405, const_tuple_64ce9461a404231795e914fa9849e62b_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2b66d4ea52405cb51fc7c621633d379f = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__infunc, 405, const_tuple_7d8fa2a055521ff5f5dd22b2a328c607_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d4db7020947db67329da4821089deac9 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__infunc2, 464, const_tuple_14e2c63951a3661a55fc8a6a13c726b3_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e5eac9ed987951f10ce91ca2c82b0b9f = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__infunc2, 464, const_tuple_1d864ad9b21f8439affb612ed3b52323_tuple, 6, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c536fe743512c2f871403ff10d0e735 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__quad, 327, const_tuple_6bc7feab24364bf771fe12b1010fac3a_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_75dfe3ae2b09ca864db3041b257a5cc5 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__quad, 327, const_tuple_6421de16a6abe240a0f706e6f99b92f0_tuple, 9, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_93ccb2cbd17e9f5511aa3e5d71d059bb = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__quad_weight, 358, const_tuple_9d97c04b55605c652bddb107ca802f0f_tuple, 13, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4c38e8808ff34b7ef4e7f2f291cf52f9 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain__quad_weight, 358, const_tuple_98e0f05f518087a78be8f7507d5249cd_tuple, 13, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7eac326419f8f6dd79809f00ef120ffd = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_dblquad, 412, const_tuple_31189bdf448cdf8acdca7b44498f5adc_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_450f1e82ad12e7232f1b57338c9bc1b3 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_integrate, 677, const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_58fff518d66eef945229b6e465fa7f31 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_integrate, 677, const_tuple_32fafb5bf389022c20b2d78760fbf44a_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c5ef03ca7a1476901d701361a853d5ec = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_nquad, 529, const_tuple_6345345d54372dcb6b550c2fd0e878ce_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_abadc761a5bbe0b4fd2218c25e97ebf6 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_nquad, 529, const_tuple_7b1ea5543fcc67b6ae587b9d3d5746f0_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3abe36cdeb8016ee80e621dd6ac40661 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_quad, 42, const_tuple_ca23d230ba5ae6b26ed0c9e9da0801d3_tuple, 14, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aee07e484617166f678c4589717c46a4 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_quad, 42, const_tuple_5fad9fad570ea5f604c564de87645a5c_tuple, 14, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e7c53da7434ba18b45821c4ff79bd477 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_quad_explain, 24, const_tuple_str_plain_output_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_81891a373c22e13c8b6311baab2cd400 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_quadpack, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7ab9075d5daeda9483803eba61d2121a = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_thefunc, 379, const_tuple_str_plain_x_str_plain_myargs_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_872c6f2157b4a70ea01f338fb8d15a0e = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_thefunc, 379, const_tuple_str_plain_x_str_plain_myargs_str_plain_y_str_plain_func_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1c766fe38475725c9cecaef3d0ff65b8 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_thefunc, 385, const_tuple_str_plain_x_str_plain_myargs_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8f734991932146870818a4a1767cd140 = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_thefunc, 385, const_tuple_str_plain_x_str_plain_myargs_str_plain_y_str_plain_func_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_05d2ff85adfa351d2fde31eb81aa9ece = MAKE_CODEOBJ( const_str_digest_f70ddb86266d2db6eaa05b77d5f16768, const_str_plain_tplquad, 471, const_tuple_7e0c24c027dc095b309e2e8edbaa7641_tuple, 10, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_IntegrationWarning_of_module_scipy$integrate$quadpack(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_12__OptFunc_of_module_scipy$integrate$quadpack(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_13__NQuad_of_module_scipy$integrate$quadpack(  );


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list );


NUITKA_CROSS_MODULE PyObject *impl_function_5_complex_call_helper_pos_keywords_star_dict_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_kw, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_10_nquad_of_module_scipy$integrate$quadpack( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_2_quad_explain_of_module_scipy$integrate$quadpack( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_3_quad_of_module_scipy$integrate$quadpack( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4__quad_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_5__quad_weight_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_6__infunc_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_7_dblquad_of_module_scipy$integrate$quadpack( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_8__infunc2_of_module_scipy$integrate$quadpack(  );


static PyObject *MAKE_FUNCTION_function_9_tplquad_of_module_scipy$integrate$quadpack( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_IntegrationWarning_of_module_scipy$integrate$quadpack(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a3d7185e3d4dcac2048040cfeb41608f;
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


static PyObject *impl_function_2_quad_explain_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_output )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_output; par_output.object = _python_par_output;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e7c53da7434ba18b45821c4ff79bd477, module_scipy$integrate$quadpack );
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
    tmp_source_name_1 = par_output.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82676 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_quad );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quad );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239499 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___doc__ );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 39;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
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
    if ((par_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_output,
            par_output.object
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
static PyObject *fparse_function_2_quad_explain_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_output = NULL;
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
                PyErr_Format( PyExc_TypeError, "quad_explain() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_output == key )
            {
                assert( _python_par_output == NULL );
                _python_par_output = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_output, key ) == 1 )
            {
                assert( _python_par_output == NULL );
                _python_par_output = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "quad_explain() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_output != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_output = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_output == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_output = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_output == NULL ))
    {
        PyObject *values[] = { _python_par_output };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_quad_explain_of_module_scipy$integrate$quadpack( self, _python_par_output );

error_exit:;

    Py_XDECREF( _python_par_output );

    return NULL;
}

static PyObject *dparse_function_2_quad_explain_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_quad_explain_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_quad_explain_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_quad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_args, PyObject *_python_par_full_output, PyObject *_python_par_epsabs, PyObject *_python_par_epsrel, PyObject *_python_par_limit, PyObject *_python_par_points, PyObject *_python_par_weight, PyObject *_python_par_wvar, PyObject *_python_par_wopts, PyObject *_python_par_maxp1, PyObject *_python_par_limlst )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_full_output; par_full_output.object = _python_par_full_output;
    PyObjectLocalVariable par_epsabs; par_epsabs.object = _python_par_epsabs;
    PyObjectLocalVariable par_epsrel; par_epsrel.object = _python_par_epsrel;
    PyObjectLocalVariable par_limit; par_limit.object = _python_par_limit;
    PyObjectLocalVariable par_points; par_points.object = _python_par_points;
    PyObjectLocalVariable par_weight; par_weight.object = _python_par_weight;
    PyObjectLocalVariable par_wvar; par_wvar.object = _python_par_wvar;
    PyObjectLocalVariable par_wopts; par_wopts.object = _python_par_wopts;
    PyObjectLocalVariable par_maxp1; par_maxp1.object = _python_par_maxp1;
    PyObjectLocalVariable par_limlst; par_limlst.object = _python_par_limlst;
    PyObjectLocalVariable var_retval;
    PyObjectLocalVariable var_ier;
    PyObjectLocalVariable var_msgs;
    PyObjectLocalVariable var_explain;
    PyObjectLocalVariable var_msg;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
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
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    int tmp_ass_subscript_res_1;
    int tmp_ass_subscript_res_2;
    int tmp_ass_subscript_res_3;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
    PyObject *tmp_source_name_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unary_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3abe36cdeb8016ee80e621dd6ac40661, module_scipy$integrate$quadpack );
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

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
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

        frame_function->f_lineno = 279;
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
    tmp_compare_left_1 = par_weight.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quad );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quad );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239584 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_func.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_b.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_args.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_full_output.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_epsabs.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_epsrel.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = par_limit.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = par_points.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42519 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 281;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS9( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    assert( var_retval.object == NULL );
    var_retval.object = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quad_weight );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quad_weight );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239773 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = par_func.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = par_a.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = par_b.object;

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = par_args.object;

    if ( tmp_call_arg_element_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = par_full_output.object;

    if ( tmp_call_arg_element_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = par_epsabs.object;

    if ( tmp_call_arg_element_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = par_epsrel.object;

    if ( tmp_call_arg_element_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = par_limlst.object;

    if ( tmp_call_arg_element_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239814 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = par_limit.object;

    if ( tmp_call_arg_element_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = par_maxp1.object;

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239866 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = par_weight.object;

    if ( tmp_call_arg_element_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = par_wvar.object;

    if ( tmp_call_arg_element_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239917 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = par_wopts.object;

    if ( tmp_call_arg_element_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239967 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 283;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS13( tmp_called_2, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21, tmp_call_arg_element_22 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    assert( var_retval.object == NULL );
    var_retval.object = tmp_assign_source_3;

    branch_end_2:;
    tmp_subscr_target_1 = var_retval.object;

    tmp_subscr_subscript_1 = const_int_neg_1;
    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    assert( var_ier.object == NULL );
    var_ier.object = tmp_assign_source_4;

    tmp_compare_left_2 = var_ier.object;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_retval.object;

    tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_assign_source_5 = _PyDict_NewPresized( 9 );
    tmp_dict_value_1 = const_str_digest_ea1f1fae3f52535e125ed7cd0ffd8f81;
    tmp_dict_key_1 = const_int_pos_80;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_binop_left_1 = const_str_digest_c7a2181e0a22321ceb90faa0d65b7f39;
    tmp_binop_right_1 = par_limit.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_int_pos_1;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = const_str_digest_700a168f39f8cac015bd3f8526f22222;
    tmp_dict_key_3 = const_int_pos_2;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = const_str_digest_5a4953fa3c99aca82178fa81fb90cf3a;
    tmp_dict_key_4 = const_int_pos_3;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = const_str_digest_aa560db96555f25b76013cc66174ee9d;
    tmp_dict_key_5 = const_int_pos_4;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = const_str_digest_cd145e13c65ca8f490faddfafe1d91b0;
    tmp_dict_key_6 = const_int_pos_5;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = const_str_digest_3ccbb8db726eb122d7b2b45c4640eb04;
    tmp_dict_key_7 = const_int_pos_6;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = const_str_digest_c01749511da13c63f60a4f87b83b66d0;
    tmp_dict_key_8 = const_int_pos_7;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = const_str_digest_109715467b74bd66639faa5673f707c1;
    tmp_dict_key_9 = const_str_plain_unknown;
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_9, tmp_dict_value_9 );
    assert( var_msgs.object == NULL );
    var_msgs.object = tmp_assign_source_5;

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = par_weight.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto try_finally_handler_2;
    }

    tmp_compexpr_right_1 = LIST_COPY( const_list_str_plain_cos_str_plain_sin_list );
    tmp_assign_source_6 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_1 );

        frame_function->f_lineno = 299;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compexpr_right_1 );
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_2 = par_b.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto try_finally_handler_5;
    }

    tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_2 == NULL ))
    {
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto try_finally_handler_5;
    }

    tmp_assign_source_7 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto try_finally_handler_5;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_7;

    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto try_finally_handler_5;
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
    tmp_cond_value_1 = tmp_or_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_3 = par_a.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto try_finally_handler_6;
    }

    tmp_unary_arg_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_1 == NULL ))
    {
        tmp_unary_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_3 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto try_finally_handler_6;
    }
    tmp_cond_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto try_finally_handler_6;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
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

        goto try_finally_handler_5;
    }

    goto finally_end_1;
    finally_end_1:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_5:;
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

        goto try_finally_handler_4;
    }

    goto finally_end_2;
    finally_end_2:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_3;
    }

    goto finally_end_3;
    finally_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_2;
    }

    goto finally_end_4;
    finally_end_4:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
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

        goto try_finally_handler_1;
    }

    goto finally_end_5;
    finally_end_5:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 299;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_1 = const_str_digest_0b15989119418fd27ae42a9b5a9aec33;
    tmp_ass_subscribed_1 = var_msgs.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240018 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 300;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_1 = const_int_pos_1;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 1, tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 300;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_2 = const_str_digest_5148c8b44c27ceb6e93935380c9d7297;
    tmp_ass_subscribed_2 = var_msgs.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240018 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_2 = const_int_pos_4;
    tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 4, tmp_ass_subvalue_2 );
    if ( tmp_ass_subscript_res_2 == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto try_finally_handler_1;
    }
    tmp_ass_subvalue_3 = const_str_digest_94582a6e784e0ad7f46c5b1d53da8d95;
    tmp_ass_subscribed_3 = var_msgs.object;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240018 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 302;
        goto try_finally_handler_1;
    }

    tmp_ass_subscript_3 = const_int_pos_7;
    tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 7, tmp_ass_subvalue_3 );
    if ( tmp_ass_subscript_res_3 == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 302;
        goto try_finally_handler_1;
    }
    tmp_assign_source_8 = PyDict_Copy( const_dict_e9ec908e700718f0d28077861c8a7288 );
    assert( var_explain.object == NULL );
    var_explain.object = tmp_assign_source_8;

    branch_no_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
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
    // Tried block of try/except
    tmp_subscr_target_2 = var_msgs.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240018 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_2 = var_ier.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240068 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto try_except_handler_1;
    }

    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto try_except_handler_1;
    }
    assert( var_msg.object == NULL );
    var_msg.object = tmp_assign_source_9;

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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_subscr_target_3 = var_msgs.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240018 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_3 = const_str_plain_unknown;
    tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 312;
        goto frame_exception_exit_1;
    }
    if (var_msg.object == NULL)
    {
        var_msg.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = var_msg.object;
        var_msg.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    goto branch_end_5;
    branch_no_5:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_5:;
    try_except_end_1:;
    tmp_compare_left_4 = var_ier.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240068 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = LIST_COPY( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_5_int_pos_7_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_4 );

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_4 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_cond_value_4 = par_full_output.object;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_4 = par_weight.object;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_8;
    }

    tmp_compexpr_right_4 = LIST_COPY( const_list_str_plain_cos_str_plain_sin_list );
    tmp_assign_source_11 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_4 );

        frame_function->f_lineno = 316;
        goto try_finally_handler_8;
    }
    Py_DECREF( tmp_compexpr_right_4 );
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

    tmp_cond_value_6 = tmp_and_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_5 = par_b.object;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }

    tmp_compexpr_right_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_5 == NULL ))
    {
        tmp_compexpr_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }

    tmp_assign_source_12 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_12;

    tmp_cond_value_7 = tmp_or_2__value_1.object;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_11;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_cond_value_5 = tmp_or_2__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_6 = par_a.object;

    if ( tmp_compexpr_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_12;
    }

    tmp_compexpr_right_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_6 == NULL ))
    {
        tmp_compexpr_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto try_finally_handler_12;
    }

    tmp_cond_value_5 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
        goto try_finally_handler_12;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
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

        goto try_finally_handler_11;
    }

    goto finally_end_7;
    finally_end_7:;
    condexpr_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
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

        goto try_finally_handler_10;
    }

    goto finally_end_8;
    finally_end_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
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

        goto try_finally_handler_9;
    }

    goto finally_end_9;
    finally_end_9:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_8;
    }

    goto finally_end_10;
    finally_end_10:;
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_5 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_8:;
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

        goto try_finally_handler_7;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 316;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = -1;
    tmp_slice_source_2 = var_retval.object;

    if ( tmp_slice_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 77726 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_7;
    }

    tmp_binop_left_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_7;
    }
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_msg.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_explain.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240117 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_2 );
    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto try_finally_handler_7;
    }
    goto try_finally_handler_start_1;
    goto branch_end_8;
    branch_no_8:;
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = -1;
    tmp_slice_source_3 = var_retval.object;

    if ( tmp_slice_source_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 77726 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto try_finally_handler_7;
    }

    tmp_binop_left_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto try_finally_handler_7;
    }
    tmp_binop_right_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_msg.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 319;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_3 );
    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 319;
        goto try_finally_handler_7;
    }
    goto try_finally_handler_start_1;
    branch_end_8:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_12 != NULL )
    {
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_12;
    finally_end_12:;
    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6827 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_23 = var_msg.object;

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_IntegrationWarning );

    if (unlikely( tmp_call_arg_element_24 == NULL ))
    {
        tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IntegrationWarning );
    }

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240170 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 321;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_sliceslicedel_index_lower_4 = 0;
    tmp_slice_index_upper_4 = -1;
    tmp_slice_source_4 = var_retval.object;

    if ( tmp_slice_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 77726 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 322;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_make_exception_arg_1 = var_msg.object;

    if ( tmp_make_exception_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 324;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 324;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_6:;

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
    if ((var_retval.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_retval,
            var_retval.object
        );

    }
    if ((var_ier.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ier,
            var_ier.object
        );

    }
    if ((var_msgs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msgs,
            var_msgs.object
        );

    }
    if ((var_explain.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_explain,
            var_explain.object
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
    if ((par_full_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_full_output,
            par_full_output.object
        );

    }
    if ((par_epsabs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsabs,
            par_epsabs.object
        );

    }
    if ((par_epsrel.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsrel,
            par_epsrel.object
        );

    }
    if ((par_limit.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_limit,
            par_limit.object
        );

    }
    if ((par_points.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_points,
            par_points.object
        );

    }
    if ((par_weight.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_weight,
            par_weight.object
        );

    }
    if ((par_wvar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_wvar,
            par_wvar.object
        );

    }
    if ((par_wopts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_wopts,
            par_wopts.object
        );

    }
    if ((par_maxp1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxp1,
            par_maxp1.object
        );

    }
    if ((par_limlst.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_limlst,
            par_limlst.object
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
static PyObject *fparse_function_3_quad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    PyObject *_python_par_full_output = NULL;
    PyObject *_python_par_epsabs = NULL;
    PyObject *_python_par_epsrel = NULL;
    PyObject *_python_par_limit = NULL;
    PyObject *_python_par_points = NULL;
    PyObject *_python_par_weight = NULL;
    PyObject *_python_par_wvar = NULL;
    PyObject *_python_par_wopts = NULL;
    PyObject *_python_par_maxp1 = NULL;
    PyObject *_python_par_limlst = NULL;
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
                PyErr_Format( PyExc_TypeError, "quad() keywords must be strings" );
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
            if ( found == false && const_str_plain_full_output == key )
            {
                assert( _python_par_full_output == NULL );
                _python_par_full_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_epsabs == key )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_epsrel == key )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_limit == key )
            {
                assert( _python_par_limit == NULL );
                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_points == key )
            {
                assert( _python_par_points == NULL );
                _python_par_points = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_weight == key )
            {
                assert( _python_par_weight == NULL );
                _python_par_weight = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_wvar == key )
            {
                assert( _python_par_wvar == NULL );
                _python_par_wvar = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_wopts == key )
            {
                assert( _python_par_wopts == NULL );
                _python_par_wopts = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxp1 == key )
            {
                assert( _python_par_maxp1 == NULL );
                _python_par_maxp1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_limlst == key )
            {
                assert( _python_par_limlst == NULL );
                _python_par_limlst = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_full_output, key ) == 1 )
            {
                assert( _python_par_full_output == NULL );
                _python_par_full_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsabs, key ) == 1 )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsrel, key ) == 1 )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_limit, key ) == 1 )
            {
                assert( _python_par_limit == NULL );
                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_points, key ) == 1 )
            {
                assert( _python_par_points == NULL );
                _python_par_points = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_weight, key ) == 1 )
            {
                assert( _python_par_weight == NULL );
                _python_par_weight = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_wvar, key ) == 1 )
            {
                assert( _python_par_wvar == NULL );
                _python_par_wvar = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_wopts, key ) == 1 )
            {
                assert( _python_par_wopts == NULL );
                _python_par_wopts = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxp1, key ) == 1 )
            {
                assert( _python_par_maxp1 == NULL );
                _python_par_maxp1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_limlst, key ) == 1 )
            {
                assert( _python_par_limlst == NULL );
                _python_par_limlst = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "quad() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 14 ))
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
        if ( 0 + self->m_defaults_given >= 14  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 14 ) );
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
        if ( 1 + self->m_defaults_given >= 14  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 14 ) );
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
        if ( 2 + self->m_defaults_given >= 14  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 14 ) );
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
        if ( 3 + self->m_defaults_given >= 14  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 14 ) );
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
         if (unlikely( _python_par_full_output != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_full_output = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_full_output == NULL )
    {
        if ( 4 + self->m_defaults_given >= 14  )
        {
            _python_par_full_output = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 14 ) );
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
         if (unlikely( _python_par_epsabs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_epsabs = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_epsabs == NULL )
    {
        if ( 5 + self->m_defaults_given >= 14  )
        {
            _python_par_epsabs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 14 ) );
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
         if (unlikely( _python_par_epsrel != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_epsrel = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_epsrel == NULL )
    {
        if ( 6 + self->m_defaults_given >= 14  )
        {
            _python_par_epsrel = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 14 ) );
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
         if (unlikely( _python_par_limit != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_limit = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_limit == NULL )
    {
        if ( 7 + self->m_defaults_given >= 14  )
        {
            _python_par_limit = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 14 ) );
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
         if (unlikely( _python_par_points != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_points = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_points == NULL )
    {
        if ( 8 + self->m_defaults_given >= 14  )
        {
            _python_par_points = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 14 ) );
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
         if (unlikely( _python_par_weight != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_weight = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_weight == NULL )
    {
        if ( 9 + self->m_defaults_given >= 14  )
        {
            _python_par_weight = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 14 ) );
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
         if (unlikely( _python_par_wvar != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_wvar = INCREASE_REFCOUNT( args[ 10 ] );
    }
    else if ( _python_par_wvar == NULL )
    {
        if ( 10 + self->m_defaults_given >= 14  )
        {
            _python_par_wvar = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 14 ) );
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
    if (likely( 11 < args_given ))
    {
         if (unlikely( _python_par_wopts != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 11 );
             goto error_exit;
         }

        _python_par_wopts = INCREASE_REFCOUNT( args[ 11 ] );
    }
    else if ( _python_par_wopts == NULL )
    {
        if ( 11 + self->m_defaults_given >= 14  )
        {
            _python_par_wopts = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 11 - 14 ) );
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
    if (likely( 12 < args_given ))
    {
         if (unlikely( _python_par_maxp1 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 12 );
             goto error_exit;
         }

        _python_par_maxp1 = INCREASE_REFCOUNT( args[ 12 ] );
    }
    else if ( _python_par_maxp1 == NULL )
    {
        if ( 12 + self->m_defaults_given >= 14  )
        {
            _python_par_maxp1 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 12 - 14 ) );
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
    if (likely( 13 < args_given ))
    {
         if (unlikely( _python_par_limlst != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 13 );
             goto error_exit;
         }

        _python_par_limlst = INCREASE_REFCOUNT( args[ 13 ] );
    }
    else if ( _python_par_limlst == NULL )
    {
        if ( 13 + self->m_defaults_given >= 14  )
        {
            _python_par_limlst = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 13 - 14 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_a == NULL || _python_par_b == NULL || _python_par_args == NULL || _python_par_full_output == NULL || _python_par_epsabs == NULL || _python_par_epsrel == NULL || _python_par_limit == NULL || _python_par_points == NULL || _python_par_weight == NULL || _python_par_wvar == NULL || _python_par_wopts == NULL || _python_par_maxp1 == NULL || _python_par_limlst == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_full_output, _python_par_epsabs, _python_par_epsrel, _python_par_limit, _python_par_points, _python_par_weight, _python_par_wvar, _python_par_wopts, _python_par_maxp1, _python_par_limlst };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_quad_of_module_scipy$integrate$quadpack( self, _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_full_output, _python_par_epsabs, _python_par_epsrel, _python_par_limit, _python_par_points, _python_par_weight, _python_par_wvar, _python_par_wopts, _python_par_maxp1, _python_par_limlst );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_full_output );
    Py_XDECREF( _python_par_epsabs );
    Py_XDECREF( _python_par_epsrel );
    Py_XDECREF( _python_par_limit );
    Py_XDECREF( _python_par_points );
    Py_XDECREF( _python_par_weight );
    Py_XDECREF( _python_par_wvar );
    Py_XDECREF( _python_par_wopts );
    Py_XDECREF( _python_par_maxp1 );
    Py_XDECREF( _python_par_limlst );

    return NULL;
}

static PyObject *dparse_function_3_quad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 14 )
    {
        return impl_function_3_quad_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), INCREASE_REFCOUNT( args[ 11 ] ), INCREASE_REFCOUNT( args[ 12 ] ), INCREASE_REFCOUNT( args[ 13 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_quad_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__quad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_args, PyObject *_python_par_full_output, PyObject *_python_par_epsabs, PyObject *_python_par_epsrel, PyObject *_python_par_limit, PyObject *_python_par_points )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_full_output; par_full_output.object = _python_par_full_output;
    PyObjectLocalVariable par_epsabs; par_epsabs.object = _python_par_epsabs;
    PyObjectLocalVariable par_epsrel; par_epsrel.object = _python_par_epsrel;
    PyObjectLocalVariable par_limit; par_limit.object = _python_par_limit;
    PyObjectLocalVariable par_points; par_points.object = _python_par_points;
    PyObjectLocalVariable var_infbounds;
    PyObjectLocalVariable var_bound;
    PyObjectLocalVariable var_nl;
    PyObjectLocalVariable var_the_points;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_3__value_1;
    PyObjectTempVariable tmp_and_4__value_1;
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
    PyObject *tmp_binop_right_1;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unary_arg_3;
    PyObject *tmp_unary_arg_4;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_0;
    assert( var_infbounds.object == NULL );
    var_infbounds.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2c536fe743512c2f871403ff10d0e735, module_scipy$integrate$quadpack );
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
    tmp_compexpr_left_1 = par_b.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto try_finally_handler_2;
    }

    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto try_finally_handler_2;
    }

    tmp_assign_source_2 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_2;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = par_a.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto try_finally_handler_3;
    }

    tmp_unary_arg_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_1 == NULL ))
    {
        tmp_unary_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 329;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 329;
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
    tmp_cond_value_1 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
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

        frame_function->f_lineno = 329;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_compexpr_left_3 = par_b.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto try_finally_handler_5;
    }

    tmp_compexpr_right_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_3 == NULL ))
    {
        tmp_compexpr_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto try_finally_handler_5;
    }

    tmp_assign_source_3 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto try_finally_handler_5;
    }
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = tmp_assign_source_3;

    tmp_cond_value_4 = tmp_and_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto try_finally_handler_5;
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
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_4 = par_a.object;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto try_finally_handler_6;
    }

    tmp_unary_arg_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_2 == NULL ))
    {
        tmp_unary_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_4 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_2 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto try_finally_handler_6;
    }
    tmp_cond_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto try_finally_handler_6;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
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

        goto try_finally_handler_5;
    }

    goto finally_end_3;
    finally_end_3:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_3 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_cond_value_3 );
    condexpr_end_2:;
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
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 331;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = const_int_pos_1;
    if (var_infbounds.object == NULL)
    {
        var_infbounds.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_infbounds.object;
        var_infbounds.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_assign_source_5 = par_a.object;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 333;
        goto try_finally_handler_4;
    }

    assert( var_bound.object == NULL );
    var_bound.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    goto branch_end_2;
    branch_no_2:;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_5 = par_b.object;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto try_finally_handler_8;
    }

    tmp_compexpr_right_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_5 == NULL ))
    {
        tmp_compexpr_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto try_finally_handler_8;
    }

    tmp_assign_source_6 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
        goto try_finally_handler_8;
    }
    assert( tmp_and_3__value_1.object == NULL );
    tmp_and_3__value_1.object = tmp_assign_source_6;

    tmp_cond_value_6 = tmp_and_3__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_6 = par_a.object;

    if ( tmp_compexpr_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto try_finally_handler_9;
    }

    tmp_unary_arg_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_3 == NULL ))
    {
        tmp_unary_arg_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 334;
        goto try_finally_handler_9;
    }

    tmp_compexpr_right_6 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_3 );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
        goto try_finally_handler_9;
    }
    tmp_cond_value_5 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 334;
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
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_5 = tmp_and_3__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
    condexpr_end_3:;
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
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 334;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_7 = const_int_pos_2;
    if (var_infbounds.object == NULL)
    {
        var_infbounds.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = var_infbounds.object;
        var_infbounds.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    tmp_assign_source_8 = const_int_0;
    if (var_bound.object == NULL)
    {
        var_bound.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_bound.object;
        var_bound.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    goto branch_end_3;
    branch_no_3:;
    // Tried code
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_compexpr_left_7 = par_b.object;

    if ( tmp_compexpr_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 337;
        goto try_finally_handler_11;
    }

    tmp_compexpr_right_7 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_7 == NULL ))
    {
        tmp_compexpr_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 337;
        goto try_finally_handler_11;
    }

    tmp_assign_source_9 = RICH_COMPARE_NE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto try_finally_handler_11;
    }
    assert( tmp_and_4__value_1.object == NULL );
    tmp_and_4__value_1.object = tmp_assign_source_9;

    tmp_cond_value_8 = tmp_and_4__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto try_finally_handler_11;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_result = tmp_and_4__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_4__value_1.object );
        tmp_and_4__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_8 = par_a.object;

    if ( tmp_compexpr_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 337;
        goto try_finally_handler_12;
    }

    tmp_unary_arg_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_4 == NULL ))
    {
        tmp_unary_arg_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 337;
        goto try_finally_handler_12;
    }

    tmp_compexpr_right_8 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_4 );
    if ( tmp_compexpr_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto try_finally_handler_12;
    }
    tmp_cond_value_7 = RICH_COMPARE_EQ( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    Py_DECREF( tmp_compexpr_right_8 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 337;
        goto try_finally_handler_12;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
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

        goto try_finally_handler_11;
    }

    goto finally_end_7;
    finally_end_7:;
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_7 = tmp_and_4__value_1.object;

    Py_INCREF( tmp_cond_value_7 );
    condexpr_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_11:;
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

        goto try_finally_handler_10;
    }

    goto finally_end_8;
    finally_end_8:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        frame_function->f_lineno = 337;
        goto try_finally_handler_10;
    }
    Py_DECREF( tmp_cond_value_7 );
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_10 = const_int_neg_1;
    if (var_infbounds.object == NULL)
    {
        var_infbounds.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_infbounds.object;
        var_infbounds.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_assign_source_11 = par_b.object;

    if ( tmp_assign_source_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 339;
        goto try_finally_handler_10;
    }

    if (var_bound.object == NULL)
    {
        var_bound.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_bound.object;
        var_bound.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_make_exception_arg_1 = const_str_digest_6b8308bc6ce4a2130140488c5898fbca;
    frame_function->f_lineno = 341;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto try_finally_handler_10;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 341;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_10;
    branch_end_4:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_4__value_1.object );
    tmp_and_4__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto try_finally_handler_7;
    }

    goto finally_end_9;
    finally_end_9:;
    branch_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_10 != NULL )
    {
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;

        goto try_finally_handler_4;
    }

    goto finally_end_10;
    finally_end_10:;
    branch_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_1;
    }

    goto finally_end_11;
    finally_end_11:;
    branch_no_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
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
    tmp_compare_left_1 = par_points.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42519 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if (tmp_is_1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_compare_left_2 = var_infbounds.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240217 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__qagse );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_func.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_b.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_args.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_full_output.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_epsabs.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_epsrel.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = par_limit.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 345;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS8( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__qagie );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = par_func.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = var_bound.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240310 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = var_infbounds.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240217 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = par_args.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = par_full_output.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = par_epsabs.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = par_epsrel.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = par_limit.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 347;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS8( tmp_called_2, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 347;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_3 = var_infbounds.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240217 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_make_exception_arg_2 = const_str_digest_c4520721daa7f8d22f7a9b9595fd9dc5;
    frame_function->f_lineno = 350;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 350;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_len_arg_1 = par_points.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42519 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 352;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 352;
        goto frame_exception_exit_1;
    }
    assert( var_nl.object == NULL );
    var_nl.object = tmp_assign_source_12;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = PyTuple_New( 1 );
    tmp_binop_left_1 = var_nl.object;

    tmp_binop_right_1 = const_int_pos_2;
    tmp_tuple_element_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_17, 0, tmp_tuple_element_1 );
    tmp_call_arg_element_18 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 353;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }
    assert( var_the_points.object == NULL );
    var_the_points.object = tmp_assign_source_13;

    tmp_sliceass_value_1 = par_points.object;

    if ( tmp_sliceass_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 42519 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_sliceass_target_1 = var_the_points.object;

    tmp_sliceass_upper_1 = var_nl.object;

    tmp_result = SET_SLICE( tmp_sliceass_target_1, Py_None, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__qagpe );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = par_func.object;

    if ( tmp_call_arg_element_19 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = par_a.object;

    if ( tmp_call_arg_element_20 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = par_b.object;

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = var_the_points.object;

    tmp_call_arg_element_23 = par_args.object;

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_24 = par_full_output.object;

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_25 = par_epsabs.object;

    if ( tmp_call_arg_element_25 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_26 = par_epsrel.object;

    if ( tmp_call_arg_element_26 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_27 = par_limit.object;

    if ( tmp_call_arg_element_27 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 355;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS9( tmp_called_4, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24, tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 355;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_7:;
    branch_end_5:;

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
    if ((var_infbounds.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_infbounds,
            var_infbounds.object
        );

    }
    if ((var_bound.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bound,
            var_bound.object
        );

    }
    if ((var_nl.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_nl,
            var_nl.object
        );

    }
    if ((var_the_points.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_the_points,
            var_the_points.object
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
    if ((par_full_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_full_output,
            par_full_output.object
        );

    }
    if ((par_epsabs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsabs,
            par_epsabs.object
        );

    }
    if ((par_epsrel.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsrel,
            par_epsrel.object
        );

    }
    if ((par_limit.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_limit,
            par_limit.object
        );

    }
    if ((par_points.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_points,
            par_points.object
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
static PyObject *fparse_function_4__quad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    PyObject *_python_par_full_output = NULL;
    PyObject *_python_par_epsabs = NULL;
    PyObject *_python_par_epsrel = NULL;
    PyObject *_python_par_limit = NULL;
    PyObject *_python_par_points = NULL;
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
                PyErr_Format( PyExc_TypeError, "_quad() keywords must be strings" );
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
            if ( found == false && const_str_plain_full_output == key )
            {
                assert( _python_par_full_output == NULL );
                _python_par_full_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_epsabs == key )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_epsrel == key )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_limit == key )
            {
                assert( _python_par_limit == NULL );
                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_points == key )
            {
                assert( _python_par_points == NULL );
                _python_par_points = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_full_output, key ) == 1 )
            {
                assert( _python_par_full_output == NULL );
                _python_par_full_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsabs, key ) == 1 )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsrel, key ) == 1 )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_limit, key ) == 1 )
            {
                assert( _python_par_limit == NULL );
                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_points, key ) == 1 )
            {
                assert( _python_par_points == NULL );
                _python_par_points = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_quad() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_full_output != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_full_output = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_full_output == NULL )
    {
        if ( 4 + self->m_defaults_given >= 9  )
        {
            _python_par_full_output = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 9 ) );
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
         if (unlikely( _python_par_epsabs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_epsabs = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_epsabs == NULL )
    {
        if ( 5 + self->m_defaults_given >= 9  )
        {
            _python_par_epsabs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 9 ) );
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
         if (unlikely( _python_par_epsrel != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_epsrel = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_epsrel == NULL )
    {
        if ( 6 + self->m_defaults_given >= 9  )
        {
            _python_par_epsrel = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 9 ) );
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
         if (unlikely( _python_par_limit != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_limit = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_limit == NULL )
    {
        if ( 7 + self->m_defaults_given >= 9  )
        {
            _python_par_limit = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 9 ) );
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
         if (unlikely( _python_par_points != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_points = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_points == NULL )
    {
        if ( 8 + self->m_defaults_given >= 9  )
        {
            _python_par_points = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 9 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_a == NULL || _python_par_b == NULL || _python_par_args == NULL || _python_par_full_output == NULL || _python_par_epsabs == NULL || _python_par_epsrel == NULL || _python_par_limit == NULL || _python_par_points == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_full_output, _python_par_epsabs, _python_par_epsrel, _python_par_limit, _python_par_points };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4__quad_of_module_scipy$integrate$quadpack( self, _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_full_output, _python_par_epsabs, _python_par_epsrel, _python_par_limit, _python_par_points );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_full_output );
    Py_XDECREF( _python_par_epsabs );
    Py_XDECREF( _python_par_epsrel );
    Py_XDECREF( _python_par_limit );
    Py_XDECREF( _python_par_points );

    return NULL;
}

static PyObject *dparse_function_4__quad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 9 )
    {
        return impl_function_4__quad_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__quad_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_args, PyObject *_python_par_full_output, PyObject *_python_par_epsabs, PyObject *_python_par_epsrel, PyObject *_python_par_limlst, PyObject *_python_par_limit, PyObject *_python_par_maxp1, PyObject *_python_par_weight, PyObject *_python_par_wvar, PyObject *_python_par_wopts )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_full_output; par_full_output.object = _python_par_full_output;
    PyObjectLocalVariable par_epsabs; par_epsabs.object = _python_par_epsabs;
    PyObjectLocalVariable par_epsrel; par_epsrel.object = _python_par_epsrel;
    PyObjectLocalVariable par_limlst; par_limlst.object = _python_par_limlst;
    PyObjectLocalVariable par_limit; par_limit.object = _python_par_limit;
    PyObjectLocalVariable par_maxp1; par_maxp1.object = _python_par_maxp1;
    PyObjectLocalVariable par_weight; par_weight.object = _python_par_weight;
    PyObjectLocalVariable par_wvar; par_wvar.object = _python_par_wvar;
    PyObjectLocalVariable par_wopts; par_wopts.object = _python_par_wopts;
    PyObjectLocalVariable var_strdict;
    PyObjectLocalVariable var_integr;
    PyObjectLocalVariable var_momcom;
    PyObjectLocalVariable var_chebcom;
    PyObjectLocalVariable var_thefunc;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_and_2__value_1;
    PyObjectTempVariable tmp_and_3__value_1;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    PyObject *tmp_unary_arg_3;
    PyObject *tmp_unary_arg_4;
    PyObject *tmp_unary_arg_5;
    PyObject *tmp_unary_arg_6;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_93ccb2cbd17e9f5511aa3e5d71d059bb, module_scipy$integrate$quadpack );
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
    tmp_compare_left_1 = par_weight.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LIST_COPY( const_list_dc9f83bc2aa0959b1c67076cce2fdb1e_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_binop_left_1 = const_str_digest_363623f957866100bc2ae264eb09fc2e;
    tmp_binop_right_1 = par_weight.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 361;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 361;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyDict_Copy( const_dict_90e5dda4b43581c37b49cc3a7124fe24 );
    assert( var_strdict.object == NULL );
    var_strdict.object = tmp_assign_source_1;

    tmp_compare_left_2 = par_weight.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 365;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LIST_COPY( const_list_str_plain_cos_str_plain_sin_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 365;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_subscr_target_1 = var_strdict.object;

    tmp_subscr_subscript_1 = par_weight.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 366;
        goto frame_exception_exit_1;
    }
    assert( var_integr.object == NULL );
    var_integr.object = tmp_assign_source_2;

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = par_b.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto try_finally_handler_2;
    }

    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto try_finally_handler_2;
    }

    tmp_assign_source_3 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_3;

    tmp_cond_value_2 = tmp_and_1__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
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
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = par_a.object;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto try_finally_handler_3;
    }

    tmp_unary_arg_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_1 == NULL ))
    {
        tmp_unary_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 367;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 367;
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
    tmp_cond_value_1 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_1 );
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

        frame_function->f_lineno = 367;
        goto try_finally_handler_1;
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
    tmp_compare_left_3 = par_wopts.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239967 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 368;
        goto try_finally_handler_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if (tmp_is_1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__qawoe );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = par_func.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = par_a.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = par_b.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_4 = par_wvar.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239917 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_5 = var_integr.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240361 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = par_args.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_7 = par_full_output.object;

    if ( tmp_call_arg_element_7 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_8 = par_epsabs.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_9 = par_epsrel.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_10 = par_limit.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_11 = par_maxp1.object;

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239866 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_12 = const_int_pos_1;
    frame_function->f_lineno = 369;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS12( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto try_finally_handler_1;
    }
    goto try_finally_handler_start_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_subscr_target_2 = par_wopts.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239967 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 371;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_assign_source_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 371;
        goto try_finally_handler_1;
    }
    assert( var_momcom.object == NULL );
    var_momcom.object = tmp_assign_source_4;

    tmp_subscr_target_3 = par_wopts.object;

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239967 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 372;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_3 = const_int_pos_1;
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 372;
        goto try_finally_handler_1;
    }
    assert( var_chebcom.object == NULL );
    var_chebcom.object = tmp_assign_source_5;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__qawoe );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_13 = par_func.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_14 = par_a.object;

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_15 = par_b.object;

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_16 = par_wvar.object;

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239917 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_17 = var_integr.object;

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240361 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_18 = par_args.object;

    if ( tmp_call_arg_element_18 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_19 = par_full_output.object;

    if ( tmp_call_arg_element_19 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_20 = par_epsabs.object;

    if ( tmp_call_arg_element_20 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_21 = par_epsrel.object;

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_22 = par_limit.object;

    if ( tmp_call_arg_element_22 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_23 = par_maxp1.object;

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239866 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_24 = const_int_pos_2;
    tmp_call_arg_element_25 = var_momcom.object;

    tmp_call_arg_element_26 = var_chebcom.object;

    frame_function->f_lineno = 373;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS14( tmp_called_2, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24, tmp_call_arg_element_25, tmp_call_arg_element_26 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto try_finally_handler_1;
    }
    goto try_finally_handler_start_1;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_compexpr_left_3 = par_b.object;

    if ( tmp_compexpr_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto try_finally_handler_5;
    }

    tmp_compexpr_right_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_3 == NULL ))
    {
        tmp_compexpr_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto try_finally_handler_5;
    }

    tmp_assign_source_6 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_5;
    }
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = tmp_assign_source_6;

    tmp_cond_value_4 = tmp_and_2__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_5;
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
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_4 = par_a.object;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto try_finally_handler_6;
    }

    tmp_unary_arg_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_2 == NULL ))
    {
        tmp_unary_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 375;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_4 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_2 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_6;
    }
    tmp_cond_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 375;
        goto try_finally_handler_6;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
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

        goto try_finally_handler_5;
    }

    goto finally_end_3;
    finally_end_3:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_cond_value_3 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_cond_value_3 );
    condexpr_end_2:;
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
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 375;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__qawfe );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_27 = par_func.object;

    if ( tmp_call_arg_element_27 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_28 = par_a.object;

    if ( tmp_call_arg_element_28 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_29 = par_wvar.object;

    if ( tmp_call_arg_element_29 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239917 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_30 = var_integr.object;

    if ( tmp_call_arg_element_30 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240361 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_31 = par_args.object;

    if ( tmp_call_arg_element_31 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_32 = par_full_output.object;

    if ( tmp_call_arg_element_32 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_33 = par_epsabs.object;

    if ( tmp_call_arg_element_33 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_34 = par_limlst.object;

    if ( tmp_call_arg_element_34 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239814 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_35 = par_limit.object;

    if ( tmp_call_arg_element_35 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_36 = par_maxp1.object;

    if ( tmp_call_arg_element_36 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239866 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }

    frame_function->f_lineno = 376;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS10( tmp_called_3, tmp_call_arg_element_27, tmp_call_arg_element_28, tmp_call_arg_element_29, tmp_call_arg_element_30, tmp_call_arg_element_31, tmp_call_arg_element_32, tmp_call_arg_element_33, tmp_call_arg_element_34, tmp_call_arg_element_35, tmp_call_arg_element_36 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_finally_handler_4;
    }
    goto try_finally_handler_start_2;
    goto branch_end_5;
    branch_no_5:;
    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_compexpr_left_5 = par_b.object;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_8;
    }

    tmp_compexpr_right_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_compexpr_right_5 == NULL ))
    {
        tmp_compexpr_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_compexpr_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_8;
    }

    tmp_assign_source_7 = RICH_COMPARE_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_finally_handler_8;
    }
    assert( tmp_and_3__value_1.object == NULL );
    tmp_and_3__value_1.object = tmp_assign_source_7;

    tmp_cond_value_6 = tmp_and_3__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_and_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_3__value_1.object );
        tmp_and_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_6 = par_a.object;

    if ( tmp_compexpr_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_9;
    }

    tmp_unary_arg_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_3 == NULL ))
    {
        tmp_unary_arg_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 377;
        goto try_finally_handler_9;
    }

    tmp_compexpr_right_6 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_3 );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
        goto try_finally_handler_9;
    }
    tmp_cond_value_5 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 377;
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
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_cond_value_5 = tmp_and_3__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
    condexpr_end_3:;
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
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 377;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compare_left_4 = par_weight.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 378;
        goto try_finally_handler_7;
    }

    tmp_compare_right_4 = const_str_plain_cos;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto try_finally_handler_7;
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
    tmp_assign_source_8 = MAKE_FUNCTION_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 379;
        goto try_finally_handler_7;
    }
    assert( var_thefunc.object == NULL );
    var_thefunc.object = tmp_assign_source_8;

    goto branch_end_7;
    branch_no_7:;
    tmp_assign_source_9 = MAKE_FUNCTION_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 385;
        goto try_finally_handler_7;
    }
    assert( var_thefunc.object == NULL );
    var_thefunc.object = tmp_assign_source_9;

    branch_end_7:;
    tmp_binop_left_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_func.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_2, 0, tmp_tuple_element_1 );
    tmp_binop_right_2 = par_args.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 390;
        goto try_finally_handler_7;
    }

    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 390;
        goto try_finally_handler_7;
    }
    if (par_args.object == NULL)
    {
        par_args.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = par_args.object;
        par_args.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__qawfe );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_37 = var_thefunc.object;

    tmp_unary_arg_4 = par_b.object;

    if ( tmp_unary_arg_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_38 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_4 );
    if ( tmp_call_arg_element_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_39 = par_wvar.object;

    if ( tmp_call_arg_element_39 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239917 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_40 = var_integr.object;

    if ( tmp_call_arg_element_40 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240361 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_41 = par_args.object;

    tmp_call_arg_element_42 = par_full_output.object;

    if ( tmp_call_arg_element_42 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_43 = par_epsabs.object;

    if ( tmp_call_arg_element_43 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_44 = par_limlst.object;

    if ( tmp_call_arg_element_44 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239814 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_45 = par_limit.object;

    if ( tmp_call_arg_element_45 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    tmp_call_arg_element_46 = par_maxp1.object;

    if ( tmp_call_arg_element_46 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239866 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }

    frame_function->f_lineno = 391;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS10( tmp_called_4, tmp_call_arg_element_37, tmp_call_arg_element_38, tmp_call_arg_element_39, tmp_call_arg_element_40, tmp_call_arg_element_41, tmp_call_arg_element_42, tmp_call_arg_element_43, tmp_call_arg_element_44, tmp_call_arg_element_45, tmp_call_arg_element_46 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_38 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 391;
        goto try_finally_handler_7;
    }
    goto try_finally_handler_start_3;
    goto branch_end_6;
    branch_no_6:;
    tmp_make_exception_arg_2 = const_str_digest_50d1f4ff5bb3cdafb59ea044281992e4;
    frame_function->f_lineno = 393;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 393;
        goto try_finally_handler_7;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 393;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_7;
    branch_end_6:;
    try_finally_handler_start_3:;
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

    tmp_tried_lineno_1 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_3__value_1.object );
    tmp_and_3__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_4;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_2;
    }

    goto finally_end_7;
    finally_end_7:;
    branch_end_5:;
    try_finally_handler_start_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_finally_handler_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto try_finally_handler_start_1;
    }

    goto finally_end_8;
    finally_end_8:;
    branch_end_3:;
    try_finally_handler_start_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_9 != NULL )
    {
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;

        goto frame_exception_exit_1;
    }

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_9;
    finally_end_9:;
    goto branch_end_2;
    branch_no_2:;
    // Tried code
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_compexpr_left_7 = par_a.object;

    if ( tmp_compexpr_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_11;
    }

    tmp_compexpr_right_7 = PyList_New( 2 );
    tmp_unary_arg_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_5 == NULL ))
    {
        tmp_unary_arg_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_5 == NULL )
    {
        Py_DECREF( tmp_compexpr_right_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_11;
    }

    tmp_list_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_5 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_7 );

        frame_function->f_lineno = 395;
        goto try_finally_handler_11;
    }
    PyList_SET_ITEM( tmp_compexpr_right_7, 0, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_right_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_11;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_compexpr_right_7, 1, tmp_list_element_1 );
    tmp_assign_source_11 = SEQUENCE_CONTAINS( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_7 );

        frame_function->f_lineno = 395;
        goto try_finally_handler_11;
    }
    Py_DECREF( tmp_compexpr_right_7 );
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

    tmp_cond_value_8 = tmp_or_1__value_1.object;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto try_finally_handler_11;
    }
    if (tmp_cond_truth_8 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_cond_value_7 = tmp_or_1__value_1.object;

    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_7 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_8 = par_b.object;

    if ( tmp_compexpr_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_12;
    }

    tmp_compexpr_right_8 = PyList_New( 2 );
    tmp_unary_arg_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_unary_arg_6 == NULL ))
    {
        tmp_unary_arg_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_unary_arg_6 == NULL )
    {
        Py_DECREF( tmp_compexpr_right_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_12;
    }

    tmp_list_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_6 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_8 );

        frame_function->f_lineno = 395;
        goto try_finally_handler_12;
    }
    PyList_SET_ITEM( tmp_compexpr_right_8, 0, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Inf );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_right_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186419 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 395;
        goto try_finally_handler_12;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_compexpr_right_8, 1, tmp_list_element_2 );
    tmp_cond_value_7 = SEQUENCE_CONTAINS( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_8 );

        frame_function->f_lineno = 395;
        goto try_finally_handler_12;
    }
    Py_DECREF( tmp_compexpr_right_8 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_12:;
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

        goto try_finally_handler_11;
    }

    goto finally_end_10;
    finally_end_10:;
    condexpr_end_4:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_11 != NULL )
    {
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;

        goto try_finally_handler_10;
    }

    goto finally_end_11;
    finally_end_11:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 395;
        goto try_finally_handler_10;
    }
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_3 = const_str_digest_70560c519e97cbb0ab21ec4c0869e70f;
    frame_function->f_lineno = 396;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 396;
        goto try_finally_handler_10;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 396;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_10;
    branch_no_8:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
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
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 3;
    tmp_slice_source_1 = par_weight.object;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_5 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_str_plain_alg;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 398;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_subscr_target_4 = var_strdict.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240413 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = par_weight.object;

    if ( tmp_subscr_subscript_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239532 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 399;
        goto frame_exception_exit_1;
    }
    if (var_integr.object == NULL)
    {
        var_integr.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_integr.object;
        var_integr.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__qawse );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_47 = par_func.object;

    if ( tmp_call_arg_element_47 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_48 = par_a.object;

    if ( tmp_call_arg_element_48 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_49 = par_b.object;

    if ( tmp_call_arg_element_49 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_50 = par_wvar.object;

    if ( tmp_call_arg_element_50 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239917 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_51 = var_integr.object;

    tmp_call_arg_element_52 = par_args.object;

    if ( tmp_call_arg_element_52 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_53 = par_full_output.object;

    if ( tmp_call_arg_element_53 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_54 = par_epsabs.object;

    if ( tmp_call_arg_element_54 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_55 = par_epsrel.object;

    if ( tmp_call_arg_element_55 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_56 = par_limit.object;

    if ( tmp_call_arg_element_56 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 400;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS10( tmp_called_5, tmp_call_arg_element_47, tmp_call_arg_element_48, tmp_call_arg_element_49, tmp_call_arg_element_50, tmp_call_arg_element_51, tmp_call_arg_element_52, tmp_call_arg_element_53, tmp_call_arg_element_54, tmp_call_arg_element_55, tmp_call_arg_element_56 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 400;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240272 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__qawce );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_57 = par_func.object;

    if ( tmp_call_arg_element_57 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_58 = par_a.object;

    if ( tmp_call_arg_element_58 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_59 = par_b.object;

    if ( tmp_call_arg_element_59 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_60 = par_wvar.object;

    if ( tmp_call_arg_element_60 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239917 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_61 = par_args.object;

    if ( tmp_call_arg_element_61 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_62 = par_full_output.object;

    if ( tmp_call_arg_element_62 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 238914 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_63 = par_epsabs.object;

    if ( tmp_call_arg_element_63 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_64 = par_epsrel.object;

    if ( tmp_call_arg_element_64 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_65 = par_limit.object;

    if ( tmp_call_arg_element_65 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239722 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 402;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS9( tmp_called_6, tmp_call_arg_element_57, tmp_call_arg_element_58, tmp_call_arg_element_59, tmp_call_arg_element_60, tmp_call_arg_element_61, tmp_call_arg_element_62, tmp_call_arg_element_63, tmp_call_arg_element_64, tmp_call_arg_element_65 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 402;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_9:;
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
    if ((var_strdict.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_strdict,
            var_strdict.object
        );

    }
    if ((var_integr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_integr,
            var_integr.object
        );

    }
    if ((var_momcom.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_momcom,
            var_momcom.object
        );

    }
    if ((var_chebcom.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_chebcom,
            var_chebcom.object
        );

    }
    if ((var_thefunc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_thefunc,
            var_thefunc.object
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
    if ((par_full_output.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_full_output,
            par_full_output.object
        );

    }
    if ((par_epsabs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsabs,
            par_epsabs.object
        );

    }
    if ((par_epsrel.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsrel,
            par_epsrel.object
        );

    }
    if ((par_limlst.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_limlst,
            par_limlst.object
        );

    }
    if ((par_limit.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_limit,
            par_limit.object
        );

    }
    if ((par_maxp1.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_maxp1,
            par_maxp1.object
        );

    }
    if ((par_weight.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_weight,
            par_weight.object
        );

    }
    if ((par_wvar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_wvar,
            par_wvar.object
        );

    }
    if ((par_wopts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_wopts,
            par_wopts.object
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
static PyObject *fparse_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    PyObject *_python_par_full_output = NULL;
    PyObject *_python_par_epsabs = NULL;
    PyObject *_python_par_epsrel = NULL;
    PyObject *_python_par_limlst = NULL;
    PyObject *_python_par_limit = NULL;
    PyObject *_python_par_maxp1 = NULL;
    PyObject *_python_par_weight = NULL;
    PyObject *_python_par_wvar = NULL;
    PyObject *_python_par_wopts = NULL;
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
                PyErr_Format( PyExc_TypeError, "_quad_weight() keywords must be strings" );
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
            if ( found == false && const_str_plain_full_output == key )
            {
                assert( _python_par_full_output == NULL );
                _python_par_full_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_epsabs == key )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_epsrel == key )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_limlst == key )
            {
                assert( _python_par_limlst == NULL );
                _python_par_limlst = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_limit == key )
            {
                assert( _python_par_limit == NULL );
                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_maxp1 == key )
            {
                assert( _python_par_maxp1 == NULL );
                _python_par_maxp1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_weight == key )
            {
                assert( _python_par_weight == NULL );
                _python_par_weight = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_wvar == key )
            {
                assert( _python_par_wvar == NULL );
                _python_par_wvar = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_wopts == key )
            {
                assert( _python_par_wopts == NULL );
                _python_par_wopts = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_full_output, key ) == 1 )
            {
                assert( _python_par_full_output == NULL );
                _python_par_full_output = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsabs, key ) == 1 )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsrel, key ) == 1 )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_limlst, key ) == 1 )
            {
                assert( _python_par_limlst == NULL );
                _python_par_limlst = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_limit, key ) == 1 )
            {
                assert( _python_par_limit == NULL );
                _python_par_limit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_maxp1, key ) == 1 )
            {
                assert( _python_par_maxp1 == NULL );
                _python_par_maxp1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_weight, key ) == 1 )
            {
                assert( _python_par_weight == NULL );
                _python_par_weight = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_wvar, key ) == 1 )
            {
                assert( _python_par_wvar == NULL );
                _python_par_wvar = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_wopts, key ) == 1 )
            {
                assert( _python_par_wopts == NULL );
                _python_par_wopts = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_quad_weight() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 13 ))
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
        if ( 0 + self->m_defaults_given >= 13  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 13 ) );
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
        if ( 1 + self->m_defaults_given >= 13  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 13 ) );
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
        if ( 2 + self->m_defaults_given >= 13  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 13 ) );
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
        if ( 3 + self->m_defaults_given >= 13  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 13 ) );
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
         if (unlikely( _python_par_full_output != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_full_output = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_full_output == NULL )
    {
        if ( 4 + self->m_defaults_given >= 13  )
        {
            _python_par_full_output = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 13 ) );
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
         if (unlikely( _python_par_epsabs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_epsabs = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_epsabs == NULL )
    {
        if ( 5 + self->m_defaults_given >= 13  )
        {
            _python_par_epsabs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 13 ) );
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
         if (unlikely( _python_par_epsrel != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_epsrel = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_epsrel == NULL )
    {
        if ( 6 + self->m_defaults_given >= 13  )
        {
            _python_par_epsrel = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 13 ) );
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
         if (unlikely( _python_par_limlst != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_limlst = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_limlst == NULL )
    {
        if ( 7 + self->m_defaults_given >= 13  )
        {
            _python_par_limlst = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 13 ) );
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
         if (unlikely( _python_par_limit != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_limit = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_limit == NULL )
    {
        if ( 8 + self->m_defaults_given >= 13  )
        {
            _python_par_limit = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 13 ) );
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
         if (unlikely( _python_par_maxp1 != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_maxp1 = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_maxp1 == NULL )
    {
        if ( 9 + self->m_defaults_given >= 13  )
        {
            _python_par_maxp1 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 13 ) );
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
         if (unlikely( _python_par_weight != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 10 );
             goto error_exit;
         }

        _python_par_weight = INCREASE_REFCOUNT( args[ 10 ] );
    }
    else if ( _python_par_weight == NULL )
    {
        if ( 10 + self->m_defaults_given >= 13  )
        {
            _python_par_weight = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 10 - 13 ) );
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
    if (likely( 11 < args_given ))
    {
         if (unlikely( _python_par_wvar != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 11 );
             goto error_exit;
         }

        _python_par_wvar = INCREASE_REFCOUNT( args[ 11 ] );
    }
    else if ( _python_par_wvar == NULL )
    {
        if ( 11 + self->m_defaults_given >= 13  )
        {
            _python_par_wvar = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 11 - 13 ) );
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
    if (likely( 12 < args_given ))
    {
         if (unlikely( _python_par_wopts != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 12 );
             goto error_exit;
         }

        _python_par_wopts = INCREASE_REFCOUNT( args[ 12 ] );
    }
    else if ( _python_par_wopts == NULL )
    {
        if ( 12 + self->m_defaults_given >= 13  )
        {
            _python_par_wopts = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 12 - 13 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_a == NULL || _python_par_b == NULL || _python_par_args == NULL || _python_par_full_output == NULL || _python_par_epsabs == NULL || _python_par_epsrel == NULL || _python_par_limlst == NULL || _python_par_limit == NULL || _python_par_maxp1 == NULL || _python_par_weight == NULL || _python_par_wvar == NULL || _python_par_wopts == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_full_output, _python_par_epsabs, _python_par_epsrel, _python_par_limlst, _python_par_limit, _python_par_maxp1, _python_par_weight, _python_par_wvar, _python_par_wopts };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, _python_par_func, _python_par_a, _python_par_b, _python_par_args, _python_par_full_output, _python_par_epsabs, _python_par_epsrel, _python_par_limlst, _python_par_limit, _python_par_maxp1, _python_par_weight, _python_par_wvar, _python_par_wopts );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_full_output );
    Py_XDECREF( _python_par_epsabs );
    Py_XDECREF( _python_par_epsrel );
    Py_XDECREF( _python_par_limlst );
    Py_XDECREF( _python_par_limit );
    Py_XDECREF( _python_par_maxp1 );
    Py_XDECREF( _python_par_weight );
    Py_XDECREF( _python_par_wvar );
    Py_XDECREF( _python_par_wopts );

    return NULL;
}

static PyObject *dparse_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 13 )
    {
        return impl_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ), INCREASE_REFCOUNT( args[ 11 ] ), INCREASE_REFCOUNT( args[ 12 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_myargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_myargs; par_myargs.object = _python_par_myargs;
    PyObjectLocalVariable var_y;
    PyObjectLocalVariable var_func;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7ab9075d5daeda9483803eba61d2121a, module_scipy$integrate$quadpack );
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
    tmp_unary_arg_1 = par_x.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    assert( var_y.object == NULL );
    var_y.object = tmp_assign_source_1;

    tmp_subscr_target_1 = par_myargs.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240466 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    assert( var_func.object == NULL );
    var_func.object = tmp_assign_source_2;

    tmp_binop_left_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_y.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_1, 0, tmp_tuple_element_1 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_myargs.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240466 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 382;
        goto frame_exception_exit_1;
    }
    if (par_myargs.object == NULL)
    {
        par_myargs.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_myargs.object;
        par_myargs.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_dircall_arg1_1 = var_func.object;

    tmp_dircall_arg2_1 = par_myargs.object;

    tmp_return_value = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), INCREASE_REFCOUNT( tmp_dircall_arg2_1 ) );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 383;
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
    if ((var_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            var_y.object
        );

    }
    if ((var_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            var_func.object
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
    if ((par_myargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_myargs,
            par_myargs.object
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
static PyObject *fparse_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_myargs = NULL;
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
                PyErr_Format( PyExc_TypeError, "thefunc() keywords must be strings" );
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
                   "thefunc() got an unexpected keyword argument '%s'",
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

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_myargs = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_myargs, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_myargs = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, _python_par_x, _python_par_myargs );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_myargs );

    return NULL;
}

static PyObject *dparse_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_myargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_myargs; par_myargs.object = _python_par_myargs;
    PyObjectLocalVariable var_y;
    PyObjectLocalVariable var_func;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1c766fe38475725c9cecaef3d0ff65b8, module_scipy$integrate$quadpack );
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
    tmp_unary_arg_1 = par_x.object;

    if ( tmp_unary_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    assert( var_y.object == NULL );
    var_y.object = tmp_assign_source_1;

    tmp_subscr_target_1 = par_myargs.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240466 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    assert( var_func.object == NULL );
    var_func.object = tmp_assign_source_2;

    tmp_binop_left_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_y.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_1, 0, tmp_tuple_element_1 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_myargs.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240466 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    if (par_myargs.object == NULL)
    {
        par_myargs.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_myargs.object;
        par_myargs.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_dircall_arg1_1 = var_func.object;

    tmp_dircall_arg2_1 = par_myargs.object;

    tmp_unary_arg_2 = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), INCREASE_REFCOUNT( tmp_dircall_arg2_1 ) );
    if ( tmp_unary_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_2 );
    Py_DECREF( tmp_unary_arg_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 389;
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
    if ((var_y.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_y,
            var_y.object
        );

    }
    if ((var_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            var_func.object
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
    if ((par_myargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_myargs,
            par_myargs.object
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
static PyObject *fparse_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_myargs = NULL;
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
                PyErr_Format( PyExc_TypeError, "thefunc() keywords must be strings" );
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
                   "thefunc() got an unexpected keyword argument '%s'",
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

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_myargs = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_myargs, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_myargs = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, _python_par_x, _python_par_myargs );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_myargs );

    return NULL;
}

static PyObject *dparse_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__infunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_func, PyObject *_python_par_gfun, PyObject *_python_par_hfun, PyObject *_python_par_more_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_gfun; par_gfun.object = _python_par_gfun;
    PyObjectLocalVariable par_hfun; par_hfun.object = _python_par_hfun;
    PyObjectLocalVariable par_more_args; par_more_args.object = _python_par_more_args;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_b;
    PyObjectLocalVariable var_myargs;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_237895572f8120b9d54b6cf45ca2892f, module_scipy$integrate$quadpack );
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
    tmp_called_1 = par_gfun.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240518 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 406;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 406;
        goto frame_exception_exit_1;
    }
    assert( var_a.object == NULL );
    var_a.object = tmp_assign_source_1;

    tmp_called_2 = par_hfun.object;

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240568 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_x.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 407;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 407;
        goto frame_exception_exit_1;
    }
    assert( var_b.object == NULL );
    var_b.object = tmp_assign_source_2;

    tmp_binop_left_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_1, 0, tmp_tuple_element_1 );
    tmp_binop_right_1 = par_more_args.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240618 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 408;
        goto frame_exception_exit_1;
    }
    assert( var_myargs.object == NULL );
    var_myargs.object = tmp_assign_source_3;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_quad );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quad );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239499 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = par_func.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_a.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_b.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_myargs.object;

    tmp_dict_key_1 = const_str_plain_args;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 409;
    tmp_subscr_target_1 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 409;
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
    if ((var_a.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a,
            var_a.object
        );

    }
    if ((var_b.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b,
            var_b.object
        );

    }
    if ((var_myargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_myargs,
            var_myargs.object
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
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
        );

    }
    if ((par_gfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gfun,
            par_gfun.object
        );

    }
    if ((par_hfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hfun,
            par_hfun.object
        );

    }
    if ((par_more_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_more_args,
            par_more_args.object
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
static PyObject *fparse_function_6__infunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_gfun = NULL;
    PyObject *_python_par_hfun = NULL;
    PyObject *_python_par_more_args = NULL;
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
                PyErr_Format( PyExc_TypeError, "_infunc() keywords must be strings" );
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
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_gfun == key )
            {
                assert( _python_par_gfun == NULL );
                _python_par_gfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_hfun == key )
            {
                assert( _python_par_hfun == NULL );
                _python_par_hfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_more_args == key )
            {
                assert( _python_par_more_args == NULL );
                _python_par_more_args = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_gfun, key ) == 1 )
            {
                assert( _python_par_gfun == NULL );
                _python_par_gfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_hfun, key ) == 1 )
            {
                assert( _python_par_hfun == NULL );
                _python_par_hfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_more_args, key ) == 1 )
            {
                assert( _python_par_more_args == NULL );
                _python_par_more_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_infunc() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_gfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_gfun = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_gfun == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_gfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_hfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_hfun = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_hfun == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_hfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_more_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_more_args = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_more_args == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_more_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_x == NULL || _python_par_func == NULL || _python_par_gfun == NULL || _python_par_hfun == NULL || _python_par_more_args == NULL ))
    {
        PyObject *values[] = { _python_par_x, _python_par_func, _python_par_gfun, _python_par_hfun, _python_par_more_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6__infunc_of_module_scipy$integrate$quadpack( self, _python_par_x, _python_par_func, _python_par_gfun, _python_par_hfun, _python_par_more_args );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_gfun );
    Py_XDECREF( _python_par_hfun );
    Py_XDECREF( _python_par_more_args );

    return NULL;
}

static PyObject *dparse_function_6__infunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_6__infunc_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__infunc_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_dblquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_gfun, PyObject *_python_par_hfun, PyObject *_python_par_args, PyObject *_python_par_epsabs, PyObject *_python_par_epsrel )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_gfun; par_gfun.object = _python_par_gfun;
    PyObjectLocalVariable par_hfun; par_hfun.object = _python_par_hfun;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_epsabs; par_epsabs.object = _python_par_epsabs;
    PyObjectLocalVariable par_epsrel; par_epsrel.object = _python_par_epsrel;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7eac326419f8f6dd79809f00ef120ffd, module_scipy$integrate$quadpack );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_quad );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quad );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239499 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__infunc );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__infunc );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240673 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyTuple_New( 4 );
    tmp_tuple_element_2 = par_func.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_gfun.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240518 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_hfun.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240568 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_args.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 3, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 3, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_epsabs.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_epsabs;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_epsrel.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_epsrel;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 461;
    tmp_return_value = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 461;
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
    if ((par_gfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gfun,
            par_gfun.object
        );

    }
    if ((par_hfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hfun,
            par_hfun.object
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
    if ((par_epsabs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsabs,
            par_epsabs.object
        );

    }
    if ((par_epsrel.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsrel,
            par_epsrel.object
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
static PyObject *fparse_function_7_dblquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_gfun = NULL;
    PyObject *_python_par_hfun = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_epsabs = NULL;
    PyObject *_python_par_epsrel = NULL;
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
                PyErr_Format( PyExc_TypeError, "dblquad() keywords must be strings" );
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
            if ( found == false && const_str_plain_gfun == key )
            {
                assert( _python_par_gfun == NULL );
                _python_par_gfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_hfun == key )
            {
                assert( _python_par_hfun == NULL );
                _python_par_hfun = value;

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
            if ( found == false && const_str_plain_epsabs == key )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_epsrel == key )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_gfun, key ) == 1 )
            {
                assert( _python_par_gfun == NULL );
                _python_par_gfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_hfun, key ) == 1 )
            {
                assert( _python_par_hfun == NULL );
                _python_par_hfun = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsabs, key ) == 1 )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsrel, key ) == 1 )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dblquad() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 0 + self->m_defaults_given >= 8  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 8 ) );
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
        if ( 1 + self->m_defaults_given >= 8  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 8 ) );
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
        if ( 2 + self->m_defaults_given >= 8  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 8 ) );
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
         if (unlikely( _python_par_gfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_gfun = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_gfun == NULL )
    {
        if ( 3 + self->m_defaults_given >= 8  )
        {
            _python_par_gfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 8 ) );
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
         if (unlikely( _python_par_hfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_hfun = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_hfun == NULL )
    {
        if ( 4 + self->m_defaults_given >= 8  )
        {
            _python_par_hfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 8 ) );
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
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 5 + self->m_defaults_given >= 8  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 8 ) );
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
         if (unlikely( _python_par_epsabs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_epsabs = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_epsabs == NULL )
    {
        if ( 6 + self->m_defaults_given >= 8  )
        {
            _python_par_epsabs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 8 ) );
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
         if (unlikely( _python_par_epsrel != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_epsrel = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_epsrel == NULL )
    {
        if ( 7 + self->m_defaults_given >= 8  )
        {
            _python_par_epsrel = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 8 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_a == NULL || _python_par_b == NULL || _python_par_gfun == NULL || _python_par_hfun == NULL || _python_par_args == NULL || _python_par_epsabs == NULL || _python_par_epsrel == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_a, _python_par_b, _python_par_gfun, _python_par_hfun, _python_par_args, _python_par_epsabs, _python_par_epsrel };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_dblquad_of_module_scipy$integrate$quadpack( self, _python_par_func, _python_par_a, _python_par_b, _python_par_gfun, _python_par_hfun, _python_par_args, _python_par_epsabs, _python_par_epsrel );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_gfun );
    Py_XDECREF( _python_par_hfun );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_epsabs );
    Py_XDECREF( _python_par_epsrel );

    return NULL;
}

static PyObject *dparse_function_7_dblquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_7_dblquad_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_dblquad_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8__infunc2_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_y, PyObject *_python_par_x, PyObject *_python_par_func, PyObject *_python_par_qfun, PyObject *_python_par_rfun, PyObject *_python_par_more_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_y; par_y.object = _python_par_y;
    PyObjectLocalVariable par_x; par_x.object = _python_par_x;
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_qfun; par_qfun.object = _python_par_qfun;
    PyObjectLocalVariable par_rfun; par_rfun.object = _python_par_rfun;
    PyObjectLocalVariable par_more_args; par_more_args.object = _python_par_more_args;
    PyObjectLocalVariable var_a2;
    PyObjectLocalVariable var_b2;
    PyObjectLocalVariable var_myargs;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d4db7020947db67329da4821089deac9, module_scipy$integrate$quadpack );
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
    tmp_called_1 = par_qfun.object;

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240709 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_x.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_y.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 465;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }
    assert( var_a2.object == NULL );
    var_a2.object = tmp_assign_source_1;

    tmp_called_2 = par_rfun.object;

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240759 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = par_x.object;

    if ( tmp_call_arg_element_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_y.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 466;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }
    assert( var_b2.object == NULL );
    var_b2.object = tmp_assign_source_2;

    tmp_binop_left_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_y.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8238 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_x.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_left_1, 1, tmp_tuple_element_1 );
    tmp_binop_right_1 = par_more_args.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240618 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 467;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 467;
        goto frame_exception_exit_1;
    }
    assert( var_myargs.object == NULL );
    var_myargs.object = tmp_assign_source_3;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_quad );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quad );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239499 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = par_func.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 468;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_a2.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_b2.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_myargs.object;

    tmp_dict_key_1 = const_str_plain_args;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 468;
    tmp_subscr_target_1 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 468;
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
    if ((var_a2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_a2,
            var_a2.object
        );

    }
    if ((var_b2.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_b2,
            var_b2.object
        );

    }
    if ((var_myargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_myargs,
            var_myargs.object
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
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
        );

    }
    if ((par_qfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_qfun,
            par_qfun.object
        );

    }
    if ((par_rfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rfun,
            par_rfun.object
        );

    }
    if ((par_more_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_more_args,
            par_more_args.object
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
static PyObject *fparse_function_8__infunc2_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_y = NULL;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_qfun = NULL;
    PyObject *_python_par_rfun = NULL;
    PyObject *_python_par_more_args = NULL;
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
                PyErr_Format( PyExc_TypeError, "_infunc2() keywords must be strings" );
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
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_qfun == key )
            {
                assert( _python_par_qfun == NULL );
                _python_par_qfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_rfun == key )
            {
                assert( _python_par_rfun == NULL );
                _python_par_rfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_more_args == key )
            {
                assert( _python_par_more_args == NULL );
                _python_par_more_args = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_qfun, key ) == 1 )
            {
                assert( _python_par_qfun == NULL );
                _python_par_qfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rfun, key ) == 1 )
            {
                assert( _python_par_rfun == NULL );
                _python_par_rfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_more_args, key ) == 1 )
            {
                assert( _python_par_more_args == NULL );
                _python_par_more_args = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_infunc2() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_x != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_x == NULL )
    {
        if ( 1 + self->m_defaults_given >= 6  )
        {
            _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 6 ) );
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 2 + self->m_defaults_given >= 6  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 6 ) );
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
         if (unlikely( _python_par_qfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_qfun = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_qfun == NULL )
    {
        if ( 3 + self->m_defaults_given >= 6  )
        {
            _python_par_qfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 6 ) );
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
         if (unlikely( _python_par_rfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_rfun = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_rfun == NULL )
    {
        if ( 4 + self->m_defaults_given >= 6  )
        {
            _python_par_rfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 6 ) );
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
         if (unlikely( _python_par_more_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_more_args = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_more_args == NULL )
    {
        if ( 5 + self->m_defaults_given >= 6  )
        {
            _python_par_more_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 6 ) );
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
    if (unlikely( _python_par_y == NULL || _python_par_x == NULL || _python_par_func == NULL || _python_par_qfun == NULL || _python_par_rfun == NULL || _python_par_more_args == NULL ))
    {
        PyObject *values[] = { _python_par_y, _python_par_x, _python_par_func, _python_par_qfun, _python_par_rfun, _python_par_more_args };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8__infunc2_of_module_scipy$integrate$quadpack( self, _python_par_y, _python_par_x, _python_par_func, _python_par_qfun, _python_par_rfun, _python_par_more_args );

error_exit:;

    Py_XDECREF( _python_par_y );
    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_qfun );
    Py_XDECREF( _python_par_rfun );
    Py_XDECREF( _python_par_more_args );

    return NULL;
}

static PyObject *dparse_function_8__infunc2_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6 )
    {
        return impl_function_8__infunc2_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8__infunc2_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_tplquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_a, PyObject *_python_par_b, PyObject *_python_par_gfun, PyObject *_python_par_hfun, PyObject *_python_par_qfun, PyObject *_python_par_rfun, PyObject *_python_par_args, PyObject *_python_par_epsabs, PyObject *_python_par_epsrel )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_b; par_b.object = _python_par_b;
    PyObjectLocalVariable par_gfun; par_gfun.object = _python_par_gfun;
    PyObjectLocalVariable par_hfun; par_hfun.object = _python_par_hfun;
    PyObjectLocalVariable par_qfun; par_qfun.object = _python_par_qfun;
    PyObjectLocalVariable par_rfun; par_rfun.object = _python_par_rfun;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_epsabs; par_epsabs.object = _python_par_epsabs;
    PyObjectLocalVariable par_epsrel; par_epsrel.object = _python_par_epsrel;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_05d2ff85adfa351d2fde31eb81aa9ece, module_scipy$integrate$quadpack );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_dblquad );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dblquad );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240809 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 6 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__infunc2 );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__infunc2 );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240845 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_b.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5951 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_gfun.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240518 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_hfun.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240568 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 4, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyTuple_New( 4 );
    tmp_tuple_element_2 = par_func.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_qfun.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240709 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_rfun.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240759 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_args.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 3, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 5, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_epsabs.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239618 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_epsabs;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_epsrel.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239670 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 526;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_epsrel;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 526;
    tmp_return_value = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 526;
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
    if ((par_gfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_gfun,
            par_gfun.object
        );

    }
    if ((par_hfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hfun,
            par_hfun.object
        );

    }
    if ((par_qfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_qfun,
            par_qfun.object
        );

    }
    if ((par_rfun.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rfun,
            par_rfun.object
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
    if ((par_epsabs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsabs,
            par_epsabs.object
        );

    }
    if ((par_epsrel.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_epsrel,
            par_epsrel.object
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
static PyObject *fparse_function_9_tplquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_b = NULL;
    PyObject *_python_par_gfun = NULL;
    PyObject *_python_par_hfun = NULL;
    PyObject *_python_par_qfun = NULL;
    PyObject *_python_par_rfun = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_epsabs = NULL;
    PyObject *_python_par_epsrel = NULL;
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
                PyErr_Format( PyExc_TypeError, "tplquad() keywords must be strings" );
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
            if ( found == false && const_str_plain_gfun == key )
            {
                assert( _python_par_gfun == NULL );
                _python_par_gfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_hfun == key )
            {
                assert( _python_par_hfun == NULL );
                _python_par_hfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_qfun == key )
            {
                assert( _python_par_qfun == NULL );
                _python_par_qfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_rfun == key )
            {
                assert( _python_par_rfun == NULL );
                _python_par_rfun = value;

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
            if ( found == false && const_str_plain_epsabs == key )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_epsrel == key )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_gfun, key ) == 1 )
            {
                assert( _python_par_gfun == NULL );
                _python_par_gfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_hfun, key ) == 1 )
            {
                assert( _python_par_hfun == NULL );
                _python_par_hfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_qfun, key ) == 1 )
            {
                assert( _python_par_qfun == NULL );
                _python_par_qfun = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rfun, key ) == 1 )
            {
                assert( _python_par_rfun == NULL );
                _python_par_rfun = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsabs, key ) == 1 )
            {
                assert( _python_par_epsabs == NULL );
                _python_par_epsabs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_epsrel, key ) == 1 )
            {
                assert( _python_par_epsrel == NULL );
                _python_par_epsrel = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "tplquad() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 10 ))
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
        if ( 0 + self->m_defaults_given >= 10  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 10 ) );
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
        if ( 1 + self->m_defaults_given >= 10  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 10 ) );
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
        if ( 2 + self->m_defaults_given >= 10  )
        {
            _python_par_b = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 10 ) );
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
         if (unlikely( _python_par_gfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_gfun = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_gfun == NULL )
    {
        if ( 3 + self->m_defaults_given >= 10  )
        {
            _python_par_gfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 10 ) );
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
         if (unlikely( _python_par_hfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_hfun = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_hfun == NULL )
    {
        if ( 4 + self->m_defaults_given >= 10  )
        {
            _python_par_hfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 10 ) );
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
         if (unlikely( _python_par_qfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_qfun = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_qfun == NULL )
    {
        if ( 5 + self->m_defaults_given >= 10  )
        {
            _python_par_qfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 10 ) );
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
         if (unlikely( _python_par_rfun != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_rfun = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_rfun == NULL )
    {
        if ( 6 + self->m_defaults_given >= 10  )
        {
            _python_par_rfun = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 10 ) );
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
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 7 + self->m_defaults_given >= 10  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 10 ) );
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
         if (unlikely( _python_par_epsabs != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 8 );
             goto error_exit;
         }

        _python_par_epsabs = INCREASE_REFCOUNT( args[ 8 ] );
    }
    else if ( _python_par_epsabs == NULL )
    {
        if ( 8 + self->m_defaults_given >= 10  )
        {
            _python_par_epsabs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 8 - 10 ) );
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
         if (unlikely( _python_par_epsrel != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 9 );
             goto error_exit;
         }

        _python_par_epsrel = INCREASE_REFCOUNT( args[ 9 ] );
    }
    else if ( _python_par_epsrel == NULL )
    {
        if ( 9 + self->m_defaults_given >= 10  )
        {
            _python_par_epsrel = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 9 - 10 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_a == NULL || _python_par_b == NULL || _python_par_gfun == NULL || _python_par_hfun == NULL || _python_par_qfun == NULL || _python_par_rfun == NULL || _python_par_args == NULL || _python_par_epsabs == NULL || _python_par_epsrel == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_a, _python_par_b, _python_par_gfun, _python_par_hfun, _python_par_qfun, _python_par_rfun, _python_par_args, _python_par_epsabs, _python_par_epsrel };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_tplquad_of_module_scipy$integrate$quadpack( self, _python_par_func, _python_par_a, _python_par_b, _python_par_gfun, _python_par_hfun, _python_par_qfun, _python_par_rfun, _python_par_args, _python_par_epsabs, _python_par_epsrel );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_b );
    Py_XDECREF( _python_par_gfun );
    Py_XDECREF( _python_par_hfun );
    Py_XDECREF( _python_par_qfun );
    Py_XDECREF( _python_par_rfun );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_epsabs );
    Py_XDECREF( _python_par_epsrel );

    return NULL;
}

static PyObject *dparse_function_9_tplquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 10 )
    {
        return impl_function_9_tplquad_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_tplquad_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_nquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_ranges, PyObject *_python_par_args, PyObject *_python_par_opts )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_ranges; par_ranges.object = _python_par_ranges;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_opts; par_opts.object = _python_par_opts;
    PyObjectLocalVariable var_depth;
    PyObjectLocalVariable var_rng;
    PyObjectLocalVariable var_opt;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_listcontr_2__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_2__listcontr_result;
    PyObjectTempVariable tmp_listcontr_2__iter_value_0;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_to_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
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
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c5ef03ca7a1476901d701361a853d5ec, module_scipy$integrate$quadpack );
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
    tmp_len_arg_1 = par_ranges.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28999 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 632;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 632;
        goto frame_exception_exit_1;
    }
    assert( var_depth.object == NULL );
    var_depth.object = tmp_assign_source_1;

    // Tried code
    tmp_assign_source_2 = NULL;
    // Tried code
    tmp_iter_arg_1 = par_ranges.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28999 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_4;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 633;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_assign_source_6 = tmp_listcontr_1__iter_value_0.object;

    if (var_rng.object == NULL)
    {
        var_rng.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
    }
    else
    {
        PyObject *old = var_rng.object;
        var_rng.object = INCREASE_REFCOUNT( tmp_assign_source_6 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_callable );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_1 = var_rng.object;

    frame_function->f_lineno = 633;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_append_value_1 = var_rng.object;

    Py_INCREF( tmp_append_value_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__RangeFunc );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__RangeFunc );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240882 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_2 = var_rng.object;

    frame_function->f_lineno = 633;
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }
    condexpr_end_1:;
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 633;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_assign_source_2 = tmp_listcontr_1__listcontr_result.object;

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
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

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
    if (par_ranges.object == NULL)
    {
        par_ranges.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
    }
    else
    {
        PyObject *old = par_ranges.object;
        par_ranges.object = INCREASE_REFCOUNT( tmp_assign_source_2 );
        Py_DECREF( old );
    }
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
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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
    tmp_compare_left_1 = par_args.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 634;
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
    tmp_assign_source_7 = const_tuple_empty;
    if (par_args.object == NULL)
    {
        par_args.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
    }
    else
    {
        PyObject *old = par_args.object;
        par_args.object = INCREASE_REFCOUNT( tmp_assign_source_7 );
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_compare_left_2 = par_opts.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123114 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 636;
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
    tmp_binop_left_1 = DEEP_COPY( const_list_dict_empty_list );
    tmp_binop_right_1 = var_depth.object;

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41974 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 637;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 637;
        goto frame_exception_exit_1;
    }
    if (par_opts.object == NULL)
    {
        par_opts.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = par_opts.object;
        par_opts.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    branch_no_2:;
    tmp_isinstance_inst_1 = par_opts.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123114 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 639;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_dict );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 639;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 639;
        goto frame_exception_exit_1;
    }
    if (tmp_res == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_binop_left_2 = PyList_New( 1 );
    tmp_list_element_1 = par_opts.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123114 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 640;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_binop_left_2, 0, tmp_list_element_1 );
    tmp_binop_right_2 = var_depth.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41974 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 640;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 640;
        goto frame_exception_exit_1;
    }
    if (par_opts.object == NULL)
    {
        par_opts.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = par_opts.object;
        par_opts.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    goto branch_end_3;
    branch_no_3:;
    // Tried code
    tmp_assign_source_10 = NULL;
    // Tried code
    tmp_iter_arg_2 = par_opts.object;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123114 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }
    assert( tmp_listcontr_2__listcontr_iter.object == NULL );
    tmp_listcontr_2__listcontr_iter.object = tmp_assign_source_11;

    tmp_assign_source_12 = PyList_New( 0 );
    assert( tmp_listcontr_2__listcontr_result.object == NULL );
    tmp_listcontr_2__listcontr_result.object = tmp_assign_source_12;

    loop_start_2:;
    tmp_next_source_2 = tmp_listcontr_2__listcontr_iter.object;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_13 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 642;
            goto try_finally_handler_4;
        }
    }

    if (tmp_listcontr_2__iter_value_0.object == NULL)
    {
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_listcontr_2__iter_value_0.object;
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_assign_source_14 = tmp_listcontr_2__iter_value_0.object;

    if (var_opt.object == NULL)
    {
        var_opt.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_opt.object;
        var_opt.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_append_to_2 = tmp_listcontr_2__listcontr_result.object;

    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_callable );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_3 = var_opt.object;

    frame_function->f_lineno = 642;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_append_value_2 = var_opt.object;

    Py_INCREF( tmp_append_value_2 );
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__OptFunc );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OptFunc );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240921 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_4 = var_opt.object;

    frame_function->f_lineno = 642;
    tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }
    condexpr_end_2:;
    tmp_res = PyList_Append( tmp_append_to_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 642;
        goto try_finally_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_assign_source_10 = tmp_listcontr_2__listcontr_result.object;

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
    Py_XDECREF( tmp_listcontr_2__iter_value_0.object );
    tmp_listcontr_2__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_finally_handler_3;
    }

    goto finally_end_3;
    finally_end_3:;
    if (par_opts.object == NULL)
    {
        par_opts.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = par_opts.object;
        par_opts.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_2__listcontr_result.object );
    tmp_listcontr_2__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_2__listcontr_iter.object );
    tmp_listcontr_2__listcontr_iter.object = NULL;

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
    branch_end_3:;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__NQuad );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NQuad );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240958 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_func.object;

    if ( tmp_call_arg_element_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_ranges.object;

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28999 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_opts.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123114 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 644;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integrate );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args.object;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 644;
        goto frame_exception_exit_1;
    }

    tmp_return_value = impl_function_3_complex_call_helper_star_list_of_module___internal__( tmp_dircall_arg1_1, INCREASE_REFCOUNT( tmp_dircall_arg2_1 ) );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 644;
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
    if ((var_depth.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_depth,
            var_depth.object
        );

    }
    if ((var_rng.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rng,
            var_rng.object
        );

    }
    if ((var_opt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_opt,
            var_opt.object
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
    if ((par_ranges.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ranges,
            par_ranges.object
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
    if ((par_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_opts,
            par_opts.object
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
static PyObject *fparse_function_10_nquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_ranges = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_opts = NULL;
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
                PyErr_Format( PyExc_TypeError, "nquad() keywords must be strings" );
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
            if ( found == false && const_str_plain_ranges == key )
            {
                assert( _python_par_ranges == NULL );
                _python_par_ranges = value;

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
            if ( found == false && const_str_plain_opts == key )
            {
                assert( _python_par_opts == NULL );
                _python_par_opts = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ranges, key ) == 1 )
            {
                assert( _python_par_ranges == NULL );
                _python_par_ranges = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_opts, key ) == 1 )
            {
                assert( _python_par_opts == NULL );
                _python_par_opts = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "nquad() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_ranges != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ranges = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ranges == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_ranges = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_args != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_args = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_args == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_args = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_opts != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_opts = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_opts == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_opts = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_func == NULL || _python_par_ranges == NULL || _python_par_args == NULL || _python_par_opts == NULL ))
    {
        PyObject *values[] = { _python_par_func, _python_par_ranges, _python_par_args, _python_par_opts };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_10_nquad_of_module_scipy$integrate$quadpack( self, _python_par_func, _python_par_ranges, _python_par_args, _python_par_opts );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_ranges );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_opts );

    return NULL;
}

static PyObject *dparse_function_10_nquad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_10_nquad_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_nquad_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___call__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a3d7185e3d4dcac2048040cfeb41608f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a645012d72318f8829dee4c2a9ed870e, module_scipy$integrate$quadpack );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 648;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 651;
        goto frame_exception_exit_1;
    }
    assert( var___call__.object == NULL );
    var___call__.object = tmp_assign_source_3;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
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


static PyObject *impl_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_range_ )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_range_; par_range_.object = _python_par_range_;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_60f5d990e23a6aa94e3e672df32d5666, module_scipy$integrate$quadpack );
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
    tmp_assattr_name_1 = par_range_.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 240993 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 649;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 649;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_range_, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 649;
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
    if ((par_range_.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_range_,
            par_range_.object
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
static PyObject *fparse_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_range_ = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
            if ( found == false && const_str_plain_range_ == key )
            {
                assert( _python_par_range_ == NULL );
                _python_par_range_ = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_range_, key ) == 1 )
            {
                assert( _python_par_range_ == NULL );
                _python_par_range_ = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_range_ != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_range_ = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_range_ == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_range_ = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_range_ == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_range_ };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( self, _python_par_self, _python_par_range_ );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_range_ );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_010226969a291027bb75d61d4ecb5098, module_scipy$integrate$quadpack );
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

        frame_function->f_lineno = 657;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_range_ );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 657;
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
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
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
static PyObject *fparse_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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


    return impl_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( self, _python_par_self, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_12__OptFunc_of_module_scipy$integrate$quadpack(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___call__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a3d7185e3d4dcac2048040cfeb41608f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_20eddd35b6d29c9c49f57fc3deb720a7, module_scipy$integrate$quadpack );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 661;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 664;
        goto frame_exception_exit_1;
    }
    assert( var___call__.object == NULL );
    var___call__.object = tmp_assign_source_3;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
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


static PyObject *impl_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_opt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_opt; par_opt.object = _python_par_opt;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c6459356398f5b3444c7efcd2b82bef9, module_scipy$integrate$quadpack );
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
    tmp_assattr_name_1 = par_opt.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 662;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 662;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_opt, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 662;
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
    if ((par_opt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_opt,
            par_opt.object
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
static PyObject *fparse_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_opt = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
            if ( found == false && const_str_plain_opt == key )
            {
                assert( _python_par_opt == NULL );
                _python_par_opt = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_opt, key ) == 1 )
            {
                assert( _python_par_opt == NULL );
                _python_par_opt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_opt != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_opt = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_opt == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_opt = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_opt == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_opt };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( self, _python_par_self, _python_par_opt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_opt );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7c00c509ec1fe218773ccc752f406826, module_scipy$integrate$quadpack );
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

        frame_function->f_lineno = 666;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_opt );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 666;
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
    if ((par_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            par_args.object
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
static PyObject *fparse_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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


    return impl_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( self, _python_par_self, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_13__NQuad_of_module_scipy$integrate$quadpack(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var_integrate;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a3d7185e3d4dcac2048040cfeb41608f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ca6d5b379183ced7df2fe49b0515c7a9, module_scipy$integrate$quadpack );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 670;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 677;
        goto frame_exception_exit_1;
    }
    assert( var_integrate.object == NULL );
    var_integrate.object = tmp_assign_source_3;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_integrate.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_integrate,
            var_integrate.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_integrate.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_integrate,
            var_integrate.object
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


static PyObject *impl_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_func, PyObject *_python_par_ranges, PyObject *_python_par_opts )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_ranges; par_ranges.object = _python_par_ranges;
    PyObjectLocalVariable par_opts; par_opts.object = _python_par_opts;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dfdcc12ea6c3373ee67d808ee6806afb, module_scipy$integrate$quadpack );
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
    tmp_assattr_name_1 = const_int_0;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 671;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_abserr, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 671;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_func.object;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47143 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_func, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 672;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_ranges.object;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28999 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 673;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 673;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ranges, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 673;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_opts.object;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 123114 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_opts, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 674;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = par_ranges.object;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28999 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 675;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 675;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self.object;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 675;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_maxdepth, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        frame_function->f_lineno = 675;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );

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
    if ((par_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            par_func.object
        );

    }
    if ((par_ranges.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ranges,
            par_ranges.object
        );

    }
    if ((par_opts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_opts,
            par_opts.object
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
static PyObject *fparse_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_ranges = NULL;
    PyObject *_python_par_opts = NULL;
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
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
            if ( found == false && const_str_plain_func == key )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ranges == key )
            {
                assert( _python_par_ranges == NULL );
                _python_par_ranges = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_opts == key )
            {
                assert( _python_par_opts == NULL );
                _python_par_opts = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_func, key ) == 1 )
            {
                assert( _python_par_func == NULL );
                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ranges, key ) == 1 )
            {
                assert( _python_par_ranges == NULL );
                _python_par_ranges = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_opts, key ) == 1 )
            {
                assert( _python_par_opts == NULL );
                _python_par_opts = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_func != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_func == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_ranges != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_ranges = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_ranges == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_ranges = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_opts != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_opts = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_opts == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_opts = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_func == NULL || _python_par_ranges == NULL || _python_par_opts == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_func, _python_par_ranges, _python_par_opts };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack( self, _python_par_self, _python_par_func, _python_par_ranges, _python_par_opts );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_ranges );
    Py_XDECREF( _python_par_opts );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_kwargs; par_kwargs.object = _python_par_kwargs;
    PyObjectLocalVariable var_depth;
    PyObjectLocalVariable var_ind;
    PyObjectLocalVariable var_fn_range;
    PyObjectLocalVariable var_low;
    PyObjectLocalVariable var_high;
    PyObjectLocalVariable var_fn_opt;
    PyObjectLocalVariable var_opt;
    PyObjectLocalVariable var_x;
    PyObjectLocalVariable var_f;
    PyObjectLocalVariable var_value;
    PyObjectLocalVariable var_abserr;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
    PyObjectTempVariable tmp_comparison_1__value_2;
    PyObjectTempVariable tmp_and_1__value_1;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_seq_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_attempt_2;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
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
    int tmp_tried_lineno_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_450f1e82ad12e7232f1b57338c9bc1b3, module_scipy$integrate$quadpack );
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
    tmp_source_name_1 = par_kwargs.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 678;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pop );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 678;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_depth;
    tmp_call_arg_element_2 = const_int_0;
    frame_function->f_lineno = 678;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 678;
        goto frame_exception_exit_1;
    }
    assert( var_depth.object == NULL );
    var_depth.object = tmp_assign_source_1;

    tmp_cond_value_1 = par_kwargs.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 679;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 679;
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
    tmp_make_exception_arg_1 = const_str_digest_d357026acc772a1fcde1a74236d9c0a5;
    frame_function->f_lineno = 680;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 680;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 680;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_binop_left_1 = var_depth.object;

    tmp_binop_right_1 = const_int_pos_1;
    tmp_unary_arg_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 683;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = UNARY_OPERATION( PyNumber_Negative, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 683;
        goto frame_exception_exit_1;
    }
    assert( var_ind.object == NULL );
    var_ind.object = tmp_assign_source_2;

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 684;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ranges );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 684;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_1 = var_ind.object;

    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 684;
        goto frame_exception_exit_1;
    }
    assert( var_fn_range.object == NULL );
    var_fn_range.object = tmp_assign_source_3;

    // Tried code
    tmp_dircall_arg1_1 = var_fn_range.object;

    tmp_dircall_arg2_1 = par_args.object;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 685;
        goto try_finally_handler_1;
    }

    tmp_iter_arg_1 = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_1 ), INCREASE_REFCOUNT( tmp_dircall_arg2_1 ) );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 685;
        goto try_finally_handler_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 685;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_4;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_5 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 685;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_5;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_6 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 685;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_6;

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
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1.object;

    assert( var_low.object == NULL );
    var_low.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2.object;

    assert( var_high.object == NULL );
    var_high.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

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
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 686;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_opts );
    if ( tmp_subscr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 686;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_2 = var_ind.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {
        Py_DECREF( tmp_subscr_target_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 63493 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 686;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    Py_DECREF( tmp_subscr_target_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 686;
        goto frame_exception_exit_1;
    }
    assert( var_fn_opt.object == NULL );
    var_fn_opt.object = tmp_assign_source_9;

    tmp_dircall_arg1_2 = var_fn_opt.object;

    tmp_dircall_arg2_2 = par_args.object;

    if ( tmp_dircall_arg2_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 687;
        goto frame_exception_exit_1;
    }

    tmp_dict_seq_1 = impl_function_3_complex_call_helper_star_list_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_2 ), INCREASE_REFCOUNT( tmp_dircall_arg2_2 ) );
    if ( tmp_dict_seq_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 687;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = TO_DICT( tmp_dict_seq_1, NULL );
    Py_DECREF( tmp_dict_seq_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 687;
        goto frame_exception_exit_1;
    }
    assert( var_opt.object == NULL );
    var_opt.object = tmp_assign_source_10;

    tmp_compare_left_1 = const_str_plain_points;
    tmp_compare_right_1 = var_opt.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 689;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code
    tmp_ass_subvalue_1 = NULL;
    // Tried code
    tmp_subscr_target_3 = var_opt.object;

    tmp_subscr_subscript_3 = const_str_plain_points;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto try_finally_handler_3;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto try_finally_handler_3;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_11;

    tmp_assign_source_12 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_12;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_13 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 690;
            goto try_finally_handler_3;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_assign_source_14 = tmp_listcontr_1__iter_value_0.object;

    if (var_x.object == NULL)
    {
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
    }
    else
    {
        PyObject *old = var_x.object;
        var_x.object = INCREASE_REFCOUNT( tmp_assign_source_14 );
        Py_DECREF( old );
    }
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_low.object;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_1 = NULL;
    // Tried code
    tmp_assign_source_16 = var_x.object;

    if (tmp_comparison_1__value_2.object == NULL)
    {
        tmp_comparison_1__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = tmp_comparison_1__value_2.object;
        tmp_comparison_1__value_2.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
    tmp_compexpr_right_1 = tmp_comparison_1__value_2.object;

    // Re-reraise as necessary after finally was executed.
    goto finally_end_2;
    finally_end_2:;
    tmp_assign_source_15 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto try_finally_handler_6;
    }
    if (tmp_and_1__value_1.object == NULL)
    {
        tmp_and_1__value_1.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = tmp_and_1__value_1.object;
        tmp_and_1__value_1.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto try_finally_handler_6;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_2 = tmp_comparison_1__value_2.object;

    tmp_compexpr_right_2 = var_high.object;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto try_finally_handler_8;
    }

    tmp_cond_value_2 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
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

        goto try_finally_handler_6;
    }

    goto finally_end_3;
    finally_end_3:;
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_2 );
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
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
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_comparison_1__value_2.object );
    tmp_comparison_1__value_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_4 != NULL )
    {
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;

        goto try_finally_handler_4;
    }

    goto finally_end_5;
    finally_end_5:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_3;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_3;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 690;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = var_x.object;

    if ( tmp_append_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1605 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto try_finally_handler_3;
    }

    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto try_finally_handler_3;
    }
    tmp_unused = Py_None;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto try_finally_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_ass_subvalue_1 = tmp_listcontr_1__listcontr_result.object;

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_4 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_2;
    }

    goto finally_end_7;
    finally_end_7:;
    tmp_ass_subscribed_1 = var_opt.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 690;
        goto try_finally_handler_2;
    }

    tmp_ass_subscript_1 = const_str_plain_points;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 690;
        goto try_finally_handler_2;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_5 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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

    goto finally_end_8;
    finally_end_8:;
    branch_no_2:;
    tmp_binop_left_2 = var_depth.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41974 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 691;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = const_int_pos_1;
    tmp_compare_left_2 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 691;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 691;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_maxdepth );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 691;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 691;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 692;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_func );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 692;
        goto frame_exception_exit_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_17;

    goto branch_end_4;
    branch_no_4:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_partial );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_partial );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241045 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 694;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 694;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_integrate );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 694;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_binop_left_3 = var_depth.object;

    if ( tmp_binop_left_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41974 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 694;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = const_int_pos_1;
    tmp_dict_value_1 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 694;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_depth;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 694;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 694;
        goto frame_exception_exit_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_18;

    branch_end_4:;
    // Tried code
    tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_quad );

    if (unlikely( tmp_dircall_arg1_3 == NULL ))
    {
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_quad );
    }

    if ( tmp_dircall_arg1_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239499 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }

    tmp_dircall_arg2_3 = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_f.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_low.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_high.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 2, tmp_tuple_element_2 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_args.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }

    tmp_dict_key_2 = const_str_plain_args;
    PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dircall_arg4_1 = var_opt.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_3 );
        Py_DECREF( tmp_dircall_arg3_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127868 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }

    tmp_iter_arg_3 = impl_function_5_complex_call_helper_pos_keywords_star_dict_of_module___internal__( INCREASE_REFCOUNT( tmp_dircall_arg1_3 ), tmp_dircall_arg2_3, tmp_dircall_arg3_1, INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_2__source_iter.object == NULL );
    tmp_tuple_unpack_2__source_iter.object = tmp_assign_source_19;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_20 = UNPACK_PARAMETER_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_20 == NULL )
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


        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_2__element_1.object == NULL );
    tmp_tuple_unpack_2__element_1.object = tmp_assign_source_20;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter.object;

    tmp_assign_source_21 = UNPACK_PARAMETER_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_21 == NULL )
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


        frame_function->f_lineno = 696;
        goto try_finally_handler_9;
    }
    assert( tmp_tuple_unpack_2__element_2.object == NULL );
    tmp_tuple_unpack_2__element_2.object = tmp_assign_source_21;

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

            goto try_finally_handler_9;
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

        goto try_finally_handler_9;
    }
    tmp_assign_source_22 = tmp_tuple_unpack_2__element_1.object;

    assert( var_value.object == NULL );
    var_value.object = INCREASE_REFCOUNT( tmp_assign_source_22 );

    tmp_assign_source_23 = tmp_tuple_unpack_2__element_2.object;

    assert( var_abserr.object == NULL );
    var_abserr.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

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

    tmp_tried_lineno_6 = frame_function->f_lineno;
    Py_XDECREF( tmp_tuple_unpack_2__source_iter.object );
    tmp_tuple_unpack_2__source_iter.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1.object );
    tmp_tuple_unpack_2__element_1.object = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2.object );
    tmp_tuple_unpack_2__element_2.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_6;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto frame_exception_exit_1;
    }

    goto finally_end_9;
    finally_end_9:;
    tmp_called_3 = LOOKUP_BUILTIN( const_str_plain_max );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 697;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 697;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_abserr );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 697;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_abserr.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 241081 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 697;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 697;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 697;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 697;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_abserr, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 697;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_compare_left_3 = var_depth.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41974 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 698;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 698;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_return_value = var_value.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5634 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 699;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_value.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5634 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 702;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 702;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_abserr );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 702;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    branch_end_5:;

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
    if ((var_depth.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_depth,
            var_depth.object
        );

    }
    if ((var_ind.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ind,
            var_ind.object
        );

    }
    if ((var_fn_range.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fn_range,
            var_fn_range.object
        );

    }
    if ((var_low.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_low,
            var_low.object
        );

    }
    if ((var_high.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_high,
            var_high.object
        );

    }
    if ((var_fn_opt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fn_opt,
            var_fn_opt.object
        );

    }
    if ((var_opt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_opt,
            var_opt.object
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
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f,
            var_f.object
        );

    }
    if ((var_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_value,
            var_value.object
        );

    }
    if ((var_abserr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_abserr,
            var_abserr.object
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


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                        PyErr_Format( PyExc_TypeError, "integrate() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "integrate() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "integrate() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, const_str_plain_self );

            kw_found += 1;
        }
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


    return impl_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_nquad_of_module_scipy$integrate$quadpack( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_nquad_of_module_scipy$integrate$quadpack,
        dparse_function_10_nquad_of_module_scipy$integrate$quadpack,
        const_str_plain_nquad,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_abadc761a5bbe0b4fd2218c25e97ebf6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        const_str_digest_e5eff1d177939ba287dfe50eb8e479ca
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack,
        dparse_function_1___init___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_60f5d990e23a6aa94e3e672df32d5666,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack,
        dparse_function_1___init___of_class_12__OptFunc_of_module_scipy$integrate$quadpack,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c6459356398f5b3444c7efcd2b82bef9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack,
        dparse_function_1___init___of_class_13__NQuad_of_module_scipy$integrate$quadpack,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dfdcc12ea6c3373ee67d808ee6806afb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack,
        dparse_function_1_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack,
        const_str_plain_thefunc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_872c6f2157b4a70ea01f338fb8d15a0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack,
        dparse_function_2___call___of_class_11__RangeFunc_of_module_scipy$integrate$quadpack,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9ecb61c352db669783af7d510d1d6649,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        const_str_digest_a757028e5d9044054982de536991b384
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack,
        dparse_function_2___call___of_class_12__OptFunc_of_module_scipy$integrate$quadpack,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_31966ea47e5a1eb1e9e318a5db095216,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        const_str_digest_ad57d3b27d0e8faaa1fe912e8c9f021f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack,
        dparse_function_2_integrate_of_class_13__NQuad_of_module_scipy$integrate$quadpack,
        const_str_plain_integrate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_58fff518d66eef945229b6e465fa7f31,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_quad_explain_of_module_scipy$integrate$quadpack( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_quad_explain_of_module_scipy$integrate$quadpack,
        dparse_function_2_quad_explain_of_module_scipy$integrate$quadpack,
        const_str_plain_quad_explain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e7c53da7434ba18b45821c4ff79bd477,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        const_str_digest_e645f452d1fe53e296a864781affafe1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack,
        dparse_function_2_thefunc_of_function_5__quad_weight_of_module_scipy$integrate$quadpack,
        const_str_plain_thefunc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f734991932146870818a4a1767cd140,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_quad_of_module_scipy$integrate$quadpack( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_quad_of_module_scipy$integrate$quadpack,
        dparse_function_3_quad_of_module_scipy$integrate$quadpack,
        const_str_plain_quad,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aee07e484617166f678c4589717c46a4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        const_str_digest_b547445c9df3da942671a6dc7ff3649e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__quad_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__quad_of_module_scipy$integrate$quadpack,
        dparse_function_4__quad_of_module_scipy$integrate$quadpack,
        const_str_plain__quad,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_75dfe3ae2b09ca864db3041b257a5cc5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__quad_weight_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__quad_weight_of_module_scipy$integrate$quadpack,
        dparse_function_5__quad_weight_of_module_scipy$integrate$quadpack,
        const_str_plain__quad_weight,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4c38e8808ff34b7ef4e7f2f291cf52f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__infunc_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__infunc_of_module_scipy$integrate$quadpack,
        dparse_function_6__infunc_of_module_scipy$integrate$quadpack,
        const_str_plain__infunc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2b66d4ea52405cb51fc7c621633d379f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_dblquad_of_module_scipy$integrate$quadpack( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_dblquad_of_module_scipy$integrate$quadpack,
        dparse_function_7_dblquad_of_module_scipy$integrate$quadpack,
        const_str_plain_dblquad,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7eac326419f8f6dd79809f00ef120ffd,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        const_str_digest_4a5969bacdeb54378f7f10f4eea5a343
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8__infunc2_of_module_scipy$integrate$quadpack(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8__infunc2_of_module_scipy$integrate$quadpack,
        dparse_function_8__infunc2_of_module_scipy$integrate$quadpack,
        const_str_plain__infunc2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e5eac9ed987951f10ce91ca2c82b0b9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_tplquad_of_module_scipy$integrate$quadpack( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_tplquad_of_module_scipy$integrate$quadpack,
        dparse_function_9_tplquad_of_module_scipy$integrate$quadpack,
        const_str_plain_tplquad,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_05d2ff85adfa351d2fde31eb81aa9ece,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$integrate$quadpack,
        const_str_digest_6b116b68d4f950754e1372bfe23b7013
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$integrate$quadpack =
{
    PyModuleDef_HEAD_INIT,
    "scipy.integrate.quadpack",   /* m_name */
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

MOD_INIT_DECL( scipy$integrate$quadpack )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$integrate$quadpack );
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

    // puts( "in initscipy$integrate$quadpack" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$integrate$quadpack = Py_InitModule4(
        "scipy.integrate.quadpack",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$integrate$quadpack = PyModule_Create( &mdef_scipy$integrate$quadpack );
#endif

    moduledict_scipy$integrate$quadpack = (PyDictObject *)((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;

    assertObject( module_scipy$integrate$quadpack );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a3d7185e3d4dcac2048040cfeb41608f, module_scipy$integrate$quadpack );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$integrate$quadpack );

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
    PyObjectTempVariable tmp_class_creation_3__bases;
    PyObjectTempVariable tmp_class_creation_3__class_dict;
    PyObjectTempVariable tmp_class_creation_3__metaclass;
    PyObjectTempVariable tmp_class_creation_3__class;
    PyObjectTempVariable tmp_class_creation_4__bases;
    PyObjectTempVariable tmp_class_creation_4__class_dict;
    PyObjectTempVariable tmp_class_creation_4__metaclass;
    PyObjectTempVariable tmp_class_creation_4__class;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
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
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    PyObject *tmp_class_bases_4;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_dict_4;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
    PyObject *tmp_dget_key_4;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f70ddb86266d2db6eaa05b77d5f16768;
    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_81891a373c22e13c8b6311baab2cd400, module_scipy$integrate$quadpack );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 6;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_functools, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_partial_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_partial );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_partial, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_empty, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain__quadpack_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__quadpack );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 10;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_8, tmp_import_globals_8, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$integrate$quadpack)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_Inf_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Inf );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_Inf, tmp_assign_source_11 );
    tmp_assign_source_12 = LIST_COPY( const_list_76d88ba854906a655f3f1b9748aba672_list );
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quadpack );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__quadpack );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 239468 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_error );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_13 );
    // Tried code
    tmp_assign_source_14 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 97418 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 20;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_14;

    tmp_assign_source_15 = impl_class_1_IntegrationWarning_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_15;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_16 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_16;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_IntegrationWarning;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 20;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_17;

    tmp_assign_source_18 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_IntegrationWarning, tmp_assign_source_18 );
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
    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stdout );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_defaults_1 );

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_2 );
    tmp_assign_source_19 = MAKE_FUNCTION_function_2_quad_explain_of_module_scipy$integrate$quadpack( tmp_defaults_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_quad_explain, tmp_assign_source_19 );
    tmp_defaults_2 = const_tuple_52ec3e167874ae2da56e5389f4997ce6_tuple;
    tmp_assign_source_20 = MAKE_FUNCTION_function_3_quad_of_module_scipy$integrate$quadpack( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_quad, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_function_4__quad_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_21 );

        frame_module->f_lineno = 327;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quad, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_function_5__quad_weight_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        frame_module->f_lineno = 358;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__quad_weight, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_function_6__infunc_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_module->f_lineno = 405;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__infunc, tmp_assign_source_23 );
    tmp_defaults_3 = const_tuple_tuple_empty_float_1_49e_minus_08_float_1_49e_minus_08_tuple;
    tmp_assign_source_24 = MAKE_FUNCTION_function_7_dblquad_of_module_scipy$integrate$quadpack( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 412;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_dblquad, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_function_8__infunc2_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 464;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__infunc2, tmp_assign_source_25 );
    tmp_defaults_4 = const_tuple_tuple_empty_float_1_49e_minus_08_float_1_49e_minus_08_tuple;
    tmp_assign_source_26 = MAKE_FUNCTION_function_9_tplquad_of_module_scipy$integrate$quadpack( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_module->f_lineno = 471;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_tplquad, tmp_assign_source_26 );
    tmp_defaults_5 = const_tuple_none_none_tuple;
    tmp_assign_source_27 = MAKE_FUNCTION_function_10_nquad_of_module_scipy$integrate$quadpack( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        frame_module->f_lineno = 529;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain_nquad, tmp_assign_source_27 );
    // Tried code
    tmp_assign_source_28 = PyTuple_New( 1 );
    tmp_tuple_element_3 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_28 );

        frame_module->f_lineno = 647;
        goto try_finally_handler_2;
    }
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_28;

    tmp_assign_source_29 = impl_class_11__RangeFunc_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 647;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_29;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 647;
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
    tmp_assign_source_30 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 647;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_30 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_30;

    tmp_called_2 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain__RangeFunc;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 647;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 647;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_31;

    tmp_assign_source_32 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__RangeFunc, tmp_assign_source_32 );
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
    // Tried code
    tmp_assign_source_33 = PyTuple_New( 1 );
    tmp_tuple_element_4 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_33 );

        frame_module->f_lineno = 660;
        goto try_finally_handler_3;
    }
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_3__bases.object == NULL );
    tmp_class_creation_3__bases.object = tmp_assign_source_33;

    tmp_assign_source_34 = impl_class_12__OptFunc_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 660;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class_dict.object == NULL );
    tmp_class_creation_3__class_dict.object = tmp_assign_source_34;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 660;
        goto try_finally_handler_3;
    }
    if (tmp_cmp_In_3 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dget_dict_3 = tmp_class_creation_3__class_dict.object;

    tmp_dget_key_3 = const_str_plain___metaclass__;
    tmp_assign_source_35 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 660;
        goto try_finally_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_class_bases_3 = tmp_class_creation_3__bases.object;

    tmp_assign_source_35 = SELECT_METACLASS( tmp_class_bases_3, GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass.object == NULL );
    tmp_class_creation_3__metaclass.object = tmp_assign_source_35;

    tmp_called_3 = tmp_class_creation_3__metaclass.object;

    tmp_call_arg_element_7 = const_str_plain__OptFunc;
    tmp_call_arg_element_8 = tmp_class_creation_3__bases.object;

    tmp_call_arg_element_9 = tmp_class_creation_3__class_dict.object;

    frame_module->f_lineno = 660;
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 660;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class.object == NULL );
    tmp_class_creation_3__class.object = tmp_assign_source_36;

    tmp_assign_source_37 = tmp_class_creation_3__class.object;

    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__OptFunc, tmp_assign_source_37 );
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

    tmp_tried_lineno_3 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_3__class.object );
    tmp_class_creation_3__class.object = NULL;

    Py_XDECREF( tmp_class_creation_3__bases.object );
    tmp_class_creation_3__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict.object );
    tmp_class_creation_3__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass.object );
    tmp_class_creation_3__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_3;
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
    // Tried code
    tmp_assign_source_38 = PyTuple_New( 1 );
    tmp_tuple_element_5 = LOOKUP_BUILTIN( const_str_plain_object );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_38 );

        frame_module->f_lineno = 669;
        goto try_finally_handler_4;
    }
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_38, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_4__bases.object == NULL );
    tmp_class_creation_4__bases.object = tmp_assign_source_38;

    tmp_assign_source_39 = impl_class_13__NQuad_of_module_scipy$integrate$quadpack(  );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 669;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_4__class_dict.object == NULL );
    tmp_class_creation_4__class_dict.object = tmp_assign_source_39;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict.object;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 669;
        goto try_finally_handler_4;
    }
    if (tmp_cmp_In_4 == 1)
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dget_dict_4 = tmp_class_creation_4__class_dict.object;

    tmp_dget_key_4 = const_str_plain___metaclass__;
    tmp_assign_source_40 = DICT_GET_ITEM( tmp_dget_dict_4, tmp_dget_key_4 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 669;
        goto try_finally_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_class_bases_4 = tmp_class_creation_4__bases.object;

    tmp_assign_source_40 = SELECT_METACLASS( tmp_class_bases_4, GET_STRING_DICT_VALUE( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass.object == NULL );
    tmp_class_creation_4__metaclass.object = tmp_assign_source_40;

    tmp_called_4 = tmp_class_creation_4__metaclass.object;

    tmp_call_arg_element_10 = const_str_plain__NQuad;
    tmp_call_arg_element_11 = tmp_class_creation_4__bases.object;

    tmp_call_arg_element_12 = tmp_class_creation_4__class_dict.object;

    frame_module->f_lineno = 669;
    tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 669;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_4__class.object == NULL );
    tmp_class_creation_4__class.object = tmp_assign_source_41;

    tmp_assign_source_42 = tmp_class_creation_4__class.object;

    UPDATE_STRING_DICT0( moduledict_scipy$integrate$quadpack, (Nuitka_StringObject *)const_str_plain__NQuad, tmp_assign_source_42 );
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

    tmp_tried_lineno_4 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_4__class.object );
    tmp_class_creation_4__class.object = NULL;

    Py_XDECREF( tmp_class_creation_4__bases.object );
    tmp_class_creation_4__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict.object );
    tmp_class_creation_4__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass.object );
    tmp_class_creation_4__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_4;
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

    return MOD_RETURN_VALUE( module_scipy$integrate$quadpack );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
