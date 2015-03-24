// Generated code for Python source for module 'scipy.misc.pilutil'
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

// The _module_scipy$misc$pilutil is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_scipy$misc$pilutil;
PyDictObject *moduledict_scipy$misc$pilutil;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_float_1_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_dict_empty;
extern PyObject *const_float_100_0;
extern PyObject *const_int_pos_255;
extern PyObject *const_int_pos_256;
extern PyObject *const_str_plain_1;
extern PyObject *const_str_plain_F;
extern PyObject *const_str_plain_I;
extern PyObject *const_str_plain_L;
extern PyObject *const_str_plain_P;
extern PyObject *const_tuple_empty;
static PyObject *const_float_0_4999;
static PyObject *const_str_plain_ca;
extern PyObject *const_str_plain_im;
extern PyObject *const_str_plain_os;
static PyObject *const_str_plain_ts;
extern PyObject *const_str_plain_PIL;
extern PyObject *const_str_plain_RGB;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_cmd;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_low;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain_pal;
static PyObject *const_str_plain_see;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_BLUR;
extern PyObject *const_str_plain_CMYK;
extern PyObject *const_str_plain_RGBA;
extern PyObject *const_str_plain_amax;
extern PyObject *const_str_plain_amin;
static PyObject *const_str_plain_blur;
extern PyObject *const_str_plain_cast;
static PyObject *const_str_plain_cmax;
static PyObject *const_str_plain_cmin;
extern PyObject *const_str_plain_data;
static PyObject *const_str_plain_fnum;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_high;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_save;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_Image;
extern PyObject *const_str_plain_YCbCr;
extern PyObject *const_str_plain_angle;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_cubic;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_fname;
static PyObject *const_str_plain_ftype;
extern PyObject *const_str_plain_image;
static PyObject *const_str_plain_imnew;
extern PyObject *const_str_plain_mgrid;
static PyObject *const_str_plain_numch;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_scale;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_uint8;
extern PyObject *const_str_plain_valid;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_DETAIL;
extern PyObject *const_str_plain_EMBOSS;
extern PyObject *const_str_plain_SMOOTH;
static PyObject *const_str_plain__tdict;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_plain_cscale;
static PyObject *const_str_plain_data32;
extern PyObject *const_str_plain_detail;
static PyObject *const_str_plain_emboss;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_imread;
static PyObject *const_str_plain_imsave;
static PyObject *const_str_plain_imshow;
extern PyObject *const_str_plain_interp;
extern PyObject *const_str_plain_resize;
extern PyObject *const_str_plain_rotate;
extern PyObject *const_str_plain_smooth;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_system;
extern PyObject *const_str_plain_uint32;
extern PyObject *const_str_plain_unlink;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_CONTOUR;
extern PyObject *const_str_plain_SHARPEN;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain__errstr;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain_bicubic;
static PyObject *const_str_plain_contour;
extern PyObject *const_str_plain_convert;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_flatten;
extern PyObject *const_str_plain_float32;
extern PyObject *const_str_plain_mkstemp;
static PyObject *const_str_plain_nearest;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_str_plain_percent;
extern PyObject *const_str_plain_pilutil;
static PyObject *const_str_plain_sharpen;
static PyObject *const_str_plain_strdata;
static PyObject *const_str_plain_toimage;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_bilinear;
static PyObject *const_str_plain_bytedata;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_imfilter;
static PyObject *const_str_plain_imresize;
static PyObject *const_str_plain_imrotate;
extern PyObject *const_str_plain_resample;
extern PyObject *const_str_plain_tempfile;
extern PyObject *const_str_plain_tostring;
static PyObject *const_str_plain_bytescale;
extern PyObject *const_str_plain_frombytes;
static PyObject *const_str_plain_fromimage;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain_FIND_EDGES;
extern PyObject *const_str_plain___future__;
static PyObject *const_str_plain_find_edges;
extern PyObject *const_str_plain_fromstring;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_putpalette;
extern PyObject *const_str_plain_ImageFilter;
extern PyObject *const_str_plain_SMOOTH_MORE;
extern PyObject *const_str_plain_flatnonzero;
extern PyObject *const_str_plain_isImageType;
static PyObject *const_str_plain_smooth_more;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_EDGE_ENHANCE;
static PyObject *const_str_plain_channel_axis;
static PyObject *const_str_plain_edge_enhance;
extern PyObject *const_str_plain_iscomplexobj;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_tuple_str_plain_arr_tuple;
extern PyObject *const_str_plain_EDGE_ENHANCE_MORE;
static PyObject *const_str_plain_edge_enhance_more;
static PyObject *const_list_int_pos_3_int_pos_4_list;
static PyObject *const_tuple_str_plain_bilinear_tuple;
static PyObject *const_str_plain_SCIPY_PIL_IMAGE_VIEWER;
static PyObject *const_tuple_tuple_int_pos_3_tuple_tuple;
static PyObject *const_tuple_str_plain_bilinear_none_tuple;
static PyObject *const_dict_fc671080428b826fbb19bb25f355e9d6;
static PyObject *const_tuple_int_0_int_pos_2_int_pos_1_tuple;
static PyObject *const_tuple_int_pos_1_int_pos_2_int_0_tuple;
static PyObject *const_list_none_str_plain_L_str_plain_P_list;
static PyObject *const_list_str_plain_RGBA_str_plain_CMYK_list;
static PyObject *const_list_str_plain_RGB_str_plain_YCbCr_list;
static PyObject *const_tuple_int_0_int_pos_256_int_pos_1_tuple;
static PyObject *const_tuple_none_none_int_pos_255_int_0_tuple;
static PyObject *const_tuple_str_plain_arr_str_plain_ftype_tuple;
static PyObject *const_list_dd0600d05ef5bf377355b5e6cabc85b0_list;
static PyObject *const_tuple_str_plain_im_str_plain_flatten_tuple;
static PyObject *const_str_digest_0e8614dfae9de5af41a6a469deead9c1;
static PyObject *const_str_digest_0f4eb063eb9ab93e8a702c855dea8953;
static PyObject *const_str_digest_28fd2bc0f08e526bfcb03139e2f716ad;
extern PyObject *const_str_digest_29bf226e186bf57b52fac1b0ba1f88ff;
static PyObject *const_str_digest_2a65effb0ae214c09697c1a5936dae6b;
static PyObject *const_str_digest_3397d911139cd99e95d19aeb04ea5ffb;
static PyObject *const_str_digest_53a44605076569ccacbe1fb134711e03;
static PyObject *const_str_digest_5dc51f8035d7283a65a28a04cc0624d9;
static PyObject *const_str_digest_5fd3022d95c2e2e78f9217abffc208e7;
extern PyObject *const_str_digest_6446d860dbbfe540e9e2cbab5f98f1e3;
static PyObject *const_str_digest_7aaf686eb59e8787bbdbeab923049330;
static PyObject *const_str_digest_8223dc332596d5812873fff866ffb363;
static PyObject *const_str_digest_8b1e1404de3da90ea97698b97917818d;
static PyObject *const_str_digest_8c3640db80c4b04140fc7867c3ba1b65;
static PyObject *const_str_digest_9235faf35f77106604f99696a39913ad;
static PyObject *const_str_digest_a875790cb1b7785d8c5ab2c2e73af7e7;
static PyObject *const_str_digest_aa12e771807a1c67862fbedb677ae9bb;
static PyObject *const_str_digest_aa5ece3e9918c31f687c3d248870d702;
static PyObject *const_str_digest_ae1ee90cbb3a01c42b37b58c4f0cc478;
static PyObject *const_str_digest_b21d415180364e96c89b05d942f8442b;
static PyObject *const_str_digest_bf08c897356327199606626a91635ab8;
static PyObject *const_str_digest_c7fb7b0ada415c581e662929efbf0335;
static PyObject *const_str_digest_cd6ec3f2ce7e4dca0c347bf885b1f7fc;
static PyObject *const_str_digest_e3d92ac00bfbac5e88b586733e1861f2;
static PyObject *const_str_digest_f73e6f609f164d93ddf3e3b7867ec153;
static PyObject *const_str_digest_f741acad7cb3089fb2c8e94562676c8e;
static PyObject *const_tuple_196a65e927d8db4927bdd53b1b3a37c5_tuple;
static PyObject *const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple;
static PyObject *const_tuple_29b5938b517eabb54d8fa30c001fffb9_tuple;
static PyObject *const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple;
static PyObject *const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple;
static PyObject *const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple;
static PyObject *const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple;
extern PyObject *const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple;
static PyObject *const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_flatten_tuple;
static PyObject *const_tuple_str_plain_Image_str_plain_ImageFilter_tuple;
static PyObject *const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_arr_str_plain_format_tuple;
static PyObject *const_tuple_str_plain_name_str_plain_flatten_str_plain_im_tuple;
static PyObject *const_tuple_str_plain_arr_str_plain_angle_str_plain_interp_tuple;
static PyObject *const_list_str_plain_RGB_str_plain_RGBA_str_plain_YCbCr_str_plain_CMYK_list;
static PyObject *const_tuple_str_plain_name_str_plain_arr_str_plain_format_str_plain_im_tuple;
static PyObject *const_tuple_str_plain_arr_str_plain_ftype_str_plain__tdict_str_plain_im_tuple;
static PyObject *const_tuple_str_plain_arr_str_plain_size_str_plain_interp_str_plain_mode_tuple;

