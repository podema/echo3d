// Generated code for Python source for module 'numpy.f2py.func2subr'
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

// The _module_numpy$f2py$func2subr is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_numpy$f2py$func2subr;
PyDictObject *moduledict_numpy$f2py$func2subr;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_chr_61;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_l;
extern PyObject *const_str_plain_v;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_10;
extern PyObject *const_str_plain_dn;
extern PyObject *const_str_plain_dv;
extern PyObject *const_str_plain_fa;
extern PyObject *const_str_plain_lk;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_len;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_flag;
static PyObject *const_str_plain_fvar;
extern PyObject *const_str_plain_hide;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_rout;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_vars;
extern PyObject *const_str_plain_fname;
extern PyObject *const_str_plain_rname;
extern PyObject *const_str_plain_sargs;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_assubr;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_intent;
extern PyObject *const_str_plain_lstrip;
extern PyObject *const_str_plain_pprint;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_vardef;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_errmess;
static PyObject *const_str_plain_f90mode;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_newname;
extern PyObject *const_str_plain_outmess;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_auxfuncs;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_isscalar;
extern PyObject *const_str_plain_selector;
extern PyObject *const_str_plain_typename;
extern PyObject *const_str_plain_typespec;
extern PyObject *const_list_str_empty_list;
extern PyObject *const_str_plain_dimension;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_func2subr;
extern PyObject *const_str_plain_interface;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain___future__;
extern PyObject *const_str_plain_charselect;
extern PyObject *const_str_plain_extra_args;
extern PyObject *const_str_plain_isexternal;
extern PyObject *const_str_plain_isfunction;
extern PyObject *const_str_plain_modulename;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_dumped_args;
extern PyObject *const_str_plain_fortranname;
extern PyObject *const_str_plain_isintent_in;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_charselector;
extern PyObject *const_str_plain_f2py_version;
extern PyObject *const_str_plain_isintent_out;
extern PyObject *const_str_plain_issubroutine;
extern PyObject *const_str_plain_kindselector;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_list_str_plain_hide_list;
extern PyObject *const_str_plain_getfortranname;
static PyObject *const_str_plain_need_interface;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_var2fixfortran;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_isfunction_wrap;
extern PyObject *const_str_plain_ismoduleroutine;
extern PyObject *const_str_plain_saved_interface;
static PyObject *const_str_plain_return_char_star;
extern PyObject *const_tuple_str_plain_rout_tuple;
extern PyObject *const_str_plain_createfuncwrapper;
extern PyObject *const_str_plain_createsubrwrapper;
extern PyObject *const_str_plain_islogicalfunction;
extern PyObject *const_str_plain_issubroutine_wrap;
extern PyObject *const_list_str_chr_42_str_chr_58_list;
static PyObject *const_dict_3ff3e4e9e317a78311460ecf7af6add5;
static PyObject *const_tuple_str_plain_line_str_plain_ret_tuple;
static PyObject *const_list_d4bc04079f357d2a8bd08a67a31f11df_list;
static PyObject *const_str_digest_01f8cf1e5ff5e37b41cca78526df1e76;
static PyObject *const_str_digest_0443d7311821780851fe6ed07be39dba;
static PyObject *const_str_digest_096232a453c03472b15019447649614a;
static PyObject *const_str_digest_1997a694e0d62d29a06a4aa55de7ccaa;
static PyObject *const_str_digest_1c82c98186155378d45f7743b6b655eb;
extern PyObject *const_str_digest_21277227c70f5e755f25b4a0c64fa0bc;
extern PyObject *const_str_digest_237dd7f429679fc8a6c71923f9216ba8;
extern PyObject *const_str_digest_2834cfc2b2187e45fd29c7c5414e8077;
extern PyObject *const_str_digest_29bf226e186bf57b52fac1b0ba1f88ff;
static PyObject *const_str_digest_2b5276a0c1888d607720c7d7c44ed7a7;
static PyObject *const_str_digest_32ce6f129615cc6ac95c68841b2c8909;
static PyObject *const_str_digest_370bad8f19e6c1473d0d0dc2b7e23a34;
static PyObject *const_str_digest_3ba53eccb7916c44f9d3bb25192bb809;
extern PyObject *const_str_digest_4c87c6e09b496dda175cc2898c04a09f;
static PyObject *const_str_digest_602245d1e98a0b0b7eb1dcc76bf2da0f;
static PyObject *const_str_digest_6eff8f3f64f7bd7eecd88db84313c756;
static PyObject *const_str_digest_748b6772053dcc59ea604410a4090433;
extern PyObject *const_str_digest_754cc6c8026945e3f0460f2bf536bb62;
static PyObject *const_str_digest_799fd9cdafa1027369c75f375cc407f4;
extern PyObject *const_str_digest_859f164597f4d6b962c31c0a6de81c4a;
extern PyObject *const_str_digest_88954228dbb961389c9ce267879b3fd4;
extern PyObject *const_str_digest_8a5bfde993b6bf32f8579d8af94a2ccd;
extern PyObject *const_str_digest_8af3f6491259b6c8f5cf2424a1adb737;
static PyObject *const_str_digest_8dbfe1b24de60c5d0c63e343ad0a315d;
extern PyObject *const_str_digest_91920db9e0fced522f6bc14ed1d24d94;
static PyObject *const_str_digest_951be7f7f2249b0644ef5f1e323e9ebd;
static PyObject *const_str_digest_9d4da19da4eeada09d890a0fe5d712f7;
static PyObject *const_str_digest_aad9299509d0732235396554b2a13583;
static PyObject *const_str_digest_b424f57de6afade44f8a63100b1cbca9;
extern PyObject *const_str_digest_b8a43487392b85b8913e3eff04e46c6f;
static PyObject *const_str_digest_bf7ad29a89392d23c1503c858a0ef80a;
static PyObject *const_str_digest_c82feffdf4c057a0604d6892b0d08eef;
static PyObject *const_str_digest_d0d00eeeb848f0286eb1376caecc24de;
static PyObject *const_str_digest_d5500c3f7ef1eb5cdde6fd5d363c5af4;
extern PyObject *const_str_digest_db1efd03c53f5283dbfdc9781df81ed5;
extern PyObject *const_str_digest_e9698e9b4f74e5ebce31f575f272757e;
static PyObject *const_str_digest_e9eef0d18279258ff57e7e5a2299e8f6;
extern PyObject *const_str_digest_edc0e00fead3d5662b71e5a39cdfac1f;
static PyObject *const_str_digest_f1df9aaf026dba3dbfdedb1b68fe3cbf;
extern PyObject *const_str_digest_fc763cb31e9938f37737394681228f83;
static PyObject *const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple;
static PyObject *const_tuple_6b874552e9e65d05a009aa68c53809f7_tuple;
static PyObject *const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple;
extern PyObject *const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple;
static PyObject *const_tuple_d454847410db8f8105221845748e9005_tuple;
static PyObject *const_tuple_str_plain_rout_str_plain_signature_tuple;
static PyObject *const_tuple_str_plain_vars_str_plain_a_str_plain_fa_str_plain_f90mode_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_fvar = UNSTREAM_STRING( &constant_bin[ 98334 ], 4, 1 );
    const_str_plain_f90mode = UNSTREAM_STRING( &constant_bin[ 150071 ], 7, 1 );
    const_str_plain_dumped_args = UNSTREAM_STRING( &constant_bin[ 150308 ], 11, 1 );
    const_list_str_plain_hide_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_hide_list, 0, const_str_plain_hide ); Py_INCREF( const_str_plain_hide );
    const_str_plain_need_interface = UNSTREAM_STRING( &constant_bin[ 150365 ], 14, 1 );
    const_str_plain_return_char_star = UNSTREAM_STRING( &constant_bin[ 1069399 ], 16, 1 );
    const_dict_3ff3e4e9e317a78311460ecf7af6add5 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_3ff3e4e9e317a78311460ecf7af6add5, const_str_plain_typespec, const_str_plain_integer );
    PyDict_SetItem( const_dict_3ff3e4e9e317a78311460ecf7af6add5, const_str_plain_intent, const_list_str_plain_hide_list );
    const_tuple_str_plain_line_str_plain_ret_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_line_str_plain_ret_tuple, 0, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    PyTuple_SET_ITEM( const_tuple_str_plain_line_str_plain_ret_tuple, 1, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_list_d4bc04079f357d2a8bd08a67a31f11df_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_d4bc04079f357d2a8bd08a67a31f11df_list, 0, const_str_chr_42 ); Py_INCREF( const_str_chr_42 );
    PyList_SET_ITEM( const_list_d4bc04079f357d2a8bd08a67a31f11df_list, 1, const_str_chr_58 ); Py_INCREF( const_str_chr_58 );
    PyList_SET_ITEM( const_list_d4bc04079f357d2a8bd08a67a31f11df_list, 2, const_str_digest_859f164597f4d6b962c31c0a6de81c4a ); Py_INCREF( const_str_digest_859f164597f4d6b962c31c0a6de81c4a );
    const_str_digest_01f8cf1e5ff5e37b41cca78526df1e76 = UNSTREAM_STRING( &constant_bin[ 333535 ], 4, 0 );
    const_str_digest_0443d7311821780851fe6ed07be39dba = UNSTREAM_STRING( &constant_bin[ 1069415 ], 54, 0 );
    const_str_digest_096232a453c03472b15019447649614a = UNSTREAM_STRING( &constant_bin[ 1069469 ], 13, 0 );
    const_str_digest_1997a694e0d62d29a06a4aa55de7ccaa = UNSTREAM_STRING( &constant_bin[ 1069482 ], 11, 0 );
    const_str_digest_1c82c98186155378d45f7743b6b655eb = UNSTREAM_STRING( &constant_bin[ 1069493 ], 29, 0 );
    const_str_digest_2b5276a0c1888d607720c7d7c44ed7a7 = UNSTREAM_STRING( &constant_bin[ 1069522 ], 11, 0 );
    const_str_digest_32ce6f129615cc6ac95c68841b2c8909 = UNSTREAM_STRING( &constant_bin[ 1069533 ], 13, 0 );
    const_str_digest_370bad8f19e6c1473d0d0dc2b7e23a34 = UNSTREAM_STRING( &constant_bin[ 1069546 ], 30, 0 );
    const_str_digest_3ba53eccb7916c44f9d3bb25192bb809 = UNSTREAM_STRING( &constant_bin[ 1069576 ], 343, 0 );
    const_str_digest_602245d1e98a0b0b7eb1dcc76bf2da0f = UNSTREAM_STRING( &constant_bin[ 1069919 ], 10, 0 );
    const_str_digest_6eff8f3f64f7bd7eecd88db84313c756 = UNSTREAM_STRING( &constant_bin[ 1069929 ], 11, 0 );
    const_str_digest_748b6772053dcc59ea604410a4090433 = UNSTREAM_STRING( &constant_bin[ 1069940 ], 17, 0 );
    const_str_digest_799fd9cdafa1027369c75f375cc407f4 = UNSTREAM_STRING( &constant_bin[ 1069957 ], 9, 0 );
    const_str_digest_8dbfe1b24de60c5d0c63e343ad0a315d = UNSTREAM_STRING( &constant_bin[ 1069966 ], 20, 0 );
    const_str_digest_951be7f7f2249b0644ef5f1e323e9ebd = UNSTREAM_STRING( &constant_bin[ 1069986 ], 6, 0 );
    const_str_digest_9d4da19da4eeada09d890a0fe5d712f7 = UNSTREAM_STRING( &constant_bin[ 1069992 ], 6, 0 );
    const_str_digest_aad9299509d0732235396554b2a13583 = UNSTREAM_STRING( &constant_bin[ 1069998 ], 49, 0 );
    const_str_digest_b424f57de6afade44f8a63100b1cbca9 = UNSTREAM_STRING( &constant_bin[ 1070047 ], 56, 0 );
    const_str_digest_bf7ad29a89392d23c1503c858a0ef80a = UNSTREAM_STRING( &constant_bin[ 1070103 ], 26, 0 );
    const_str_digest_c82feffdf4c057a0604d6892b0d08eef = UNSTREAM_STRING( &constant_bin[ 1070129 ], 12, 0 );
    const_str_digest_d0d00eeeb848f0286eb1376caecc24de = UNSTREAM_STRING( &constant_bin[ 1070141 ], 9, 0 );
    const_str_digest_d5500c3f7ef1eb5cdde6fd5d363c5af4 = UNSTREAM_STRING( &constant_bin[ 1070150 ], 23, 0 );
    const_str_digest_e9eef0d18279258ff57e7e5a2299e8f6 = UNSTREAM_STRING( &constant_bin[ 1070173 ], 56, 0 );
    const_str_digest_f1df9aaf026dba3dbfdedb1b68fe3cbf = UNSTREAM_STRING( &constant_bin[ 1070229 ], 47, 0 );
    const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 0, const_str_plain_vars ); Py_INCREF( const_str_plain_vars );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 2, const_str_plain_fa ); Py_INCREF( const_str_plain_fa );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 3, const_str_plain_f90mode ); Py_INCREF( const_str_plain_f90mode );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 4, const_str_plain_vardef ); Py_INCREF( const_str_plain_vardef );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 5, const_str_plain_selector ); Py_INCREF( const_str_plain_selector );
    PyTuple_SET_ITEM( const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 6, const_str_plain_lk ); Py_INCREF( const_str_plain_lk );
    const_tuple_6b874552e9e65d05a009aa68c53809f7_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1070276 ], 260 );
    const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 0, const_str_plain_rout ); Py_INCREF( const_str_plain_rout );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 1, const_str_plain_fortranname ); Py_INCREF( const_str_plain_fortranname );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 3, const_str_plain_fname ); Py_INCREF( const_str_plain_fname );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 4, const_str_plain_rname ); Py_INCREF( const_str_plain_rname );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 5, const_str_plain_fvar ); Py_INCREF( const_str_plain_fvar );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 6, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    PyTuple_SET_ITEM( const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_d454847410db8f8105221845748e9005_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1070536 ], 206 );
    const_tuple_str_plain_rout_str_plain_signature_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rout_str_plain_signature_tuple, 0, const_str_plain_rout ); Py_INCREF( const_str_plain_rout );
    PyTuple_SET_ITEM( const_tuple_str_plain_rout_str_plain_signature_tuple, 1, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    const_tuple_str_plain_vars_str_plain_a_str_plain_fa_str_plain_f90mode_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vars_str_plain_a_str_plain_fa_str_plain_f90mode_tuple, 0, const_str_plain_vars ); Py_INCREF( const_str_plain_vars );
    PyTuple_SET_ITEM( const_tuple_str_plain_vars_str_plain_a_str_plain_fa_str_plain_f90mode_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_vars_str_plain_a_str_plain_fa_str_plain_f90mode_tuple, 2, const_str_plain_fa ); Py_INCREF( const_str_plain_fa );
    PyTuple_SET_ITEM( const_tuple_str_plain_vars_str_plain_a_str_plain_fa_str_plain_f90mode_tuple, 3, const_str_plain_f90mode ); Py_INCREF( const_str_plain_f90mode );
}

