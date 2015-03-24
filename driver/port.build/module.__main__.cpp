// Generated code for Python source for module '__main__'
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

// The _module___main__ is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module___main__;
PyDictObject *moduledict___main__;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_space;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_9600;
extern PyObject *const_str_plain_OK;
extern PyObject *const_str_plain_aux;
static PyObject *const_str_plain_p2m;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_who;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_site;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_scipy;
extern PyObject *const_str_plain_simps;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_tools;
extern PyObject *const_str_plain_write;
static PyObject *const_str_angle_module;
extern PyObject *const_str_plain_Serial;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_serial;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_arduino;
extern PyObject *const_str_plain_devices;
extern PyObject *const_str_plain_num2str;
extern PyObject *const_str_plain_str2num;
extern PyObject *const_str_plain_tap_key;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___main__;
extern PyObject *const_str_plain_comports;
extern PyObject *const_str_plain_cumtrapz;
extern PyObject *const_str_plain_readline;
extern PyObject *const_str_plain_integrate;
extern PyObject *const_str_plain_threading;
extern PyObject *const_str_plain_PyKeyboard;
extern PyObject *const_str_plain_list_ports;
extern PyObject *const_str_plain_pykeyboard;
extern PyObject *const_str_plain_MatlabSender;
extern PyObject *const_tuple_str_plain_PyKeyboard_tuple;
extern PyObject *const_tuple_int_0_int_pos_1_int_pos_2_tuple;
static PyObject *const_list_list_empty_list_empty_list_empty_list;
extern PyObject *const_str_digest_0df3489f1b16927cc9a8cf4fbd6899d5;
static PyObject *const_str_digest_42ca426ab0156925dc2c2da8b70e7844;
extern PyObject *const_str_digest_70e6205803ec3c66a2fdd2c934f08873;
static PyObject *const_str_digest_72fe656a72d7fa4698cf6087ea8e037d;
static PyObject *const_str_digest_e24c604d263ce0f3fe9b58bff2342340;

static void _initModuleConstants(void)
{
    const_str_plain_p2m = UNSTREAM_STRING( &constant_bin[ 45793 ], 3, 1 );
    const_str_angle_module = UNSTREAM_STRING( &constant_bin[ 443309 ], 8, 0 );
    const_str_plain_arduino = UNSTREAM_STRING( &constant_bin[ 443317 ], 7, 1 );
    const_list_list_empty_list_empty_list_empty_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_list_empty_list_empty_list_empty_list, 0, const_list_empty ); Py_INCREF( const_list_empty );
    PyList_SET_ITEM( const_list_list_empty_list_empty_list_empty_list, 1, const_list_empty ); Py_INCREF( const_list_empty );
    PyList_SET_ITEM( const_list_list_empty_list_empty_list_empty_list, 2, const_list_empty ); Py_INCREF( const_list_empty );
    const_str_digest_42ca426ab0156925dc2c2da8b70e7844 = UNSTREAM_STRING( &constant_bin[ 443324 ], 7, 0 );
    const_str_digest_72fe656a72d7fa4698cf6087ea8e037d = UNSTREAM_STRING( &constant_bin[ 443331 ], 19, 0 );
    const_str_digest_e24c604d263ce0f3fe9b58bff2342340 = UNSTREAM_STRING( &constant_bin[ 443350 ], 22, 0 );
}

// The module code objects.
static PyCodeObject *codeobj_b13c4fd656394ed2f041484d32fca06e;