static void _initModuleConstants(void)
{
    const_float_0_4999 = UNSTREAM_FLOAT( &constant_bin[ 2292735 ] );
    const_str_plain_ca = UNSTREAM_STRING( &constant_bin[ 2 ], 2, 1 );
    const_str_plain_ts = UNSTREAM_STRING( &constant_bin[ 900 ], 2, 1 );
    const_str_plain_pal = UNSTREAM_STRING( &constant_bin[ 1279 ], 3, 1 );
    const_str_plain_see = UNSTREAM_STRING( &constant_bin[ 12432 ], 3, 1 );
    const_str_plain_blur = UNSTREAM_STRING( &constant_bin[ 377639 ], 4, 1 );
    const_str_plain_cmax = UNSTREAM_STRING( &constant_bin[ 258606 ], 4, 1 );
    const_str_plain_cmin = UNSTREAM_STRING( &constant_bin[ 258556 ], 4, 1 );
    const_str_plain_fnum = UNSTREAM_STRING( &constant_bin[ 259220 ], 4, 1 );
    const_str_plain_cubic = UNSTREAM_STRING( &constant_bin[ 339085 ], 5, 1 );
    const_str_plain_ftype = UNSTREAM_STRING( &constant_bin[ 157009 ], 5, 1 );
    const_str_plain_imnew = UNSTREAM_STRING( &constant_bin[ 2292743 ], 5, 1 );
    const_str_plain_numch = UNSTREAM_STRING( &constant_bin[ 198892 ], 5, 1 );
    const_str_plain__tdict = UNSTREAM_STRING( &constant_bin[ 2292748 ], 6, 1 );
    const_str_plain_cscale = UNSTREAM_STRING( &constant_bin[ 258656 ], 6, 1 );
    const_str_plain_data32 = UNSTREAM_STRING( &constant_bin[ 2292754 ], 6, 1 );
    const_str_plain_emboss = UNSTREAM_STRING( &constant_bin[ 2292760 ], 6, 1 );
    const_str_plain_imread = UNSTREAM_STRING( &constant_bin[ 2282907 ], 6, 1 );
    const_str_plain_imsave = UNSTREAM_STRING( &constant_bin[ 2283032 ], 6, 1 );
    const_str_plain_imshow = UNSTREAM_STRING( &constant_bin[ 1098212 ], 6, 1 );
    const_str_plain__errstr = UNSTREAM_STRING( &constant_bin[ 258970 ], 7, 1 );
    const_str_plain_bicubic = UNSTREAM_STRING( &constant_bin[ 339083 ], 7, 1 );
    const_str_plain_contour = UNSTREAM_STRING( &constant_bin[ 1293843 ], 7, 1 );
    const_str_plain_nearest = UNSTREAM_STRING( &constant_bin[ 344268 ], 7, 1 );
    const_str_plain_sharpen = UNSTREAM_STRING( &constant_bin[ 2292766 ], 7, 1 );
    const_str_plain_strdata = UNSTREAM_STRING( &constant_bin[ 259115 ], 7, 1 );
    const_str_plain_toimage = UNSTREAM_STRING( &constant_bin[ 258796 ], 7, 1 );
    const_str_plain_bilinear = UNSTREAM_STRING( &constant_bin[ 339070 ], 8, 1 );
    const_str_plain_bytedata = UNSTREAM_STRING( &constant_bin[ 2292773 ], 8, 1 );
    const_str_plain_imfilter = UNSTREAM_STRING( &constant_bin[ 2282864 ], 8, 1 );
    const_str_plain_imresize = UNSTREAM_STRING( &constant_bin[ 2282954 ], 8, 1 );
    const_str_plain_imrotate = UNSTREAM_STRING( &constant_bin[ 2282984 ], 8, 1 );
    const_str_plain_bytescale = UNSTREAM_STRING( &constant_bin[ 258883 ], 9, 1 );
    const_str_plain_fromimage = UNSTREAM_STRING( &constant_bin[ 258705 ], 9, 1 );
    const_str_plain_find_edges = UNSTREAM_STRING( &constant_bin[ 2292781 ], 10, 1 );
    const_str_plain_smooth_more = UNSTREAM_STRING( &constant_bin[ 2292791 ], 11, 1 );
    const_str_plain_channel_axis = UNSTREAM_STRING( &constant_bin[ 259009 ], 12, 1 );
    const_str_plain_edge_enhance = UNSTREAM_STRING( &constant_bin[ 2292802 ], 12, 1 );
    const_str_plain_edge_enhance_more = UNSTREAM_STRING( &constant_bin[ 2292814 ], 17, 1 );
    const_list_int_pos_3_int_pos_4_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_int_pos_3_int_pos_4_list, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyList_SET_ITEM( const_list_int_pos_3_int_pos_4_list, 1, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_tuple_str_plain_bilinear_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bilinear_tuple, 0, const_str_plain_bilinear ); Py_INCREF( const_str_plain_bilinear );
    const_str_plain_SCIPY_PIL_IMAGE_VIEWER = UNSTREAM_STRING( &constant_bin[ 2292831 ], 22, 1 );
    const_tuple_tuple_int_pos_3_tuple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_int_pos_3_tuple_tuple, 0, const_tuple_int_pos_3_tuple ); Py_INCREF( const_tuple_int_pos_3_tuple );
    const_tuple_str_plain_bilinear_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bilinear_none_tuple, 0, const_str_plain_bilinear ); Py_INCREF( const_str_plain_bilinear );
    PyTuple_SET_ITEM( const_tuple_str_plain_bilinear_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_dict_fc671080428b826fbb19bb25f355e9d6 = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_fc671080428b826fbb19bb25f355e9d6, const_str_plain_bicubic, const_int_pos_3 );
    PyDict_SetItem( const_dict_fc671080428b826fbb19bb25f355e9d6, const_str_plain_bilinear, const_int_pos_2 );
    PyDict_SetItem( const_dict_fc671080428b826fbb19bb25f355e9d6, const_str_plain_nearest, const_int_0 );
    PyDict_SetItem( const_dict_fc671080428b826fbb19bb25f355e9d6, const_str_plain_cubic, const_int_pos_3 );
    const_tuple_int_0_int_pos_2_int_pos_1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_2_int_pos_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_2_int_pos_1_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_2_int_pos_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_int_pos_1_int_pos_2_int_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_2_int_0_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_2_int_0_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_2_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_list_none_str_plain_L_str_plain_P_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_none_str_plain_L_str_plain_P_list, 0, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_str_plain_L_str_plain_P_list, 1, const_str_plain_L ); Py_INCREF( const_str_plain_L );
    PyList_SET_ITEM( const_list_none_str_plain_L_str_plain_P_list, 2, const_str_plain_P ); Py_INCREF( const_str_plain_P );
    const_list_str_plain_RGBA_str_plain_CMYK_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_RGBA_str_plain_CMYK_list, 0, const_str_plain_RGBA ); Py_INCREF( const_str_plain_RGBA );
    PyList_SET_ITEM( const_list_str_plain_RGBA_str_plain_CMYK_list, 1, const_str_plain_CMYK ); Py_INCREF( const_str_plain_CMYK );
    const_list_str_plain_RGB_str_plain_YCbCr_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_RGB_str_plain_YCbCr_list, 0, const_str_plain_RGB ); Py_INCREF( const_str_plain_RGB );
    PyList_SET_ITEM( const_list_str_plain_RGB_str_plain_YCbCr_list, 1, const_str_plain_YCbCr ); Py_INCREF( const_str_plain_YCbCr );
    const_tuple_int_0_int_pos_256_int_pos_1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_256_int_pos_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_256_int_pos_1_tuple, 1, const_int_pos_256 ); Py_INCREF( const_int_pos_256 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_256_int_pos_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_none_none_int_pos_255_int_0_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_255_int_0_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_255_int_0_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_255_int_0_tuple, 2, const_int_pos_255 ); Py_INCREF( const_int_pos_255 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_pos_255_int_0_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_plain_arr_str_plain_ftype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_ftype_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_ftype_tuple, 1, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    const_list_dd0600d05ef5bf377355b5e6cabc85b0_list = PyList_New( 9 );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 0, const_str_plain_fromimage ); Py_INCREF( const_str_plain_fromimage );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 1, const_str_plain_toimage ); Py_INCREF( const_str_plain_toimage );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 2, const_str_plain_imsave ); Py_INCREF( const_str_plain_imsave );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 3, const_str_plain_imread ); Py_INCREF( const_str_plain_imread );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 4, const_str_plain_bytescale ); Py_INCREF( const_str_plain_bytescale );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 5, const_str_plain_imrotate ); Py_INCREF( const_str_plain_imrotate );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 6, const_str_plain_imresize ); Py_INCREF( const_str_plain_imresize );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 7, const_str_plain_imshow ); Py_INCREF( const_str_plain_imshow );
    PyList_SET_ITEM( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list, 8, const_str_plain_imfilter ); Py_INCREF( const_str_plain_imfilter );
    const_tuple_str_plain_im_str_plain_flatten_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_im_str_plain_flatten_tuple, 0, const_str_plain_im ); Py_INCREF( const_str_plain_im );
    PyTuple_SET_ITEM( const_tuple_str_plain_im_str_plain_flatten_tuple, 1, const_str_plain_flatten ); Py_INCREF( const_str_plain_flatten );
    const_str_digest_0e8614dfae9de5af41a6a469deead9c1 = UNSTREAM_STRING( &constant_bin[ 2292853 ], 480, 0 );
    const_str_digest_0f4eb063eb9ab93e8a702c855dea8953 = UNSTREAM_STRING( &constant_bin[ 2293333 ], 25, 0 );
    const_str_digest_28fd2bc0f08e526bfcb03139e2f716ad = UNSTREAM_STRING( &constant_bin[ 2293358 ], 20, 0 );
    const_str_digest_2a65effb0ae214c09697c1a5936dae6b = UNSTREAM_STRING( &constant_bin[ 2293378 ], 56, 0 );
    const_str_digest_3397d911139cd99e95d19aeb04ea5ffb = UNSTREAM_STRING( &constant_bin[ 2293434 ], 506, 0 );
    const_str_digest_53a44605076569ccacbe1fb134711e03 = UNSTREAM_STRING( &constant_bin[ 2293940 ], 1227, 0 );
    const_str_digest_5dc51f8035d7283a65a28a04cc0624d9 = UNSTREAM_STRING( &constant_bin[ 2295167 ], 35, 0 );
    const_str_digest_5fd3022d95c2e2e78f9217abffc208e7 = UNSTREAM_STRING( &constant_bin[ 2295202 ], 34, 0 );
    const_str_digest_7aaf686eb59e8787bbdbeab923049330 = UNSTREAM_STRING( &constant_bin[ 2295236 ], 36, 0 );
    const_str_digest_8223dc332596d5812873fff866ffb363 = UNSTREAM_STRING( &constant_bin[ 2295272 ], 31, 0 );
    const_str_digest_8b1e1404de3da90ea97698b97917818d = UNSTREAM_STRING( &constant_bin[ 2295303 ], 545, 0 );
    const_str_digest_8c3640db80c4b04140fc7867c3ba1b65 = UNSTREAM_STRING( &constant_bin[ 2295848 ], 33, 0 );
    const_str_digest_9235faf35f77106604f99696a39913ad = UNSTREAM_STRING( &constant_bin[ 2295881 ], 193, 0 );
    const_str_digest_a875790cb1b7785d8c5ab2c2e73af7e7 = UNSTREAM_STRING( &constant_bin[ 2296074 ], 478, 0 );
    const_str_digest_aa12e771807a1c67862fbedb677ae9bb = UNSTREAM_STRING( &constant_bin[ 2296552 ], 55, 0 );
    const_str_digest_aa5ece3e9918c31f687c3d248870d702 = UNSTREAM_STRING( &constant_bin[ 2296607 ], 29, 0 );
    const_str_digest_ae1ee90cbb3a01c42b37b58c4f0cc478 = UNSTREAM_STRING( &constant_bin[ 2296636 ], 592, 0 );
    const_str_digest_b21d415180364e96c89b05d942f8442b = UNSTREAM_STRING( &constant_bin[ 2297228 ], 18, 0 );
    const_str_digest_bf08c897356327199606626a91635ab8 = UNSTREAM_STRING( &constant_bin[ 2297246 ], 689, 0 );
    const_str_digest_c7fb7b0ada415c581e662929efbf0335 = UNSTREAM_STRING( &constant_bin[ 2297935 ], 417, 0 );
    const_str_digest_cd6ec3f2ce7e4dca0c347bf885b1f7fc = UNSTREAM_STRING( &constant_bin[ 2298352 ], 1358, 0 );
    const_str_digest_e3d92ac00bfbac5e88b586733e1861f2 = UNSTREAM_STRING( &constant_bin[ 2299710 ], 38, 0 );
    const_str_digest_f73e6f609f164d93ddf3e3b7867ec153 = UNSTREAM_STRING( &constant_bin[ 2299748 ], 36, 0 );
    const_str_digest_f741acad7cb3089fb2c8e94562676c8e = UNSTREAM_STRING( &constant_bin[ 2299784 ], 54, 0 );
    const_tuple_196a65e927d8db4927bdd53b1b3a37c5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_196a65e927d8db4927bdd53b1b3a37c5_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_196a65e927d8db4927bdd53b1b3a37c5_tuple, 1, const_str_plain_angle ); Py_INCREF( const_str_plain_angle );
    PyTuple_SET_ITEM( const_tuple_196a65e927d8db4927bdd53b1b3a37c5_tuple, 2, const_str_plain_interp ); Py_INCREF( const_str_plain_interp );
    PyTuple_SET_ITEM( const_tuple_196a65e927d8db4927bdd53b1b3a37c5_tuple, 3, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_196a65e927d8db4927bdd53b1b3a37c5_tuple, 4, const_str_plain_im ); Py_INCREF( const_str_plain_im );
    const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 1, const_str_plain_high ); Py_INCREF( const_str_plain_high );
    PyTuple_SET_ITEM( const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 2, const_str_plain_low ); Py_INCREF( const_str_plain_low );
    PyTuple_SET_ITEM( const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 3, const_str_plain_cmin ); Py_INCREF( const_str_plain_cmin );
    PyTuple_SET_ITEM( const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 4, const_str_plain_cmax ); Py_INCREF( const_str_plain_cmax );
    PyTuple_SET_ITEM( const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 5, const_str_plain_pal ); Py_INCREF( const_str_plain_pal );
    PyTuple_SET_ITEM( const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 6, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 7, const_str_plain_channel_axis ); Py_INCREF( const_str_plain_channel_axis );
    const_tuple_29b5938b517eabb54d8fa30c001fffb9_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_29b5938b517eabb54d8fa30c001fffb9_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_29b5938b517eabb54d8fa30c001fffb9_tuple, 1, const_str_plain_cmin ); Py_INCREF( const_str_plain_cmin );
    PyTuple_SET_ITEM( const_tuple_29b5938b517eabb54d8fa30c001fffb9_tuple, 2, const_str_plain_cmax ); Py_INCREF( const_str_plain_cmax );
    PyTuple_SET_ITEM( const_tuple_29b5938b517eabb54d8fa30c001fffb9_tuple, 3, const_str_plain_high ); Py_INCREF( const_str_plain_high );
    PyTuple_SET_ITEM( const_tuple_29b5938b517eabb54d8fa30c001fffb9_tuple, 4, const_str_plain_low ); Py_INCREF( const_str_plain_low );
    const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple, 1, const_str_plain_im ); Py_INCREF( const_str_plain_im );
    PyTuple_SET_ITEM( const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple, 2, const_str_plain_fnum ); Py_INCREF( const_str_plain_fnum );
    PyTuple_SET_ITEM( const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple, 3, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple, 4, const_str_plain_os ); Py_INCREF( const_str_plain_os );
    PyTuple_SET_ITEM( const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple, 5, const_str_plain_cmd ); Py_INCREF( const_str_plain_cmd );
    PyTuple_SET_ITEM( const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple, 6, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 0, const_str_plain_amin ); Py_INCREF( const_str_plain_amin );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 1, const_str_plain_amax ); Py_INCREF( const_str_plain_amax );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 2, const_str_plain_ravel ); Py_INCREF( const_str_plain_ravel );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 3, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 4, const_str_plain_cast ); Py_INCREF( const_str_plain_cast );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 5, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 6, const_str_plain_ones ); Py_INCREF( const_str_plain_ones );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 7, const_str_plain_newaxis ); Py_INCREF( const_str_plain_newaxis );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 8, const_str_plain_transpose ); Py_INCREF( const_str_plain_transpose );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 9, const_str_plain_mgrid ); Py_INCREF( const_str_plain_mgrid );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 10, const_str_plain_iscomplexobj ); Py_INCREF( const_str_plain_iscomplexobj );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 11, const_str_plain_sum ); Py_INCREF( const_str_plain_sum );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 12, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 13, const_str_plain_uint8 ); Py_INCREF( const_str_plain_uint8 );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 14, const_str_plain_issubdtype ); Py_INCREF( const_str_plain_issubdtype );
    PyTuple_SET_ITEM( const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, 15, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 2, const_str_plain_interp ); Py_INCREF( const_str_plain_interp );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 4, const_str_plain_im ); Py_INCREF( const_str_plain_im );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 5, const_str_plain_ts ); Py_INCREF( const_str_plain_ts );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 6, const_str_plain_percent ); Py_INCREF( const_str_plain_percent );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 7, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 8, const_str_plain_imnew ); Py_INCREF( const_str_plain_imnew );
    const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 1, const_str_plain_high ); Py_INCREF( const_str_plain_high );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 2, const_str_plain_low ); Py_INCREF( const_str_plain_low );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 3, const_str_plain_cmin ); Py_INCREF( const_str_plain_cmin );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 4, const_str_plain_cmax ); Py_INCREF( const_str_plain_cmax );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 5, const_str_plain_pal ); Py_INCREF( const_str_plain_pal );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 6, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 7, const_str_plain_channel_axis ); Py_INCREF( const_str_plain_channel_axis );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 8, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 9, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 10, const_str_plain_valid ); Py_INCREF( const_str_plain_valid );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 11, const_str_plain_data32 ); Py_INCREF( const_str_plain_data32 );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 12, const_str_plain_image ); Py_INCREF( const_str_plain_image );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 13, const_str_plain_bytedata ); Py_INCREF( const_str_plain_bytedata );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 14, const_str_plain_ca ); Py_INCREF( const_str_plain_ca );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 15, const_str_plain_numch ); Py_INCREF( const_str_plain_numch );
    PyTuple_SET_ITEM( const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 16, const_str_plain_strdata ); Py_INCREF( const_str_plain_strdata );
    const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 1, const_str_plain_cmin ); Py_INCREF( const_str_plain_cmin );
    PyTuple_SET_ITEM( const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 2, const_str_plain_cmax ); Py_INCREF( const_str_plain_cmax );
    PyTuple_SET_ITEM( const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 3, const_str_plain_high ); Py_INCREF( const_str_plain_high );
    PyTuple_SET_ITEM( const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 4, const_str_plain_low ); Py_INCREF( const_str_plain_low );
    PyTuple_SET_ITEM( const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 5, const_str_plain_cscale ); Py_INCREF( const_str_plain_cscale );
    PyTuple_SET_ITEM( const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 6, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 7, const_str_plain_bytedata ); Py_INCREF( const_str_plain_bytedata );
    const_tuple_str_plain_name_str_plain_flatten_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_flatten_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_flatten_tuple, 1, const_str_plain_flatten ); Py_INCREF( const_str_plain_flatten );
    const_tuple_str_plain_Image_str_plain_ImageFilter_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Image_str_plain_ImageFilter_tuple, 0, const_str_plain_Image ); Py_INCREF( const_str_plain_Image );
    PyTuple_SET_ITEM( const_tuple_str_plain_Image_str_plain_ImageFilter_tuple, 1, const_str_plain_ImageFilter ); Py_INCREF( const_str_plain_ImageFilter );
    const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple, 0, const_int_pos_255 ); Py_INCREF( const_int_pos_255 );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple, 6, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_name_str_plain_arr_str_plain_format_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_arr_str_plain_format_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_arr_str_plain_format_tuple, 1, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_arr_str_plain_format_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    const_tuple_str_plain_name_str_plain_flatten_str_plain_im_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_flatten_str_plain_im_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_flatten_str_plain_im_tuple, 1, const_str_plain_flatten ); Py_INCREF( const_str_plain_flatten );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_flatten_str_plain_im_tuple, 2, const_str_plain_im ); Py_INCREF( const_str_plain_im );
    const_tuple_str_plain_arr_str_plain_angle_str_plain_interp_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_angle_str_plain_interp_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_angle_str_plain_interp_tuple, 1, const_str_plain_angle ); Py_INCREF( const_str_plain_angle );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_angle_str_plain_interp_tuple, 2, const_str_plain_interp ); Py_INCREF( const_str_plain_interp );
    const_list_str_plain_RGB_str_plain_RGBA_str_plain_YCbCr_str_plain_CMYK_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_str_plain_RGB_str_plain_RGBA_str_plain_YCbCr_str_plain_CMYK_list, 0, const_str_plain_RGB ); Py_INCREF( const_str_plain_RGB );
    PyList_SET_ITEM( const_list_str_plain_RGB_str_plain_RGBA_str_plain_YCbCr_str_plain_CMYK_list, 1, const_str_plain_RGBA ); Py_INCREF( const_str_plain_RGBA );
    PyList_SET_ITEM( const_list_str_plain_RGB_str_plain_RGBA_str_plain_YCbCr_str_plain_CMYK_list, 2, const_str_plain_YCbCr ); Py_INCREF( const_str_plain_YCbCr );
    PyList_SET_ITEM( const_list_str_plain_RGB_str_plain_RGBA_str_plain_YCbCr_str_plain_CMYK_list, 3, const_str_plain_CMYK ); Py_INCREF( const_str_plain_CMYK );
    const_tuple_str_plain_name_str_plain_arr_str_plain_format_str_plain_im_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_arr_str_plain_format_str_plain_im_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_arr_str_plain_format_str_plain_im_tuple, 1, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_arr_str_plain_format_str_plain_im_tuple, 2, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_arr_str_plain_format_str_plain_im_tuple, 3, const_str_plain_im ); Py_INCREF( const_str_plain_im );
    const_tuple_str_plain_arr_str_plain_ftype_str_plain__tdict_str_plain_im_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_ftype_str_plain__tdict_str_plain_im_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_ftype_str_plain__tdict_str_plain_im_tuple, 1, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_ftype_str_plain__tdict_str_plain_im_tuple, 2, const_str_plain__tdict ); Py_INCREF( const_str_plain__tdict );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_ftype_str_plain__tdict_str_plain_im_tuple, 3, const_str_plain_im ); Py_INCREF( const_str_plain_im );
    const_tuple_str_plain_arr_str_plain_size_str_plain_interp_str_plain_mode_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_size_str_plain_interp_str_plain_mode_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_size_str_plain_interp_str_plain_mode_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_size_str_plain_interp_str_plain_mode_tuple, 2, const_str_plain_interp ); Py_INCREF( const_str_plain_interp );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_size_str_plain_interp_str_plain_mode_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
}