// The module code objects.
static PyCodeObject *codeobj_c367da7ffbcf8d0c331d6ea84aeb3458;
static PyCodeObject *codeobj_9fa38ee103861870e0d6ed17fb7f5bc3;
static PyCodeObject *codeobj_551f31e60b031b5fbc25a1f9bebac447;
static PyCodeObject *codeobj_05f5cdd4ba6acf04cf93889ff14091cd;
static PyCodeObject *codeobj_4f88857edc5378309250e8eee938d8f8;
static PyCodeObject *codeobj_6277c958170700ab6a93ddc8a5580fcb;
static PyCodeObject *codeobj_88455cbe80e4fc155636bdd211eaeebe;
static PyCodeObject *codeobj_08cf02557431e2ae56e493351001e4d2;
static PyCodeObject *codeobj_7be5084538fb0a0f3cfb5da66c7d6f47;
static PyCodeObject *codeobj_7362808d6217e87beeb9103794e715e6;
static PyCodeObject *codeobj_080d1fc37d017f4a8c73a6adae704852;

static void _initModuleCodeObjects(void)
{
    codeobj_c367da7ffbcf8d0c331d6ea84aeb3458 = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_add, 97, const_tuple_str_plain_line_str_plain_ret_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9fa38ee103861870e0d6ed17fb7f5bc3 = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_add, 200, const_tuple_str_plain_line_str_plain_ret_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_551f31e60b031b5fbc25a1f9bebac447 = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_assubr, 260, const_tuple_str_plain_rout_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_05f5cdd4ba6acf04cf93889ff14091cd = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_assubr, 260, const_tuple_74834f3594f68b17c4f4d77cd775dca7_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4f88857edc5378309250e8eee938d8f8 = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_createfuncwrapper, 78, const_tuple_str_plain_rout_str_plain_signature_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6277c958170700ab6a93ddc8a5580fcb = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_createfuncwrapper, 78, const_tuple_6b874552e9e65d05a009aa68c53809f7_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_88455cbe80e4fc155636bdd211eaeebe = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_createsubrwrapper, 181, const_tuple_str_plain_rout_str_plain_signature_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_08cf02557431e2ae56e493351001e4d2 = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_createsubrwrapper, 181, const_tuple_d454847410db8f8105221845748e9005_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7be5084538fb0a0f3cfb5da66c7d6f47 = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_func2subr, 0, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7362808d6217e87beeb9103794e715e6 = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_var2fixfortran, 30, const_tuple_str_plain_vars_str_plain_a_str_plain_fa_str_plain_f90mode_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_080d1fc37d017f4a8c73a6adae704852 = MAKE_CODEOBJ( const_str_digest_b424f57de6afade44f8a63100b1cbca9, const_str_plain_var2fixfortran, 30, const_tuple_1fb5f6bb3117bea0b38e6bdf1f483609_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_4_assubr_of_module_numpy$f2py$func2subr(  );


// The module function definitions.
static PyObject *impl_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject *_python_par_vars, PyObject *_python_par_a, PyObject *_python_par_fa, PyObject *_python_par_f90mode )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_vars; par_vars.object = _python_par_vars;
    PyObjectLocalVariable par_a; par_a.object = _python_par_a;
    PyObjectLocalVariable par_fa; par_fa.object = _python_par_fa;
    PyObjectLocalVariable par_f90mode; par_f90mode.object = _python_par_f90mode;
    PyObjectLocalVariable var_vardef;
    PyObjectLocalVariable var_selector;
    PyObjectLocalVariable var_lk;
    PyObjectTempVariable tmp_and_1__value_1;
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
    PyObject *tmp_assign_source_20;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
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
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
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
    PyObject *tmp_subscr_subscript_14;
    PyObject *tmp_subscr_subscript_15;
    PyObject *tmp_subscr_subscript_16;
    PyObject *tmp_subscr_subscript_17;
    PyObject *tmp_subscr_subscript_18;
    PyObject *tmp_subscr_subscript_19;
    PyObject *tmp_subscr_subscript_20;
    PyObject *tmp_subscr_subscript_21;
    PyObject *tmp_subscr_subscript_22;
    PyObject *tmp_subscr_subscript_23;
    PyObject *tmp_subscr_subscript_24;
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
    PyObject *tmp_subscr_target_14;
    PyObject *tmp_subscr_target_15;
    PyObject *tmp_subscr_target_16;
    PyObject *tmp_subscr_target_17;
    PyObject *tmp_subscr_target_18;
    PyObject *tmp_subscr_target_19;
    PyObject *tmp_subscr_target_20;
    PyObject *tmp_subscr_target_21;
    PyObject *tmp_subscr_target_22;
    PyObject *tmp_subscr_target_23;
    PyObject *tmp_subscr_target_24;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7362808d6217e87beeb9103794e715e6, module_numpy$f2py$func2subr );
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
    tmp_compare_left_1 = par_fa.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150007 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
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
    tmp_assign_source_1 = par_a.object;

    if ( tmp_assign_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    if (par_fa.object == NULL)
    {
        par_fa.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
    }
    else
    {
        PyObject *old = par_fa.object;
        par_fa.object = INCREASE_REFCOUNT( tmp_assign_source_1 );
        Py_DECREF( old );
    }
    branch_no_1:;
    tmp_compare_left_2 = par_a.object;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = par_vars.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_show );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144803 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_vars.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 34;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125154 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = const_str_digest_aad9299509d0732235396554b2a13583;
    tmp_binop_right_1 = par_a.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 35;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_compare_left_3 = const_str_plain_typespec;
    tmp_subscr_target_1 = par_vars.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = par_a.object;

    if ( tmp_subscr_subscript_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_NotIn_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_NotIn_2 == 0)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_show );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_show );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144803 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_2 = par_vars.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = par_a.object;

    if ( tmp_subscr_subscript_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 38;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125154 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = const_str_digest_f1df9aaf026dba3dbfdedb1b68fe3cbf;
    tmp_binop_right_2 = par_a.object;

    if ( tmp_binop_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 39;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_subscr_target_4 = par_vars.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_4 = par_a.object;

    if ( tmp_subscr_subscript_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = const_str_plain_typespec;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    assert( var_vardef.object == NULL );
    var_vardef.object = tmp_assign_source_2;

    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_compexpr_left_1 = var_vardef.object;

    tmp_compexpr_right_1 = const_str_plain_type;
    tmp_assign_source_3 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
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


        frame_function->f_lineno = 42;
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
    tmp_compexpr_left_2 = const_str_plain_typename;
    tmp_subscr_target_5 = par_vars.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_3;
    }

    tmp_subscr_subscript_5 = par_a.object;

    if ( tmp_subscr_subscript_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_3;
    }
    tmp_cond_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_right_2 );

        frame_function->f_lineno = 42;
        goto try_finally_handler_3;
    }
    Py_DECREF( tmp_compexpr_right_2 );
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


        frame_function->f_lineno = 42;
        goto try_finally_handler_1;
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
    tmp_binop_left_3 = const_str_digest_8a5bfde993b6bf32f8579d8af94a2ccd;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_vardef.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_1 );
    tmp_subscr_target_7 = par_vars.object;

    if ( tmp_subscr_target_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_7 = par_a.object;

    if ( tmp_subscr_subscript_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_6 = const_str_plain_typename;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_1 );
    tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }
    if (var_vardef.object == NULL)
    {
        var_vardef.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    branch_no_4:;
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
    Py_XDECREF( tmp_and_1__value_1.object );
    tmp_and_1__value_1.object = NULL;

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
    tmp_assign_source_5 = PyDict_New();
    assert( var_selector.object == NULL );
    var_selector.object = tmp_assign_source_5;

    tmp_assign_source_6 = const_str_empty;
    assert( var_lk.object == NULL );
    var_lk.object = INCREASE_REFCOUNT( tmp_assign_source_6 );

    tmp_compare_left_4 = const_str_plain_kindselector;
    tmp_subscr_target_8 = par_vars.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_8 = par_a.object;

    if ( tmp_subscr_subscript_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_4 );

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_4 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_subscr_target_10 = par_vars.object;

    if ( tmp_subscr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_10 = par_a.object;

    if ( tmp_subscr_subscript_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_subscr_target_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_9 = const_str_plain_kindselector;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    Py_DECREF( tmp_subscr_target_9 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    assert( var_selector.object != NULL );
    {
        PyObject *old = var_selector.object;
        var_selector.object = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_assign_source_8 = const_str_plain_kind;
    assert( var_lk.object != NULL );
    {
        PyObject *old = var_lk.object;
        var_lk.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_compare_left_5 = const_str_plain_charselector;
    tmp_subscr_target_11 = par_vars.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_11 = par_a.object;

    if ( tmp_subscr_subscript_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_5 );

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_5 );
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_subscr_target_13 = par_vars.object;

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_13 = par_a.object;

    if ( tmp_subscr_subscript_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_subscr_target_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_12 = const_str_plain_charselector;
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    Py_DECREF( tmp_subscr_target_12 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    assert( var_selector.object != NULL );
    {
        PyObject *old = var_selector.object;
        var_selector.object = tmp_assign_source_9;
        Py_DECREF( old );
    }

    tmp_assign_source_10 = const_str_plain_len;
    assert( var_lk.object != NULL );
    {
        PyObject *old = var_lk.object;
        var_lk.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }

    branch_no_6:;
    branch_end_5:;
    tmp_compare_left_6 = const_str_chr_42;
    tmp_compare_right_6 = var_selector.object;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_3 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_cond_value_3 = par_f90mode.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
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
    tmp_subscr_target_14 = var_selector.object;

    if ( tmp_subscr_target_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_14 = const_str_chr_42;
    tmp_compare_left_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = LIST_COPY( const_list_d4bc04079f357d2a8bd08a67a31f11df_list );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_7 );
        Py_DECREF( tmp_compare_right_7 );

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    Py_DECREF( tmp_compare_right_7 );
    if (tmp_cmp_In_4 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_binop_left_4 = const_str_digest_d0d00eeeb848f0286eb1376caecc24de;
    tmp_binop_right_4 = var_vardef.object;

    if ( tmp_binop_right_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    if (var_vardef.object == NULL)
    {
        var_vardef.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_binop_left_5 = const_str_digest_799fd9cdafa1027369c75f375cc407f4;
    tmp_binop_right_5 = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_vardef.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_lk.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150108 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 1, tmp_tuple_element_2 );
    tmp_subscr_target_15 = var_selector.object;

    if ( tmp_subscr_target_15 == NULL )
    {
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_15 = const_str_chr_42;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_5 );

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_5, 2, tmp_tuple_element_2 );
    tmp_assign_source_12 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    if (var_vardef.object == NULL)
    {
        var_vardef.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    branch_end_9:;
    goto branch_end_8;
    branch_no_8:;
    tmp_subscr_target_16 = var_selector.object;

    if ( tmp_subscr_target_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_16 = const_str_chr_42;
    tmp_compare_left_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = LIST_COPY( const_list_str_chr_42_str_chr_58_list );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_8 );
        Py_DECREF( tmp_compare_right_8 );

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if (tmp_cmp_In_5 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_binop_left_6 = const_str_digest_8af3f6491259b6c8f5cf2424a1adb737;
    tmp_binop_right_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_vardef.object;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_6, 0, tmp_tuple_element_3 );
    tmp_subscr_target_17 = var_selector.object;

    if ( tmp_subscr_target_17 == NULL )
    {
        Py_DECREF( tmp_binop_right_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_17 = const_str_chr_42;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_17, tmp_subscr_subscript_17 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_6 );

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_6, 1, tmp_tuple_element_3 );
    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    if (var_vardef.object == NULL)
    {
        var_vardef.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_binop_left_7 = const_str_digest_754cc6c8026945e3f0460f2bf536bb62;
    tmp_binop_right_7 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_vardef.object;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_binop_right_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_7, 0, tmp_tuple_element_4 );
    tmp_subscr_target_18 = var_selector.object;

    if ( tmp_subscr_target_18 == NULL )
    {
        Py_DECREF( tmp_binop_right_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_18 = const_str_chr_42;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_18, tmp_subscr_subscript_18 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_7 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_7, 1, tmp_tuple_element_4 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    if (var_vardef.object == NULL)
    {
        var_vardef.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    branch_end_10:;
    branch_end_8:;
    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_9 = const_str_plain_len;
    tmp_compare_right_9 = var_selector.object;

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_6 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_binop_left_8 = const_str_digest_4c87c6e09b496dda175cc2898c04a09f;
    tmp_binop_right_8 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_vardef.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_8, 0, tmp_tuple_element_5 );
    tmp_subscr_target_19 = var_selector.object;

    if ( tmp_subscr_target_19 == NULL )
    {
        Py_DECREF( tmp_binop_right_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_19 = const_str_plain_len;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_19, tmp_subscr_subscript_19 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_8 );

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_8, 1, tmp_tuple_element_5 );
    tmp_assign_source_15 = BINARY_OPERATION_REMAINDER( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    if (var_vardef.object == NULL)
    {
        var_vardef.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_compare_left_10 = const_str_plain_kind;
    tmp_compare_right_10 = var_selector.object;

    if ( tmp_compare_right_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_7 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_binop_left_9 = const_str_digest_edc0e00fead3d5662b71e5a39cdfac1f;
    tmp_binop_right_9 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_vardef.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 0, tmp_tuple_element_6 );
    tmp_subscr_target_20 = var_selector.object;

    if ( tmp_subscr_target_20 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_20 = const_str_plain_kind;
    tmp_tuple_element_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_20, tmp_subscr_subscript_20 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_9, 1, tmp_tuple_element_6 );
    tmp_assign_source_16 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    assert( var_vardef.object != NULL );
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_16;
        Py_DECREF( old );
    }

    goto branch_end_12;
    branch_no_12:;
    tmp_binop_left_10 = const_str_digest_91920db9e0fced522f6bc14ed1d24d94;
    tmp_binop_right_10 = var_vardef.object;

    tmp_assign_source_17 = BINARY_OPERATION_REMAINDER( tmp_binop_left_10, tmp_binop_right_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    assert( var_vardef.object != NULL );
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_17;
        Py_DECREF( old );
    }

    branch_end_12:;
    goto branch_end_11;
    branch_no_11:;
    tmp_compare_left_11 = const_str_plain_kind;
    tmp_compare_right_11 = var_selector.object;

    if ( tmp_compare_right_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_In_8 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_binop_left_11 = const_str_digest_21277227c70f5e755f25b4a0c64fa0bc;
    tmp_binop_right_11 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_vardef.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_binop_right_11, 0, tmp_tuple_element_7 );
    tmp_subscr_target_21 = var_selector.object;

    if ( tmp_subscr_target_21 == NULL )
    {
        Py_DECREF( tmp_binop_right_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 136627 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_21 = const_str_plain_kind;
    tmp_tuple_element_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_21, tmp_subscr_subscript_21 );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_11 );

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_11, 1, tmp_tuple_element_7 );
    tmp_assign_source_18 = BINARY_OPERATION_REMAINDER( tmp_binop_left_11, tmp_binop_right_11 );
    Py_DECREF( tmp_binop_right_11 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    if (var_vardef.object == NULL)
    {
        var_vardef.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    branch_no_13:;
    branch_end_11:;
    branch_end_7:;
    tmp_binop_left_12 = const_str_digest_29bf226e186bf57b52fac1b0ba1f88ff;
    tmp_binop_right_12 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_vardef.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_binop_right_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 144836 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_binop_right_12, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = par_fa.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_binop_right_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150007 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_binop_right_12, 1, tmp_tuple_element_8 );
    tmp_assign_source_19 = BINARY_OPERATION_REMAINDER( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_right_12 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    if (var_vardef.object == NULL)
    {
        var_vardef.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_compare_left_12 = const_str_plain_dimension;
    tmp_subscr_target_22 = par_vars.object;

    if ( tmp_subscr_target_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_22 = par_a.object;

    if ( tmp_subscr_subscript_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_22, tmp_subscr_subscript_22 );
    if ( tmp_compare_right_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    if ( tmp_cmp_In_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_right_12 );

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_12 );
    if (tmp_cmp_In_9 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_binop_left_13 = const_str_digest_8a5bfde993b6bf32f8579d8af94a2ccd;
    tmp_binop_right_13 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_vardef.object;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_binop_right_13, 0, tmp_tuple_element_9 );
    tmp_source_name_1 = const_str_chr_44;
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_13 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_24 = par_vars.object;

    if ( tmp_subscr_target_24 == NULL )
    {
        Py_DECREF( tmp_binop_right_13 );
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_24 = par_a.object;

    if ( tmp_subscr_subscript_24 == NULL )
    {
        Py_DECREF( tmp_binop_right_13 );
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_23 = LOOKUP_SUBSCRIPT( tmp_subscr_target_24, tmp_subscr_subscript_24 );
    if ( tmp_subscr_target_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_13 );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_23 = const_str_plain_dimension;
    tmp_call_arg_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_23, tmp_subscr_subscript_23 );
    Py_DECREF( tmp_subscr_target_23 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_13 );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 75;
    tmp_tuple_element_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_13 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_13, 1, tmp_tuple_element_9 );
    tmp_assign_source_20 = BINARY_OPERATION_REMAINDER( tmp_binop_left_13, tmp_binop_right_13 );
    Py_DECREF( tmp_binop_right_13 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    assert( var_vardef.object != NULL );
    {
        PyObject *old = var_vardef.object;
        var_vardef.object = tmp_assign_source_20;
        Py_DECREF( old );
    }

    branch_no_14:;

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
    if ((var_vardef.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vardef,
            var_vardef.object
        );

    }
    if ((var_selector.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_selector,
            var_selector.object
        );

    }
    if ((var_lk.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_lk,
            var_lk.object
        );

    }
    if ((par_vars.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vars,
            par_vars.object
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
    if ((par_fa.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fa,
            par_fa.object
        );

    }
    if ((par_f90mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f90mode,
            par_f90mode.object
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
    tmp_return_value = var_vardef.object;

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
static PyObject *fparse_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_vars = NULL;
    PyObject *_python_par_a = NULL;
    PyObject *_python_par_fa = NULL;
    PyObject *_python_par_f90mode = NULL;
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
                PyErr_Format( PyExc_TypeError, "var2fixfortran() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_vars == key )
            {
                assert( _python_par_vars == NULL );
                _python_par_vars = value;

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
            if ( found == false && const_str_plain_fa == key )
            {
                assert( _python_par_fa == NULL );
                _python_par_fa = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_f90mode == key )
            {
                assert( _python_par_f90mode == NULL );
                _python_par_f90mode = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_vars, key ) == 1 )
            {
                assert( _python_par_vars == NULL );
                _python_par_vars = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_fa, key ) == 1 )
            {
                assert( _python_par_fa == NULL );
                _python_par_fa = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_f90mode, key ) == 1 )
            {
                assert( _python_par_f90mode == NULL );
                _python_par_f90mode = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "var2fixfortran() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_vars != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_vars = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_vars == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_vars = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_a = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_fa != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_fa = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_fa == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_fa = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_f90mode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_f90mode = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_f90mode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_f90mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_vars == NULL || _python_par_a == NULL || _python_par_fa == NULL || _python_par_f90mode == NULL ))
    {
        PyObject *values[] = { _python_par_vars, _python_par_a, _python_par_fa, _python_par_f90mode };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( self, _python_par_vars, _python_par_a, _python_par_fa, _python_par_f90mode );

error_exit:;

    Py_XDECREF( _python_par_vars );
    Py_XDECREF( _python_par_a );
    Py_XDECREF( _python_par_fa );
    Py_XDECREF( _python_par_f90mode );

    return NULL;
}

static PyObject *dparse_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject *_python_par_rout, PyObject *_python_par_signature )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_rout; par_rout.object = _python_par_rout;
    PyObjectLocalVariable par_signature; par_signature.object = _python_par_signature;
    PyObjectLocalVariable var_extra_args;
    PyObjectLocalVariable var_vars;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_d;
    PyObjectLocalVariable var_dn;
    PyObjectLocalVariable var_dv;
    PyObjectLocalVariable var_need_interface;
    PyObjectLocalVariable var_ret;
    PyObjectLocalVariable var_add;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_fortranname;
    PyObjectLocalVariable var_f90mode;
    PyObjectLocalVariable var_newname;
    PyObjectLocalVariable var_args;
    PyObjectLocalVariable var_l;
    PyObjectLocalVariable var_return_char_star;
    PyObjectLocalVariable var_charselect;
    PyObjectLocalVariable var_sargs;
    PyObjectLocalVariable var_line;
    PyObjectLocalVariable var_dumped_args;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__for_iterator;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
    PyObjectTempVariable tmp_for_loop_6__for_iterator;
    PyObjectTempVariable tmp_for_loop_6__iter_value;
    PyObjectTempVariable tmp_for_loop_7__for_iterator;
    PyObjectTempVariable tmp_for_loop_7__iter_value;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
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
    PyObject *tmp_bool_arg_1;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
    PyObject *tmp_call_kw_3;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
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
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
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
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
    PyObject *tmp_next_source_8;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    Py_ssize_t tmp_slice_index_upper_5;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_5;
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
    PyObject *tmp_subscr_subscript_14;
    PyObject *tmp_subscr_subscript_15;
    PyObject *tmp_subscr_subscript_16;
    PyObject *tmp_subscr_subscript_17;
    PyObject *tmp_subscr_subscript_18;
    PyObject *tmp_subscr_subscript_19;
    PyObject *tmp_subscr_subscript_20;
    PyObject *tmp_subscr_subscript_21;
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
    PyObject *tmp_subscr_target_14;
    PyObject *tmp_subscr_target_15;
    PyObject *tmp_subscr_target_16;
    PyObject *tmp_subscr_target_17;
    PyObject *tmp_subscr_target_18;
    PyObject *tmp_subscr_target_19;
    PyObject *tmp_subscr_target_20;
    PyObject *tmp_subscr_target_21;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4f88857edc5378309250e8eee938d8f8, module_numpy$f2py$func2subr );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isfunction );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 51241 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_rout.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 79;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 79;
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
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 79;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_extra_args.object == NULL );
    var_extra_args.object = tmp_assign_source_1;

    tmp_subscr_target_1 = par_rout.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_str_plain_vars;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    assert( var_vars.object == NULL );
    var_vars.object = tmp_assign_source_2;

    tmp_subscr_target_2 = par_rout.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_str_plain_args;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_3;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_4 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 83;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_for_loop_1__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_subscr_target_4 = par_rout.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_4 = const_str_plain_vars;
    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_3 = var_a.object;

    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto try_finally_handler_1;
    }
    if (var_v.object == NULL)
    {
        var_v.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_1;
    }
    tmp_source_name_1 = var_v.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = const_str_plain_dimension;
    tmp_call_arg_element_4 = PyList_New( 0 );
    frame_function->f_lineno = 85;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 85;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_1;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
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
        frame_function->f_lineno = 85;
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
    // Tried code
    tmp_iter_arg_3 = tmp_for_loop_2__iter_value.object;

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
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


        frame_function->f_lineno = 85;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
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


        frame_function->f_lineno = 85;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
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

            goto try_finally_handler_3;
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

        goto try_finally_handler_3;
    }
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
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

        goto try_finally_handler_2;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_compare_left_1 = var_d.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto try_finally_handler_2;
    }

    tmp_compare_right_1 = const_str_chr_58;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto try_finally_handler_2;
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
    tmp_binop_left_1 = const_str_digest_2b5276a0c1888d607720c7d7c44ed7a7;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_i.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto try_finally_handler_2;
    }
    if (var_dn.object == NULL)
    {
        var_dn.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_dn.object;
        var_dn.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_assign_source_15 = DEEP_COPY( const_dict_3ff3e4e9e317a78311460ecf7af6add5 );
    if (var_dv.object == NULL)
    {
        var_dv.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_dv.object;
        var_dv.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_binop_left_2 = const_str_digest_32ce6f129615cc6ac95c68841b2c8909;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_a.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_i.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_2 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }
    tmp_ass_subscribed_1 = var_dv.object;

    tmp_ass_subscript_1 = const_str_chr_61;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto try_finally_handler_2;
    }
    tmp_source_name_2 = var_extra_args.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto try_finally_handler_2;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_5 = var_dn.object;

    frame_function->f_lineno = 90;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_2 = var_dv.object;

    tmp_ass_subscribed_2 = var_vars.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }

    tmp_ass_subscript_2 = var_dn.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto try_finally_handler_2;
    }
    tmp_ass_subvalue_3 = var_dn.object;

    tmp_subscr_target_5 = var_v.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_5 = const_str_plain_dimension;
    tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto try_finally_handler_2;
    }
    tmp_ass_subscript_3 = var_i.object;

    if ( tmp_ass_subscript_3 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto try_finally_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto try_finally_handler_2;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
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
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
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
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_1;
    }

    goto finally_end_2;
    finally_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
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
    tmp_subscr_target_6 = par_rout.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_6 = const_str_plain_args;
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_extra_args.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 93;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_bool_arg_1 = var_extra_args.object;

    if ( tmp_bool_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    assert( var_need_interface.object == NULL );
    var_need_interface.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    tmp_assign_source_17 = LIST_COPY( const_list_str_empty_list );
    assert( var_ret.object == NULL );
    var_ret.object = tmp_assign_source_17;

    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_ret.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_3 );
    tmp_assign_source_18 = MAKE_FUNCTION_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( tmp_defaults_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    assert( var_add.object == NULL );
    var_add.object = tmp_assign_source_18;

    tmp_subscr_target_7 = par_rout.object;

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_7 = const_str_plain_name;
    tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    assert( var_name.object == NULL );
    var_name.object = tmp_assign_source_19;

    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfortranname );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128840 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_rout.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 100;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    assert( var_fortranname.object == NULL );
    var_fortranname.object = tmp_assign_source_20;

    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_ismoduleroutine );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ismoduleroutine );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150156 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = par_rout.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 101;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    assert( var_f90mode.object == NULL );
    var_f90mode.object = tmp_assign_source_21;

    tmp_binop_left_3 = const_str_digest_602245d1e98a0b0b7eb1dcc76bf2da0f;
    tmp_binop_right_3 = var_name.object;

    tmp_assign_source_22 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    assert( var_newname.object == NULL );
    var_newname.object = tmp_assign_source_22;

    tmp_compare_left_2 = var_newname.object;

    tmp_compare_right_2 = var_vars.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
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
    tmp_subscr_target_8 = var_vars.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_8 = var_name.object;

    tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_4 = var_vars.object;

    if ( tmp_ass_subscribed_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_4 = var_newname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_4 = PyList_New( 1 );
    tmp_list_element_1 = var_newname.object;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_binop_left_4, 0, tmp_list_element_1 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_subscr_target_9 = par_rout.object;

    if ( tmp_subscr_target_9 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_9 = const_str_plain_args;
    tmp_slice_source_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_binop_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    assert( var_args.object == NULL );
    var_args.object = tmp_assign_source_23;

    goto branch_end_3;
    branch_no_3:;
    tmp_binop_left_5 = PyList_New( 1 );
    tmp_list_element_2 = var_newname.object;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_binop_left_5, 0, tmp_list_element_2 );
    tmp_subscr_target_10 = par_rout.object;

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_binop_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_10 = const_str_plain_args;
    tmp_binop_right_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    assert( var_args.object == NULL );
    var_args.object = tmp_assign_source_24;

    branch_end_3:;
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150200 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = var_vars.object;

    if ( tmp_call_arg_element_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = var_name.object;

    tmp_call_arg_element_11 = var_newname.object;

    tmp_call_arg_element_12 = var_f90mode.object;

    frame_function->f_lineno = 110;
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS4( tmp_called_8, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    assert( var_l.object == NULL );
    var_l.object = tmp_assign_source_25;

    tmp_assign_source_26 = const_int_0;
    assert( var_return_char_star.object == NULL );
    var_return_char_star.object = INCREASE_REFCOUNT( tmp_assign_source_26 );

    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 13;
    tmp_slice_source_2 = var_l.object;

    tmp_compare_left_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_digest_096232a453c03472b15019447649614a;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_27 = const_int_pos_1;
    assert( var_return_char_star.object != NULL );
    {
        PyObject *old = var_return_char_star.object;
        var_return_char_star.object = INCREASE_REFCOUNT( tmp_assign_source_27 );
        Py_DECREF( old );
    }

    tmp_cond_value_2 = var_f90mode.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_binop_left_6 = const_str_digest_748b6772053dcc59ea604410a4090433;
    tmp_sliceslicedel_index_lower_3 = 13;
    tmp_slice_index_upper_3 = PY_SSIZE_T_MAX;
    tmp_slice_source_3 = var_l.object;

    tmp_binop_right_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = BINARY_OPERATION_ADD( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    assert( var_l.object != NULL );
    {
        PyObject *old = var_l.object;
        var_l.object = tmp_assign_source_28;
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_binop_left_7 = const_str_digest_c82feffdf4c057a0604d6892b0d08eef;
    tmp_sliceslicedel_index_lower_4 = 13;
    tmp_slice_index_upper_4 = PY_SSIZE_T_MAX;
    tmp_slice_source_4 = var_l.object;

    tmp_binop_right_7 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = BINARY_OPERATION_ADD( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    assert( var_l.object != NULL );
    {
        PyObject *old = var_l.object;
        var_l.object = tmp_assign_source_29;
        Py_DECREF( old );
    }

    branch_end_5:;
    tmp_subscr_target_12 = var_vars.object;

    if ( tmp_subscr_target_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_12 = var_name.object;

    tmp_subscr_target_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_subscr_target_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_11 = const_str_plain_charselector;
    tmp_assign_source_30 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    Py_DECREF( tmp_subscr_target_11 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    assert( var_charselect.object == NULL );
    var_charselect.object = tmp_assign_source_30;

    tmp_source_name_4 = var_charselect.object;

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_chr_42;
    tmp_call_arg_element_14 = const_str_empty;
    frame_function->f_lineno = 117;
    tmp_compare_left_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_str_digest_859f164597f4d6b962c31c0a6de81c4a;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_ass_subvalue_5 = const_str_plain_10;
    tmp_ass_subscribed_5 = var_charselect.object;

    tmp_ass_subscript_5 = const_str_chr_42;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    branch_no_4:;
    tmp_source_name_5 = const_str_digest_fc763cb31e9938f37737394681228f83;
    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = var_args.object;

    frame_function->f_lineno = 119;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    assert( var_sargs.object == NULL );
    var_sargs.object = tmp_assign_source_31;

    tmp_cond_value_3 = var_f90mode.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_11 = var_add.object;

    tmp_binop_left_8 = const_str_digest_370bad8f19e6c1473d0d0dc2b7e23a34;
    tmp_binop_right_8 = PyTuple_New( 3 );
    tmp_subscr_target_13 = par_rout.object;

    if ( tmp_subscr_target_13 == NULL )
    {
        Py_DECREF( tmp_binop_right_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_13 = const_str_plain_modulename;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_8 );

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_8, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_name.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_8, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_sargs.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_8, 2, tmp_tuple_element_4 );
    tmp_call_arg_element_16 = BINARY_OPERATION_REMAINDER( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 121;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_4 = par_signature.object;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47088 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_called_12 = var_add.object;

    tmp_binop_left_9 = const_str_digest_2834cfc2b2187e45fd29c7c5414e8077;
    tmp_binop_right_9 = PyTuple_New( 2 );
    tmp_subscr_target_14 = par_rout.object;

    if ( tmp_subscr_target_14 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_14 = const_str_plain_modulename;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_9, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_fortranname.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 1, tmp_tuple_element_5 );
    tmp_call_arg_element_17 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 123;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    tmp_called_13 = var_add.object;

    tmp_binop_left_10 = const_str_digest_bf7ad29a89392d23c1503c858a0ef80a;
    tmp_binop_right_10 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_name.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_binop_right_10, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_sargs.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_binop_right_10, 1, tmp_tuple_element_6 );
    tmp_call_arg_element_18 = BINARY_OPERATION_REMAINDER( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 125;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_5 = var_need_interface.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_called_14 = var_add.object;

    tmp_binop_left_11 = const_str_digest_237dd7f429679fc8a6c71923f9216ba8;
    tmp_binop_right_11 = var_fortranname.object;

    tmp_call_arg_element_19 = BINARY_OPERATION_REMAINDER( tmp_binop_left_11, tmp_binop_right_11 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 127;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_19 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_13 = var_l.object;

    if ( tmp_binop_left_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_13 = const_str_digest_fc763cb31e9938f37737394681228f83;
    tmp_binop_left_12 = BINARY_OPERATION_ADD( tmp_binop_left_13, tmp_binop_right_13 );
    if ( tmp_binop_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_12 = var_fortranname.object;

    tmp_assign_source_32 = BINARY_OPERATION_ADD( tmp_binop_left_12, tmp_binop_right_12 );
    Py_DECREF( tmp_binop_left_12 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    if (var_l.object == NULL)
    {
        var_l.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = var_l.object;
        var_l.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    branch_no_9:;
    branch_end_7:;
    tmp_cond_value_6 = var_need_interface.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_subscr_target_15 = par_rout.object;

    if ( tmp_subscr_target_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_15 = const_str_plain_saved_interface;
    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_split );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_20 = const_str_newline;
    frame_function->f_lineno = 130;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_33;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_34 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_34 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 130;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_34;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_34;
        Py_DECREF( old );
    }
    tmp_assign_source_35 = tmp_for_loop_3__iter_value.object;

    if (var_line.object == NULL)
    {
        var_line.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
    }
    else
    {
        PyObject *old = var_line.object;
        var_line.object = INCREASE_REFCOUNT( tmp_assign_source_35 );
        Py_DECREF( old );
    }
    tmp_source_name_8 = var_line.object;

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_lstrip );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 131;
    tmp_source_name_7 = CALL_FUNCTION_NO_ARGS( tmp_called_17 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto try_finally_handler_4;
    }
    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_21 = const_str_digest_01f8cf1e5ff5e37b41cca78526df1e76;
    frame_function->f_lineno = 131;
    tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto try_finally_handler_4;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        frame_function->f_lineno = 131;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_cond_value_7 );
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_18 = var_add.object;

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_22 = var_line.object;

    frame_function->f_lineno = 132;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto try_finally_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
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
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

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
    branch_no_10:;
    tmp_sliceslicedel_index_lower_5 = 1;
    tmp_slice_index_upper_5 = PY_SSIZE_T_MAX;
    tmp_slice_source_5 = var_args.object;

    if ( tmp_slice_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_36 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    if (var_args.object == NULL)
    {
        var_args.object = tmp_assign_source_36;
    }
    else
    {
        PyObject *old = var_args.object;
        var_args.object = tmp_assign_source_36;
        Py_DECREF( old );
    }
    tmp_assign_source_37 = PyList_New( 0 );
    assert( var_dumped_args.object == NULL );
    var_dumped_args.object = tmp_assign_source_37;

    tmp_iter_arg_5 = var_args.object;

    tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator.object == NULL );
    tmp_for_loop_4__for_iterator.object = tmp_assign_source_38;

    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_39 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_39 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 136;
            goto try_finally_handler_5;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_39;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_39;
        Py_DECREF( old );
    }
    tmp_assign_source_40 = tmp_for_loop_4__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_40 );
        Py_DECREF( old );
    }
    tmp_called_19 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isexternal );

    if (unlikely( tmp_called_19 == NULL ))
    {
        tmp_called_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isexternal );
    }

    if ( tmp_called_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124509 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_16 = var_vars.object;

    if ( tmp_subscr_target_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_16 = var_a.object;

    tmp_call_arg_element_23 = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 137;
    tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_23 );
    Py_DECREF( tmp_call_arg_element_23 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto try_finally_handler_5;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        frame_function->f_lineno = 137;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_cond_value_8 );
    if (tmp_cond_truth_8 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_20 = var_add.object;

    if ( tmp_called_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto try_finally_handler_5;
    }

    tmp_binop_left_14 = const_str_digest_237dd7f429679fc8a6c71923f9216ba8;
    tmp_binop_right_14 = var_a.object;

    tmp_call_arg_element_24 = BINARY_OPERATION_REMAINDER( tmp_binop_left_14, tmp_binop_right_14 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 138;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_24 );
    Py_DECREF( tmp_call_arg_element_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = var_dumped_args.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_5;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_25 = var_a.object;

    frame_function->f_lineno = 139;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_12:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto try_finally_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
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
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

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
    tmp_iter_arg_6 = var_args.object;

    if ( tmp_iter_arg_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator.object == NULL );
    tmp_for_loop_5__for_iterator.object = tmp_assign_source_41;

    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator.object;

    tmp_assign_source_42 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_42 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 140;
            goto try_finally_handler_6;
        }
    }

    if (tmp_for_loop_5__iter_value.object == NULL)
    {
        tmp_for_loop_5__iter_value.object = tmp_assign_source_42;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__iter_value.object;
        tmp_for_loop_5__iter_value.object = tmp_assign_source_42;
        Py_DECREF( old );
    }
    tmp_assign_source_43 = tmp_for_loop_5__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_43 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_43 );
        Py_DECREF( old );
    }
    tmp_compare_left_5 = var_a.object;

    tmp_compare_right_5 = var_dumped_args.object;

    if ( tmp_compare_right_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto try_finally_handler_6;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    goto loop_start_5;
    branch_no_13:;
    tmp_called_22 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_22 == NULL ))
    {
        tmp_called_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72338 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_6;
    }

    tmp_subscr_target_17 = var_vars.object;

    if ( tmp_subscr_target_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_17 = var_a.object;

    tmp_call_arg_element_26 = LOOKUP_SUBSCRIPT( tmp_subscr_target_17, tmp_subscr_subscript_17 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 142;
    tmp_cond_value_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_26 );
    Py_DECREF( tmp_call_arg_element_26 );
    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto try_finally_handler_6;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        frame_function->f_lineno = 142;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_cond_value_9 );
    if (tmp_cond_truth_9 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_23 = var_add.object;

    if ( tmp_called_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_6;
    }

    tmp_called_24 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_24 == NULL ))
    {
        tmp_called_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150200 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_6;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_vars.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_a.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_7 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_f90mode.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto try_finally_handler_6;
    }

    tmp_dict_key_1 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 143;
    tmp_call_arg_element_27 = CALL_FUNCTION( tmp_called_24, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 143;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_27 );
    Py_DECREF( tmp_call_arg_element_27 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = var_dumped_args.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto try_finally_handler_6;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_28 = var_a.object;

    frame_function->f_lineno = 144;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_25, tmp_call_arg_element_28 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_6;
    }
    goto loop_start_5;
    loop_end_5:;
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
    Py_XDECREF( tmp_for_loop_5__iter_value.object );
    tmp_for_loop_5__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator.object );
    tmp_for_loop_5__for_iterator.object = NULL;

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
    tmp_iter_arg_7 = var_args.object;

    if ( tmp_iter_arg_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator.object == NULL );
    tmp_for_loop_6__for_iterator.object = tmp_assign_source_44;

    // Tried code
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator.object;

    tmp_assign_source_45 = ITERATOR_NEXT( tmp_next_source_6 );
    if (tmp_assign_source_45 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_6;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 145;
            goto try_finally_handler_7;
        }
    }

    if (tmp_for_loop_6__iter_value.object == NULL)
    {
        tmp_for_loop_6__iter_value.object = tmp_assign_source_45;
    }
    else
    {
        PyObject *old = tmp_for_loop_6__iter_value.object;
        tmp_for_loop_6__iter_value.object = tmp_assign_source_45;
        Py_DECREF( old );
    }
    tmp_assign_source_46 = tmp_for_loop_6__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_46 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_46 );
        Py_DECREF( old );
    }
    tmp_compare_left_6 = var_a.object;

    tmp_compare_right_6 = var_dumped_args.object;

    if ( tmp_compare_right_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto try_finally_handler_7;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_7;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    goto loop_start_6;
    branch_no_15:;
    tmp_called_26 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isintent_in );

    if (unlikely( tmp_called_26 == NULL ))
    {
        tmp_called_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_in );
    }

    if ( tmp_called_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127656 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_7;
    }

    tmp_subscr_target_18 = var_vars.object;

    if ( tmp_subscr_target_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_7;
    }

    tmp_subscr_subscript_18 = var_a.object;

    tmp_call_arg_element_29 = LOOKUP_SUBSCRIPT( tmp_subscr_target_18, tmp_subscr_subscript_18 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 147;
    tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_29 );
    Py_DECREF( tmp_call_arg_element_29 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_7;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        frame_function->f_lineno = 147;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_cond_value_10 );
    if (tmp_cond_truth_10 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_27 = var_add.object;

    if ( tmp_called_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto try_finally_handler_7;
    }

    tmp_called_28 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_28 == NULL ))
    {
        tmp_called_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150200 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto try_finally_handler_7;
    }

    tmp_call_pos_2 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_vars.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_a.object;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_8 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_f90mode.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto try_finally_handler_7;
    }

    tmp_dict_key_2 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 148;
    tmp_call_arg_element_30 = CALL_FUNCTION( tmp_called_28, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_call_arg_element_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 148;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_27, tmp_call_arg_element_30 );
    Py_DECREF( tmp_call_arg_element_30 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_dumped_args.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto try_finally_handler_7;
    }

    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_append );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_7;
    }
    tmp_call_arg_element_31 = var_a.object;

    frame_function->f_lineno = 149;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_31 );
    Py_DECREF( tmp_called_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_16:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto try_finally_handler_7;
    }
    goto loop_start_6;
    loop_end_6:;
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
    Py_XDECREF( tmp_for_loop_6__iter_value.object );
    tmp_for_loop_6__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_6__for_iterator.object );
    tmp_for_loop_6__for_iterator.object = NULL;

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
    tmp_iter_arg_8 = var_args.object;

    if ( tmp_iter_arg_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_7__for_iterator.object == NULL );
    tmp_for_loop_7__for_iterator.object = tmp_assign_source_47;

    // Tried code
    loop_start_7:;
    tmp_next_source_7 = tmp_for_loop_7__for_iterator.object;

    tmp_assign_source_48 = ITERATOR_NEXT( tmp_next_source_7 );
    if (tmp_assign_source_48 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_7;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 150;
            goto try_finally_handler_8;
        }
    }

    if (tmp_for_loop_7__iter_value.object == NULL)
    {
        tmp_for_loop_7__iter_value.object = tmp_assign_source_48;
    }
    else
    {
        PyObject *old = tmp_for_loop_7__iter_value.object;
        tmp_for_loop_7__iter_value.object = tmp_assign_source_48;
        Py_DECREF( old );
    }
    tmp_assign_source_49 = tmp_for_loop_7__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_49 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_49 );
        Py_DECREF( old );
    }
    tmp_compare_left_7 = var_a.object;

    tmp_compare_right_7 = var_dumped_args.object;

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto try_finally_handler_8;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_8;
    }
    if (tmp_cmp_In_3 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    goto loop_start_7;
    branch_no_17:;
    tmp_called_30 = var_add.object;

    if ( tmp_called_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_8;
    }

    tmp_called_31 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_31 == NULL ))
    {
        tmp_called_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150200 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_8;
    }

    tmp_call_pos_3 = PyTuple_New( 2 );
    tmp_tuple_element_9 = var_vars.object;

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = var_a.object;

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 1, tmp_tuple_element_9 );
    tmp_call_kw_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = var_f90mode.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_pos_3 );
        Py_DECREF( tmp_call_kw_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto try_finally_handler_8;
    }

    tmp_dict_key_3 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_call_kw_3, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 152;
    tmp_call_arg_element_32 = CALL_FUNCTION( tmp_called_31, tmp_call_pos_3, tmp_call_kw_3 );
    Py_DECREF( tmp_call_pos_3 );
    Py_DECREF( tmp_call_kw_3 );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_8;
    }
    frame_function->f_lineno = 152;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_32 );
    Py_DECREF( tmp_call_arg_element_32 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_8;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_8;
    }
    goto loop_start_7;
    loop_end_7:;
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
    Py_XDECREF( tmp_for_loop_7__iter_value.object );
    tmp_for_loop_7__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_7__for_iterator.object );
    tmp_for_loop_7__for_iterator.object = NULL;

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
    tmp_called_32 = var_add.object;

    if ( tmp_called_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_33 = var_l.object;

    if ( tmp_call_arg_element_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20276 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 154;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_32, tmp_call_arg_element_33 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_11 = var_need_interface.object;

    if ( tmp_cond_value_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150349 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_11 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_cond_value_12 = var_f90mode.object;

    if ( tmp_cond_value_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_12 == 1)
    {
        goto branch_no_19;
    }
    else
    {
        goto branch_yes_19;
    }
    branch_yes_19:;
    tmp_called_33 = var_add.object;

    if ( tmp_called_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_34 = const_str_plain_interface;
    frame_function->f_lineno = 161;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_34 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_34 = var_add.object;

    if ( tmp_called_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_19 = par_rout.object;

    if ( tmp_subscr_target_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_19 = const_str_plain_saved_interface;
    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_19, tmp_subscr_subscript_19 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_called_35 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_lstrip );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 162;
    tmp_call_arg_element_35 = CALL_FUNCTION_NO_ARGS( tmp_called_35 );
    Py_DECREF( tmp_called_35 );
    if ( tmp_call_arg_element_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 162;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_34, tmp_call_arg_element_35 );
    Py_DECREF( tmp_call_arg_element_35 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_36 = var_add.object;

    if ( tmp_called_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_36 = const_str_digest_88954228dbb961389c9ce267879b3fd4;
    frame_function->f_lineno = 163;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_36, tmp_call_arg_element_36 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_19:;
    branch_no_18:;
    tmp_source_name_13 = const_str_digest_fc763cb31e9938f37737394681228f83;
    tmp_called_37 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_join );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_4 = NULL;
    // Tried code
    tmp_call_pos_4 = PyTuple_New( 1 );
    tmp_tuple_element_10 = NULL;
    // Tried code
    tmp_iter_arg_9 = var_args.object;

    if ( tmp_iter_arg_9 == NULL )
    {
        Py_DECREF( tmp_called_37 );
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_10;
    }

    tmp_assign_source_51 = MAKE_ITERATOR( tmp_iter_arg_9 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_37 );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 165;
        goto try_finally_handler_10;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_51;

    tmp_assign_source_52 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_52;

    loop_start_8:;
    tmp_next_source_8 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_53 = ITERATOR_NEXT( tmp_next_source_8 );
    if (tmp_assign_source_53 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_8;

        }
        else
        {
            Py_DECREF( tmp_called_37 );
            Py_DECREF( tmp_call_pos_4 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 165;
            goto try_finally_handler_10;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_53;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_53;
        Py_DECREF( old );
    }
    tmp_assign_source_54 = tmp_listcontr_1__iter_value_0.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_54 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_54 );
        Py_DECREF( old );
    }
    tmp_compare_left_8 = var_a.object;

    tmp_compare_right_8 = var_extra_args.object;

    if ( tmp_compare_right_8 == NULL )
    {
        Py_DECREF( tmp_called_37 );
        Py_DECREF( tmp_call_pos_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto try_finally_handler_10;
    }

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_NotIn_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_37 );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 165;
        goto try_finally_handler_10;
    }
    if (tmp_cmp_NotIn_2 == 0)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = var_a.object;

    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_37 );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 165;
        goto try_finally_handler_10;
    }
    tmp_unused = Py_None;
    branch_no_20:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_37 );
        Py_DECREF( tmp_call_pos_4 );

        frame_function->f_lineno = 165;
        goto try_finally_handler_10;
    }
    goto loop_start_8;
    loop_end_8:;
    tmp_tuple_element_10 = tmp_listcontr_1__listcontr_result.object;

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

    tmp_tried_lineno_9 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_9;
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
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_call_pos_4, 0, tmp_tuple_element_10 );
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

    tmp_tried_lineno_10 = frame_function->f_lineno;
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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
    frame_function->f_lineno = 165;
    tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS( tmp_called_37, tmp_call_pos_4 );
    Py_DECREF( tmp_called_37 );
    Py_DECREF( tmp_call_pos_4 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }
    if (var_sargs.object == NULL)
    {
        var_sargs.object = tmp_assign_source_50;
    }
    else
    {
        PyObject *old = var_sargs.object;
        var_sargs.object = tmp_assign_source_50;
        Py_DECREF( old );
    }
    tmp_cond_value_13 = par_signature.object;

    if ( tmp_cond_value_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47088 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_13 == 1)
    {
        goto branch_no_21;
    }
    else
    {
        goto branch_yes_21;
    }
    branch_yes_21:;
    tmp_called_38 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_islogicalfunction );

    if (unlikely( tmp_called_38 == NULL ))
    {
        tmp_called_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_islogicalfunction );
    }

    if ( tmp_called_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150409 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_37 = par_rout.object;

    if ( tmp_call_arg_element_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 168;
    tmp_cond_value_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_38, tmp_call_arg_element_37 );
    if ( tmp_cond_value_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_14 );

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_14 );
    if (tmp_cond_truth_14 == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_called_39 = var_add.object;

    if ( tmp_called_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_15 = const_str_digest_d5500c3f7ef1eb5cdde6fd5d363c5af4;
    tmp_binop_right_15 = PyTuple_New( 3 );
    tmp_tuple_element_11 = var_newname.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_right_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150455 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_15, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_fortranname.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_right_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150508 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_15, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_sargs.object;

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_15, 2, tmp_tuple_element_11 );
    tmp_call_arg_element_38 = BINARY_OPERATION_REMAINDER( tmp_binop_left_15, tmp_binop_right_15 );
    Py_DECREF( tmp_binop_right_15 );
    if ( tmp_call_arg_element_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 169;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_39, tmp_call_arg_element_38 );
    Py_DECREF( tmp_call_arg_element_38 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_22;
    branch_no_22:;
    tmp_called_40 = var_add.object;

    if ( tmp_called_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_16 = const_str_digest_6eff8f3f64f7bd7eecd88db84313c756;
    tmp_binop_right_16 = PyTuple_New( 3 );
    tmp_tuple_element_12 = var_newname.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_binop_right_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150455 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_16, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = var_fortranname.object;

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_binop_right_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150508 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_16, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = var_sargs.object;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_binop_right_16, 2, tmp_tuple_element_12 );
    tmp_call_arg_element_39 = BINARY_OPERATION_REMAINDER( tmp_binop_left_16, tmp_binop_right_16 );
    Py_DECREF( tmp_binop_right_16 );
    if ( tmp_call_arg_element_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 171;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_40, tmp_call_arg_element_39 );
    Py_DECREF( tmp_call_arg_element_39 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_22:;
    branch_no_21:;
    tmp_cond_value_15 = var_f90mode.object;

    if ( tmp_cond_value_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_15 == 1)
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_called_41 = var_add.object;

    if ( tmp_called_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_17 = const_str_digest_1c82c98186155378d45f7743b6b655eb;
    tmp_binop_right_17 = PyTuple_New( 2 );
    tmp_subscr_target_20 = par_rout.object;

    if ( tmp_subscr_target_20 == NULL )
    {
        Py_DECREF( tmp_binop_right_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_20 = const_str_plain_modulename;
    tmp_tuple_element_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_20, tmp_subscr_subscript_20 );
    if ( tmp_tuple_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_17 );

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_17, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = var_name.object;

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_binop_right_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_binop_right_17, 1, tmp_tuple_element_13 );
    tmp_call_arg_element_40 = BINARY_OPERATION_REMAINDER( tmp_binop_left_17, tmp_binop_right_17 );
    Py_DECREF( tmp_binop_right_17 );
    if ( tmp_call_arg_element_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 173;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_41, tmp_call_arg_element_40 );
    Py_DECREF( tmp_call_arg_element_40 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_23;
    branch_no_23:;
    tmp_called_42 = var_add.object;

    if ( tmp_called_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_41 = const_str_plain_end;
    frame_function->f_lineno = 175;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_42, tmp_call_arg_element_41 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_23:;
    tmp_subscr_target_21 = var_ret.object;

    if ( tmp_subscr_target_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38779 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_21 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_21, tmp_subscr_subscript_21 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
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
    if ((var_extra_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_args,
            var_extra_args.object
        );

    }
    if ((var_vars.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vars,
            var_vars.object
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
    if ((var_v.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_v,
            var_v.object
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
    if ((var_d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_d,
            var_d.object
        );

    }
    if ((var_dn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dn,
            var_dn.object
        );

    }
    if ((var_dv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dv,
            var_dv.object
        );

    }
    if ((var_need_interface.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_need_interface,
            var_need_interface.object
        );

    }
    if ((var_ret.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ret,
            var_ret.object
        );

    }
    if ((var_add.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_add,
            var_add.object
        );

    }
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((var_fortranname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fortranname,
            var_fortranname.object
        );

    }
    if ((var_f90mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f90mode,
            var_f90mode.object
        );

    }
    if ((var_newname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_newname,
            var_newname.object
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
    if ((var_l.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_l,
            var_l.object
        );

    }
    if ((var_return_char_star.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_return_char_star,
            var_return_char_star.object
        );

    }
    if ((var_charselect.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_charselect,
            var_charselect.object
        );

    }
    if ((var_sargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sargs,
            var_sargs.object
        );

    }
    if ((var_line.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_line,
            var_line.object
        );

    }
    if ((var_dumped_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dumped_args,
            var_dumped_args.object
        );

    }
    if ((par_rout.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rout,
            par_rout.object
        );

    }
    if ((par_signature.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_signature,
            par_signature.object
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
static PyObject *fparse_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_rout = NULL;
    PyObject *_python_par_signature = NULL;
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
                PyErr_Format( PyExc_TypeError, "createfuncwrapper() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_rout == key )
            {
                assert( _python_par_rout == NULL );
                _python_par_rout = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_signature == key )
            {
                assert( _python_par_signature == NULL );
                _python_par_signature = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rout, key ) == 1 )
            {
                assert( _python_par_rout == NULL );
                _python_par_rout = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_signature, key ) == 1 )
            {
                assert( _python_par_signature == NULL );
                _python_par_signature = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "createfuncwrapper() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rout != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_rout = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_rout == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_rout = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_signature != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_signature = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_signature == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_signature = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_rout == NULL || _python_par_signature == NULL ))
    {
        PyObject *values[] = { _python_par_rout, _python_par_signature };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( self, _python_par_rout, _python_par_signature );

error_exit:;

    Py_XDECREF( _python_par_rout );
    Py_XDECREF( _python_par_signature );

    return NULL;
}

static PyObject *dparse_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject *_python_par_line, PyObject *_python_par_ret )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_line; par_line.object = _python_par_line;
    PyObjectLocalVariable par_ret; par_ret.object = _python_par_ret;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c367da7ffbcf8d0c331d6ea84aeb3458, module_numpy$f2py$func2subr );
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
    tmp_binop_left_1 = const_str_digest_db1efd03c53f5283dbfdc9781df81ed5;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_subscr_target_1 = par_ret.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38779 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_line.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50418 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = par_ret.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38779 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
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
    if ((par_line.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_line,
            par_line.object
        );

    }
    if ((par_ret.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ret,
            par_ret.object
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
static PyObject *fparse_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_line = NULL;
    PyObject *_python_par_ret = NULL;
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
                PyErr_Format( PyExc_TypeError, "add() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_line == key )
            {
                assert( _python_par_line == NULL );
                _python_par_line = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ret == key )
            {
                assert( _python_par_ret == NULL );
                _python_par_ret = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_line, key ) == 1 )
            {
                assert( _python_par_line == NULL );
                _python_par_line = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ret, key ) == 1 )
            {
                assert( _python_par_ret == NULL );
                _python_par_ret = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_line != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_line = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_line == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_line = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_ret != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ret = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ret == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ret = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_line == NULL || _python_par_ret == NULL ))
    {
        PyObject *values[] = { _python_par_line, _python_par_ret };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( self, _python_par_line, _python_par_ret );

error_exit:;

    Py_XDECREF( _python_par_line );
    Py_XDECREF( _python_par_ret );

    return NULL;
}

static PyObject *dparse_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject *_python_par_rout, PyObject *_python_par_signature )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_rout; par_rout.object = _python_par_rout;
    PyObjectLocalVariable par_signature; par_signature.object = _python_par_signature;
    PyObjectLocalVariable var_extra_args;
    PyObjectLocalVariable var_vars;
    PyObjectLocalVariable var_a;
    PyObjectLocalVariable var_v;
    PyObjectLocalVariable var_i;
    PyObjectLocalVariable var_d;
    PyObjectLocalVariable var_dn;
    PyObjectLocalVariable var_dv;
    PyObjectLocalVariable var_need_interface;
    PyObjectLocalVariable var_ret;
    PyObjectLocalVariable var_add;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_fortranname;
    PyObjectLocalVariable var_f90mode;
    PyObjectLocalVariable var_args;
    PyObjectLocalVariable var_sargs;
    PyObjectLocalVariable var_line;
    PyObjectLocalVariable var_dumped_args;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_for_loop_2__for_iterator;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_for_loop_3__for_iterator;
    PyObjectTempVariable tmp_for_loop_3__iter_value;
    PyObjectTempVariable tmp_for_loop_4__for_iterator;
    PyObjectTempVariable tmp_for_loop_4__iter_value;
    PyObjectTempVariable tmp_for_loop_5__for_iterator;
    PyObjectTempVariable tmp_for_loop_5__iter_value;
    PyObjectTempVariable tmp_for_loop_6__for_iterator;
    PyObjectTempVariable tmp_for_loop_6__iter_value;
    PyObjectTempVariable tmp_listcontr_1__listcontr_iter;
    PyObjectTempVariable tmp_listcontr_1__listcontr_result;
    PyObjectTempVariable tmp_listcontr_1__iter_value_0;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_bool_arg_1;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_kw_2;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
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
    PyObject *tmp_subscr_subscript_14;
    PyObject *tmp_subscr_subscript_15;
    PyObject *tmp_subscr_subscript_16;
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
    PyObject *tmp_subscr_target_14;
    PyObject *tmp_subscr_target_15;
    PyObject *tmp_subscr_target_16;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_88455cbe80e4fc155636bdd211eaeebe, module_numpy$f2py$func2subr );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_issubroutine );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubroutine );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124903 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_rout.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 182;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 182;
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
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 182;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_extra_args.object == NULL );
    var_extra_args.object = tmp_assign_source_1;

    tmp_subscr_target_1 = par_rout.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_str_plain_vars;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    assert( var_vars.object == NULL );
    var_vars.object = tmp_assign_source_2;

    tmp_subscr_target_2 = par_rout.object;

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_2 = const_str_plain_args;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_3;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_4 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 186;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_for_loop_1__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_subscr_target_4 = par_rout.object;

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }

    tmp_subscr_subscript_4 = const_str_plain_vars;
    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_3 = var_a.object;

    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    if (var_v.object == NULL)
    {
        var_v.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_v.object;
        var_v.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_called_2 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto try_finally_handler_1;
    }
    tmp_source_name_1 = var_v.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = const_str_plain_dimension;
    tmp_call_arg_element_4 = PyList_New( 0 );
    frame_function->f_lineno = 188;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 188;
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto try_finally_handler_1;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
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
        frame_function->f_lineno = 188;
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
    // Tried code
    tmp_iter_arg_3 = tmp_for_loop_2__iter_value.object;

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__source_iter.object == NULL)
    {
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter.object;
        tmp_tuple_unpack_1__source_iter.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
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


        frame_function->f_lineno = 188;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__element_1.object == NULL)
    {
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_1.object;
        tmp_tuple_unpack_1__element_1.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
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


        frame_function->f_lineno = 188;
        goto try_finally_handler_3;
    }
    if (tmp_tuple_unpack_1__element_2.object == NULL)
    {
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_11;
    }
    else
    {
        PyObject *old = tmp_tuple_unpack_1__element_2.object;
        tmp_tuple_unpack_1__element_2.object = tmp_assign_source_11;
        Py_DECREF( old );
    }
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

            goto try_finally_handler_3;
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

        goto try_finally_handler_3;
    }
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
        Py_DECREF( old );
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

        goto try_finally_handler_2;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_compare_left_1 = var_d.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6034 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto try_finally_handler_2;
    }

    tmp_compare_right_1 = const_str_chr_58;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_2;
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
    tmp_binop_left_1 = const_str_digest_2b5276a0c1888d607720c7d7c44ed7a7;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_i.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto try_finally_handler_2;
    }
    if (var_dn.object == NULL)
    {
        var_dn.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = var_dn.object;
        var_dn.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_assign_source_15 = DEEP_COPY( const_dict_3ff3e4e9e317a78311460ecf7af6add5 );
    if (var_dv.object == NULL)
    {
        var_dv.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_dv.object;
        var_dv.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_binop_left_2 = const_str_digest_32ce6f129615cc6ac95c68841b2c8909;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_a.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5854 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_i.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_2 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto try_finally_handler_2;
    }
    tmp_ass_subscribed_1 = var_dv.object;

    tmp_ass_subscript_1 = const_str_chr_61;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto try_finally_handler_2;
    }
    tmp_source_name_2 = var_extra_args.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto try_finally_handler_2;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_5 = var_dn.object;

    frame_function->f_lineno = 193;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_2 = var_dv.object;

    tmp_ass_subscribed_2 = var_vars.object;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto try_finally_handler_2;
    }

    tmp_ass_subscript_2 = var_dn.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto try_finally_handler_2;
    }
    tmp_ass_subvalue_3 = var_dn.object;

    tmp_subscr_target_5 = var_v.object;

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4481 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_5 = const_str_plain_dimension;
    tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto try_finally_handler_2;
    }
    tmp_ass_subscript_3 = var_i.object;

    if ( tmp_ass_subscript_3 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2029 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto try_finally_handler_2;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto try_finally_handler_2;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
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
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
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
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_1;
    }

    goto finally_end_2;
    finally_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
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
    tmp_subscr_target_6 = par_rout.object;

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_6 = const_str_plain_args;
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extend );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_extra_args.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 196;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_bool_arg_1 = var_extra_args.object;

    if ( tmp_bool_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = TO_BOOL( tmp_bool_arg_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    assert( var_need_interface.object == NULL );
    var_need_interface.object = INCREASE_REFCOUNT( tmp_assign_source_16 );

    tmp_assign_source_17 = LIST_COPY( const_list_str_empty_list );
    assert( var_ret.object == NULL );
    var_ret.object = tmp_assign_source_17;

    tmp_defaults_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_ret.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_3 );
    tmp_assign_source_18 = MAKE_FUNCTION_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( tmp_defaults_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    assert( var_add.object == NULL );
    var_add.object = tmp_assign_source_18;

    tmp_subscr_target_7 = par_rout.object;

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_7 = const_str_plain_name;
    tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    assert( var_name.object == NULL );
    var_name.object = tmp_assign_source_19;

    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfortranname );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128840 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = par_rout.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 203;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }
    assert( var_fortranname.object == NULL );
    var_fortranname.object = tmp_assign_source_20;

    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_ismoduleroutine );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ismoduleroutine );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150156 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = par_rout.object;

    if ( tmp_call_arg_element_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 204;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    assert( var_f90mode.object == NULL );
    var_f90mode.object = tmp_assign_source_21;

    tmp_subscr_target_8 = par_rout.object;

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 206;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_8 = const_str_plain_args;
    tmp_assign_source_22 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    assert( var_args.object == NULL );
    var_args.object = tmp_assign_source_22;

    tmp_source_name_4 = const_str_digest_fc763cb31e9938f37737394681228f83;
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = var_args.object;

    frame_function->f_lineno = 208;
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 208;
        goto frame_exception_exit_1;
    }
    assert( var_sargs.object == NULL );
    var_sargs.object = tmp_assign_source_23;

    tmp_cond_value_2 = var_f90mode.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_9 = var_add.object;

    tmp_binop_left_3 = const_str_digest_370bad8f19e6c1473d0d0dc2b7e23a34;
    tmp_binop_right_3 = PyTuple_New( 3 );
    tmp_subscr_target_9 = par_rout.object;

    if ( tmp_subscr_target_9 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_9 = const_str_plain_modulename;
    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_name.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_sargs.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 2, tmp_tuple_element_4 );
    tmp_call_arg_element_10 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 210;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_3 = par_signature.object;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47088 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_called_10 = var_add.object;

    tmp_binop_left_4 = const_str_digest_2834cfc2b2187e45fd29c7c5414e8077;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_subscr_target_10 = par_rout.object;

    if ( tmp_subscr_target_10 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_10 = const_str_plain_modulename;
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_4 );

        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_fortranname.object;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_5 );
    tmp_call_arg_element_11 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 212;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_called_11 = var_add.object;

    tmp_binop_left_5 = const_str_digest_bf7ad29a89392d23c1503c858a0ef80a;
    tmp_binop_right_5 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_name.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_sargs.object;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 1, tmp_tuple_element_6 );
    tmp_call_arg_element_12 = BINARY_OPERATION_REMAINDER( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 214;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_4 = var_need_interface.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_called_12 = var_add.object;

    tmp_binop_left_6 = const_str_digest_237dd7f429679fc8a6c71923f9216ba8;
    tmp_binop_right_6 = var_fortranname.object;

    tmp_call_arg_element_13 = BINARY_OPERATION_REMAINDER( tmp_binop_left_6, tmp_binop_right_6 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 216;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    branch_end_3:;
    tmp_cond_value_5 = var_need_interface.object;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_subscr_target_11 = par_rout.object;

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_11 = const_str_plain_saved_interface;
    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_split );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = const_str_newline;
    frame_function->f_lineno = 219;
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator.object == NULL );
    tmp_for_loop_3__for_iterator.object = tmp_assign_source_24;

    // Tried code
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator.object;

    tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_3 );
    if (tmp_assign_source_25 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_3;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 219;
            goto try_finally_handler_4;
        }
    }

    if (tmp_for_loop_3__iter_value.object == NULL)
    {
        tmp_for_loop_3__iter_value.object = tmp_assign_source_25;
    }
    else
    {
        PyObject *old = tmp_for_loop_3__iter_value.object;
        tmp_for_loop_3__iter_value.object = tmp_assign_source_25;
        Py_DECREF( old );
    }
    tmp_assign_source_26 = tmp_for_loop_3__iter_value.object;

    if (var_line.object == NULL)
    {
        var_line.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
    }
    else
    {
        PyObject *old = var_line.object;
        var_line.object = INCREASE_REFCOUNT( tmp_assign_source_26 );
        Py_DECREF( old );
    }
    tmp_source_name_7 = var_line.object;

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_lstrip );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 220;
    tmp_source_name_6 = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_4;
    }
    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_15 = const_str_digest_01f8cf1e5ff5e37b41cca78526df1e76;
    frame_function->f_lineno = 220;
    tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 220;
        goto try_finally_handler_4;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        frame_function->f_lineno = 220;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_cond_value_6 );
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_16 = var_add.object;

    if ( tmp_called_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 221;
        goto try_finally_handler_4;
    }

    tmp_call_arg_element_16 = var_line.object;

    frame_function->f_lineno = 221;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto try_finally_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto try_finally_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
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
    Py_XDECREF( tmp_for_loop_3__iter_value.object );
    tmp_for_loop_3__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_3__for_iterator.object );
    tmp_for_loop_3__for_iterator.object = NULL;

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
    branch_no_6:;
    tmp_assign_source_27 = PyList_New( 0 );
    assert( var_dumped_args.object == NULL );
    var_dumped_args.object = tmp_assign_source_27;

    tmp_iter_arg_5 = var_args.object;

    if ( tmp_iter_arg_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator.object == NULL );
    tmp_for_loop_4__for_iterator.object = tmp_assign_source_28;

    // Tried code
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator.object;

    tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_4 );
    if (tmp_assign_source_29 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_4;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 224;
            goto try_finally_handler_5;
        }
    }

    if (tmp_for_loop_4__iter_value.object == NULL)
    {
        tmp_for_loop_4__iter_value.object = tmp_assign_source_29;
    }
    else
    {
        PyObject *old = tmp_for_loop_4__iter_value.object;
        tmp_for_loop_4__iter_value.object = tmp_assign_source_29;
        Py_DECREF( old );
    }
    tmp_assign_source_30 = tmp_for_loop_4__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_30 );
        Py_DECREF( old );
    }
    tmp_called_17 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isexternal );

    if (unlikely( tmp_called_17 == NULL ))
    {
        tmp_called_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isexternal );
    }

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124509 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto try_finally_handler_5;
    }

    tmp_subscr_target_12 = var_vars.object;

    if ( tmp_subscr_target_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto try_finally_handler_5;
    }

    tmp_subscr_subscript_12 = var_a.object;

    tmp_call_arg_element_17 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 225;
    tmp_cond_value_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_17, tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto try_finally_handler_5;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        frame_function->f_lineno = 225;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_cond_value_7 );
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_18 = var_add.object;

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto try_finally_handler_5;
    }

    tmp_binop_left_7 = const_str_digest_237dd7f429679fc8a6c71923f9216ba8;
    tmp_binop_right_7 = var_a.object;

    tmp_call_arg_element_18 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto try_finally_handler_5;
    }
    frame_function->f_lineno = 226;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = var_dumped_args.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto try_finally_handler_5;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_append );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_5;
    }
    tmp_call_arg_element_19 = var_a.object;

    frame_function->f_lineno = 227;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto try_finally_handler_5;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto try_finally_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
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
    Py_XDECREF( tmp_for_loop_4__iter_value.object );
    tmp_for_loop_4__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_4__for_iterator.object );
    tmp_for_loop_4__for_iterator.object = NULL;

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
    tmp_iter_arg_6 = var_args.object;

    if ( tmp_iter_arg_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator.object == NULL );
    tmp_for_loop_5__for_iterator.object = tmp_assign_source_31;

    // Tried code
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator.object;

    tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_5 );
    if (tmp_assign_source_32 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_5;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 228;
            goto try_finally_handler_6;
        }
    }

    if (tmp_for_loop_5__iter_value.object == NULL)
    {
        tmp_for_loop_5__iter_value.object = tmp_assign_source_32;
    }
    else
    {
        PyObject *old = tmp_for_loop_5__iter_value.object;
        tmp_for_loop_5__iter_value.object = tmp_assign_source_32;
        Py_DECREF( old );
    }
    tmp_assign_source_33 = tmp_for_loop_5__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_33 );
        Py_DECREF( old );
    }
    tmp_compare_left_2 = var_a.object;

    tmp_compare_right_2 = var_dumped_args.object;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto try_finally_handler_6;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    goto loop_start_5;
    branch_no_9:;
    tmp_called_20 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_20 == NULL ))
    {
        tmp_called_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 72338 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_6;
    }

    tmp_subscr_target_13 = var_vars.object;

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto try_finally_handler_6;
    }

    tmp_subscr_subscript_13 = var_a.object;

    tmp_call_arg_element_20 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 230;
    tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_20 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto try_finally_handler_6;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        frame_function->f_lineno = 230;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_cond_value_8 );
    if (tmp_cond_truth_8 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_called_21 = var_add.object;

    if ( tmp_called_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_6;
    }

    tmp_called_22 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_22 == NULL ))
    {
        tmp_called_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150200 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_6;
    }

    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_vars.object;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_a.object;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_7 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_f90mode.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto try_finally_handler_6;
    }

    tmp_dict_key_1 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 231;
    tmp_call_arg_element_21 = CALL_FUNCTION( tmp_called_22, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 231;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = var_dumped_args.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto try_finally_handler_6;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_append );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_6;
    }
    tmp_call_arg_element_22 = var_a.object;

    frame_function->f_lineno = 232;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto try_finally_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto try_finally_handler_6;
    }
    goto loop_start_5;
    loop_end_5:;
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
    Py_XDECREF( tmp_for_loop_5__iter_value.object );
    tmp_for_loop_5__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_5__for_iterator.object );
    tmp_for_loop_5__for_iterator.object = NULL;

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
    tmp_iter_arg_7 = var_args.object;

    if ( tmp_iter_arg_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator.object == NULL );
    tmp_for_loop_6__for_iterator.object = tmp_assign_source_34;

    // Tried code
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_6__for_iterator.object;

    tmp_assign_source_35 = ITERATOR_NEXT( tmp_next_source_6 );
    if (tmp_assign_source_35 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_6;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 233;
            goto try_finally_handler_7;
        }
    }

    if (tmp_for_loop_6__iter_value.object == NULL)
    {
        tmp_for_loop_6__iter_value.object = tmp_assign_source_35;
    }
    else
    {
        PyObject *old = tmp_for_loop_6__iter_value.object;
        tmp_for_loop_6__iter_value.object = tmp_assign_source_35;
        Py_DECREF( old );
    }
    tmp_assign_source_36 = tmp_for_loop_6__iter_value.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_36 );
        Py_DECREF( old );
    }
    tmp_compare_left_3 = var_a.object;

    tmp_compare_right_3 = var_dumped_args.object;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150292 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_7;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto try_finally_handler_7;
    }
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    goto loop_start_6;
    branch_no_11:;
    tmp_called_24 = var_add.object;

    if ( tmp_called_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_7;
    }

    tmp_called_25 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran );

    if (unlikely( tmp_called_25 == NULL ))
    {
        tmp_called_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_var2fixfortran );
    }

    if ( tmp_called_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150200 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_7;
    }

    tmp_call_pos_2 = PyTuple_New( 2 );
    tmp_tuple_element_8 = var_vars.object;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 114757 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = var_a.object;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 1, tmp_tuple_element_8 );
    tmp_call_kw_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_f90mode.object;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_call_pos_2 );
        Py_DECREF( tmp_call_kw_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_7;
    }

    tmp_dict_key_2 = const_str_plain_f90mode;
    PyDict_SetItem( tmp_call_kw_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 235;
    tmp_call_arg_element_23 = CALL_FUNCTION( tmp_called_25, tmp_call_pos_2, tmp_call_kw_2 );
    Py_DECREF( tmp_call_pos_2 );
    Py_DECREF( tmp_call_kw_2 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_7;
    }
    frame_function->f_lineno = 235;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_23 );
    Py_DECREF( tmp_call_arg_element_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_7;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto try_finally_handler_7;
    }
    goto loop_start_6;
    loop_end_6:;
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
    Py_XDECREF( tmp_for_loop_6__iter_value.object );
    tmp_for_loop_6__iter_value.object = NULL;

    Py_XDECREF( tmp_for_loop_6__for_iterator.object );
    tmp_for_loop_6__for_iterator.object = NULL;

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
    tmp_cond_value_9 = var_need_interface.object;

    if ( tmp_cond_value_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150349 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_9 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_cond_value_10 = var_f90mode.object;

    if ( tmp_cond_value_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_10 == 1)
    {
        goto branch_no_13;
    }
    else
    {
        goto branch_yes_13;
    }
    branch_yes_13:;
    tmp_called_26 = var_add.object;

    if ( tmp_called_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_24 = const_str_plain_interface;
    frame_function->f_lineno = 242;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_27 = var_add.object;

    if ( tmp_called_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_subscr_target_14 = par_rout.object;

    if ( tmp_subscr_target_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_14 = const_str_plain_saved_interface;
    tmp_source_name_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_lstrip );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 243;
    tmp_call_arg_element_25 = CALL_FUNCTION_NO_ARGS( tmp_called_28 );
    Py_DECREF( tmp_called_28 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 243;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_27, tmp_call_arg_element_25 );
    Py_DECREF( tmp_call_arg_element_25 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_29 = var_add.object;

    if ( tmp_called_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_26 = const_str_digest_88954228dbb961389c9ce267879b3fd4;
    frame_function->f_lineno = 244;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_13:;
    branch_no_12:;
    tmp_source_name_11 = const_str_digest_fc763cb31e9938f37737394681228f83;
    tmp_called_30 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_join );
    if ( tmp_called_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_3 = NULL;
    // Tried code
    tmp_call_pos_3 = PyTuple_New( 1 );
    tmp_tuple_element_9 = NULL;
    // Tried code
    tmp_iter_arg_8 = var_args.object;

    if ( tmp_iter_arg_8 == NULL )
    {
        Py_DECREF( tmp_called_30 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto try_finally_handler_9;
    }

    tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_30 );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 246;
        goto try_finally_handler_9;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_38;

    tmp_assign_source_39 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_39;

    loop_start_7:;
    tmp_next_source_7 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_40 = ITERATOR_NEXT( tmp_next_source_7 );
    if (tmp_assign_source_40 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_7;

        }
        else
        {
            Py_DECREF( tmp_called_30 );
            Py_DECREF( tmp_call_pos_3 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 246;
            goto try_finally_handler_9;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_40;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_40;
        Py_DECREF( old );
    }
    tmp_assign_source_41 = tmp_listcontr_1__iter_value_0.object;

    if (var_a.object == NULL)
    {
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
    }
    else
    {
        PyObject *old = var_a.object;
        var_a.object = INCREASE_REFCOUNT( tmp_assign_source_41 );
        Py_DECREF( old );
    }
    tmp_compare_left_4 = var_a.object;

    tmp_compare_right_4 = var_extra_args.object;

    if ( tmp_compare_right_4 == NULL )
    {
        Py_DECREF( tmp_called_30 );
        Py_DECREF( tmp_call_pos_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 86807 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto try_finally_handler_9;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_30 );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 246;
        goto try_finally_handler_9;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = var_a.object;

    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_30 );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 246;
        goto try_finally_handler_9;
    }
    tmp_unused = Py_None;
    branch_no_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_30 );
        Py_DECREF( tmp_call_pos_3 );

        frame_function->f_lineno = 246;
        goto try_finally_handler_9;
    }
    goto loop_start_7;
    loop_end_7:;
    tmp_tuple_element_9 = tmp_listcontr_1__listcontr_result.object;

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
    Py_XDECREF( tmp_listcontr_1__iter_value_0.object );
    tmp_listcontr_1__iter_value_0.object = NULL;

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
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_call_pos_3, 0, tmp_tuple_element_9 );
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
    Py_XDECREF( tmp_listcontr_1__listcontr_result.object );
    tmp_listcontr_1__listcontr_result.object = NULL;

    Py_XDECREF( tmp_listcontr_1__listcontr_iter.object );
    tmp_listcontr_1__listcontr_iter.object = NULL;

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
    frame_function->f_lineno = 246;
    tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS( tmp_called_30, tmp_call_pos_3 );
    Py_DECREF( tmp_called_30 );
    Py_DECREF( tmp_call_pos_3 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    if (var_sargs.object == NULL)
    {
        var_sargs.object = tmp_assign_source_37;
    }
    else
    {
        PyObject *old = var_sargs.object;
        var_sargs.object = tmp_assign_source_37;
        Py_DECREF( old );
    }
    tmp_cond_value_11 = par_signature.object;

    if ( tmp_cond_value_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 47088 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_11 == 1)
    {
        goto branch_no_15;
    }
    else
    {
        goto branch_yes_15;
    }
    branch_yes_15:;
    tmp_called_31 = var_add.object;

    if ( tmp_called_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_8 = const_str_digest_1997a694e0d62d29a06a4aa55de7ccaa;
    tmp_binop_right_8 = PyTuple_New( 2 );
    tmp_tuple_element_10 = var_fortranname.object;

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_binop_right_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150508 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_binop_right_8, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = var_sargs.object;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_binop_right_8, 1, tmp_tuple_element_10 );
    tmp_call_arg_element_27 = BINARY_OPERATION_REMAINDER( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 249;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_27 );
    Py_DECREF( tmp_call_arg_element_27 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_15:;
    tmp_cond_value_12 = var_f90mode.object;

    if ( tmp_cond_value_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150055 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_12 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_32 = var_add.object;

    if ( tmp_called_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_9 = const_str_digest_1c82c98186155378d45f7743b6b655eb;
    tmp_binop_right_9 = PyTuple_New( 2 );
    tmp_subscr_target_15 = par_rout.object;

    if ( tmp_subscr_target_15 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_15 = const_str_plain_modulename;
    tmp_tuple_element_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_9 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_9, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = var_name.object;

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_binop_right_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6538 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_binop_right_9, 1, tmp_tuple_element_11 );
    tmp_call_arg_element_28 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_call_arg_element_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 251;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_32, tmp_call_arg_element_28 );
    Py_DECREF( tmp_call_arg_element_28 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_16;
    branch_no_16:;
    tmp_called_33 = var_add.object;

    if ( tmp_called_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150243 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_29 = const_str_plain_end;
    frame_function->f_lineno = 253;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_16:;
    tmp_subscr_target_16 = var_ret.object;

    if ( tmp_subscr_target_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38779 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_16 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
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
    if ((var_extra_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_extra_args,
            var_extra_args.object
        );

    }
    if ((var_vars.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_vars,
            var_vars.object
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
    if ((var_v.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_v,
            var_v.object
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
    if ((var_d.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_d,
            var_d.object
        );

    }
    if ((var_dn.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dn,
            var_dn.object
        );

    }
    if ((var_dv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dv,
            var_dv.object
        );

    }
    if ((var_need_interface.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_need_interface,
            var_need_interface.object
        );

    }
    if ((var_ret.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ret,
            var_ret.object
        );

    }
    if ((var_add.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_add,
            var_add.object
        );

    }
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
        );

    }
    if ((var_fortranname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fortranname,
            var_fortranname.object
        );

    }
    if ((var_f90mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f90mode,
            var_f90mode.object
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
    if ((var_sargs.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sargs,
            var_sargs.object
        );

    }
    if ((var_line.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_line,
            var_line.object
        );

    }
    if ((var_dumped_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dumped_args,
            var_dumped_args.object
        );

    }
    if ((par_rout.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rout,
            par_rout.object
        );

    }
    if ((par_signature.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_signature,
            par_signature.object
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
static PyObject *fparse_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_rout = NULL;
    PyObject *_python_par_signature = NULL;
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
                PyErr_Format( PyExc_TypeError, "createsubrwrapper() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_rout == key )
            {
                assert( _python_par_rout == NULL );
                _python_par_rout = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_signature == key )
            {
                assert( _python_par_signature == NULL );
                _python_par_signature = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rout, key ) == 1 )
            {
                assert( _python_par_rout == NULL );
                _python_par_rout = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_signature, key ) == 1 )
            {
                assert( _python_par_signature == NULL );
                _python_par_signature = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "createsubrwrapper() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rout != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_rout = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_rout == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_rout = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_signature != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_signature = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_signature == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_signature = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_rout == NULL || _python_par_signature == NULL ))
    {
        PyObject *values[] = { _python_par_rout, _python_par_signature };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( self, _python_par_rout, _python_par_signature );

error_exit:;

    Py_XDECREF( _python_par_rout );
    Py_XDECREF( _python_par_signature );

    return NULL;
}

static PyObject *dparse_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject *_python_par_line, PyObject *_python_par_ret )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_line; par_line.object = _python_par_line;
    PyObjectLocalVariable par_ret; par_ret.object = _python_par_ret;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9fa38ee103861870e0d6ed17fb7f5bc3, module_numpy$f2py$func2subr );
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
    tmp_binop_left_1 = const_str_digest_db1efd03c53f5283dbfdc9781df81ed5;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_subscr_target_1 = par_ret.object;

    if ( tmp_subscr_target_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38779 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_line.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50418 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = par_ret.object;

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 38779 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
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
    if ((par_line.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_line,
            par_line.object
        );

    }
    if ((par_ret.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ret,
            par_ret.object
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
static PyObject *fparse_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_line = NULL;
    PyObject *_python_par_ret = NULL;
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
                PyErr_Format( PyExc_TypeError, "add() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_line == key )
            {
                assert( _python_par_line == NULL );
                _python_par_line = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_ret == key )
            {
                assert( _python_par_ret == NULL );
                _python_par_ret = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_line, key ) == 1 )
            {
                assert( _python_par_line == NULL );
                _python_par_line = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_ret, key ) == 1 )
            {
                assert( _python_par_ret == NULL );
                _python_par_ret = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "add() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_line != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_line = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_line == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_line = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
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
         if (unlikely( _python_par_ret != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_ret = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_ret == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_ret = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_line == NULL || _python_par_ret == NULL ))
    {
        PyObject *values[] = { _python_par_line, _python_par_ret };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( self, _python_par_line, _python_par_ret );

error_exit:;

    Py_XDECREF( _python_par_line );
    Py_XDECREF( _python_par_ret );

    return NULL;
}

static PyObject *dparse_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_assubr_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject *_python_par_rout )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_rout; par_rout.object = _python_par_rout;
    PyObjectLocalVariable var_fortranname;
    PyObjectLocalVariable var_name;
    PyObjectLocalVariable var_fname;
    PyObjectLocalVariable var_rname;
    PyObjectLocalVariable var_fvar;
    PyObjectLocalVariable var_flag;
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
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
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
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_sliceass_index_upper_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_value_1;
    Py_ssize_t tmp_sliceassslicedel_index_lower_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_551f31e60b031b5fbc25a1f9bebac447, module_numpy$f2py$func2subr );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isfunction_wrap );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isfunction_wrap );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 126243 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_rout.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 261;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 261;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfortranname );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128840 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_rout.object;

    if ( tmp_call_arg_element_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 262;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    assert( var_fortranname.object == NULL );
    var_fortranname.object = tmp_assign_source_1;

    tmp_subscr_target_1 = par_rout.object;

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_str_plain_name;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    assert( var_name.object == NULL );
    var_name.object = tmp_assign_source_2;

    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125154 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = const_str_digest_0443d7311821780851fe6ed07be39dba;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_name.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_fortranname.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 264;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82769 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_copy );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_rout.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 265;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    if (par_rout.object == NULL)
    {
        par_rout.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = par_rout.object;
        par_rout.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_assign_source_4 = var_name.object;

    assert( var_fname.object == NULL );
    var_fname.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = var_fname.object;

    assert( var_rname.object == NULL );
    var_rname.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

    tmp_compare_left_1 = const_str_plain_result;
    tmp_compare_right_1 = par_rout.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
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
    tmp_subscr_target_2 = par_rout.object;

    tmp_subscr_subscript_2 = const_str_plain_result;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    assert( var_rname.object != NULL );
    {
        PyObject *old = var_rname.object;
        var_rname.object = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_subscr_target_4 = par_rout.object;

    tmp_subscr_subscript_4 = const_str_plain_vars;
    tmp_subscr_target_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_subscr_target_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_3 = var_rname.object;

    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    Py_DECREF( tmp_subscr_target_3 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_5 = par_rout.object;

    tmp_subscr_subscript_5 = const_str_plain_vars;
    tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = var_fname.object;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_subscr_target_7 = par_rout.object;

    tmp_subscr_subscript_7 = const_str_plain_vars;
    tmp_subscr_target_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_subscr_target_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_subscr_subscript_6 = var_fname.object;

    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    Py_DECREF( tmp_subscr_target_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    assert( var_fvar.object == NULL );
    var_fvar.object = tmp_assign_source_7;

    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_isintent_out );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isintent_out );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 127737 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = var_fvar.object;

    frame_function->f_lineno = 272;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_compare_left_2 = const_str_plain_intent;
    tmp_compare_right_2 = var_fvar.object;

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_NotIn_1 == 0)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_ass_subvalue_2 = PyList_New( 0 );
    tmp_ass_subscribed_2 = var_fvar.object;

    tmp_ass_subscript_2 = const_str_plain_intent;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    tmp_subscr_target_8 = var_fvar.object;

    tmp_subscr_subscript_8 = const_str_plain_intent;
    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_out;
    frame_function->f_lineno = 275;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_8 = const_int_pos_1;
    assert( var_flag.object == NULL );
    var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    tmp_subscr_target_9 = var_fvar.object;

    tmp_subscr_subscript_9 = const_str_plain_intent;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_9;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_10 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 277;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_assign_source_11 = tmp_for_loop_1__iter_value.object;

    if (var_i.object == NULL)
    {
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = var_i.object;
        var_i.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
    tmp_source_name_3 = var_i.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_startswith );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_7 = const_str_digest_b8a43487392b85b8913e3eff04e46c6f;
    frame_function->f_lineno = 278;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 278;
        goto try_finally_handler_1;
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
    tmp_assign_source_12 = const_int_0;
    if (var_flag.object == NULL)
    {
        var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
    }
    else
    {
        PyObject *old = var_flag.object;
        var_flag.object = INCREASE_REFCOUNT( tmp_assign_source_12 );
        Py_DECREF( old );
    }
    goto loop_end_1;
    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
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
    tmp_cond_value_4 = var_flag.object;

    if ( tmp_cond_value_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12690 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_subscr_target_10 = var_fvar.object;

    if ( tmp_subscr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150565 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_10 = const_str_plain_intent;
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_2 = const_str_digest_9d4da19da4eeada09d890a0fe5d712f7;
    tmp_binop_right_2 = var_rname.object;

    if ( tmp_binop_right_2 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 115794 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 282;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    branch_no_3:;
    tmp_binop_left_3 = PyList_New( 1 );
    tmp_list_element_1 = var_fname.object;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 52983 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_binop_left_3, 0, tmp_list_element_1 );
    tmp_subscr_target_11 = par_rout.object;

    if ( tmp_subscr_target_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_11 = const_str_plain_args;
    tmp_binop_right_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_sliceass_value_1 = BINARY_OPERATION_ADD( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_sliceass_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_subscr_target_12 = par_rout.object;

    if ( tmp_subscr_target_12 == NULL )
    {
        Py_DECREF( tmp_sliceass_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_12 = const_str_plain_args;
    tmp_sliceass_target_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_sliceass_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_sliceass_value_1 );

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_sliceassslicedel_index_lower_1 = 0;
    tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_res = PySequence_SetSlice( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_target_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_rout.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_createfuncwrapper );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_createfuncwrapper );
    }

    if ( tmp_called_9 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150615 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = par_rout.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 284;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_9 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_issubroutine_wrap );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubroutine_wrap );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150661 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = par_rout.object;

    if ( tmp_call_arg_element_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 285;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_10 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_getfortranname );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfortranname );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 128840 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = par_rout.object;

    if ( tmp_call_arg_element_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 286;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_11 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 286;
        goto frame_exception_exit_1;
    }
    assert( var_fortranname.object == NULL );
    var_fortranname.object = tmp_assign_source_13;

    tmp_subscr_target_13 = par_rout.object;

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_13 = const_str_plain_name;
    tmp_assign_source_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    assert( var_name.object == NULL );
    var_name.object = tmp_assign_source_14;

    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_outmess );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 125154 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = const_str_digest_e9eef0d18279258ff57e7e5a2299e8f6;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_name.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_fortranname.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_3 );
    tmp_call_arg_element_12 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 288;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 288;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_copy );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copy );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 82769 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_copy );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = par_rout.object;

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 289;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    if (par_rout.object == NULL)
    {
        par_rout.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = par_rout.object;
        par_rout.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = par_rout.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_createsubrwrapper );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_createsubrwrapper );
    }

    if ( tmp_called_14 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 150707 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_14 = par_rout.object;

    frame_function->f_lineno = 290;
    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_14 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    branch_no_7:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_5 = par_rout.object;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124776 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_str_empty;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
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
    if ((var_fortranname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fortranname,
            var_fortranname.object
        );

    }
    if ((var_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_name,
            var_name.object
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
    if ((var_rname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rname,
            var_rname.object
        );

    }
    if ((var_fvar.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_fvar,
            var_fvar.object
        );

    }
    if ((var_flag.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flag,
            var_flag.object
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
    if ((par_rout.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rout,
            par_rout.object
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
static PyObject *fparse_function_4_assubr_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_rout = NULL;
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
                PyErr_Format( PyExc_TypeError, "assubr() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_rout == key )
            {
                assert( _python_par_rout == NULL );
                _python_par_rout = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rout, key ) == 1 )
            {
                assert( _python_par_rout == NULL );
                _python_par_rout = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "assubr() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rout != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_rout = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_rout == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_rout = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_rout == NULL ))
    {
        PyObject *values[] = { _python_par_rout };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_assubr_of_module_numpy$f2py$func2subr( self, _python_par_rout );

error_exit:;

    Py_XDECREF( _python_par_rout );

    return NULL;
}

static PyObject *dparse_function_4_assubr_of_module_numpy$f2py$func2subr( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_assubr_of_module_numpy$f2py$func2subr( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_assubr_of_module_numpy$f2py$func2subr( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr,
        dparse_function_1_add_of_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr,
        const_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c367da7ffbcf8d0c331d6ea84aeb3458,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr,
        dparse_function_1_add_of_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr,
        const_str_plain_add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9fa38ee103861870e0d6ed17fb7f5bc3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_var2fixfortran_of_module_numpy$f2py$func2subr,
        dparse_function_1_var2fixfortran_of_module_numpy$f2py$func2subr,
        const_str_plain_var2fixfortran,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_080d1fc37d017f4a8c73a6adae704852,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr,
        dparse_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr,
        const_str_plain_createfuncwrapper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6277c958170700ab6a93ddc8a5580fcb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr,
        dparse_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr,
        const_str_plain_createsubrwrapper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_08cf02557431e2ae56e493351001e4d2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_assubr_of_module_numpy$f2py$func2subr(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_assubr_of_module_numpy$f2py$func2subr,
        dparse_function_4_assubr_of_module_numpy$f2py$func2subr,
        const_str_plain_assubr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_05f5cdd4ba6acf04cf93889ff14091cd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$f2py$func2subr,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$f2py$func2subr =
{
    PyModuleDef_HEAD_INIT,
    "numpy.f2py.func2subr",   /* m_name */
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

MOD_INIT_DECL( numpy$f2py$func2subr )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$f2py$func2subr );
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

    // puts( "in initnumpy$f2py$func2subr" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$f2py$func2subr = Py_InitModule4(
        "numpy.f2py.func2subr",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$f2py$func2subr = PyModule_Create( &mdef_numpy$f2py$func2subr );
#endif

    moduledict_numpy$f2py$func2subr = (PyDictObject *)((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;

    assertObject( module_numpy$f2py$func2subr );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8dbfe1b24de60c5d0c63e343ad0a315d, module_numpy$f2py$func2subr );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$f2py$func2subr );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_star_imported_1;

    // Module code.
    tmp_assign_source_1 = const_str_digest_3ba53eccb7916c44f9d3bb25192bb809;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b424f57de6afade44f8a63100b1cbca9;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_7be5084538fb0a0f3cfb5da66c7d6f47, module_numpy$f2py$func2subr );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_1, tmp_import_globals_1, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_2, tmp_import_globals_2, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain___future__, tmp_import_globals_3, tmp_import_globals_3, const_tuple_b3c114ff65e5229953139969fd8f9f4c_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_951be7f7f2249b0644ef5f1e323e9ebd;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_e9698e9b4f74e5ebce31f575f272757e;
    UPDATE_STRING_DICT0( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_f2py_version, tmp_assign_source_7 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 22;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_pprint, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_pprint, tmp_assign_source_8 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 23;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_copy, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_9 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 24;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_10 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stderr );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_errmess, tmp_assign_source_11 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stdout );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_outmess, tmp_assign_source_12 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_pprint );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pprint );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 124010 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_pprint );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_show, tmp_assign_source_13 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$f2py$func2subr)->md_dict;
    frame_module->f_lineno = 29;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_auxfuncs, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$f2py$func2subr, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_function_1_var2fixfortran_of_module_numpy$f2py$func2subr( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_var2fixfortran, tmp_assign_source_14 );
    tmp_defaults_2 = const_tuple_int_0_tuple;
    tmp_assign_source_15 = MAKE_FUNCTION_function_2_createfuncwrapper_of_module_numpy$f2py$func2subr( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_createfuncwrapper, tmp_assign_source_15 );
    tmp_defaults_3 = const_tuple_int_0_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_function_3_createsubrwrapper_of_module_numpy$f2py$func2subr( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        frame_module->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_createsubrwrapper, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_function_4_assubr_of_module_numpy$f2py$func2subr(  );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_module->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$f2py$func2subr, (Nuitka_StringObject *)const_str_plain_assubr, tmp_assign_source_17 );

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

    return MOD_RETURN_VALUE( module_numpy$f2py$func2subr );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