static void _initModuleCodeObjects(void)
{
    codeobj_b13c4fd656394ed2f041484d32fca06e = MAKE_CODEOBJ( const_str_digest_42ca426ab0156925dc2c2da8b70e7844, const_str_angle_module, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef___main__ =
{
    PyModuleDef_HEAD_INIT,
    "__main__",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 1

#if _MODULE_UNFREEZER

#include "nuitka/unfreezing.hpp"

// Table for lookup to find "frozen" modules or DLLs, i.e. the ones included in
// or along this binary.
MOD_INIT_DECL( Image );
MOD_INIT_DECL( ImageFilter );
MOD_INIT_DECL( MatlabSender );
MOD_INIT_DECL( PIL );
MOD_INIT_DECL( PIL$BmpImagePlugin );
MOD_INIT_DECL( PIL$GifImagePlugin );
MOD_INIT_DECL( PIL$GimpGradientFile );
MOD_INIT_DECL( PIL$GimpPaletteFile );
MOD_INIT_DECL( PIL$Image );
MOD_INIT_DECL( PIL$ImageChops );
MOD_INIT_DECL( PIL$ImageColor );
MOD_INIT_DECL( PIL$ImageFile );
MOD_INIT_DECL( PIL$ImageFilter );
MOD_INIT_DECL( PIL$ImageMode );
MOD_INIT_DECL( PIL$ImagePalette );
MOD_INIT_DECL( PIL$ImageShow );
MOD_INIT_DECL( PIL$JpegImagePlugin );
MOD_INIT_DECL( PIL$JpegPresets );
MOD_INIT_DECL( PIL$MpoImagePlugin );
MOD_INIT_DECL( PIL$PaletteFile );
MOD_INIT_DECL( PIL$PngImagePlugin );
MOD_INIT_DECL( PIL$PpmImagePlugin );
MOD_INIT_DECL( PIL$PyAccess );
MOD_INIT_DECL( PIL$TiffImagePlugin );
MOD_INIT_DECL( PIL$TiffTags );
MOD_INIT_DECL( PIL$_binary );
MOD_INIT_DECL( PIL$_util );
MOD_INIT_DECL( Xlib );
MOD_INIT_DECL( Xlib$X );
MOD_INIT_DECL( Xlib$XK );
MOD_INIT_DECL( Xlib$Xatom );
MOD_INIT_DECL( Xlib$Xutil );
MOD_INIT_DECL( Xlib$display );
MOD_INIT_DECL( Xlib$error );
MOD_INIT_DECL( Xlib$ext );
MOD_INIT_DECL( Xlib$ext$record );
MOD_INIT_DECL( Xlib$ext$xtest );
MOD_INIT_DECL( Xlib$protocol );
MOD_INIT_DECL( Xlib$protocol$display );
MOD_INIT_DECL( Xlib$protocol$event );
MOD_INIT_DECL( Xlib$protocol$request );
MOD_INIT_DECL( Xlib$protocol$rq );
MOD_INIT_DECL( Xlib$protocol$structs );
MOD_INIT_DECL( Xlib$support );
MOD_INIT_DECL( Xlib$support$connect );
MOD_INIT_DECL( Xlib$support$lock );
MOD_INIT_DECL( Xlib$xobject );
MOD_INIT_DECL( Xlib$xobject$colormap );
MOD_INIT_DECL( Xlib$xobject$cursor );
MOD_INIT_DECL( Xlib$xobject$drawable );
MOD_INIT_DECL( Xlib$xobject$fontable );
MOD_INIT_DECL( Xlib$xobject$icccm );
MOD_INIT_DECL( Xlib$xobject$resource );
MOD_INIT_DECL( _markerlib );
MOD_INIT_DECL( _markerlib$markers );
MOD_INIT_DECL( decorator );
MOD_INIT_DECL( easy_install );
MOD_INIT_DECL( numpy );
MOD_INIT_DECL( numpy$__config__ );
MOD_INIT_DECL( numpy$_import_tools );
MOD_INIT_DECL( numpy$add_newdocs );
MOD_INIT_DECL( numpy$compat );
MOD_INIT_DECL( numpy$compat$_inspect );
MOD_INIT_DECL( numpy$compat$py3k );
MOD_INIT_DECL( numpy$core );
MOD_INIT_DECL( numpy$core$_internal );
MOD_INIT_DECL( numpy$core$_methods );
MOD_INIT_DECL( numpy$core$arrayprint );
MOD_INIT_DECL( numpy$core$defchararray );
MOD_INIT_DECL( numpy$core$fromnumeric );
MOD_INIT_DECL( numpy$core$function_base );
MOD_INIT_DECL( numpy$core$getlimits );
MOD_INIT_DECL( numpy$core$info );
MOD_INIT_DECL( numpy$core$machar );
MOD_INIT_DECL( numpy$core$memmap );
MOD_INIT_DECL( numpy$core$numeric );
MOD_INIT_DECL( numpy$core$numerictypes );
MOD_INIT_DECL( numpy$core$records );
MOD_INIT_DECL( numpy$core$shape_base );
MOD_INIT_DECL( numpy$ctypeslib );
MOD_INIT_DECL( numpy$distutils );
MOD_INIT_DECL( numpy$distutils$__config__ );
MOD_INIT_DECL( numpy$distutils$__version__ );
MOD_INIT_DECL( numpy$distutils$ccompiler );
MOD_INIT_DECL( numpy$distutils$command );
MOD_INIT_DECL( numpy$distutils$command$autodist );
MOD_INIT_DECL( numpy$distutils$command$bdist_rpm );
MOD_INIT_DECL( numpy$distutils$command$build );
MOD_INIT_DECL( numpy$distutils$command$build_clib );
MOD_INIT_DECL( numpy$distutils$command$build_ext );
MOD_INIT_DECL( numpy$distutils$command$build_py );
MOD_INIT_DECL( numpy$distutils$command$build_scripts );
MOD_INIT_DECL( numpy$distutils$command$build_src );
MOD_INIT_DECL( numpy$distutils$command$config );
MOD_INIT_DECL( numpy$distutils$command$config_compiler );
MOD_INIT_DECL( numpy$distutils$command$develop );
MOD_INIT_DECL( numpy$distutils$command$egg_info );
MOD_INIT_DECL( numpy$distutils$command$install );
MOD_INIT_DECL( numpy$distutils$command$install_clib );
MOD_INIT_DECL( numpy$distutils$command$install_data );
MOD_INIT_DECL( numpy$distutils$command$install_headers );
MOD_INIT_DECL( numpy$distutils$command$sdist );
MOD_INIT_DECL( numpy$distutils$compat );
MOD_INIT_DECL( numpy$distutils$conv_template );
MOD_INIT_DECL( numpy$distutils$core );
MOD_INIT_DECL( numpy$distutils$cpuinfo );
MOD_INIT_DECL( numpy$distutils$environment );
MOD_INIT_DECL( numpy$distutils$exec_command );
MOD_INIT_DECL( numpy$distutils$extension );
MOD_INIT_DECL( numpy$distutils$fcompiler );
MOD_INIT_DECL( numpy$distutils$from_template );
MOD_INIT_DECL( numpy$distutils$info );
MOD_INIT_DECL( numpy$distutils$log );
MOD_INIT_DECL( numpy$distutils$mingw32ccompiler );
MOD_INIT_DECL( numpy$distutils$misc_util );
MOD_INIT_DECL( numpy$distutils$npy_pkg_config );
MOD_INIT_DECL( numpy$distutils$numpy_distribution );
MOD_INIT_DECL( numpy$distutils$system_info );
MOD_INIT_DECL( numpy$distutils$unixccompiler );
MOD_INIT_DECL( numpy$dual );
MOD_INIT_DECL( numpy$f2py );
MOD_INIT_DECL( numpy$f2py$__version__ );
MOD_INIT_DECL( numpy$f2py$auxfuncs );
MOD_INIT_DECL( numpy$f2py$capi_maps );
MOD_INIT_DECL( numpy$f2py$cb_rules );
MOD_INIT_DECL( numpy$f2py$cfuncs );
MOD_INIT_DECL( numpy$f2py$common_rules );
MOD_INIT_DECL( numpy$f2py$crackfortran );
MOD_INIT_DECL( numpy$f2py$diagnose );
MOD_INIT_DECL( numpy$f2py$f2py2e );
MOD_INIT_DECL( numpy$f2py$f2py_testing );
MOD_INIT_DECL( numpy$f2py$f90mod_rules );
MOD_INIT_DECL( numpy$f2py$func2subr );
MOD_INIT_DECL( numpy$f2py$info );
MOD_INIT_DECL( numpy$f2py$rules );
MOD_INIT_DECL( numpy$f2py$use_rules );
MOD_INIT_DECL( numpy$fft );
MOD_INIT_DECL( numpy$fft$fftpack );
MOD_INIT_DECL( numpy$fft$helper );
MOD_INIT_DECL( numpy$fft$info );
MOD_INIT_DECL( numpy$lib );
MOD_INIT_DECL( numpy$lib$_datasource );
MOD_INIT_DECL( numpy$lib$_iotools );
MOD_INIT_DECL( numpy$lib$arraypad );
MOD_INIT_DECL( numpy$lib$arraysetops );
MOD_INIT_DECL( numpy$lib$arrayterator );
MOD_INIT_DECL( numpy$lib$financial );
MOD_INIT_DECL( numpy$lib$format );
MOD_INIT_DECL( numpy$lib$function_base );
MOD_INIT_DECL( numpy$lib$index_tricks );
MOD_INIT_DECL( numpy$lib$info );
MOD_INIT_DECL( numpy$lib$nanfunctions );
MOD_INIT_DECL( numpy$lib$npyio );
MOD_INIT_DECL( numpy$lib$polynomial );
MOD_INIT_DECL( numpy$lib$scimath );
MOD_INIT_DECL( numpy$lib$shape_base );
MOD_INIT_DECL( numpy$lib$stride_tricks );
MOD_INIT_DECL( numpy$lib$twodim_base );
MOD_INIT_DECL( numpy$lib$type_check );
MOD_INIT_DECL( numpy$lib$ufunclike );
MOD_INIT_DECL( numpy$lib$utils );
MOD_INIT_DECL( numpy$linalg );
MOD_INIT_DECL( numpy$linalg$info );
MOD_INIT_DECL( numpy$linalg$linalg );
MOD_INIT_DECL( numpy$ma );
MOD_INIT_DECL( numpy$ma$core );
MOD_INIT_DECL( numpy$ma$extras );
MOD_INIT_DECL( numpy$ma$mrecords );
MOD_INIT_DECL( numpy$matrixlib );
MOD_INIT_DECL( numpy$matrixlib$defmatrix );
MOD_INIT_DECL( numpy$numarray );
MOD_INIT_DECL( numpy$numarray$compat );
MOD_INIT_DECL( numpy$numarray$functions );
MOD_INIT_DECL( numpy$numarray$numerictypes );
MOD_INIT_DECL( numpy$numarray$session );
MOD_INIT_DECL( numpy$numarray$ufuncs );
MOD_INIT_DECL( numpy$numarray$util );
MOD_INIT_DECL( numpy$polynomial );
MOD_INIT_DECL( numpy$polynomial$chebyshev );
MOD_INIT_DECL( numpy$polynomial$hermite );
MOD_INIT_DECL( numpy$polynomial$hermite_e );
MOD_INIT_DECL( numpy$polynomial$laguerre );
MOD_INIT_DECL( numpy$polynomial$legendre );
MOD_INIT_DECL( numpy$polynomial$polynomial );
MOD_INIT_DECL( numpy$polynomial$polytemplate );
MOD_INIT_DECL( numpy$polynomial$polyutils );
MOD_INIT_DECL( numpy$random );
MOD_INIT_DECL( numpy$random$info );
MOD_INIT_DECL( numpy$testing );
MOD_INIT_DECL( numpy$testing$decorators );
MOD_INIT_DECL( numpy$testing$noseclasses );
MOD_INIT_DECL( numpy$testing$nosetester );
MOD_INIT_DECL( numpy$testing$numpytest );
MOD_INIT_DECL( numpy$testing$utils );
MOD_INIT_DECL( numpy$version );
MOD_INIT_DECL( pkg_resources );
MOD_INIT_DECL( pykeyboard );
MOD_INIT_DECL( pykeyboard$base );
MOD_INIT_DECL( pykeyboard$java_ );
MOD_INIT_DECL( pykeyboard$mac );
MOD_INIT_DECL( pykeyboard$windows );
MOD_INIT_DECL( pykeyboard$x11 );
MOD_INIT_DECL( scipy );
MOD_INIT_DECL( scipy$__config__ );
MOD_INIT_DECL( scipy$integrate );
MOD_INIT_DECL( scipy$integrate$_ode );
MOD_INIT_DECL( scipy$integrate$odepack );
MOD_INIT_DECL( scipy$integrate$quadpack );
MOD_INIT_DECL( scipy$integrate$quadrature );
MOD_INIT_DECL( scipy$lib );
MOD_INIT_DECL( scipy$lib$_util );
MOD_INIT_DECL( scipy$lib$_version );
MOD_INIT_DECL( scipy$linalg );
MOD_INIT_DECL( scipy$linalg$_decomp_polar );
MOD_INIT_DECL( scipy$linalg$_decomp_qz );
MOD_INIT_DECL( scipy$linalg$_expm_frechet );
MOD_INIT_DECL( scipy$linalg$_matfuncs_inv_ssq );
MOD_INIT_DECL( scipy$linalg$_matfuncs_sqrtm );
MOD_INIT_DECL( scipy$linalg$_solvers );
MOD_INIT_DECL( scipy$linalg$basic );
MOD_INIT_DECL( scipy$linalg$blas );
MOD_INIT_DECL( scipy$linalg$decomp );
MOD_INIT_DECL( scipy$linalg$decomp_cholesky );
MOD_INIT_DECL( scipy$linalg$decomp_lu );
MOD_INIT_DECL( scipy$linalg$decomp_qr );
MOD_INIT_DECL( scipy$linalg$decomp_schur );
MOD_INIT_DECL( scipy$linalg$decomp_svd );
MOD_INIT_DECL( scipy$linalg$flinalg );
MOD_INIT_DECL( scipy$linalg$lapack );
MOD_INIT_DECL( scipy$linalg$linalg_version );
MOD_INIT_DECL( scipy$linalg$matfuncs );
MOD_INIT_DECL( scipy$linalg$misc );
MOD_INIT_DECL( scipy$linalg$special_matrices );
MOD_INIT_DECL( scipy$misc );
MOD_INIT_DECL( scipy$misc$common );
MOD_INIT_DECL( scipy$misc$doccer );
MOD_INIT_DECL( scipy$misc$pilutil );
MOD_INIT_DECL( scipy$sparse );
MOD_INIT_DECL( scipy$sparse$base );
MOD_INIT_DECL( scipy$sparse$bsr );
MOD_INIT_DECL( scipy$sparse$compressed );
MOD_INIT_DECL( scipy$sparse$construct );
MOD_INIT_DECL( scipy$sparse$coo );
MOD_INIT_DECL( scipy$sparse$csc );
MOD_INIT_DECL( scipy$sparse$csgraph );
MOD_INIT_DECL( scipy$sparse$csgraph$_components );
MOD_INIT_DECL( scipy$sparse$csgraph$_laplacian );
MOD_INIT_DECL( scipy$sparse$csr );
MOD_INIT_DECL( scipy$sparse$data );
MOD_INIT_DECL( scipy$sparse$dia );
MOD_INIT_DECL( scipy$sparse$dok );
MOD_INIT_DECL( scipy$sparse$extract );
MOD_INIT_DECL( scipy$sparse$lil );
MOD_INIT_DECL( scipy$sparse$linalg );
MOD_INIT_DECL( scipy$sparse$linalg$_expm_multiply );
MOD_INIT_DECL( scipy$sparse$linalg$_onenormest );
MOD_INIT_DECL( scipy$sparse$linalg$dsolve );
MOD_INIT_DECL( scipy$sparse$linalg$dsolve$_add_newdocs );
MOD_INIT_DECL( scipy$sparse$linalg$dsolve$linsolve );
MOD_INIT_DECL( scipy$sparse$linalg$eigen );
MOD_INIT_DECL( scipy$sparse$linalg$eigen$arpack );
MOD_INIT_DECL( scipy$sparse$linalg$eigen$arpack$arpack );
MOD_INIT_DECL( scipy$sparse$linalg$eigen$lobpcg );
MOD_INIT_DECL( scipy$sparse$linalg$eigen$lobpcg$lobpcg );
MOD_INIT_DECL( scipy$sparse$linalg$interface );
MOD_INIT_DECL( scipy$sparse$linalg$isolve );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$iterative );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$lgmres );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$lsmr );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$lsqr );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$minres );
MOD_INIT_DECL( scipy$sparse$linalg$isolve$utils );
MOD_INIT_DECL( scipy$sparse$linalg$matfuncs );
MOD_INIT_DECL( scipy$sparse$spfuncs );
MOD_INIT_DECL( scipy$sparse$sputils );
MOD_INIT_DECL( scipy$special );
MOD_INIT_DECL( scipy$special$basic );
MOD_INIT_DECL( scipy$special$lambertw );
MOD_INIT_DECL( scipy$special$orthogonal );
MOD_INIT_DECL( scipy$special$spfun_stats );
MOD_INIT_DECL( scipy$version );
MOD_INIT_DECL( serial );
MOD_INIT_DECL( serial$serialcli );
MOD_INIT_DECL( serial$serialjava );
MOD_INIT_DECL( serial$serialposix );
MOD_INIT_DECL( serial$serialutil );
MOD_INIT_DECL( serial$serialwin32 );
MOD_INIT_DECL( serial$tools );
MOD_INIT_DECL( serial$tools$list_ports );
MOD_INIT_DECL( serial$tools$list_ports_posix );
MOD_INIT_DECL( serial$tools$list_ports_windows );
MOD_INIT_DECL( serial$win32 );
MOD_INIT_DECL( setuptools );
MOD_INIT_DECL( setuptools$archive_util );
MOD_INIT_DECL( setuptools$command );
MOD_INIT_DECL( setuptools$command$bdist_egg );
MOD_INIT_DECL( setuptools$command$bdist_rpm );
MOD_INIT_DECL( setuptools$command$develop );
MOD_INIT_DECL( setuptools$command$easy_install );
MOD_INIT_DECL( setuptools$command$egg_info );
MOD_INIT_DECL( setuptools$command$install );
MOD_INIT_DECL( setuptools$command$install_scripts );
MOD_INIT_DECL( setuptools$command$sdist );
MOD_INIT_DECL( setuptools$command$setopt );
MOD_INIT_DECL( setuptools$compat );
MOD_INIT_DECL( setuptools$depends );
MOD_INIT_DECL( setuptools$dist );
MOD_INIT_DECL( setuptools$extension );
MOD_INIT_DECL( setuptools$package_index );
MOD_INIT_DECL( setuptools$py26compat );
MOD_INIT_DECL( setuptools$py27compat );
MOD_INIT_DECL( setuptools$py31compat );
MOD_INIT_DECL( setuptools$sandbox );
MOD_INIT_DECL( setuptools$ssl_support );
MOD_INIT_DECL( setuptools$svn_utils );
MOD_INIT_DECL( setuptools$unicode_utils );
MOD_INIT_DECL( setuptools$version );
MOD_INIT_DECL( six );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"Image", MOD_INIT_NAME( Image ), NUITKA_COMPILED_MODULE },
    { (char *)"ImageFilter", MOD_INIT_NAME( ImageFilter ), NUITKA_COMPILED_MODULE },
    { (char *)"MatlabSender", MOD_INIT_NAME( MatlabSender ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL", MOD_INIT_NAME( PIL ), NUITKA_COMPILED_PACKAGE },
    { (char *)"PIL.BmpImagePlugin", MOD_INIT_NAME( PIL$BmpImagePlugin ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.GifImagePlugin", MOD_INIT_NAME( PIL$GifImagePlugin ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.GimpGradientFile", MOD_INIT_NAME( PIL$GimpGradientFile ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.GimpPaletteFile", MOD_INIT_NAME( PIL$GimpPaletteFile ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.Image", MOD_INIT_NAME( PIL$Image ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageChops", MOD_INIT_NAME( PIL$ImageChops ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageColor", MOD_INIT_NAME( PIL$ImageColor ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageFile", MOD_INIT_NAME( PIL$ImageFile ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageFilter", MOD_INIT_NAME( PIL$ImageFilter ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageMode", MOD_INIT_NAME( PIL$ImageMode ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImagePalette", MOD_INIT_NAME( PIL$ImagePalette ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageShow", MOD_INIT_NAME( PIL$ImageShow ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.JpegImagePlugin", MOD_INIT_NAME( PIL$JpegImagePlugin ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.JpegPresets", MOD_INIT_NAME( PIL$JpegPresets ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.MpoImagePlugin", MOD_INIT_NAME( PIL$MpoImagePlugin ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.PaletteFile", MOD_INIT_NAME( PIL$PaletteFile ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.PngImagePlugin", MOD_INIT_NAME( PIL$PngImagePlugin ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.PpmImagePlugin", MOD_INIT_NAME( PIL$PpmImagePlugin ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.PyAccess", MOD_INIT_NAME( PIL$PyAccess ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.TiffImagePlugin", MOD_INIT_NAME( PIL$TiffImagePlugin ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL.TiffTags", MOD_INIT_NAME( PIL$TiffTags ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL._binary", MOD_INIT_NAME( PIL$_binary ), NUITKA_COMPILED_MODULE },
    { (char *)"PIL._util", MOD_INIT_NAME( PIL$_util ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib", MOD_INIT_NAME( Xlib ), NUITKA_COMPILED_PACKAGE },
    { (char *)"Xlib.X", MOD_INIT_NAME( Xlib$X ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.XK", MOD_INIT_NAME( Xlib$XK ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.Xatom", MOD_INIT_NAME( Xlib$Xatom ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.Xutil", MOD_INIT_NAME( Xlib$Xutil ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.display", MOD_INIT_NAME( Xlib$display ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.error", MOD_INIT_NAME( Xlib$error ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.ext", MOD_INIT_NAME( Xlib$ext ), NUITKA_COMPILED_PACKAGE },
    { (char *)"Xlib.ext.record", MOD_INIT_NAME( Xlib$ext$record ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.ext.xtest", MOD_INIT_NAME( Xlib$ext$xtest ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.protocol", MOD_INIT_NAME( Xlib$protocol ), NUITKA_COMPILED_PACKAGE },
    { (char *)"Xlib.protocol.display", MOD_INIT_NAME( Xlib$protocol$display ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.protocol.event", MOD_INIT_NAME( Xlib$protocol$event ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.protocol.request", MOD_INIT_NAME( Xlib$protocol$request ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.protocol.rq", MOD_INIT_NAME( Xlib$protocol$rq ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.protocol.structs", MOD_INIT_NAME( Xlib$protocol$structs ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.support", MOD_INIT_NAME( Xlib$support ), NUITKA_COMPILED_PACKAGE },
    { (char *)"Xlib.support.connect", MOD_INIT_NAME( Xlib$support$connect ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.support.lock", MOD_INIT_NAME( Xlib$support$lock ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.xobject", MOD_INIT_NAME( Xlib$xobject ), NUITKA_COMPILED_PACKAGE },
    { (char *)"Xlib.xobject.colormap", MOD_INIT_NAME( Xlib$xobject$colormap ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.xobject.cursor", MOD_INIT_NAME( Xlib$xobject$cursor ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.xobject.drawable", MOD_INIT_NAME( Xlib$xobject$drawable ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.xobject.fontable", MOD_INIT_NAME( Xlib$xobject$fontable ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.xobject.icccm", MOD_INIT_NAME( Xlib$xobject$icccm ), NUITKA_COMPILED_MODULE },
    { (char *)"Xlib.xobject.resource", MOD_INIT_NAME( Xlib$xobject$resource ), NUITKA_COMPILED_MODULE },
    { (char *)"_markerlib", MOD_INIT_NAME( _markerlib ), NUITKA_COMPILED_PACKAGE },
    { (char *)"_markerlib.markers", MOD_INIT_NAME( _markerlib$markers ), NUITKA_COMPILED_MODULE },
    { (char *)"decorator", MOD_INIT_NAME( decorator ), NUITKA_COMPILED_MODULE },
    { (char *)"easy_install", MOD_INIT_NAME( easy_install ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy", MOD_INIT_NAME( numpy ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.__config__", MOD_INIT_NAME( numpy$__config__ ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy._import_tools", MOD_INIT_NAME( numpy$_import_tools ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.add_newdocs", MOD_INIT_NAME( numpy$add_newdocs ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.compat", MOD_INIT_NAME( numpy$compat ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.compat._inspect", MOD_INIT_NAME( numpy$compat$_inspect ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.compat.py3k", MOD_INIT_NAME( numpy$compat$py3k ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core", MOD_INIT_NAME( numpy$core ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.core._internal", MOD_INIT_NAME( numpy$core$_internal ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core._methods", MOD_INIT_NAME( numpy$core$_methods ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.arrayprint", MOD_INIT_NAME( numpy$core$arrayprint ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.defchararray", MOD_INIT_NAME( numpy$core$defchararray ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.fromnumeric", MOD_INIT_NAME( numpy$core$fromnumeric ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.function_base", MOD_INIT_NAME( numpy$core$function_base ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.getlimits", MOD_INIT_NAME( numpy$core$getlimits ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.info", MOD_INIT_NAME( numpy$core$info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.machar", MOD_INIT_NAME( numpy$core$machar ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.memmap", MOD_INIT_NAME( numpy$core$memmap ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.numeric", MOD_INIT_NAME( numpy$core$numeric ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.numerictypes", MOD_INIT_NAME( numpy$core$numerictypes ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.records", MOD_INIT_NAME( numpy$core$records ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.shape_base", MOD_INIT_NAME( numpy$core$shape_base ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ctypeslib", MOD_INIT_NAME( numpy$ctypeslib ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils", MOD_INIT_NAME( numpy$distutils ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.distutils.__config__", MOD_INIT_NAME( numpy$distutils$__config__ ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.__version__", MOD_INIT_NAME( numpy$distutils$__version__ ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.ccompiler", MOD_INIT_NAME( numpy$distutils$ccompiler ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command", MOD_INIT_NAME( numpy$distutils$command ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.distutils.command.autodist", MOD_INIT_NAME( numpy$distutils$command$autodist ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.bdist_rpm", MOD_INIT_NAME( numpy$distutils$command$bdist_rpm ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.build", MOD_INIT_NAME( numpy$distutils$command$build ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.build_clib", MOD_INIT_NAME( numpy$distutils$command$build_clib ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.build_ext", MOD_INIT_NAME( numpy$distutils$command$build_ext ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.build_py", MOD_INIT_NAME( numpy$distutils$command$build_py ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.build_scripts", MOD_INIT_NAME( numpy$distutils$command$build_scripts ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.build_src", MOD_INIT_NAME( numpy$distutils$command$build_src ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.config", MOD_INIT_NAME( numpy$distutils$command$config ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.config_compiler", MOD_INIT_NAME( numpy$distutils$command$config_compiler ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.develop", MOD_INIT_NAME( numpy$distutils$command$develop ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.egg_info", MOD_INIT_NAME( numpy$distutils$command$egg_info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.install", MOD_INIT_NAME( numpy$distutils$command$install ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.install_clib", MOD_INIT_NAME( numpy$distutils$command$install_clib ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.install_data", MOD_INIT_NAME( numpy$distutils$command$install_data ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.install_headers", MOD_INIT_NAME( numpy$distutils$command$install_headers ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.command.sdist", MOD_INIT_NAME( numpy$distutils$command$sdist ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.compat", MOD_INIT_NAME( numpy$distutils$compat ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.conv_template", MOD_INIT_NAME( numpy$distutils$conv_template ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.core", MOD_INIT_NAME( numpy$distutils$core ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.cpuinfo", MOD_INIT_NAME( numpy$distutils$cpuinfo ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.environment", MOD_INIT_NAME( numpy$distutils$environment ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.exec_command", MOD_INIT_NAME( numpy$distutils$exec_command ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.extension", MOD_INIT_NAME( numpy$distutils$extension ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.fcompiler", MOD_INIT_NAME( numpy$distutils$fcompiler ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.distutils.from_template", MOD_INIT_NAME( numpy$distutils$from_template ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.info", MOD_INIT_NAME( numpy$distutils$info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.log", MOD_INIT_NAME( numpy$distutils$log ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.mingw32ccompiler", MOD_INIT_NAME( numpy$distutils$mingw32ccompiler ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.misc_util", MOD_INIT_NAME( numpy$distutils$misc_util ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.npy_pkg_config", MOD_INIT_NAME( numpy$distutils$npy_pkg_config ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.numpy_distribution", MOD_INIT_NAME( numpy$distutils$numpy_distribution ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.system_info", MOD_INIT_NAME( numpy$distutils$system_info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils.unixccompiler", MOD_INIT_NAME( numpy$distutils$unixccompiler ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.dual", MOD_INIT_NAME( numpy$dual ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py", MOD_INIT_NAME( numpy$f2py ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.f2py.__version__", MOD_INIT_NAME( numpy$f2py$__version__ ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.auxfuncs", MOD_INIT_NAME( numpy$f2py$auxfuncs ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.capi_maps", MOD_INIT_NAME( numpy$f2py$capi_maps ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.cb_rules", MOD_INIT_NAME( numpy$f2py$cb_rules ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.cfuncs", MOD_INIT_NAME( numpy$f2py$cfuncs ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.common_rules", MOD_INIT_NAME( numpy$f2py$common_rules ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.crackfortran", MOD_INIT_NAME( numpy$f2py$crackfortran ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.diagnose", MOD_INIT_NAME( numpy$f2py$diagnose ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.f2py2e", MOD_INIT_NAME( numpy$f2py$f2py2e ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.f2py_testing", MOD_INIT_NAME( numpy$f2py$f2py_testing ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.f90mod_rules", MOD_INIT_NAME( numpy$f2py$f90mod_rules ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.func2subr", MOD_INIT_NAME( numpy$f2py$func2subr ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.info", MOD_INIT_NAME( numpy$f2py$info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.rules", MOD_INIT_NAME( numpy$f2py$rules ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py.use_rules", MOD_INIT_NAME( numpy$f2py$use_rules ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.fft", MOD_INIT_NAME( numpy$fft ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.fft.fftpack", MOD_INIT_NAME( numpy$fft$fftpack ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.fft.helper", MOD_INIT_NAME( numpy$fft$helper ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.fft.info", MOD_INIT_NAME( numpy$fft$info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib", MOD_INIT_NAME( numpy$lib ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.lib._datasource", MOD_INIT_NAME( numpy$lib$_datasource ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib._iotools", MOD_INIT_NAME( numpy$lib$_iotools ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arraypad", MOD_INIT_NAME( numpy$lib$arraypad ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arraysetops", MOD_INIT_NAME( numpy$lib$arraysetops ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arrayterator", MOD_INIT_NAME( numpy$lib$arrayterator ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.financial", MOD_INIT_NAME( numpy$lib$financial ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.format", MOD_INIT_NAME( numpy$lib$format ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.function_base", MOD_INIT_NAME( numpy$lib$function_base ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.index_tricks", MOD_INIT_NAME( numpy$lib$index_tricks ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.info", MOD_INIT_NAME( numpy$lib$info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.nanfunctions", MOD_INIT_NAME( numpy$lib$nanfunctions ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.npyio", MOD_INIT_NAME( numpy$lib$npyio ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.polynomial", MOD_INIT_NAME( numpy$lib$polynomial ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.scimath", MOD_INIT_NAME( numpy$lib$scimath ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.shape_base", MOD_INIT_NAME( numpy$lib$shape_base ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.stride_tricks", MOD_INIT_NAME( numpy$lib$stride_tricks ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.twodim_base", MOD_INIT_NAME( numpy$lib$twodim_base ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.type_check", MOD_INIT_NAME( numpy$lib$type_check ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.ufunclike", MOD_INIT_NAME( numpy$lib$ufunclike ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.utils", MOD_INIT_NAME( numpy$lib$utils ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.linalg", MOD_INIT_NAME( numpy$linalg ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.linalg.info", MOD_INIT_NAME( numpy$linalg$info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.linalg.linalg", MOD_INIT_NAME( numpy$linalg$linalg ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma", MOD_INIT_NAME( numpy$ma ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.ma.core", MOD_INIT_NAME( numpy$ma$core ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma.extras", MOD_INIT_NAME( numpy$ma$extras ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma.mrecords", MOD_INIT_NAME( numpy$ma$mrecords ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.matrixlib", MOD_INIT_NAME( numpy$matrixlib ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.matrixlib.defmatrix", MOD_INIT_NAME( numpy$matrixlib$defmatrix ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.numarray", MOD_INIT_NAME( numpy$numarray ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.numarray.compat", MOD_INIT_NAME( numpy$numarray$compat ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.numarray.functions", MOD_INIT_NAME( numpy$numarray$functions ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.numarray.numerictypes", MOD_INIT_NAME( numpy$numarray$numerictypes ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.numarray.session", MOD_INIT_NAME( numpy$numarray$session ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.numarray.ufuncs", MOD_INIT_NAME( numpy$numarray$ufuncs ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.numarray.util", MOD_INIT_NAME( numpy$numarray$util ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial", MOD_INIT_NAME( numpy$polynomial ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.polynomial.chebyshev", MOD_INIT_NAME( numpy$polynomial$chebyshev ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.hermite", MOD_INIT_NAME( numpy$polynomial$hermite ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.hermite_e", MOD_INIT_NAME( numpy$polynomial$hermite_e ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.laguerre", MOD_INIT_NAME( numpy$polynomial$laguerre ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.legendre", MOD_INIT_NAME( numpy$polynomial$legendre ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.polynomial", MOD_INIT_NAME( numpy$polynomial$polynomial ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.polytemplate", MOD_INIT_NAME( numpy$polynomial$polytemplate ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.polyutils", MOD_INIT_NAME( numpy$polynomial$polyutils ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.random", MOD_INIT_NAME( numpy$random ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.random.info", MOD_INIT_NAME( numpy$random$info ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.testing", MOD_INIT_NAME( numpy$testing ), NUITKA_COMPILED_PACKAGE },
    { (char *)"numpy.testing.decorators", MOD_INIT_NAME( numpy$testing$decorators ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.testing.noseclasses", MOD_INIT_NAME( numpy$testing$noseclasses ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.testing.nosetester", MOD_INIT_NAME( numpy$testing$nosetester ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.testing.numpytest", MOD_INIT_NAME( numpy$testing$numpytest ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.testing.utils", MOD_INIT_NAME( numpy$testing$utils ), NUITKA_COMPILED_MODULE },
    { (char *)"numpy.version", MOD_INIT_NAME( numpy$version ), NUITKA_COMPILED_MODULE },
    { (char *)"pkg_resources", MOD_INIT_NAME( pkg_resources ), NUITKA_COMPILED_MODULE },
    { (char *)"pykeyboard", MOD_INIT_NAME( pykeyboard ), NUITKA_COMPILED_PACKAGE },
    { (char *)"pykeyboard.base", MOD_INIT_NAME( pykeyboard$base ), NUITKA_COMPILED_MODULE },
    { (char *)"pykeyboard.java_", MOD_INIT_NAME( pykeyboard$java_ ), NUITKA_COMPILED_MODULE },
    { (char *)"pykeyboard.mac", MOD_INIT_NAME( pykeyboard$mac ), NUITKA_COMPILED_MODULE },
    { (char *)"pykeyboard.windows", MOD_INIT_NAME( pykeyboard$windows ), NUITKA_COMPILED_MODULE },
    { (char *)"pykeyboard.x11", MOD_INIT_NAME( pykeyboard$x11 ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy", MOD_INIT_NAME( scipy ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.__config__", MOD_INIT_NAME( scipy$__config__ ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.integrate", MOD_INIT_NAME( scipy$integrate ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.integrate._ode", MOD_INIT_NAME( scipy$integrate$_ode ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.integrate.odepack", MOD_INIT_NAME( scipy$integrate$odepack ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.integrate.quadpack", MOD_INIT_NAME( scipy$integrate$quadpack ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.integrate.quadrature", MOD_INIT_NAME( scipy$integrate$quadrature ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.lib", MOD_INIT_NAME( scipy$lib ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.lib._util", MOD_INIT_NAME( scipy$lib$_util ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.lib._version", MOD_INIT_NAME( scipy$lib$_version ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg", MOD_INIT_NAME( scipy$linalg ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.linalg._decomp_polar", MOD_INIT_NAME( scipy$linalg$_decomp_polar ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg._decomp_qz", MOD_INIT_NAME( scipy$linalg$_decomp_qz ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg._expm_frechet", MOD_INIT_NAME( scipy$linalg$_expm_frechet ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg._matfuncs_inv_ssq", MOD_INIT_NAME( scipy$linalg$_matfuncs_inv_ssq ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg._matfuncs_sqrtm", MOD_INIT_NAME( scipy$linalg$_matfuncs_sqrtm ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg._solvers", MOD_INIT_NAME( scipy$linalg$_solvers ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.basic", MOD_INIT_NAME( scipy$linalg$basic ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.blas", MOD_INIT_NAME( scipy$linalg$blas ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.decomp", MOD_INIT_NAME( scipy$linalg$decomp ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.decomp_cholesky", MOD_INIT_NAME( scipy$linalg$decomp_cholesky ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.decomp_lu", MOD_INIT_NAME( scipy$linalg$decomp_lu ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.decomp_qr", MOD_INIT_NAME( scipy$linalg$decomp_qr ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.decomp_schur", MOD_INIT_NAME( scipy$linalg$decomp_schur ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.decomp_svd", MOD_INIT_NAME( scipy$linalg$decomp_svd ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.flinalg", MOD_INIT_NAME( scipy$linalg$flinalg ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.lapack", MOD_INIT_NAME( scipy$linalg$lapack ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.linalg_version", MOD_INIT_NAME( scipy$linalg$linalg_version ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.matfuncs", MOD_INIT_NAME( scipy$linalg$matfuncs ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.misc", MOD_INIT_NAME( scipy$linalg$misc ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.linalg.special_matrices", MOD_INIT_NAME( scipy$linalg$special_matrices ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.misc", MOD_INIT_NAME( scipy$misc ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.misc.common", MOD_INIT_NAME( scipy$misc$common ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.misc.doccer", MOD_INIT_NAME( scipy$misc$doccer ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.misc.pilutil", MOD_INIT_NAME( scipy$misc$pilutil ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse", MOD_INIT_NAME( scipy$sparse ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.sparse.base", MOD_INIT_NAME( scipy$sparse$base ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.bsr", MOD_INIT_NAME( scipy$sparse$bsr ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.compressed", MOD_INIT_NAME( scipy$sparse$compressed ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.construct", MOD_INIT_NAME( scipy$sparse$construct ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.coo", MOD_INIT_NAME( scipy$sparse$coo ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.csc", MOD_INIT_NAME( scipy$sparse$csc ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.csgraph", MOD_INIT_NAME( scipy$sparse$csgraph ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.sparse.csgraph._components", MOD_INIT_NAME( scipy$sparse$csgraph$_components ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.csgraph._laplacian", MOD_INIT_NAME( scipy$sparse$csgraph$_laplacian ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.csr", MOD_INIT_NAME( scipy$sparse$csr ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.data", MOD_INIT_NAME( scipy$sparse$data ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.dia", MOD_INIT_NAME( scipy$sparse$dia ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.dok", MOD_INIT_NAME( scipy$sparse$dok ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.extract", MOD_INIT_NAME( scipy$sparse$extract ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.lil", MOD_INIT_NAME( scipy$sparse$lil ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg", MOD_INIT_NAME( scipy$sparse$linalg ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.sparse.linalg._expm_multiply", MOD_INIT_NAME( scipy$sparse$linalg$_expm_multiply ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg._onenormest", MOD_INIT_NAME( scipy$sparse$linalg$_onenormest ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.dsolve", MOD_INIT_NAME( scipy$sparse$linalg$dsolve ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.sparse.linalg.dsolve._add_newdocs", MOD_INIT_NAME( scipy$sparse$linalg$dsolve$_add_newdocs ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.dsolve.linsolve", MOD_INIT_NAME( scipy$sparse$linalg$dsolve$linsolve ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.eigen", MOD_INIT_NAME( scipy$sparse$linalg$eigen ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.sparse.linalg.eigen.arpack", MOD_INIT_NAME( scipy$sparse$linalg$eigen$arpack ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.sparse.linalg.eigen.arpack.arpack", MOD_INIT_NAME( scipy$sparse$linalg$eigen$arpack$arpack ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.eigen.lobpcg", MOD_INIT_NAME( scipy$sparse$linalg$eigen$lobpcg ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.sparse.linalg.eigen.lobpcg.lobpcg", MOD_INIT_NAME( scipy$sparse$linalg$eigen$lobpcg$lobpcg ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.interface", MOD_INIT_NAME( scipy$sparse$linalg$interface ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.isolve", MOD_INIT_NAME( scipy$sparse$linalg$isolve ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.sparse.linalg.isolve.iterative", MOD_INIT_NAME( scipy$sparse$linalg$isolve$iterative ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.isolve.lgmres", MOD_INIT_NAME( scipy$sparse$linalg$isolve$lgmres ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.isolve.lsmr", MOD_INIT_NAME( scipy$sparse$linalg$isolve$lsmr ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.isolve.lsqr", MOD_INIT_NAME( scipy$sparse$linalg$isolve$lsqr ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.isolve.minres", MOD_INIT_NAME( scipy$sparse$linalg$isolve$minres ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.isolve.utils", MOD_INIT_NAME( scipy$sparse$linalg$isolve$utils ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.linalg.matfuncs", MOD_INIT_NAME( scipy$sparse$linalg$matfuncs ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.spfuncs", MOD_INIT_NAME( scipy$sparse$spfuncs ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.sparse.sputils", MOD_INIT_NAME( scipy$sparse$sputils ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.special", MOD_INIT_NAME( scipy$special ), NUITKA_COMPILED_PACKAGE },
    { (char *)"scipy.special.basic", MOD_INIT_NAME( scipy$special$basic ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.special.lambertw", MOD_INIT_NAME( scipy$special$lambertw ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.special.orthogonal", MOD_INIT_NAME( scipy$special$orthogonal ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.special.spfun_stats", MOD_INIT_NAME( scipy$special$spfun_stats ), NUITKA_COMPILED_MODULE },
    { (char *)"scipy.version", MOD_INIT_NAME( scipy$version ), NUITKA_COMPILED_MODULE },
    { (char *)"serial", MOD_INIT_NAME( serial ), NUITKA_COMPILED_PACKAGE },
    { (char *)"serial.serialcli", MOD_INIT_NAME( serial$serialcli ), NUITKA_COMPILED_MODULE },
    { (char *)"serial.serialjava", MOD_INIT_NAME( serial$serialjava ), NUITKA_COMPILED_MODULE },
    { (char *)"serial.serialposix", MOD_INIT_NAME( serial$serialposix ), NUITKA_COMPILED_MODULE },
    { (char *)"serial.serialutil", MOD_INIT_NAME( serial$serialutil ), NUITKA_COMPILED_MODULE },
    { (char *)"serial.serialwin32", MOD_INIT_NAME( serial$serialwin32 ), NUITKA_COMPILED_MODULE },
    { (char *)"serial.tools", MOD_INIT_NAME( serial$tools ), NUITKA_COMPILED_PACKAGE },
    { (char *)"serial.tools.list_ports", MOD_INIT_NAME( serial$tools$list_ports ), NUITKA_COMPILED_MODULE },
    { (char *)"serial.tools.list_ports_posix", MOD_INIT_NAME( serial$tools$list_ports_posix ), NUITKA_COMPILED_MODULE },
    { (char *)"serial.tools.list_ports_windows", MOD_INIT_NAME( serial$tools$list_ports_windows ), NUITKA_COMPILED_MODULE },
    { (char *)"serial.win32", MOD_INIT_NAME( serial$win32 ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools", MOD_INIT_NAME( setuptools ), NUITKA_COMPILED_PACKAGE },
    { (char *)"setuptools.archive_util", MOD_INIT_NAME( setuptools$archive_util ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command", MOD_INIT_NAME( setuptools$command ), NUITKA_COMPILED_PACKAGE },
    { (char *)"setuptools.command.bdist_egg", MOD_INIT_NAME( setuptools$command$bdist_egg ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.bdist_rpm", MOD_INIT_NAME( setuptools$command$bdist_rpm ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.develop", MOD_INIT_NAME( setuptools$command$develop ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.easy_install", MOD_INIT_NAME( setuptools$command$easy_install ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.egg_info", MOD_INIT_NAME( setuptools$command$egg_info ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.install", MOD_INIT_NAME( setuptools$command$install ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.install_scripts", MOD_INIT_NAME( setuptools$command$install_scripts ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.sdist", MOD_INIT_NAME( setuptools$command$sdist ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.command.setopt", MOD_INIT_NAME( setuptools$command$setopt ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.compat", MOD_INIT_NAME( setuptools$compat ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.depends", MOD_INIT_NAME( setuptools$depends ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.dist", MOD_INIT_NAME( setuptools$dist ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.extension", MOD_INIT_NAME( setuptools$extension ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.package_index", MOD_INIT_NAME( setuptools$package_index ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.py26compat", MOD_INIT_NAME( setuptools$py26compat ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.py27compat", MOD_INIT_NAME( setuptools$py27compat ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.py31compat", MOD_INIT_NAME( setuptools$py31compat ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.sandbox", MOD_INIT_NAME( setuptools$sandbox ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.ssl_support", MOD_INIT_NAME( setuptools$ssl_support ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.svn_utils", MOD_INIT_NAME( setuptools$svn_utils ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.unicode_utils", MOD_INIT_NAME( setuptools$unicode_utils ), NUITKA_COMPILED_MODULE },
    { (char *)"setuptools.version", MOD_INIT_NAME( setuptools$version ), NUITKA_COMPILED_MODULE },
    { (char *)"six", MOD_INIT_NAME( six ), NUITKA_COMPILED_MODULE },
    { NULL, NULL, 0 }
};

#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( __main__ )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module___main__ );
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

    // puts( "in init__main__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module___main__ = Py_InitModule4(
        "__main__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module___main__ = PyModule_Create( &mdef___main__ );
#endif

    moduledict___main__ = (PyDictObject *)((PyModuleObject *)module___main__)->md_dict;

    assertObject( module___main__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain___main__, module___main__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module___main__ );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !1
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
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Gt_1;
    int tmp_cmp_In_1;
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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_print_value;
    bool tmp_result;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_b13c4fd656394ed2f041484d32fca06e, module___main__ );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 1;
    tmp_unused = IMPORT_MODULE( const_str_plain_site, tmp_import_globals_1, tmp_import_globals_1, const_tuple_empty, const_int_neg_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_42ca426ab0156925dc2c2da8b70e7844;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_import_globals_2 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_time, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_3 );
    tmp_import_globals_3 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    tmp_import_globals_4 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 5;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_serial, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_serial, tmp_assign_source_5 );
    tmp_import_globals_5 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_0df3489f1b16927cc9a8cf4fbd6899d5, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_1 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_tools );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_list_ports );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_list, tmp_assign_source_6 );
    tmp_import_globals_6 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_socket, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_7 );
    tmp_import_globals_7 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_threading, tmp_import_globals_7, tmp_import_globals_7, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_8 );
    tmp_import_globals_8 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_scipy, tmp_import_globals_8, tmp_import_globals_8, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_scipy, tmp_assign_source_9 );
    tmp_import_globals_9 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_70e6205803ec3c66a2fdd2c934f08873, tmp_import_globals_9, tmp_import_globals_9, Py_None, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_integrate );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_integrate, tmp_assign_source_10 );
    tmp_import_globals_10 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_pykeyboard, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_PyKeyboard_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_PyKeyboard );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_PyKeyboard, tmp_assign_source_11 );
    tmp_import_globals_11 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_12 = IMPORT_MODULE( const_str_plain_MatlabSender, tmp_import_globals_11, tmp_import_globals_11, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_MatlabSender, tmp_assign_source_12 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_PyKeyboard );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyKeyboard );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45541 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 15;
    tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_k, tmp_assign_source_13 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_MatlabSender );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MatlabSender );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45573 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MatlabSender );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 17;
    tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_p2m, tmp_assign_source_14 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_list );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45607 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_comports );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 20;
    tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_devices, tmp_assign_source_15 );
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_devices );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_devices );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45633 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_16;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_17 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 21;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    tmp_assign_source_18 = tmp_for_loop_1__iter_value.object;

    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_d, tmp_assign_source_18 );
    // Tried block of try/except
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45662 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 23;
        goto try_except_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Serial );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto try_except_handler_1;
    }
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_d );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
    }

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45690 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 23;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_call_arg_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_module->f_lineno = 23;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_2 = const_int_pos_9600;
    frame_module->f_lineno = 23;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_s, tmp_assign_source_19 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45713 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 24;
        goto try_except_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sleep );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_3 = const_int_pos_2;
    frame_module->f_lineno = 24;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_s );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_s );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45739 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 25;
        goto try_except_handler_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_write );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_4 = const_str_plain_who;
    frame_module->f_lineno = 25;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45713 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto try_except_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sleep );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_5 = const_int_pos_2;
    frame_module->f_lineno = 26;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = const_str_plain_arduino;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_s );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_s );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45739 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 27;
        goto try_except_handler_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_readline );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 27;
    tmp_compare_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto try_except_handler_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        frame_module->f_lineno = 27;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_s );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_s );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45739 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 28;
        goto try_except_handler_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_write );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_6 = const_str_plain_OK;
    frame_module->f_lineno = 28;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45713 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto try_except_handler_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_sleep );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_7 = const_int_pos_2;
    frame_module->f_lineno = 29;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_print_value = const_str_digest_72fe656a72d7fa4698cf6087ea8e037d;
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_except_handler_1;
    }
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_d );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45690 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_2 = const_int_0;
    tmp_str_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_except_handler_1;
    }
    tmp_print_value = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_except_handler_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_print_value );

        frame_module->f_lineno = 30;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto try_except_handler_1;
    }
    tmp_assign_source_20 = DEEP_COPY( const_list_list_empty_list_empty_list_empty_list );
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_a, tmp_assign_source_20 );
    tmp_assign_source_21 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_pos, tmp_assign_source_21 );
    loop_start_2:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_s );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_s );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45739 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 34;
        goto try_except_handler_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_readline );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 34;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 34;
    tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS( tmp_called_11 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 34;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_aux, tmp_assign_source_22 );
    tmp_subscr_target_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_aux );

    if (unlikely( tmp_subscr_target_3 == NULL ))
    {
        tmp_subscr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aux );
    }

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45762 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_3 = const_int_0;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_except_handler_1;
    }
    tmp_compare_right_2 = const_str_plain_c;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_module->f_lineno = 37;
        goto try_except_handler_1;
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
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_k );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_k );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 19412 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto try_except_handler_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_tap_key );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto try_except_handler_1;
    }
    tmp_subscr_target_4 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_aux );

    if (unlikely( tmp_subscr_target_4 == NULL ))
    {
        tmp_subscr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aux );
    }

    if ( tmp_subscr_target_4 == NULL )
    {
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45762 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 38;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_4 = const_int_pos_8;
    tmp_call_arg_element_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_12 );

        frame_module->f_lineno = 38;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 38;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_12 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_subscr_target_5 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_aux );

    if (unlikely( tmp_subscr_target_5 == NULL ))
    {
        tmp_subscr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aux );
    }

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45762 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_5 = const_int_pos_8;
    tmp_compare_left_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto try_except_handler_1;
    }
    tmp_compare_right_3 = const_str_space;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_module->f_lineno = 39;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_23 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_pos, tmp_assign_source_23 );
    tmp_assign_source_24 = DEEP_COPY( const_list_list_empty_list_empty_list_empty_list );
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_a, tmp_assign_source_24 );
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_subscr_target_6 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_aux );

    if (unlikely( tmp_subscr_target_6 == NULL ))
    {
        tmp_subscr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aux );
    }

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45762 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 43;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_6 = const_int_0;
    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 43;
        goto try_except_handler_1;
    }
    tmp_compare_right_4 = const_str_plain_d;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_module->f_lineno = 43;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_p2m );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_p2m );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45787 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 45;
        goto try_except_handler_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_str2num );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto try_except_handler_1;
    }
    tmp_sliceslicedel_index_lower_1 = 6;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_aux );

    if (unlikely( tmp_slice_source_1 == NULL ))
    {
        tmp_slice_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_aux );
    }

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45762 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 45;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_9 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );

        frame_module->f_lineno = 45;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 45;
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_d, tmp_assign_source_25 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_scipy );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_scipy );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45812 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto try_except_handler_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_size );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto try_except_handler_1;
    }
    tmp_subscr_target_7 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_a );

    if (unlikely( tmp_subscr_target_7 == NULL ))
    {
        tmp_subscr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_a );
    }

    if ( tmp_subscr_target_7 == NULL )
    {
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45839 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_7 = const_int_0;
    tmp_call_arg_element_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_14 );

        frame_module->f_lineno = 47;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 47;
    tmp_compare_left_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto try_except_handler_1;
    }
    tmp_compare_right_5 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_module->f_lineno = 47;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_iter_arg_2 = const_tuple_int_0_int_pos_1_int_pos_2_tuple;
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto try_except_handler_1;
    }
    if (tmp_for_loop_2__for_iterator.object == NULL)
    {
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_26;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__for_iterator.object;
        tmp_for_loop_2__for_iterator.object = tmp_assign_source_26;
        Py_DECREF( old );
    }
    // Tried code
    loop_start_3:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator.object;

    tmp_assign_source_27 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_27 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_module->f_lineno = 48;
            goto try_finally_handler_2;
        }
    }

    if (tmp_for_loop_2__iter_value.object == NULL)
    {
        tmp_for_loop_2__iter_value.object = tmp_assign_source_27;
    }
    else
    {
        PyObject *old = tmp_for_loop_2__iter_value.object;
        tmp_for_loop_2__iter_value.object = tmp_assign_source_27;
        Py_DECREF( old );
    }
    tmp_assign_source_28 = tmp_for_loop_2__iter_value.object;

    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_i, tmp_assign_source_28 );
    tmp_subscr_target_8 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_a );

    if (unlikely( tmp_subscr_target_8 == NULL ))
    {
        tmp_subscr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_a );
    }

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45839 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_8 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_i );

    if (unlikely( tmp_subscr_subscript_8 == NULL ))
    {
        tmp_subscr_subscript_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i );
    }

    if ( tmp_subscr_subscript_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45862 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    tmp_source_name_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }
    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }
    tmp_subscr_target_9 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_d );

    if (unlikely( tmp_subscr_target_9 == NULL ))
    {
        tmp_subscr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_d );
    }

    if ( tmp_subscr_target_9 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45690 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_9 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_i );

    if (unlikely( tmp_subscr_subscript_9 == NULL ))
    {
        tmp_subscr_subscript_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i );
    }

    if ( tmp_subscr_subscript_9 == NULL )
    {
        Py_DECREF( tmp_called_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45862 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_15 );

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }
    frame_module->f_lineno = 50;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_15 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_integrate );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integrate );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45885 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_simps );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_integrate );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integrate );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45885 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_cumtrapz );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }
    tmp_subscr_target_10 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_a );

    if (unlikely( tmp_subscr_target_10 == NULL ))
    {
        tmp_subscr_target_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_a );
    }

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_called_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45839 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_10 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_i );

    if (unlikely( tmp_subscr_subscript_10 == NULL ))
    {
        tmp_subscr_subscript_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i );
    }

    if ( tmp_subscr_subscript_10 == NULL )
    {
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_called_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45862 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );
        Py_DECREF( tmp_called_17 );

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }
    frame_module->f_lineno = 52;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_17, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_16 );

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }
    frame_module->f_lineno = 52;
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_16 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_pos );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pos );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45916 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }

    tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_i );

    if (unlikely( tmp_ass_subscript_1 == NULL ))
    {
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_i );
    }

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45862 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 52;
        goto try_finally_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto try_finally_handler_2;
    }
    goto loop_start_3;
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

    tmp_tried_lineno_1 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_2__iter_value.object );
    tmp_for_loop_2__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator.object );
    tmp_for_loop_2__for_iterator.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_1;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_1 != NULL )
    {
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;

        goto try_except_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_str_arg_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_pos );

    if (unlikely( tmp_str_arg_2 == NULL ))
    {
        tmp_str_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pos );
    }

    if ( tmp_str_arg_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45916 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 53;
        goto try_except_handler_1;
    }

    tmp_print_value = PyObject_Str( tmp_str_arg_2 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto try_except_handler_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_print_value );

        frame_module->f_lineno = 53;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto try_except_handler_1;
    }
    branch_no_5:;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_p2m );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_p2m );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45787 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 56;
        goto try_except_handler_1;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_send );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 56;
        goto try_except_handler_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_p2m );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_p2m );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45787 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 56;
        goto try_except_handler_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_num2str );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );

        frame_module->f_lineno = 56;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_pos );

    if (unlikely( tmp_call_arg_element_15 == NULL ))
    {
        tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pos );
    }

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_18 );
        Py_DECREF( tmp_called_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45916 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 56;
        goto try_except_handler_1;
    }

    frame_module->f_lineno = 56;
    tmp_call_arg_element_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_18 );

        frame_module->f_lineno = 56;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 56;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_18 );
    Py_DECREF( tmp_call_arg_element_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 56;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_except_handler_1;
    }
    goto loop_start_2;
    branch_no_1:;
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
    try_except_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
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

    tmp_tried_lineno_2 = frame_module->f_lineno;
    Py_XDECREF( tmp_for_loop_1__iter_value.object );
    tmp_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator.object );
    tmp_for_loop_1__for_iterator.object = NULL;

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
    tmp_print_value = const_str_digest_e24c604d263ce0f3fe9b58bff2342340;
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_p2m );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_p2m );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45787 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_close );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 62;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_20 );
    Py_DECREF( tmp_called_20 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_s );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_s );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45739 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_close );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 63;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_21 );
    Py_DECREF( tmp_called_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

    return MOD_RETURN_VALUE( module___main__ );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
// The main program for C++. It needs to prepare the interpreter and then
// calls the initialization code of the __main__ module.

#include "structseq.h"

#if 0
extern PyObject *const_str_plain_ignore;
#endif

#ifdef _NUITKA_WINMAIN_ENTRY_POINT
int __stdcall WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, char* lpCmdLine, int nCmdShow )
{
    int argc = __argc;
    char** argv = __argv;
#else
int main( int argc, char *argv[] )
{
#endif
#ifdef _NUITKA_STANDALONE
    prepareStandaloneEnvironment();
#endif

    // Initialize Python environment.
    Py_DebugFlag = 0;
#if 0
    Py_Py3kWarningFlag = 0;
#endif
#if 0
    Py_DivisionWarningFlag =
#if 0
        Py_Py3kWarningFlag ||
#endif
        0;
#endif
    Py_InspectFlag = 0;
    Py_InteractiveFlag = 0;
    Py_OptimizeFlag = 0;
    Py_DontWriteBytecodeFlag = 0;
    Py_NoUserSiteDirectory = 0;
    Py_IgnoreEnvironmentFlag = 0;
#if 0
    Py_TabcheckFlag = 0;
#endif
    Py_VerboseFlag = 0;
#if 0
    Py_UnicodeFlag = 0;
#endif
    Py_BytesWarningFlag = 0;
#if 1
    Py_HashRandomizationFlag = 1;
#endif

    // We want to import the site module, but only after we finished our own
    // setup. The site module import will be the first thing, the main module
    // does.
    Py_NoSiteFlag = 1;

    // Initialize the embedded CPython interpreter.
    setCommandLineParameters( argc, argv, true );
    Py_Initialize();

    // Lie about it, believe it or not, there are "site" files, that check
    // against later imports, see below.
    Py_NoSiteFlag = 0;

    // Set the command line parameters for run time usage.
    setCommandLineParameters( argc, argv, false );

#ifdef _NUITKA_STANDALONE
    restoreStandaloneEnvironment();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();
    _initBuiltinOriginalValues();

    // Revert the wrong sys.flags value, it's used by "site" on at least Debian
    // for Python3.3, more uses may exist.
#if 0 == 0
#if PYTHON_VERSION >= 330
    PyStructSequence_SetItem( PySys_GetObject( "flags" ), 6, const_int_0 );
#elif PYTHON_VERSION >= 320
    PyStructSequence_SetItem( PySys_GetObject( "flags" ), 7, const_int_0 );
#elif PYTHON_VERSION >= 260
    PyStructSequence_SET_ITEM( PySys_GetObject( (char *)"flags" ), 9, const_int_0 );
#endif
#endif

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    initSlotCompare();
#endif

    enhancePythonTypes();

    // Set the sys.executable path to the original Python executable on Linux
    // or to python.exe on Windows.
    PySys_SetObject(
        (char *)"executable",
        UNSTREAM_STRING( &constant_bin[ 443372 ], 15, 0 )
    );

    patchBuiltinModule();
    patchTypeComparison();

    // Allow to override the ticker value, to remove checks for threads in
    // CPython core from impact on benchmarks.
    char const *ticker_value = getenv( "NUITKA_TICKER" );
    if ( ticker_value != NULL )
    {
        _Py_Ticker = atoi( ticker_value );
        assert ( _Py_Ticker >= 20 );
    }

#ifdef _NUITKA_STANDALONE
    setEarlyFrozenModulesFileAttribute();
#endif

    // Disable Python warnings if requested to.
#if 0
    // Should be same as:
    //   warnings.simplefilter("ignore", UserWarning)
    //   warnings.simplefilter("ignore", DeprecationWarning)
    // There is no C-API to control warnings. We don't care if it actually
    // works, i.e. return code of "simplefilter" function is not checked.
    {
        PyObject *warnings = PyImport_ImportModule( "warnings" );
        if ( warnings != NULL )
        {
            PyObject *simplefilter = PyObject_GetAttrString( warnings, "simplefilter" );

            if ( simplefilter != NULL )
            {
                PyObject *result1 = PyObject_CallFunctionObjArgs( simplefilter, const_str_plain_ignore, PyExc_UserWarning, NULL );
                Py_XDECREF( result1 );
                PyObject *result2 = PyObject_CallFunctionObjArgs( simplefilter, const_str_plain_ignore, PyExc_DeprecationWarning, NULL );
                Py_XDECREF( result2 );
            }
        }
    }
#endif

    // Execute the "__main__" module init function.
    MOD_INIT_NAME( __main__ )();

    if ( ERROR_OCCURED() )
    {
        // Cleanup code may need a frame, so put one back.
        PyThreadState_GET()->frame = MAKE_FRAME( codeobj_b13c4fd656394ed2f041484d32fca06e, module___main__ );

        PyErr_PrintEx( 0 );
        Py_Exit( 1 );
    }
    else
    {
        Py_Exit( 0 );
    }

    // Dead code, just for the compiler to be happy. The above branches both
    // do Py_Exit() which is not supposed to return.
    assert(false);
    return 0;
}