// The module code objects.
static PyCodeObject *codeobj_2469bd7f47e93913e7a581f315f6f485;
static PyCodeObject *codeobj_a81b8432466a16e4f0931b097b68bfc3;
static PyCodeObject *codeobj_3f59baf2fe74ec0d6b227fd5df7ba5db;
static PyCodeObject *codeobj_6007290b2035b711397df1998fdae23f;
static PyCodeObject *codeobj_8685cdf5d32c583d9ce4abca1d63c074;
static PyCodeObject *codeobj_ff026b702f6657fe73f2ec0a559dcc3f;
static PyCodeObject *codeobj_4c4153d827827ca48bfbbfb1e3a41397;
static PyCodeObject *codeobj_da48530f6a322df871687a5c43dd0f31;
static PyCodeObject *codeobj_78a237ae4b2087c08b0ea5c0f6722dde;
static PyCodeObject *codeobj_e42142f29bc519f0de8e448ea2638ba1;
static PyCodeObject *codeobj_5d842249ac4f25bc671ef000d9cf01b9;
static PyCodeObject *codeobj_94638980a1ea1df57f2dbd0e1906f4e7;
static PyCodeObject *codeobj_10f278f46e0151ee90e5bf63533d20c5;
static PyCodeObject *codeobj_0c7e99e05b398cd433a154c63775a77d;
static PyCodeObject *codeobj_cd54e45eb59f633f1f8ba637de994104;
static PyCodeObject *codeobj_5abbeb0ff28a6f262012f1e98ca3cf83;
static PyCodeObject *codeobj_78b7fecbd1252630ba5afdf5b0d813aa;
static PyCodeObject *codeobj_a20c8eb5d5c22ba0225f7fe086bf4f31;

static void _initModuleCodeObjects(void)
{
    codeobj_2469bd7f47e93913e7a581f315f6f485 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_bytescale, 34, const_tuple_29b5938b517eabb54d8fa30c001fffb9_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a81b8432466a16e4f0931b097b68bfc3 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_bytescale, 34, const_tuple_d44372649b52ee1e6e4cf75a3f1c2958_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3f59baf2fe74ec0d6b227fd5df7ba5db = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_fromimage, 174, const_tuple_str_plain_im_str_plain_flatten_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6007290b2035b711397df1998fdae23f = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imfilter, 432, const_tuple_str_plain_arr_str_plain_ftype_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8685cdf5d32c583d9ce4abca1d63c074 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imfilter, 432, const_tuple_str_plain_arr_str_plain_ftype_str_plain__tdict_str_plain_im_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ff026b702f6657fe73f2ec0a559dcc3f = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imread, 103, const_tuple_str_plain_name_str_plain_flatten_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4c4153d827827ca48bfbbfb1e3a41397 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imread, 103, const_tuple_str_plain_name_str_plain_flatten_str_plain_im_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_da48530f6a322df871687a5c43dd0f31 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imresize, 391, const_tuple_str_plain_arr_str_plain_size_str_plain_interp_str_plain_mode_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78a237ae4b2087c08b0ea5c0f6722dde = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imresize, 391, const_tuple_68bb6d8e2e4d75cc00dc4c2a2b9814f2_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e42142f29bc519f0de8e448ea2638ba1 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imrotate, 318, const_tuple_str_plain_arr_str_plain_angle_str_plain_interp_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5d842249ac4f25bc671ef000d9cf01b9 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imrotate, 318, const_tuple_196a65e927d8db4927bdd53b1b3a37c5_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_94638980a1ea1df57f2dbd0e1906f4e7 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imsave, 130, const_tuple_str_plain_name_str_plain_arr_str_plain_format_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_10f278f46e0151ee90e5bf63533d20c5 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imsave, 130, const_tuple_str_plain_name_str_plain_arr_str_plain_format_str_plain_im_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0c7e99e05b398cd433a154c63775a77d = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imshow, 349, const_tuple_str_plain_arr_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cd54e45eb59f633f1f8ba637de994104 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_imshow, 349, const_tuple_3bcdf536c28cd7171aae3307da1a129d_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5abbeb0ff28a6f262012f1e98ca3cf83 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_pilutil, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78b7fecbd1252630ba5afdf5b0d813aa = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_toimage, 206, const_tuple_2262f497dc9676ed293abaa01debb0aa_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a20c8eb5d5c22ba0225f7fe086bf4f31 = MAKE_CODEOBJ( const_str_digest_f741acad7cb3089fb2c8e94562676c8e, const_str_plain_toimage, 206, const_tuple_80d6dd8c9490236e3ea9162350e8b4a4_tuple, 8, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_bytescale_of_module_scipy$misc$pilutil( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_imread_of_module_scipy$misc$pilutil( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_imsave_of_module_scipy$misc$pilutil( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_fromimage_of_module_scipy$misc$pilutil( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_5_toimage_of_module_scipy$misc$pilutil( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_6_imrotate_of_module_scipy$misc$pilutil( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_7_imshow_of_module_scipy$misc$pilutil(  );


static PyObject *MAKE_FUNCTION_function_8_imresize_of_module_scipy$misc$pilutil( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_9_imfilter_of_module_scipy$misc$pilutil(  );


// The module function definitions.
static PyObject *impl_function_1_bytescale_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_data, PyObject *_python_par_cmin, PyObject *_python_par_cmax, PyObject *_python_par_high, PyObject *_python_par_low )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectLocalVariable par_cmin; par_cmin.object = _python_par_cmin;
    PyObjectLocalVariable par_cmax; par_cmax.object = _python_par_cmax;
    PyObjectLocalVariable par_high; par_high.object = _python_par_high;
    PyObjectLocalVariable par_low; par_low.object = _python_par_low;
    PyObjectLocalVariable var_cscale;
    PyObjectLocalVariable var_scale;
    PyObjectLocalVariable var_bytedata;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_subscript_2;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_subscr_target_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2469bd7f47e93913e7a581f315f6f485, module_scipy$misc$pilutil );
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
    tmp_source_name_1 = par_data.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_uint8 );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
    }

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67595 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 79;
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
    tmp_return_value = par_data.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_high.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = par_low.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_5dc51f8035d7283a65a28a04cc0624d9;
    frame_function->f_lineno = 83;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 83;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compare_left_3 = par_cmin.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258540 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
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
    tmp_source_name_2 = par_data.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_min );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 86;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    if (par_cmin.object == NULL)
    {
        par_cmin.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_cmin.object;
        par_cmin.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    branch_no_3:;
    tmp_compare_left_4 = par_cmax.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_is_2 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_2)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = par_data.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 88;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    if (par_cmax.object == NULL)
    {
        par_cmax.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = par_cmax.object;
        par_cmax.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    branch_no_4:;
    tmp_binop_left_1 = par_cmax.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = par_cmin.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258540 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = BINARY_OPERATION_SUB( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    assert( var_cscale.object == NULL );
    var_cscale.object = tmp_assign_source_3;

    tmp_compare_left_5 = var_cscale.object;

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Lt_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_2 = const_str_digest_7aaf686eb59e8787bbdbeab923049330;
    frame_function->f_lineno = 92;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 92;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_6 = var_cscale.object;

    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_4 = const_int_pos_1;
    assert( var_cscale.object != NULL );
    {
        PyObject *old = var_cscale.object;
        var_cscale.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }

    branch_no_6:;
    branch_end_5:;
    tmp_binop_left_3 = par_high.object;

    if ( tmp_binop_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = par_low.object;

    if ( tmp_binop_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_float_arg_1 = BINARY_OPERATION_SUB( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_float_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = TO_FLOAT( tmp_float_arg_1 );
    Py_DECREF( tmp_float_arg_1 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = var_cscale.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258640 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    assert( var_scale.object == NULL );
    var_scale.object = tmp_assign_source_5;

    tmp_binop_left_7 = par_data.object;

    if ( tmp_binop_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = const_float_1_0;
    tmp_binop_left_6 = BINARY_OPERATION_MUL( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = par_cmin.object;

    if ( tmp_binop_right_6 == NULL )
    {
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258540 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_5 = BINARY_OPERATION_SUB( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_5 = var_scale.object;

    tmp_binop_left_4 = BINARY_OPERATION_MUL( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = const_float_0_4999;
    tmp_assign_source_6 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    assert( var_bytedata.object == NULL );
    var_bytedata.object = tmp_assign_source_6;

    tmp_ass_subvalue_1 = par_high.object;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_bytedata.object;

    tmp_compexpr_left_1 = var_bytedata.object;

    tmp_compexpr_right_1 = par_high.object;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = const_int_0;
    tmp_ass_subscribed_2 = var_bytedata.object;

    tmp_compexpr_left_2 = var_bytedata.object;

    tmp_compexpr_right_2 = const_int_0;
    tmp_ass_subscript_2 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_ass_subscript_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscript_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_cast );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cast );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 256035 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_uint8 );

    if (unlikely( tmp_subscr_subscript_1 == NULL ))
    {
        tmp_subscr_subscript_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
    }

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67595 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = var_bytedata.object;

    frame_function->f_lineno = 100;
    tmp_binop_left_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_binop_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_cast );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cast );
    }

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 256035 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_uint8 );

    if (unlikely( tmp_subscr_subscript_2 == NULL ))
    {
        tmp_subscr_subscript_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
    }

    if ( tmp_subscr_subscript_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67595 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_low.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_8 );
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 100;
    tmp_binop_right_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_8 );

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_left_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
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
    if ((var_cscale.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cscale,
            var_cscale.object
        );

    }
    if ((var_scale.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_scale,
            var_scale.object
        );

    }
    if ((var_bytedata.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bytedata,
            var_bytedata.object
        );

    }
    if ((par_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            par_data.object
        );

    }
    if ((par_cmin.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmin,
            par_cmin.object
        );

    }
    if ((par_cmax.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmax,
            par_cmax.object
        );

    }
    if ((par_high.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_high,
            par_high.object
        );

    }
    if ((par_low.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_low,
            par_low.object
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
static PyObject *fparse_function_1_bytescale_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_data = NULL;
    PyObject *_python_par_cmin = NULL;
    PyObject *_python_par_cmax = NULL;
    PyObject *_python_par_high = NULL;
    PyObject *_python_par_low = NULL;
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
                PyErr_Format( PyExc_TypeError, "bytescale() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_data == key )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_cmin == key )
            {
                assert( _python_par_cmin == NULL );
                _python_par_cmin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_cmax == key )
            {
                assert( _python_par_cmax == NULL );
                _python_par_cmax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_high == key )
            {
                assert( _python_par_high == NULL );
                _python_par_high = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_low == key )
            {
                assert( _python_par_low == NULL );
                _python_par_low = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_data, key ) == 1 )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cmin, key ) == 1 )
            {
                assert( _python_par_cmin == NULL );
                _python_par_cmin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cmax, key ) == 1 )
            {
                assert( _python_par_cmax == NULL );
                _python_par_cmax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_high, key ) == 1 )
            {
                assert( _python_par_high == NULL );
                _python_par_high = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_low, key ) == 1 )
            {
                assert( _python_par_low == NULL );
                _python_par_low = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "bytescale() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
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
         if (unlikely( _python_par_cmin != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_cmin = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_cmin == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_cmin = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
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
         if (unlikely( _python_par_cmax != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_cmax = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_cmax == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_cmax = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
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
         if (unlikely( _python_par_high != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_high = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_high == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_high = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
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
         if (unlikely( _python_par_low != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_low = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_low == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_low = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
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
    if (unlikely( _python_par_data == NULL || _python_par_cmin == NULL || _python_par_cmax == NULL || _python_par_high == NULL || _python_par_low == NULL ))
    {
        PyObject *values[] = { _python_par_data, _python_par_cmin, _python_par_cmax, _python_par_high, _python_par_low };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_bytescale_of_module_scipy$misc$pilutil( self, _python_par_data, _python_par_cmin, _python_par_cmax, _python_par_high, _python_par_low );

error_exit:;

    Py_XDECREF( _python_par_data );
    Py_XDECREF( _python_par_cmin );
    Py_XDECREF( _python_par_cmax );
    Py_XDECREF( _python_par_high );
    Py_XDECREF( _python_par_low );

    return NULL;
}

static PyObject *dparse_function_1_bytescale_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_1_bytescale_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_bytescale_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_imread_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_flatten )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable par_flatten; par_flatten.object = _python_par_flatten;
    PyObjectLocalVariable var_im;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ff026b702f6657fe73f2ec0a559dcc3f, module_scipy$misc$pilutil );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2370 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_open );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_name.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 126;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    assert( var_im.object == NULL );
    var_im.object = tmp_assign_source_1;

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_fromimage );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fromimage );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258692 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_im.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_flatten.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_flatten;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 127;
    tmp_return_value = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
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
    if ((var_im.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_im,
            var_im.object
        );

    }
    if ((par_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            par_name.object
        );

    }
    if ((par_flatten.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flatten,
            par_flatten.object
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
static PyObject *fparse_function_2_imread_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_flatten = NULL;
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
                PyErr_Format( PyExc_TypeError, "imread() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_flatten == key )
            {
                assert( _python_par_flatten == NULL );
                _python_par_flatten = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_flatten, key ) == 1 )
            {
                assert( _python_par_flatten == NULL );
                _python_par_flatten = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "imread() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_flatten != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_flatten = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_flatten == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_flatten = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_name == NULL || _python_par_flatten == NULL ))
    {
        PyObject *values[] = { _python_par_name, _python_par_flatten };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_imread_of_module_scipy$misc$pilutil( self, _python_par_name, _python_par_flatten );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_flatten );

    return NULL;
}

static PyObject *dparse_function_2_imread_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_imread_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_imread_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_imsave_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_arr, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_name; par_name.object = _python_par_name;
    PyObjectLocalVariable par_arr; par_arr.object = _python_par_arr;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObjectLocalVariable var_im;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_94638980a1ea1df57f2dbd0e1906f4e7, module_scipy$misc$pilutil );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_toimage );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_toimage );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258783 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_arr.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 166;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    assert( var_im.object == NULL );
    var_im.object = tmp_assign_source_1;

    tmp_compare_left_1 = par_format.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
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
    tmp_source_name_1 = var_im.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_save );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_name.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 168;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = var_im.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_save );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_name.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_format.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6408 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 170;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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
    if ((var_im.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_im,
            var_im.object
        );

    }
    if ((par_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            par_name.object
        );

    }
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            par_arr.object
        );

    }
    if ((par_format.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_format,
            par_format.object
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
static PyObject *fparse_function_3_imsave_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_arr = NULL;
    PyObject *_python_par_format = NULL;
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
                PyErr_Format( PyExc_TypeError, "imsave() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_name == key )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_arr == key )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_format == key )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_name, key ) == 1 )
            {
                assert( _python_par_name == NULL );
                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arr, key ) == 1 )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_format, key ) == 1 )
            {
                assert( _python_par_format == NULL );
                _python_par_format = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "imsave() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_name == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_arr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_arr = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_arr == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_arr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_name == NULL || _python_par_arr == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_name, _python_par_arr, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_imsave_of_module_scipy$misc$pilutil( self, _python_par_name, _python_par_arr, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_arr );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_3_imsave_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3_imsave_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_imsave_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_fromimage_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_im, PyObject *_python_par_flatten )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_im; par_im.object = _python_par_im;
    PyObjectLocalVariable par_flatten; par_flatten.object = _python_par_flatten;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3f59baf2fe74ec0d6b227fd5df7ba5db, module_scipy$misc$pilutil );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2370 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isImageType );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_im.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1685 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 193;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_0f4eb063eb9ab93e8a702c855dea8953;
    frame_function->f_lineno = 194;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 194;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_2 = par_flatten.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258730 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par_im.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1685 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_convert );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_F;
    frame_function->f_lineno = 196;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    if (par_im.object == NULL)
    {
        par_im.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_im.object;
        par_im.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = par_im.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1685 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mode );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = par_im.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1685 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_convert );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_plain_L;
    frame_function->f_lineno = 199;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    branch_end_2:;
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_im.object;

    if ( tmp_call_arg_element_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1685 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 201;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
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
    if ((par_im.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_im,
            par_im.object
        );

    }
    if ((par_flatten.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flatten,
            par_flatten.object
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
static PyObject *fparse_function_4_fromimage_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_im = NULL;
    PyObject *_python_par_flatten = NULL;
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
                PyErr_Format( PyExc_TypeError, "fromimage() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_im == key )
            {
                assert( _python_par_im == NULL );
                _python_par_im = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_flatten == key )
            {
                assert( _python_par_flatten == NULL );
                _python_par_flatten = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_im, key ) == 1 )
            {
                assert( _python_par_im == NULL );
                _python_par_im = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_flatten, key ) == 1 )
            {
                assert( _python_par_flatten == NULL );
                _python_par_flatten = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fromimage() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_im != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_im = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_im == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_im = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_flatten != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_flatten = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_flatten == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_flatten = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_im == NULL || _python_par_flatten == NULL ))
    {
        PyObject *values[] = { _python_par_im, _python_par_flatten };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_fromimage_of_module_scipy$misc$pilutil( self, _python_par_im, _python_par_flatten );

error_exit:;

    Py_XDECREF( _python_par_im );
    Py_XDECREF( _python_par_flatten );

    return NULL;
}

static PyObject *dparse_function_4_fromimage_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_fromimage_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_fromimage_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_toimage_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_arr, PyObject *_python_par_high, PyObject *_python_par_low, PyObject *_python_par_cmin, PyObject *_python_par_cmax, PyObject *_python_par_pal, PyObject *_python_par_mode, PyObject *_python_par_channel_axis )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arr; par_arr.object = _python_par_arr;
    PyObjectLocalVariable par_high; par_high.object = _python_par_high;
    PyObjectLocalVariable par_low; par_low.object = _python_par_low;
    PyObjectLocalVariable par_cmin; par_cmin.object = _python_par_cmin;
    PyObjectLocalVariable par_cmax; par_cmax.object = _python_par_cmax;
    PyObjectLocalVariable par_pal; par_pal.object = _python_par_pal;
    PyObjectLocalVariable par_mode; par_mode.object = _python_par_mode;
    PyObjectLocalVariable par_channel_axis; par_channel_axis.object = _python_par_channel_axis;
    PyObjectLocalVariable var_data;
    PyObjectLocalVariable var_shape;
    PyObjectLocalVariable var_valid;
    PyObjectLocalVariable var_data32;
    PyObjectLocalVariable var_image;
    PyObjectLocalVariable var_bytedata;
    PyObjectLocalVariable var_ca;
    PyObjectLocalVariable var_numch;
    PyObjectLocalVariable var_strdata;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_and_1__value_1;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
    PyObject *tmp_call_kw_4;
    PyObject *tmp_call_kw_5;
    PyObject *tmp_call_kw_6;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_call_pos_3;
    PyObject *tmp_call_pos_4;
    PyObject *tmp_call_pos_5;
    PyObject *tmp_call_pos_6;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Eq_8;
    int tmp_cmp_Eq_9;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_isnot_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_make_exception_arg_6;
    PyObject *tmp_make_exception_arg_7;
    PyObject *tmp_make_exception_arg_8;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_type_8;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_78b7fecbd1252630ba5afdf5b0d813aa, module_scipy$misc$pilutil );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_arr.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 228;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    assert( var_data.object == NULL );
    var_data.object = tmp_assign_source_1;

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_iscomplexobj );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplexobj );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 179456 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = var_data.object;

    frame_function->f_lineno = 229;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 229;
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
    tmp_make_exception_arg_1 = const_str_digest_e3d92ac00bfbac5e88b586733e1861f2;
    frame_function->f_lineno = 230;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 230;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = var_data.object;

    tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    assert( var_shape.object == NULL );
    var_shape.object = tmp_assign_source_2;

    // Tried code
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_len_arg_1 = var_shape.object;

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_4 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_2;
    }
    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = tmp_assign_source_4;

    tmp_cond_value_2 = tmp_or_2__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
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
    tmp_assign_source_3 = tmp_or_2__value_1.object;

    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_len_arg_2 = var_shape.object;

    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_5;
    }
    tmp_compexpr_right_2 = const_int_pos_3;
    tmp_assign_source_5 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_5;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_5;

    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
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
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_result = tmp_and_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_1__value_1.object );
        tmp_and_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_compexpr_left_3 = const_int_pos_3;
    tmp_compexpr_right_3 = var_shape.object;

    tmp_assign_source_6 = SEQUENCE_CONTAINS( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_8;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_cond_value_4 = tmp_or_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_8;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_assign_source_3 = tmp_or_1__value_1.object;

    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_3 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_compexpr_left_4 = const_int_pos_4;
    tmp_compexpr_right_4 = var_shape.object;

    tmp_assign_source_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_9;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
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

        goto try_finally_handler_8;
    }

    goto finally_end_1;
    finally_end_1:;
    condexpr_end_3:;
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

        goto try_finally_handler_5;
    }

    goto finally_end_4;
    finally_end_4:;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_3 = tmp_and_1__value_1.object;

    condexpr_end_2:;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_7 != NULL )
    {
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;

        goto try_finally_handler_2;
    }

    goto finally_end_7;
    finally_end_7:;
    condexpr_end_1:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
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

        goto try_finally_handler_1;
    }

    goto finally_end_8;
    finally_end_8:;
    assert( var_valid.object == NULL );
    var_valid.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

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
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

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

    goto finally_end_9;
    finally_end_9:;
    tmp_cond_value_5 = var_valid.object;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258819 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_2a65effb0ae214c09697c1a5936dae6b;
    frame_function->f_lineno = 235;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 235;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_len_arg_3 = var_shape.object;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_7 = PyTuple_New( 2 );
    tmp_subscr_target_1 = var_shape.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    tmp_subscr_target_2 = var_shape.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_7, 1, tmp_tuple_element_1 );
    if (var_shape.object == NULL)
    {
        var_shape.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_shape.object;
        var_shape.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_compare_left_2 = par_mode.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_plain_F;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_2 = var_data.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_astype );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_float32 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 239;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    assert( var_data32.object == NULL );
    var_data32.object = tmp_assign_source_8;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2370 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_frombytes );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_mode.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = var_shape.object;

    tmp_source_name_5 = var_data32.object;

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_tostring );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 240;
    tmp_call_arg_element_6 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 240;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    assert( var_image.object == NULL );
    var_image.object = tmp_assign_source_9;

    tmp_return_value = var_image.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_compare_left_3 = par_mode.object;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LIST_COPY( const_list_none_str_plain_L_str_plain_P_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_bytescale );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytescale );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258870 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_data.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
    tmp_call_kw_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_high.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_high;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_low.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_low;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_cmin.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258540 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_cmin;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_cmax.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_cmax;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 243;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_6, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    assert( var_bytedata.object == NULL );
    var_bytedata.object = tmp_assign_source_10;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2370 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_frombytes );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_L;
    tmp_call_arg_element_8 = var_shape.object;

    tmp_source_name_7 = var_bytedata.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_tostring );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 244;
    tmp_call_arg_element_9 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 244;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    assert( var_image.object == NULL );
    var_image.object = tmp_assign_source_11;

    tmp_compare_left_4 = par_pal.object;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258908 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if (tmp_isnot_1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_8 = var_image.object;

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_putpalette );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_11 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_pal.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258908 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_5 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_uint8 );

    if (unlikely( tmp_dict_value_5 == NULL ))
    {
        tmp_dict_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67595 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 246;
    tmp_source_name_9 = CALL_FUNCTION( tmp_called_11, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_tostring );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 246;
    tmp_call_arg_element_10 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_9 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 246;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_6;
    branch_no_6:;
    tmp_compare_left_5 = par_mode.object;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_str_plain_P;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_3 = const_tuple_int_0_int_pos_256_int_pos_1_tuple;
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_uint8 );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67595 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 249;
    tmp_subscr_target_3 = CALL_FUNCTION( tmp_called_12, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_newaxis );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newaxis );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_subscr_target_3 );
        Py_DECREF( tmp_subscr_subscript_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69654 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_3, 1, tmp_tuple_element_4 );
    tmp_binop_left_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    Py_DECREF( tmp_subscr_subscript_3 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ones );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ones );
    }

    if ( tmp_called_13 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 163368 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_4 = const_tuple_tuple_int_pos_3_tuple_tuple;
    tmp_call_kw_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_uint8 );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        Py_DECREF( tmp_call_kw_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67595 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_4, tmp_dict_key_7, tmp_dict_value_7 );
    frame_function->f_lineno = 250;
    tmp_subscr_target_4 = CALL_FUNCTION( tmp_called_13, tmp_call_pos_4, tmp_call_kw_4 );
    Py_DECREF( tmp_call_kw_4 );
    if ( tmp_subscr_target_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_4 = PyTuple_New( 2 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_newaxis );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newaxis );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        Py_DECREF( tmp_subscr_target_4 );
        Py_DECREF( tmp_subscr_subscript_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69654 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = MAKE_SLICEOBJ( Py_None, Py_None, Py_None );
    PyTuple_SET_ITEM( tmp_subscr_subscript_4, 1, tmp_tuple_element_5 );
    tmp_binop_right_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    Py_DECREF( tmp_subscr_target_4 );
    Py_DECREF( tmp_subscr_subscript_4 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    if (par_pal.object == NULL)
    {
        par_pal.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = par_pal.object;
        par_pal.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_source_name_10 = var_image.object;

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_putpalette );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_called_16 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_16 == NULL ))
    {
        tmp_called_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_16 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_5 = PyTuple_New( 1 );
    tmp_tuple_element_6 = par_pal.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_call_pos_5, 0, tmp_tuple_element_6 );
    tmp_call_kw_5 = _PyDict_NewPresized( 1 );
    tmp_dict_value_8 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_uint8 );

    if (unlikely( tmp_dict_value_8 == NULL ))
    {
        tmp_dict_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
    }

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        Py_DECREF( tmp_call_pos_5 );
        Py_DECREF( tmp_call_kw_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 67595 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_dtype;
    PyDict_SetItem( tmp_call_kw_5, tmp_dict_key_8, tmp_dict_value_8 );
    frame_function->f_lineno = 251;
    tmp_source_name_11 = CALL_FUNCTION( tmp_called_16, tmp_call_pos_5, tmp_call_kw_5 );
    Py_DECREF( tmp_call_pos_5 );
    Py_DECREF( tmp_call_kw_5 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_tostring );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 251;
    tmp_call_arg_element_11 = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 251;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    branch_end_6:;
    tmp_return_value = var_image.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_compare_left_6 = par_mode.object;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_str_plain_1;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_compexpr_left_5 = var_data.object;

    if ( tmp_compexpr_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_5 = par_high.object;

    if ( tmp_compexpr_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = RICH_COMPARE_GT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    assert( var_bytedata.object == NULL );
    var_bytedata.object = tmp_assign_source_13;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2370 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_frombytes );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = const_str_plain_1;
    tmp_call_arg_element_13 = var_shape.object;

    tmp_source_name_13 = var_bytedata.object;

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_tostring );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 255;
    tmp_call_arg_element_14 = CALL_FUNCTION_NO_ARGS( tmp_called_18 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 255;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3( tmp_called_17, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    assert( var_image.object == NULL );
    var_image.object = tmp_assign_source_14;

    tmp_return_value = var_image.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_8:;
    tmp_compare_left_7 = par_cmin.object;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258540 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_is_1 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if (tmp_is_1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_19 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_amin );

    if (unlikely( tmp_called_19 == NULL ))
    {
        tmp_called_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_amin );
    }

    if ( tmp_called_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186654 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ravel );

    if (unlikely( tmp_called_20 == NULL ))
    {
        tmp_called_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ravel );
    }

    if ( tmp_called_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57257 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_16 = var_data.object;

    if ( tmp_call_arg_element_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 258;
    tmp_call_arg_element_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_16 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 258;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_15 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    if (par_cmin.object == NULL)
    {
        par_cmin.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = par_cmin.object;
        par_cmin.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    branch_no_9:;
    tmp_compare_left_8 = par_cmax.object;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }

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
    tmp_called_21 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_amax );

    if (unlikely( tmp_called_21 == NULL ))
    {
        tmp_called_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_amax );
    }

    if ( tmp_called_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 186621 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ravel );

    if (unlikely( tmp_called_22 == NULL ))
    {
        tmp_called_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ravel );
    }

    if ( tmp_called_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 57257 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = var_data.object;

    if ( tmp_call_arg_element_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 260;
    tmp_call_arg_element_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_18 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 260;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    if (par_cmax.object == NULL)
    {
        par_cmax.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = par_cmax.object;
        par_cmax.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    branch_no_10:;
    tmp_binop_left_6 = var_data.object;

    if ( tmp_binop_left_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_6 = const_float_1_0;
    tmp_binop_left_5 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_5 = par_cmin.object;

    if ( tmp_binop_right_5 == NULL )
    {
        Py_DECREF( tmp_binop_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258540 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = BINARY_OPERATION_SUB( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_7 = par_high.object;

    if ( tmp_binop_left_7 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = par_low.object;

    if ( tmp_binop_right_7 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_4 = BINARY_OPERATION_SUB( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_3 = BINARY_OPERATION_MUL( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_8 = par_cmax.object;

    if ( tmp_binop_left_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_8 = par_cmin.object;

    if ( tmp_binop_right_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258540 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = BINARY_OPERATION_SUB( tmp_binop_left_8, tmp_binop_right_8 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = par_low.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    if (var_data.object == NULL)
    {
        var_data.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = var_data.object;
        var_data.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    tmp_compare_left_9 = par_mode.object;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = const_str_plain_I;
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_5 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_14 = var_data.object;

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_astype );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_uint32 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_23 );

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 263;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_23 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    assert( var_data32.object == NULL );
    var_data32.object = tmp_assign_source_18;

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2370 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_frombytes );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_20 = par_mode.object;

    if ( tmp_call_arg_element_20 == NULL )
    {
        Py_DECREF( tmp_called_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = var_shape.object;

    tmp_source_name_17 = var_data32.object;

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_tostring );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_24 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 264;
    tmp_call_arg_element_22 = CALL_FUNCTION_NO_ARGS( tmp_called_25 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_call_arg_element_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_24 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 264;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_24, tmp_call_arg_element_20, tmp_call_arg_element_21, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_24 );
    Py_DECREF( tmp_call_arg_element_22 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    assert( var_image.object == NULL );
    var_image.object = tmp_assign_source_19;

    goto branch_end_11;
    branch_no_11:;
    tmp_make_exception_arg_3 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain__errstr );

    if (unlikely( tmp_make_exception_arg_3 == NULL ))
    {
        tmp_make_exception_arg_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__errstr );
    }

    if ( tmp_make_exception_arg_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258957 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 266;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 266;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_11:;
    tmp_return_value = var_image.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10126 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_compare_left_10 = par_channel_axis.object;

    if ( tmp_compare_left_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258993 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_10 = Py_None;
    tmp_is_3 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    if (tmp_is_3)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_compare_left_11 = const_int_pos_3;
    tmp_compare_right_11 = var_shape.object;

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_flatnonzero );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_called_27 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_27 == NULL ))
    {
        tmp_called_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_27 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_24 = var_shape.object;

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 273;
    tmp_compexpr_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_27, tmp_call_arg_element_24 );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_6 = const_int_pos_3;
    tmp_call_arg_element_23 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_26 );

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 273;
    tmp_subscr_target_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_26 );
    Py_DECREF( tmp_call_arg_element_23 );
    if ( tmp_subscr_target_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_5 = const_int_0;
    tmp_assign_source_20 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    Py_DECREF( tmp_subscr_target_5 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    assert( var_ca.object == NULL );
    var_ca.object = tmp_assign_source_20;

    goto branch_end_13;
    branch_no_13:;
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_numpy );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numpy );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 59701 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_flatnonzero );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_called_29 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_29 == NULL ))
    {
        tmp_called_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_29 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_26 = var_shape.object;

    if ( tmp_call_arg_element_26 == NULL )
    {
        Py_DECREF( tmp_called_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 275;
    tmp_compexpr_left_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_26 );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_7 = const_int_pos_4;
    tmp_call_arg_element_25 = RICH_COMPARE_EQ( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_28 );

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 275;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_28 );
    Py_DECREF( tmp_call_arg_element_25 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    assert( var_ca.object == NULL );
    var_ca.object = tmp_assign_source_21;

    tmp_len_arg_4 = var_ca.object;

    tmp_cond_value_6 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_subscr_target_6 = var_ca.object;

    tmp_subscr_subscript_6 = const_int_0;
    tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    assert( var_ca.object != NULL );
    {
        PyObject *old = var_ca.object;
        var_ca.object = tmp_assign_source_22;
        Py_DECREF( old );
    }

    goto branch_end_14;
    branch_no_14:;
    tmp_make_exception_arg_4 = const_str_digest_8c3640db80c4b04140fc7867c3ba1b65;
    frame_function->f_lineno = 279;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 279;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_14:;
    branch_end_13:;
    goto branch_end_12;
    branch_no_12:;
    tmp_assign_source_23 = par_channel_axis.object;

    if ( tmp_assign_source_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258993 ], 58, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    assert( var_ca.object == NULL );
    var_ca.object = INCREASE_REFCOUNT( tmp_assign_source_23 );

    branch_end_12:;
    tmp_subscr_target_7 = var_shape.object;

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_7 = var_ca.object;

    if ( tmp_subscr_subscript_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259051 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    assert( var_numch.object == NULL );
    var_numch.object = tmp_assign_source_24;

    tmp_compare_left_12 = var_numch.object;

    tmp_compare_right_12 = LIST_COPY( const_list_int_pos_3_int_pos_4_list );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_12 );

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_12 );
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_make_exception_arg_5 = const_str_digest_f73e6f609f164d93ddf3e3b7867ec153;
    frame_function->f_lineno = 285;
    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_5 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_5;
    frame_function->f_lineno = 285;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_15:;
    tmp_called_30 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_bytescale );

    if (unlikely( tmp_called_30 == NULL ))
    {
        tmp_called_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytescale );
    }

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258870 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_6 = PyTuple_New( 1 );
    tmp_tuple_element_7 = var_data.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_6, 0, tmp_tuple_element_7 );
    tmp_call_kw_6 = _PyDict_NewPresized( 4 );
    tmp_dict_value_9 = par_high.object;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92379 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = const_str_plain_high;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = par_low.object;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 92330 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_low;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_value_11 = par_cmin.object;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258540 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = const_str_plain_cmin;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_value_12 = par_cmax.object;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_call_pos_6 );
        Py_DECREF( tmp_call_kw_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258590 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = const_str_plain_cmax;
    PyDict_SetItem( tmp_call_kw_6, tmp_dict_key_12, tmp_dict_value_12 );
    frame_function->f_lineno = 287;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_30, tmp_call_pos_6, tmp_call_kw_6 );
    Py_DECREF( tmp_call_pos_6 );
    Py_DECREF( tmp_call_kw_6 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    assert( var_bytedata.object == NULL );
    var_bytedata.object = tmp_assign_source_25;

    tmp_compare_left_13 = var_ca.object;

    if ( tmp_compare_left_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259051 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_13 = const_int_pos_2;
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_6 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_20 = var_bytedata.object;

    tmp_called_31 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_tostring );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 289;
    tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS( tmp_called_31 );
    Py_DECREF( tmp_called_31 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    assert( var_strdata.object == NULL );
    var_strdata.object = tmp_assign_source_26;

    tmp_assign_source_27 = PyTuple_New( 2 );
    tmp_subscr_target_8 = var_shape.object;

    if ( tmp_subscr_target_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_8 = const_int_pos_1;
    tmp_tuple_element_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_8 );
    tmp_subscr_target_9 = var_shape.object;

    if ( tmp_subscr_target_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_9 = const_int_0;
    tmp_tuple_element_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_27, 1, tmp_tuple_element_8 );
    if (var_shape.object == NULL)
    {
        var_shape.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = var_shape.object;
        var_shape.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    goto branch_end_16;
    branch_no_16:;
    tmp_compare_left_14 = var_ca.object;

    if ( tmp_compare_left_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259051 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_14 = const_int_pos_1;
    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_7 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_called_33 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_transpose );

    if (unlikely( tmp_called_33 == NULL ))
    {
        tmp_called_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transpose );
    }

    if ( tmp_called_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69465 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_27 = var_bytedata.object;

    tmp_call_arg_element_28 = const_tuple_int_0_int_pos_2_int_pos_1_tuple;
    frame_function->f_lineno = 292;
    tmp_source_name_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_33, tmp_call_arg_element_27, tmp_call_arg_element_28 );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_called_32 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_tostring );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 292;
    tmp_assign_source_28 = CALL_FUNCTION_NO_ARGS( tmp_called_32 );
    Py_DECREF( tmp_called_32 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    assert( var_strdata.object == NULL );
    var_strdata.object = tmp_assign_source_28;

    tmp_assign_source_29 = PyTuple_New( 2 );
    tmp_subscr_target_10 = var_shape.object;

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_10 = const_int_pos_2;
    tmp_tuple_element_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_29 );

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_9 );
    tmp_subscr_target_11 = var_shape.object;

    if ( tmp_subscr_target_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_11 = const_int_0;
    tmp_tuple_element_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_29 );

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_29, 1, tmp_tuple_element_9 );
    if (var_shape.object == NULL)
    {
        var_shape.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = var_shape.object;
        var_shape.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    goto branch_end_17;
    branch_no_17:;
    tmp_compare_left_15 = var_ca.object;

    if ( tmp_compare_left_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259051 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_15 = const_int_0;
    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_8 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_called_35 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_transpose );

    if (unlikely( tmp_called_35 == NULL ))
    {
        tmp_called_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_transpose );
    }

    if ( tmp_called_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 69465 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_29 = var_bytedata.object;

    tmp_call_arg_element_30 = const_tuple_int_pos_1_int_pos_2_int_0_tuple;
    frame_function->f_lineno = 295;
    tmp_source_name_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_35, tmp_call_arg_element_29, tmp_call_arg_element_30 );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    tmp_called_34 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_tostring );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_called_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 295;
    tmp_assign_source_30 = CALL_FUNCTION_NO_ARGS( tmp_called_34 );
    Py_DECREF( tmp_called_34 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    assert( var_strdata.object == NULL );
    var_strdata.object = tmp_assign_source_30;

    tmp_assign_source_31 = PyTuple_New( 2 );
    tmp_subscr_target_12 = var_shape.object;

    if ( tmp_subscr_target_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_12 = const_int_pos_2;
    tmp_tuple_element_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_31 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_10 );
    tmp_subscr_target_13 = var_shape.object;

    if ( tmp_subscr_target_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_13 = const_int_pos_1;
    tmp_tuple_element_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_31 );

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_31, 1, tmp_tuple_element_10 );
    if (var_shape.object == NULL)
    {
        var_shape.object = tmp_assign_source_31;
    }
    else
    {
        PyObject *old = var_shape.object;
        var_shape.object = tmp_assign_source_31;
        Py_DECREF( old );
    }
    branch_no_18:;
    branch_end_17:;
    branch_end_16:;
    tmp_compare_left_16 = par_mode.object;

    if ( tmp_compare_left_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_16 = Py_None;
    tmp_is_4 = ( tmp_compare_left_16 == tmp_compare_right_16 );
    if (tmp_is_4)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_compare_left_17 = var_numch.object;

    tmp_compare_right_17 = const_int_pos_3;
    tmp_cmp_Eq_9 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_17, tmp_compare_right_17 );
    if ( tmp_cmp_Eq_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_9 == 1)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_assign_source_32 = const_str_plain_RGB;
    if (par_mode.object == NULL)
    {
        par_mode.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
    }
    else
    {
        PyObject *old = par_mode.object;
        par_mode.object = INCREASE_REFCOUNT( tmp_assign_source_32 );
        Py_DECREF( old );
    }
    goto branch_end_20;
    branch_no_20:;
    tmp_assign_source_33 = const_str_plain_RGBA;
    if (par_mode.object == NULL)
    {
        par_mode.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
    }
    else
    {
        PyObject *old = par_mode.object;
        par_mode.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
        Py_DECREF( old );
    }
    branch_end_20:;
    branch_no_19:;
    tmp_compare_left_18 = par_mode.object;

    if ( tmp_compare_left_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_18 = LIST_COPY( const_list_str_plain_RGB_str_plain_RGBA_str_plain_YCbCr_str_plain_CMYK_list );
    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    if ( tmp_cmp_NotIn_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_18 );

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_18 );
    if (tmp_cmp_NotIn_2 == 0)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_make_exception_arg_6 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain__errstr );

    if (unlikely( tmp_make_exception_arg_6 == NULL ))
    {
        tmp_make_exception_arg_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__errstr );
    }

    if ( tmp_make_exception_arg_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258957 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 304;
    tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_6 );
    if ( tmp_raise_type_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 304;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_6;
    frame_function->f_lineno = 304;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_21:;
    tmp_compare_left_19 = par_mode.object;

    if ( tmp_compare_left_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_19 = LIST_COPY( const_list_str_plain_RGB_str_plain_YCbCr_list );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_19 );

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_19 );
    if (tmp_cmp_In_3 == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_compare_left_20 = var_numch.object;

    tmp_compare_right_20 = const_int_pos_3;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_20, tmp_compare_right_20 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_make_exception_arg_7 = const_str_digest_aa5ece3e9918c31f687c3d248870d702;
    frame_function->f_lineno = 308;
    tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_7 );
    if ( tmp_raise_type_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_7;
    frame_function->f_lineno = 308;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_23:;
    branch_no_22:;
    tmp_compare_left_21 = par_mode.object;

    if ( tmp_compare_left_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_21 = LIST_COPY( const_list_str_plain_RGBA_str_plain_CMYK_list );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_21 );

        frame_function->f_lineno = 309;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_21 );
    if (tmp_cmp_In_4 == 1)
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_compare_left_22 = var_numch.object;

    tmp_compare_right_22 = const_int_pos_4;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_22, tmp_compare_right_22 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_make_exception_arg_8 = const_str_digest_aa5ece3e9918c31f687c3d248870d702;
    frame_function->f_lineno = 311;
    tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_8 );
    if ( tmp_raise_type_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_8;
    frame_function->f_lineno = 311;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_25:;
    branch_no_24:;
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2370 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_called_36 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_frombytes );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_31 = par_mode.object;

    if ( tmp_call_arg_element_31 == NULL )
    {
        Py_DECREF( tmp_called_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_32 = var_shape.object;

    if ( tmp_call_arg_element_32 == NULL )
    {
        Py_DECREF( tmp_called_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5018 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_33 = var_strdata.object;

    if ( tmp_call_arg_element_33 == NULL )
    {
        Py_DECREF( tmp_called_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259099 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 314;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS3( tmp_called_36, tmp_call_arg_element_31, tmp_call_arg_element_32, tmp_call_arg_element_33 );
    Py_DECREF( tmp_called_36 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 314;
        goto frame_exception_exit_1;
    }
    assert( var_image.object == NULL );
    var_image.object = tmp_assign_source_34;


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
    if ((var_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            var_data.object
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
    if ((var_valid.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_valid,
            var_valid.object
        );

    }
    if ((var_data32.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data32,
            var_data32.object
        );

    }
    if ((var_image.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_image,
            var_image.object
        );

    }
    if ((var_bytedata.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bytedata,
            var_bytedata.object
        );

    }
    if ((var_ca.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ca,
            var_ca.object
        );

    }
    if ((var_numch.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_numch,
            var_numch.object
        );

    }
    if ((var_strdata.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_strdata,
            var_strdata.object
        );

    }
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            par_arr.object
        );

    }
    if ((par_high.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_high,
            par_high.object
        );

    }
    if ((par_low.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_low,
            par_low.object
        );

    }
    if ((par_cmin.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmin,
            par_cmin.object
        );

    }
    if ((par_cmax.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmax,
            par_cmax.object
        );

    }
    if ((par_pal.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pal,
            par_pal.object
        );

    }
    if ((par_mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mode,
            par_mode.object
        );

    }
    if ((par_channel_axis.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_channel_axis,
            par_channel_axis.object
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
    tmp_return_value = var_image.object;

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
static PyObject *fparse_function_5_toimage_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arr = NULL;
    PyObject *_python_par_high = NULL;
    PyObject *_python_par_low = NULL;
    PyObject *_python_par_cmin = NULL;
    PyObject *_python_par_cmax = NULL;
    PyObject *_python_par_pal = NULL;
    PyObject *_python_par_mode = NULL;
    PyObject *_python_par_channel_axis = NULL;
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
                PyErr_Format( PyExc_TypeError, "toimage() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arr == key )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_high == key )
            {
                assert( _python_par_high == NULL );
                _python_par_high = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_low == key )
            {
                assert( _python_par_low == NULL );
                _python_par_low = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_cmin == key )
            {
                assert( _python_par_cmin == NULL );
                _python_par_cmin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_cmax == key )
            {
                assert( _python_par_cmax == NULL );
                _python_par_cmax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_pal == key )
            {
                assert( _python_par_pal == NULL );
                _python_par_pal = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mode == key )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_channel_axis == key )
            {
                assert( _python_par_channel_axis == NULL );
                _python_par_channel_axis = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arr, key ) == 1 )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_high, key ) == 1 )
            {
                assert( _python_par_high == NULL );
                _python_par_high = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_low, key ) == 1 )
            {
                assert( _python_par_low == NULL );
                _python_par_low = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cmin, key ) == 1 )
            {
                assert( _python_par_cmin == NULL );
                _python_par_cmin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_cmax, key ) == 1 )
            {
                assert( _python_par_cmax == NULL );
                _python_par_cmax = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_pal, key ) == 1 )
            {
                assert( _python_par_pal == NULL );
                _python_par_pal = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mode, key ) == 1 )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_channel_axis, key ) == 1 )
            {
                assert( _python_par_channel_axis == NULL );
                _python_par_channel_axis = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "toimage() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arr == NULL )
    {
        if ( 0 + self->m_defaults_given >= 8  )
        {
            _python_par_arr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 8 ) );
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
         if (unlikely( _python_par_high != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_high = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_high == NULL )
    {
        if ( 1 + self->m_defaults_given >= 8  )
        {
            _python_par_high = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 8 ) );
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
         if (unlikely( _python_par_low != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_low = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_low == NULL )
    {
        if ( 2 + self->m_defaults_given >= 8  )
        {
            _python_par_low = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 8 ) );
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
         if (unlikely( _python_par_cmin != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_cmin = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_cmin == NULL )
    {
        if ( 3 + self->m_defaults_given >= 8  )
        {
            _python_par_cmin = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 8 ) );
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
         if (unlikely( _python_par_cmax != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_cmax = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_cmax == NULL )
    {
        if ( 4 + self->m_defaults_given >= 8  )
        {
            _python_par_cmax = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 8 ) );
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
         if (unlikely( _python_par_pal != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 5 );
             goto error_exit;
         }

        _python_par_pal = INCREASE_REFCOUNT( args[ 5 ] );
    }
    else if ( _python_par_pal == NULL )
    {
        if ( 5 + self->m_defaults_given >= 8  )
        {
            _python_par_pal = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 5 - 8 ) );
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
         if (unlikely( _python_par_mode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 6 );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 6 ] );
    }
    else if ( _python_par_mode == NULL )
    {
        if ( 6 + self->m_defaults_given >= 8  )
        {
            _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 6 - 8 ) );
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
         if (unlikely( _python_par_channel_axis != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 7 );
             goto error_exit;
         }

        _python_par_channel_axis = INCREASE_REFCOUNT( args[ 7 ] );
    }
    else if ( _python_par_channel_axis == NULL )
    {
        if ( 7 + self->m_defaults_given >= 8  )
        {
            _python_par_channel_axis = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 7 - 8 ) );
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
    if (unlikely( _python_par_arr == NULL || _python_par_high == NULL || _python_par_low == NULL || _python_par_cmin == NULL || _python_par_cmax == NULL || _python_par_pal == NULL || _python_par_mode == NULL || _python_par_channel_axis == NULL ))
    {
        PyObject *values[] = { _python_par_arr, _python_par_high, _python_par_low, _python_par_cmin, _python_par_cmax, _python_par_pal, _python_par_mode, _python_par_channel_axis };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_toimage_of_module_scipy$misc$pilutil( self, _python_par_arr, _python_par_high, _python_par_low, _python_par_cmin, _python_par_cmax, _python_par_pal, _python_par_mode, _python_par_channel_axis );

error_exit:;

    Py_XDECREF( _python_par_arr );
    Py_XDECREF( _python_par_high );
    Py_XDECREF( _python_par_low );
    Py_XDECREF( _python_par_cmin );
    Py_XDECREF( _python_par_cmax );
    Py_XDECREF( _python_par_pal );
    Py_XDECREF( _python_par_mode );
    Py_XDECREF( _python_par_channel_axis );

    return NULL;
}

static PyObject *dparse_function_5_toimage_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 8 )
    {
        return impl_function_5_toimage_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_toimage_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_imrotate_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_arr, PyObject *_python_par_angle, PyObject *_python_par_interp )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arr; par_arr.object = _python_par_arr;
    PyObjectLocalVariable par_angle; par_angle.object = _python_par_angle;
    PyObjectLocalVariable par_interp; par_interp.object = _python_par_interp;
    PyObjectLocalVariable var_func;
    PyObjectLocalVariable var_im;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e42142f29bc519f0de8e448ea2638ba1, module_scipy$misc$pilutil );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 61279 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_arr.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 342;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 342;
        goto frame_exception_exit_1;
    }
    if (par_arr.object == NULL)
    {
        par_arr.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_arr.object;
        par_arr.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_assign_source_2 = PyDict_Copy( const_dict_fc671080428b826fbb19bb25f355e9d6 );
    assert( var_func.object == NULL );
    var_func.object = tmp_assign_source_2;

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_toimage );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_toimage );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258783 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_arr.object;

    frame_function->f_lineno = 344;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 344;
        goto frame_exception_exit_1;
    }
    assert( var_im.object == NULL );
    var_im.object = tmp_assign_source_3;

    tmp_source_name_1 = var_im.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rotate );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_angle.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 8980 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_subscr_target_1 = var_func.object;

    tmp_subscr_subscript_1 = par_interp.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259152 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_resample;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 345;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_3, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }
    assert( var_im.object != NULL );
    {
        PyObject *old = var_im.object;
        var_im.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_fromimage );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fromimage );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258692 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = var_im.object;

    frame_function->f_lineno = 346;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
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
    if ((var_func.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_func,
            var_func.object
        );

    }
    if ((var_im.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_im,
            var_im.object
        );

    }
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            par_arr.object
        );

    }
    if ((par_angle.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_angle,
            par_angle.object
        );

    }
    if ((par_interp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_interp,
            par_interp.object
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
static PyObject *fparse_function_6_imrotate_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arr = NULL;
    PyObject *_python_par_angle = NULL;
    PyObject *_python_par_interp = NULL;
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
                PyErr_Format( PyExc_TypeError, "imrotate() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arr == key )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_angle == key )
            {
                assert( _python_par_angle == NULL );
                _python_par_angle = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_interp == key )
            {
                assert( _python_par_interp == NULL );
                _python_par_interp = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arr, key ) == 1 )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_angle, key ) == 1 )
            {
                assert( _python_par_angle == NULL );
                _python_par_angle = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_interp, key ) == 1 )
            {
                assert( _python_par_interp == NULL );
                _python_par_interp = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "imrotate() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arr == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_arr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_angle != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_angle = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_angle == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_angle = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_interp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_interp = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_interp == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_interp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_arr == NULL || _python_par_angle == NULL || _python_par_interp == NULL ))
    {
        PyObject *values[] = { _python_par_arr, _python_par_angle, _python_par_interp };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_imrotate_of_module_scipy$misc$pilutil( self, _python_par_arr, _python_par_angle, _python_par_interp );

error_exit:;

    Py_XDECREF( _python_par_arr );
    Py_XDECREF( _python_par_angle );
    Py_XDECREF( _python_par_interp );

    return NULL;
}

static PyObject *dparse_function_6_imrotate_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_6_imrotate_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_imrotate_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_imshow_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_arr )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arr; par_arr.object = _python_par_arr;
    PyObjectLocalVariable var_im;
    PyObjectLocalVariable var_fnum;
    PyObjectLocalVariable var_fname;
    PyObjectLocalVariable var_os;
    PyObjectLocalVariable var_cmd;
    PyObjectLocalVariable var_status;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0c7e99e05b398cd433a154c63775a77d, module_scipy$misc$pilutil );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_toimage );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_toimage );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258783 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_arr.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 373;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 373;
        goto frame_exception_exit_1;
    }
    assert( var_im.object == NULL );
    var_im.object = tmp_assign_source_1;

    // Tried code
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_tempfile );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tempfile );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 109945 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mkstemp );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = const_str_digest_6446d860dbbfe540e9e2cbab5f98f1e3;
    frame_function->f_lineno = 374;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__source_iter.object == NULL );
    tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_2;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_3 = UNPACK_PARAMETER_NEXT( tmp_unpack_1, 0 );
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


        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_1.object == NULL );
    tmp_tuple_unpack_1__element_1.object = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter.object;

    tmp_assign_source_4 = UNPACK_PARAMETER_NEXT( tmp_unpack_2, 1 );
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


        frame_function->f_lineno = 374;
        goto try_finally_handler_1;
    }
    assert( tmp_tuple_unpack_1__element_2.object == NULL );
    tmp_tuple_unpack_1__element_2.object = tmp_assign_source_4;

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
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1.object;

    assert( var_fnum.object == NULL );
    var_fnum.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2.object;

    assert( var_fname.object == NULL );
    var_fname.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

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
    // Tried block of try/except
    tmp_source_name_2 = var_im.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1685 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_save );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_3 = var_fname.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52983 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 376;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
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
    tmp_make_exception_arg_1 = const_str_digest_5fd3022d95c2e2e78f9217abffc208e7;
    frame_function->f_lineno = 378;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 378;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 378;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    try_except_end_1:;
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_im.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_im,
            var_im.object
        );

    }
    if ((var_fnum.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fnum,
            var_fnum.object
        );

    }
    if ((var_fname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fname,
            var_fname.object
        );

    }
    if ((var_os.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_os,
            var_os.object
        );

    }
    if ((var_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_cmd,
            var_cmd.object
        );

    }
    if ((var_status.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_status,
            var_status.object
        );

    }
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_arr,
            par_arr.object
        );

    }
    frame_function->f_lineno = 380;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 380;
        goto frame_exception_exit_1;
    }
    assert( var_os.object == NULL );
    var_os.object = tmp_assign_source_7;

    tmp_source_name_3 = var_os.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_close );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_fnum.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259204 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 381;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 381;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = var_os.object;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_environ );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 383;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 383;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_SCIPY_PIL_IMAGE_VIEWER;
    tmp_call_arg_element_6 = const_str_plain_see;
    frame_function->f_lineno = 383;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 383;
        goto frame_exception_exit_1;
    }
    assert( var_cmd.object == NULL );
    var_cmd.object = tmp_assign_source_8;

    tmp_source_name_6 = var_os.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_system );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_29bf226e186bf57b52fac1b0ba1f88ff;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_cmd.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_fname.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52983 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 384;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 384;
        goto frame_exception_exit_1;
    }
    assert( var_status.object == NULL );
    var_status.object = tmp_assign_source_9;

    tmp_source_name_7 = var_os.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_unlink );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = var_fname.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52983 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 386;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 386;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = var_status.object;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 387;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_2 = const_str_digest_8223dc332596d5812873fff866ffb363;
    frame_function->f_lineno = 388;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, tmp_make_exception_arg_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 388;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 388;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;

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
    if ((var_im.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_im,
            var_im.object
        );

    }
    if ((var_fnum.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fnum,
            var_fnum.object
        );

    }
    if ((var_fname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fname,
            var_fname.object
        );

    }
    if ((var_os.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_os,
            var_os.object
        );

    }
    if ((var_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_cmd,
            var_cmd.object
        );

    }
    if ((var_status.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_status,
            var_status.object
        );

    }
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            par_arr.object
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
static PyObject *fparse_function_7_imshow_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arr = NULL;
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
                PyErr_Format( PyExc_TypeError, "imshow() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arr == key )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arr, key ) == 1 )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "imshow() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arr == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_arr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_arr == NULL ))
    {
        PyObject *values[] = { _python_par_arr };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_imshow_of_module_scipy$misc$pilutil( self, _python_par_arr );

error_exit:;

    Py_XDECREF( _python_par_arr );

    return NULL;
}

static PyObject *dparse_function_7_imshow_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_7_imshow_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_imshow_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_imresize_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_arr, PyObject *_python_par_size, PyObject *_python_par_interp, PyObject *_python_par_mode )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arr; par_arr.object = _python_par_arr;
    PyObjectLocalVariable par_size; par_size.object = _python_par_size;
    PyObjectLocalVariable par_interp; par_interp.object = _python_par_interp;
    PyObjectLocalVariable par_mode; par_mode.object = _python_par_mode;
    PyObjectLocalVariable var_im;
    PyObjectLocalVariable var_ts;
    PyObjectLocalVariable var_percent;
    PyObjectLocalVariable var_func;
    PyObjectLocalVariable var_imnew;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_arg_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_da48530f6a322df871687a5c43dd0f31, module_scipy$misc$pilutil );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_toimage );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_toimage );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258783 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 418;
        goto frame_exception_exit_1;
    }

    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_arr.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 418;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_mode.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 418;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_mode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 418;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 418;
        goto frame_exception_exit_1;
    }
    assert( var_im.object == NULL );
    var_im.object = tmp_assign_source_1;

    tmp_type_arg_1 = par_size.object;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 419;
        goto frame_exception_exit_1;
    }
    assert( var_ts.object == NULL );
    var_ts.object = tmp_assign_source_2;

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_issubdtype );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubdtype );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199248 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = var_ts.object;

    tmp_call_arg_element_2 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 420;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 420;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 420;
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
    tmp_binop_left_1 = par_size.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_float_100_0;
    tmp_assign_source_3 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 421;
        goto frame_exception_exit_1;
    }
    assert( var_percent.object == NULL );
    var_percent.object = tmp_assign_source_3;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = var_im.object;

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 422;
    tmp_binop_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_2 = var_percent.object;

    tmp_source_name_1 = BINARY_OPERATION_MUL( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astype );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 422;
    tmp_tuple_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 422;
        goto frame_exception_exit_1;
    }
    if (par_size.object == NULL)
    {
        par_size.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = par_size.object;
        par_size.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_issubdtype );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubdtype );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 199248 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }

    tmp_type_arg_2 = par_size.object;

    if ( tmp_type_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = BUILTIN_TYPE1( tmp_type_arg_2 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = LOOKUP_BUILTIN( const_str_plain_float );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 423;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 423;
        goto frame_exception_exit_1;
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
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 13582 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = var_im.object;

    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 424;
    tmp_binop_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_3 = par_size.object;

    if ( tmp_binop_right_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astype );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = LOOKUP_BUILTIN( const_str_plain_int );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 424;
    tmp_tuple_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_tuple_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = PySequence_Tuple( tmp_tuple_arg_2 );
    Py_DECREF( tmp_tuple_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 424;
        goto frame_exception_exit_1;
    }
    if (par_size.object == NULL)
    {
        par_size.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = par_size.object;
        par_size.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_6 = PyTuple_New( 2 );
    tmp_subscr_target_1 = par_size.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_pos_1;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_2 );
    tmp_subscr_target_2 = par_size.object;

    if ( tmp_subscr_target_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 426;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_6, 1, tmp_tuple_element_2 );
    if (par_size.object == NULL)
    {
        par_size.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = par_size.object;
        par_size.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    branch_end_2:;
    branch_end_1:;
    tmp_assign_source_7 = PyDict_Copy( const_dict_fc671080428b826fbb19bb25f355e9d6 );
    assert( var_func.object == NULL );
    var_func.object = tmp_assign_source_7;

    tmp_source_name_5 = var_im.object;

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_resize );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_size.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_subscr_target_3 = var_func.object;

    tmp_subscr_subscript_3 = par_interp.object;

    if ( tmp_subscr_subscript_3 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259152 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );

        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_resample;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 428;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_8, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 428;
        goto frame_exception_exit_1;
    }
    assert( var_imnew.object == NULL );
    var_imnew.object = tmp_assign_source_8;

    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_fromimage );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fromimage );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258692 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 429;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = var_imnew.object;

    frame_function->f_lineno = 429;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 429;
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
    if ((var_im.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_im,
            var_im.object
        );

    }
    if ((var_ts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ts,
            var_ts.object
        );

    }
    if ((var_percent.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_percent,
            var_percent.object
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
    if ((var_imnew.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_imnew,
            var_imnew.object
        );

    }
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            par_arr.object
        );

    }
    if ((par_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_size,
            par_size.object
        );

    }
    if ((par_interp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_interp,
            par_interp.object
        );

    }
    if ((par_mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mode,
            par_mode.object
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
static PyObject *fparse_function_8_imresize_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arr = NULL;
    PyObject *_python_par_size = NULL;
    PyObject *_python_par_interp = NULL;
    PyObject *_python_par_mode = NULL;
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
                PyErr_Format( PyExc_TypeError, "imresize() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arr == key )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_size == key )
            {
                assert( _python_par_size == NULL );
                _python_par_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_interp == key )
            {
                assert( _python_par_interp == NULL );
                _python_par_interp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mode == key )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arr, key ) == 1 )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_size, key ) == 1 )
            {
                assert( _python_par_size == NULL );
                _python_par_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_interp, key ) == 1 )
            {
                assert( _python_par_interp == NULL );
                _python_par_interp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mode, key ) == 1 )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "imresize() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arr == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_arr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_size != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_size = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_size == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_interp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_interp = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_interp == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_interp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_mode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_mode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_arr == NULL || _python_par_size == NULL || _python_par_interp == NULL || _python_par_mode == NULL ))
    {
        PyObject *values[] = { _python_par_arr, _python_par_size, _python_par_interp, _python_par_mode };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_imresize_of_module_scipy$misc$pilutil( self, _python_par_arr, _python_par_size, _python_par_interp, _python_par_mode );

error_exit:;

    Py_XDECREF( _python_par_arr );
    Py_XDECREF( _python_par_size );
    Py_XDECREF( _python_par_interp );
    Py_XDECREF( _python_par_mode );

    return NULL;
}

static PyObject *dparse_function_8_imresize_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_8_imresize_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_imresize_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_imfilter_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject *_python_par_arr, PyObject *_python_par_ftype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arr; par_arr.object = _python_par_arr;
    PyObjectLocalVariable par_ftype; par_ftype.object = _python_par_ftype;
    PyObjectLocalVariable var__tdict;
    PyObjectLocalVariable var_im;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6007290b2035b711397df1998fdae23f, module_scipy$misc$pilutil );
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
    tmp_assign_source_1 = _PyDict_NewPresized( 10 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_BLUR );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 457;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_blur;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 458;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CONTOUR );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 458;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_contour;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DETAIL );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 459;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_detail;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 460;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_EDGE_ENHANCE );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 460;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_edge_enhance;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EDGE_ENHANCE_MORE );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 461;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_edge_enhance_more;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 462;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_EMBOSS );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 462;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_emboss;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 463;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_FIND_EDGES );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 463;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_find_edges;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SMOOTH );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 464;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_smooth;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_SMOOTH_MORE );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 465;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = const_str_plain_smooth_more;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ImageFilter );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259254 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_SHARPEN );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_1 );

        frame_function->f_lineno = 466;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_10 = const_str_plain_sharpen;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    assert( var__tdict.object == NULL );
    var__tdict.object = tmp_assign_source_1;

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_toimage );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_toimage );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258783 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 469;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_arr.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 10450 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 469;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 469;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 469;
        goto frame_exception_exit_1;
    }
    assert( var_im.object == NULL );
    var_im.object = tmp_assign_source_2;

    tmp_compare_left_1 = par_ftype.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259294 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 470;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = var__tdict.object;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 470;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_28fd2bc0f08e526bfcb03139e2f716ad;
    frame_function->f_lineno = 471;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 471;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 471;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_fromimage );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fromimage );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 258692 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = var_im.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_filter );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_1 = var__tdict.object;

    tmp_subscr_subscript_1 = par_ftype.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 259294 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 472;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 472;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 472;
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
    if ((var__tdict.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__tdict,
            var__tdict.object
        );

    }
    if ((var_im.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_im,
            var_im.object
        );

    }
    if ((par_arr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arr,
            par_arr.object
        );

    }
    if ((par_ftype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ftype,
            par_ftype.object
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
static PyObject *fparse_function_9_imfilter_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arr = NULL;
    PyObject *_python_par_ftype = NULL;
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
                PyErr_Format( PyExc_TypeError, "imfilter() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arr == key )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ftype == key )
            {
                assert( _python_par_ftype == NULL );
                _python_par_ftype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arr, key ) == 1 )
            {
                assert( _python_par_arr == NULL );
                _python_par_arr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ftype, key ) == 1 )
            {
                assert( _python_par_ftype == NULL );
                _python_par_ftype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "imfilter() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arr != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arr == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_arr = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_ftype != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ftype = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ftype == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ftype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_arr == NULL || _python_par_ftype == NULL ))
    {
        PyObject *values[] = { _python_par_arr, _python_par_ftype };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_imfilter_of_module_scipy$misc$pilutil( self, _python_par_arr, _python_par_ftype );

error_exit:;

    Py_XDECREF( _python_par_arr );
    Py_XDECREF( _python_par_ftype );

    return NULL;
}

static PyObject *dparse_function_9_imfilter_of_module_scipy$misc$pilutil( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_9_imfilter_of_module_scipy$misc$pilutil( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_imfilter_of_module_scipy$misc$pilutil( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_bytescale_of_module_scipy$misc$pilutil( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_bytescale_of_module_scipy$misc$pilutil,
        dparse_function_1_bytescale_of_module_scipy$misc$pilutil,
        const_str_plain_bytescale,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a81b8432466a16e4f0931b097b68bfc3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_cd6ec3f2ce7e4dca0c347bf885b1f7fc
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_imread_of_module_scipy$misc$pilutil( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_imread_of_module_scipy$misc$pilutil,
        dparse_function_2_imread_of_module_scipy$misc$pilutil,
        const_str_plain_imread,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4c4153d827827ca48bfbbfb1e3a41397,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_0e8614dfae9de5af41a6a469deead9c1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_imsave_of_module_scipy$misc$pilutil( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_imsave_of_module_scipy$misc$pilutil,
        dparse_function_3_imsave_of_module_scipy$misc$pilutil,
        const_str_plain_imsave,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10f278f46e0151ee90e5bf63533d20c5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_53a44605076569ccacbe1fb134711e03
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_fromimage_of_module_scipy$misc$pilutil( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_fromimage_of_module_scipy$misc$pilutil,
        dparse_function_4_fromimage_of_module_scipy$misc$pilutil,
        const_str_plain_fromimage,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3f59baf2fe74ec0d6b227fd5df7ba5db,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_c7fb7b0ada415c581e662929efbf0335
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_toimage_of_module_scipy$misc$pilutil( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_toimage_of_module_scipy$misc$pilutil,
        dparse_function_5_toimage_of_module_scipy$misc$pilutil,
        const_str_plain_toimage,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a20c8eb5d5c22ba0225f7fe086bf4f31,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_bf08c897356327199606626a91635ab8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_imrotate_of_module_scipy$misc$pilutil( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_imrotate_of_module_scipy$misc$pilutil,
        dparse_function_6_imrotate_of_module_scipy$misc$pilutil,
        const_str_plain_imrotate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5d842249ac4f25bc671ef000d9cf01b9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_a875790cb1b7785d8c5ab2c2e73af7e7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_imshow_of_module_scipy$misc$pilutil(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_imshow_of_module_scipy$misc$pilutil,
        dparse_function_7_imshow_of_module_scipy$misc$pilutil,
        const_str_plain_imshow,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd54e45eb59f633f1f8ba637de994104,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_3397d911139cd99e95d19aeb04ea5ffb
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_imresize_of_module_scipy$misc$pilutil( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_imresize_of_module_scipy$misc$pilutil,
        dparse_function_8_imresize_of_module_scipy$misc$pilutil,
        const_str_plain_imresize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_78a237ae4b2087c08b0ea5c0f6722dde,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_8b1e1404de3da90ea97698b97917818d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_imfilter_of_module_scipy$misc$pilutil(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_imfilter_of_module_scipy$misc$pilutil,
        dparse_function_9_imfilter_of_module_scipy$misc$pilutil,
        const_str_plain_imfilter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8685cdf5d32c583d9ce4abca1d63c074,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_scipy$misc$pilutil,
        const_str_digest_ae1ee90cbb3a01c42b37b58c4f0cc478
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_scipy$misc$pilutil =
{
    PyModuleDef_HEAD_INIT,
    "scipy.misc.pilutil",   /* m_name */
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

MOD_INIT_DECL( scipy$misc$pilutil )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_scipy$misc$pilutil );
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

    // puts( "in initscipy$misc$pilutil" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_scipy$misc$pilutil = Py_InitModule4(
        "scipy.misc.pilutil",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_scipy$misc$pilutil = PyModule_Create( &mdef_scipy$misc$pilutil );
#endif

    moduledict_scipy$misc$pilutil = (PyDictObject *)((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;

    assertObject( module_scipy$misc$pilutil );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b21d415180364e96c89b05d942f8442b, module_scipy$misc$pilutil );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_scipy$misc$pilutil );

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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
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
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_globals_22;
    PyObject *tmp_import_globals_23;
    PyObject *tmp_import_globals_24;
    PyObject *tmp_import_globals_25;
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
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_9235faf35f77106604f99696a39913ad;
    UPDATE_STRING_DICT0( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f741acad7cb3089fb2c8e94562676c8e;
    UPDATE_STRING_DICT0( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_5abbeb0ff28a6f262012f1e98ca3cf83, module_scipy$misc$pilutil );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bbb623b1e1f1107d9edb2c8c75d36edd_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 13;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_tempfile, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_tempfile, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_6, tmp_import_globals_6, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_amin );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_amin, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_7, tmp_import_globals_7, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_amax );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_amax, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_8, tmp_import_globals_8, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ravel );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ravel, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_9, tmp_import_globals_9, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_10, tmp_import_globals_10, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_cast );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_cast, tmp_assign_source_12 );
    tmp_import_globals_11 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_11, tmp_import_globals_11, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_arange );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_13 );
    tmp_import_globals_12 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_12, tmp_import_globals_12, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_ones );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ones, tmp_assign_source_14 );
    tmp_import_globals_13 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_13, tmp_import_globals_13, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_newaxis );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_newaxis, tmp_assign_source_15 );
    tmp_import_globals_14 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_14, tmp_import_globals_14, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_transpose );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_transpose, tmp_assign_source_16 );
    tmp_import_globals_15 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_15, tmp_import_globals_15, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_mgrid );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_mgrid, tmp_assign_source_17 );
    tmp_import_globals_16 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_16, tmp_import_globals_16, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_iscomplexobj );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_iscomplexobj, tmp_assign_source_18 );
    tmp_import_globals_17 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_17, tmp_import_globals_17, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_sum );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_sum, tmp_assign_source_19 );
    tmp_import_globals_18 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_18, tmp_import_globals_18, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_zeros );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_20 );
    tmp_import_globals_19 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_19, tmp_import_globals_19, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_uint8 );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_uint8, tmp_assign_source_21 );
    tmp_import_globals_20 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_20, tmp_import_globals_20, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_issubdtype );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_issubdtype, tmp_assign_source_22 );
    tmp_import_globals_21 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_21, tmp_import_globals_21, const_tuple_3d23bf12ea3cccc267e3a0f63dbb6c0a_tuple, const_int_0 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_array );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_23 );
    // Tried block of try/except
    tmp_import_globals_22 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_plain_PIL, tmp_import_globals_22, tmp_import_globals_22, const_tuple_str_plain_Image_str_plain_ImageFilter_tuple, const_int_0 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto try_except_handler_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_Image );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image, tmp_assign_source_24 );
    tmp_import_globals_23 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_plain_PIL, tmp_import_globals_23, tmp_import_globals_23, const_tuple_str_plain_Image_str_plain_ImageFilter_tuple, const_int_0 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto try_except_handler_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_ImageFilter );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter, tmp_assign_source_25 );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if (exception_tb == NULL)
    {
        exception_tb = MAKE_TRACEBACK( INCREASE_REFCOUNT( frame_module ) );
    }
    else if ( exception_tb->tb_frame != frame_module || exception_tb->tb_lineno != frame_module->f_lineno )
    {
        exception_tb = ADD_TRACEBACK( frame_module, exception_tb );
    }

    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    PUBLISH_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_24 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 22;
    tmp_assign_source_26 = IMPORT_MODULE( const_str_plain_Image, tmp_import_globals_24, tmp_import_globals_24, Py_None, const_int_0 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image, tmp_assign_source_26 );
    tmp_import_globals_25 = ((PyModuleObject *)module_scipy$misc$pilutil)->md_dict;
    frame_module->f_lineno = 23;
    tmp_assign_source_27 = IMPORT_MODULE( const_str_plain_ImageFilter, tmp_import_globals_25, tmp_import_globals_25, Py_None, const_int_0 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_ImageFilter, tmp_assign_source_27 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_hasattr_source_1 == NULL ))
    {
        tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 510 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_frombytes;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 510 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fromstring );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_Image );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Image );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 510 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_frombytes, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_2:;
    tmp_assign_source_28 = LIST_COPY( const_list_dd0600d05ef5bf377355b5e6cabc85b0_list );
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_28 );
    tmp_defaults_1 = const_tuple_none_none_int_pos_255_int_0_tuple;
    tmp_assign_source_29 = MAKE_FUNCTION_function_1_bytescale_of_module_scipy$misc$pilutil( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_29 );

        frame_module->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_bytescale, tmp_assign_source_29 );
    tmp_defaults_2 = const_tuple_int_0_tuple;
    tmp_assign_source_30 = MAKE_FUNCTION_function_2_imread_of_module_scipy$misc$pilutil( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_imread, tmp_assign_source_30 );
    tmp_defaults_3 = const_tuple_none_tuple;
    tmp_assign_source_31 = MAKE_FUNCTION_function_3_imsave_of_module_scipy$misc$pilutil( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_31 );

        frame_module->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_imsave, tmp_assign_source_31 );
    tmp_defaults_4 = const_tuple_int_0_tuple;
    tmp_assign_source_32 = MAKE_FUNCTION_function_4_fromimage_of_module_scipy$misc$pilutil( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        frame_module->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_fromimage, tmp_assign_source_32 );
    tmp_assign_source_33 = const_str_digest_aa12e771807a1c67862fbedb677ae9bb;
    UPDATE_STRING_DICT0( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain__errstr, tmp_assign_source_33 );
    tmp_defaults_5 = const_tuple_int_pos_255_int_0_none_none_none_none_none_tuple;
    tmp_assign_source_34 = MAKE_FUNCTION_function_5_toimage_of_module_scipy$misc$pilutil( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_34 );

        frame_module->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_toimage, tmp_assign_source_34 );
    tmp_defaults_6 = const_tuple_str_plain_bilinear_tuple;
    tmp_assign_source_35 = MAKE_FUNCTION_function_6_imrotate_of_module_scipy$misc$pilutil( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        frame_module->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_imrotate, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_function_7_imshow_of_module_scipy$misc$pilutil(  );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_36 );

        frame_module->f_lineno = 349;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_imshow, tmp_assign_source_36 );
    tmp_defaults_7 = const_tuple_str_plain_bilinear_none_tuple;
    tmp_assign_source_37 = MAKE_FUNCTION_function_8_imresize_of_module_scipy$misc$pilutil( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_37 );

        frame_module->f_lineno = 391;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_imresize, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_function_9_imfilter_of_module_scipy$misc$pilutil(  );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_38 );

        frame_module->f_lineno = 432;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_scipy$misc$pilutil, (Nuitka_StringObject *)const_str_plain_imfilter, tmp_assign_source_38 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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

    return MOD_RETURN_VALUE( module_scipy$misc$pilutil );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
